void VAR1::FUN1(
    int VAR2,
    const VAR3* VAR4,
    unsigned VAR5,
    bool VAR6,
    ScriptExecutionType VAR7,
    VAR8* VAR9) {
  FUN2(FUN3());
  FUN4(VAR2, 0);
  FUN5(VAR2, VAR10::VAR11);

  VAR12<VAR10> VAR13 =
      VAR10::FUN6(FUN7(FUN3()), VAR2);
  VAR14* VAR15 = VAR14::FUN8(
      FUN3(), VAR16::move(VAR13),
      FUN9(VAR4, VAR5), VAR6, VAR9);
  switch (VAR7) {
    case VAR17:
      VAR15->FUN10(VAR14::VAR18);
      break;
    case VAR19:
      VAR15->FUN10(VAR14::VAR20);
      break;
    case VAR21:
      VAR15->FUN11();
      break;
  }
}