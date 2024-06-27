bool VAR1::FUN1() const {
  if (VAR2.FUN2())
    return true;

  int VAR3 = VAR4.FUN3();
  if (VAR3 == 204 || VAR3 == 205) {
    
    return false;
  }

  if (FUN4(
          VAR4.FUN5(VAR5::VAR6))) {
    
    
    
    return false;
  }

  if (!FUN6(VAR4.FUN7(), VAR7))
    return false;
  return true;
}