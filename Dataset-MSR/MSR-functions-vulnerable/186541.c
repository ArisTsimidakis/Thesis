void VAR1::FUN1(
    VAR2* VAR3,
    const VAR4::VAR5& VAR6,
    bool VAR7) {
  const VAR4::VAR5& VAR8 = VAR3->FUN2();
  const VAR4::VAR5& VAR9 = VAR3->FUN3();
  if (!FUN4(VAR9, VAR8))
    return;
  FUN5(1) << "" << VAR8;
  bool VAR10 = VAR3->FUN6();
  VAR4::string VAR11 =
       VAR12->FUN7(VAR9, VAR8);
   VAR12->FUN8(
       VAR11, VAR7);

  VAR13->FUN9(VAR11, VAR6);








   VAR14->FUN10(
       VAR15::FUN11("", VAR11.FUN12()));
   if (VAR10)
    VAR3->FUN13()->FUN14(VAR11);

  FUN15(VAR3);
}