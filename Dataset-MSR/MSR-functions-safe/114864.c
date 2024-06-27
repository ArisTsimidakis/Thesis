void VAR1::FUN1(
    VAR2* VAR3,
    VAR4* VAR5,
    VAR6::VAR7* VAR8) {
  int VAR9;
  if (!VAR5->FUN2("", &VAR9)) {
    FUN3(this, VAR8)
        .FUN4("");
    return;
  }
  VAR10* VAR11 = VAR12->FUN5();
  VAR13* VAR14 = VAR11->FUN6();
  const VAR13::VAR15& VAR16 = VAR14->FUN7();
  int VAR17 = static_cast<int>(VAR16.FUN8());
  if (VAR9 < 0 || VAR9 >= VAR17) {
    FUN3(this, VAR8)
        .FUN4(FUN9("", VAR9));
    return;
  }
  VAR18::VAR19<const VAR20*> VAR21;
  VAR11->FUN10(&VAR21);
  if (VAR21.FUN11()) {
    new FUN12(
        this, VAR8, VAR17 - 1);
  } else {
    new FUN13(this, VAR8);
  }
  VAR11->FUN14(VAR16[VAR9]->FUN15().FUN16());
}