void VAR1::FUN1(
    VAR2* VAR3,
    VAR4* VAR5,
    VAR6::VAR7* VAR8) {
  VAR9 FUN2(this, VAR8);
  VAR10::string VAR11;
  VAR12* VAR13 = FUN3(
      VAR3, VAR5, &VAR11);
  if (!VAR13) {
    VAR14.FUN4(VAR11);
    return;
  }
  int VAR15;
  if (!VAR5->FUN5("", &VAR15)) {
    VAR14.FUN4("");
    return;
  }
  VAR16<VAR4> FUN6(new VAR4);
  VAR17* VAR18 =
      VAR13->FUN7();
  if (VAR15 >= (int)VAR18->FUN8()) {
    VAR14.FUN4(FUN9("", VAR15));
    return;
  }
  VAR10::VAR19<VAR12*> VAR20;
  VAR18->FUN10(&VAR20);
  VAR18->FUN11(VAR20[VAR15]);
  VAR14.FUN12(NULL);
}