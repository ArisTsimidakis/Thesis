static const VAR1 FUN1(VAR2* VAR3) {
  FUN2(VAR3);

  if (VAR3->FUN3() &&
      !VAR3->FUN4().FUN5(
          VAR3->FUN6())) {
    StringBuilder VAR4;
    VAR4.FUN7("");
    FUN8(VAR3->FUN6(), VAR4);
    return VAR4.FUN9();
  }

  if (FUN10(VAR3)) {
    StringBuilder VAR4;
    FUN8(VAR3->FUN11().FUN12(), VAR4);
    return VAR4.FUN9();
  }

  if (VAR3->FUN13()) {
    AtomicString VAR5 = FUN14(VAR3);
    if (!VAR5.FUN15()) {
      return FUN16("") + VAR5;
    }
  }

  return "" +
         VAR1::FUN17(VAR6::FUN18(*VAR3)) + "";
}