(*
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Hh_prelude

let shallow_decl_enabled (ctx : Provider_context.t) : bool =
  TypecheckerOptions.shallow_class_decl (Provider_context.get_tcopt ctx)

let use_direct_decl_parser ctx =
  TypecheckerOptions.use_direct_decl_parser (Provider_context.get_tcopt ctx)

let class_decl_if_missing
    ~(sh : SharedMem.uses) (ctx : Provider_context.t) (c : Nast.class_) : unit =
  if shallow_decl_enabled ctx then
    let (_ : Shallow_decl_defs.shallow_class) =
      Shallow_classes_provider.decl ctx c
    in
    ()
  else
    let (_ : (_ * _) option) =
      Decl_folded_class.class_decl_if_missing ~sh ctx (snd c.Aast.c_name)
    in
    ()

let rec name_and_declare_types_program
    (acc : Direct_decl_parser.decls)
    ~(sh : SharedMem.uses)
    (ctx : Provider_context.t)
    (prog : Nast.program) : Direct_decl_parser.decls =
  let open Aast in
  List.fold prog ~init:acc ~f:(fun acc def ->
      match def with
      | Namespace (_, prog) -> name_and_declare_types_program acc ~sh ctx prog
      | NamespaceUse _ -> acc
      | SetNamespaceEnv _ -> acc
      | FileAttributes _ -> acc
      | Fun f ->
        let (name, decl) = Decl_nast.fun_naming_and_decl ctx f in
        Decl_heap.Funs.add name decl;
        (name, Shallow_decl_defs.Fun decl) :: acc
      | Class c ->
        class_decl_if_missing ~sh ctx c;
        let class_ = Shallow_classes_provider.decl ctx c in
        (snd class_.Shallow_decl_defs.sc_name, Shallow_decl_defs.Class class_)
        :: acc
      | RecordDef rd ->
        let (name, decl) = Decl_nast.record_def_naming_and_decl ctx rd in
        Decl_heap.RecordDefs.add name decl;
        (name, Shallow_decl_defs.Record decl) :: acc
      | Typedef typedef ->
        let (name, decl) = Decl_nast.typedef_naming_and_decl ctx typedef in
        Decl_heap.Typedefs.add name decl;
        (name, Shallow_decl_defs.Typedef decl) :: acc
      | Stmt _ -> acc
      | Constant cst ->
        let (name, decl) = Decl_nast.const_naming_and_decl ctx cst in
        Decl_heap.GConsts.add name decl;
        let decl = Typing_defs.{ cd_pos = fst cst.cst_name; cd_type = decl } in
        (name, Shallow_decl_defs.Const decl) :: acc)

let make_env
    ~(sh : SharedMem.uses) (ctx : Provider_context.t) (fn : Relative_path.t) :
    unit =
  if use_direct_decl_parser ctx then
    let (_
          : ((string * Shallow_decl_defs.decl) list * FileInfo.mode option)
            option) =
      Direct_decl_utils.direct_decl_parse_and_cache ctx fn
    in
    ()
  else
    let ast = Ast_provider.get_ast ctx fn in
    let (_ : Direct_decl_parser.decls) =
      name_and_declare_types_program [] ~sh ctx ast
    in
    ()
