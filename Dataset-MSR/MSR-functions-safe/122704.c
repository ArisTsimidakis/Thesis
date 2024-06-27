bool VAR1::FUN1(const VAR2* VAR3,
                               VAR4* VAR5) {
  const VAR2* VAR6 = NULL;
  if (!VAR3->FUN2(VAR7::VAR8, &VAR6))
    return true;

  
  for (VAR2::VAR9 FUN3(*VAR6); !VAR10.FUN4();
       VAR10.FUN5()) {
    const VAR11* VAR12 = NULL;
    double VAR13 = 0.0;
    if (!VAR10.FUN6().FUN7(&VAR12) ||
        VAR12->FUN8() != 3 ||
        !VAR12->FUN9(0, &VAR13) ||
        !VAR12->FUN9(1, &VAR13) ||
        !VAR12->FUN9(2, &VAR13)) {
      *VAR5 = FUN10(VAR14::VAR15);
      return false;
    }
  }
  VAR16.FUN11(VAR6->FUN12());
  return true;
}