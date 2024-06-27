bool VAR1::FUN1(VAR2* VAR3) {
  VAR4* VAR5 = NULL;
  if (!VAR6->FUN2(VAR7::VAR8, &VAR5))
    return true;

  VAR9::string VAR10;
  if (!VAR5->FUN3(&VAR10)) {
    *VAR3 = FUN4(VAR11::VAR12);
    return false;
  }

  if (VAR10 == VAR13::VAR14) {
    VAR15 = VAR16::VAR17;
  } else if (VAR10 == VAR13::VAR18) {
    VAR15 = VAR16::VAR19;
  } else {
    *VAR3 = FUN4(VAR11::VAR12);
    return false;
  }

  bool VAR20 =
      VAR15 == VAR16::VAR17 ||
      VAR15 == VAR16::VAR21;

  
  if (!FUN5(VAR6.FUN6(),
                           VAR7::VAR22,
                           &VAR23,
                           VAR20,
                           VAR3)) {
      return false;
  }

  
  if (!FUN5(VAR6.FUN6(),
                           VAR7::VAR24,
                           &VAR25,
                           VAR20,
                           VAR3)) {
      return false;
  }

  return true;
}