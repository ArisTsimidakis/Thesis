bool VAR1::FUN1() const {
  VAR2& VAR3 = FUN2().FUN3();
  return VAR3.FUN4().FUN5() &&
         VAR3.FUN6().FUN7();
}