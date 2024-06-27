VAR1* VAR2::FUN1(
     const VAR3& VAR4,
    const VAR5* VAR6,
    int VAR7,
    const VAR8::VAR9& VAR10,
    VAR8::VAR11* VAR12,
    void* VAR13,
    VAR14::VAR15* VAR16,
    VAR17* VAR18,
    int VAR19) {
  if (!VAR6) {
    FUN2(VAR20) << "";
    FUN3(VAR16, VAR19, VAR4.VAR21);
     return NULL;
   }
 

  if (VAR12->FUN4(VAR4.VAR22) &&

      !VAR10.FUN5(VAR6->FUN6(), VAR7)) {

    FUN2(VAR20) << ""

               << VAR7




























                << "" << VAR4.VAR23.FUN7();
     FUN3(VAR16, VAR19, VAR4.VAR21);
     return NULL;
  }

  VAR1* VAR24 =
      VAR25::FUN8()->FUN9(VAR4.VAR22);
  VAR24->FUN10(&VAR4.VAR26);
  VAR24->FUN11(VAR4.VAR23);
  VAR24->FUN12(VAR4.VAR21);
  VAR24->FUN13(VAR4.VAR27);
  VAR24->FUN14(VAR4.VAR28);
  VAR24->FUN15(VAR6);
  VAR24->FUN16(VAR13);

  VAR29* VAR30 =
      VAR24->FUN17();
  if (VAR30) {
    VAR30->FUN18(VAR18);
  }

  return VAR24;
}