<?hh
<<file: __EnableUnstableFeatures('coeffects_provisional')>>

<<__RxShallow>>
function g(): int {
  return 1;
}

<<__Rx>>
function f(): void {
  // ERROR: lambda is rx, cannot call shallow
  $a = () ==> {
    g();
  };
}
