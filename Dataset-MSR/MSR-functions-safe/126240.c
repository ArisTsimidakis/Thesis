bool VAR1::FUN1(WindowFeature VAR2,
                                        bool VAR3) const {
  
  
  bool VAR4 = false;
#if !FUN2(VAR5)
  VAR4 = VAR3 && VAR6 &&
      VAR6->FUN3();
#endif

  unsigned int VAR7 = VAR8 | VAR9;

  if (FUN4())
    VAR7 |= VAR10;

  if (!VAR4) {
    if (!FUN4())
      VAR7 |= VAR11;

    if (FUN4())
      VAR7 |= VAR12;

    if (FUN4())
      VAR7 |= VAR13;

    if (!FUN5())
      VAR7 |= VAR14;
  }
  return !!(VAR7 & VAR2);
}