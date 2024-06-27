void VAR1::FUN1(VAR2* VAR3) {
  
  if (VAR3 == VAR4)
    return;
  if (VAR4)
    VAR4->FUN2(this);
  VAR4 = VAR3;
  if (VAR4) {
    VAR4->FUN3(this);
    
    if (VAR5)
      VAR5->FUN4(FUN5());
  }
}