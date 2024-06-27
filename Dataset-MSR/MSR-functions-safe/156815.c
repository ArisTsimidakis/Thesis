bool VAR1::FUN1() const {
  if (!FUN2() || !FUN3())
    return false;
  if (VAR2->FUN4())
    return true;
  if (VAR2->FUN5())
    return true;
  if (!VAR3.FUN6())
    return true;
  if (FUN7())
    return true;
  if (FUN8())
    return true;
  
  
  if (FUN9())
    return true;
  if (VAR4::FUN10(*this))
    return true;
  return false;
}