bool VAR1::FUN1(VAR2* VAR3) {
  
  if (VAR3->FUN2(VAR4)) {
    return FUN3(VAR3);
  }
  
  if (VAR3->FUN2(VAR5)) {
    return FUN4(VAR3, true);
  }
  
  if (VAR3->FUN2(VAR6)) {
    return FUN4(VAR3, false);
  }
  
  
  if (VAR3->FUN2(VAR7)) {
    return FUN4(VAR3, false);
  }
  
  if (VAR3->FUN2(VAR8)) {
    return FUN5(VAR3);
  }
  
  return false;
}