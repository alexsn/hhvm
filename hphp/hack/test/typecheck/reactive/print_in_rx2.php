<?hh // strict
<<file: __EnableUnstableFeatures('coeffects_provisional')>>

<<__Rx>>
function f()[rx]: void {
  // should be error
  echo 1;
}
