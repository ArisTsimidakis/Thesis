WebString VAR1::FUN1() const {
  VAR2* VAR3 =
      FUN2()->FUN3();
  if (VAR3)
    return VAR3->FUN4()->FUN1();

  
  
  
  FUN2()->FUN5()->FUN6();

  return FUN2()->FUN7().FUN8();
}