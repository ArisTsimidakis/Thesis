bool VAR1::FUN1(
    VAR2* VAR3,
    int VAR4,
    int VAR5,
    const VAR6::VAR7& VAR8,
    const VAR9& VAR10) {
  FUN2("",
               "");

  if (VAR5 == VAR11)
    FUN3(VAR3);

  if (!static_cast<VAR12*>(VAR3)
           ->FUN4(VAR4, VAR5,
                              VAR8, VAR10,
                              VAR13)) {
    return false;
  }

  if (VAR5 == VAR11 && VAR14.FUN5())
    FUN6();

  FUN7(VAR3,
                                   VAR15.FUN8(),
                                   VAR15.FUN9());

#if FUN10(VAR16) && !FUN10(VAR17) && !FUN10(VAR18)
  
  
  VAR19* VAR20 = VAR3->FUN11()->FUN12();
  if (VAR20) {
    if (VAR21* VAR22 = VAR20->FUN13())
      VAR22->FUN14();
  }
#endif

  return true;
}