<?hh // strict
<<file: __EnableUnstableFeatures('coeffects_provisional')>>

interface Rx1 {}

interface I {
  <<__Rx, __OnlyRxIfImpl(Rx1::class)>>
  public function condlocal(): int;
}

abstract class A {
  <<__Rx>>
  public function rx(I $i): int {
    // ERROR, calling conditionally reactive method when condition
    // does not match
    return $i->condlocal();
  }
}
