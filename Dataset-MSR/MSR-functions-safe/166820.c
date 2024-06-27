void FUN1() {
  VAR1* VAR2 = VAR1::FUN2();
  Container VAR3;
  VAR3.FUN3(VAR2);
  {
    VAR4 FUN4(VAR5::FUN5(), {VAR2});
    VAR6 FUN6(VAR7::move(VAR3));
  }
}