void VAR1::FUN1(
    unsigned long VAR2,
    VAR3* VAR4,
    const VAR5& VAR6,
    VAR7* VAR8) {
  String VAR9 = VAR10::FUN2(VAR2);
  bool VAR11 = VAR6.FUN3() == 304;

  bool VAR12 = true;
  VAR13::VAR14<VAR15::VAR16::VAR17> VAR18 =
      FUN4(VAR6, VAR8,
                                      &VAR12);
 
   VAR19::ResourceType VAR20 =

      VAR8 ? VAR19::FUN5(*VAR8)

                      : VAR19::VAR21;






   
   VAR19::ResourceType VAR22 =
       VAR23->FUN6(VAR9);
  if (VAR22 == VAR19::VAR24 ||
      VAR22 == VAR19::VAR25 ||
      VAR22 == VAR19::VAR26 ||
      VAR22 == VAR19::VAR27 ||
      VAR22 == VAR19::VAR28) {
    VAR20 = VAR22;
  }
  if (VAR20 == VAR19::VAR26 && VAR4 &&
      VAR4->FUN7().FUN8())
    return;

  
  
  
  
  if (VAR8)
    VAR23->FUN9(VAR9, VAR8);
  String VAR29 = VAR4 && VAR4->FUN10()
                        ? VAR10::FUN11(VAR4->FUN10())
                        : "";
  String VAR30 = VAR4 ? VAR10::FUN12(VAR4) : "";
  VAR23->FUN13(VAR9, VAR29, VAR6);
  VAR23->FUN14(VAR9, VAR20);

  if (VAR6.FUN15() != VAR5::VAR31 &&
      VAR6.FUN15() !=
          VAR5::VAR32) {
    const VAR5::VAR33* VAR34 =
        VAR6.FUN16();
    VAR23->FUN17(VAR9,
                                    VAR34->VAR35);
  }

  if (VAR18 && !VAR12) {
    VAR36<VAR37> VAR38;
    if (!VAR29.FUN18())
      VAR38 = VAR29;
    FUN19()->FUN20(
        VAR9, VAR30, FUN21(),
        VAR19::FUN22(VAR20),
        VAR13::move(VAR18), VAR13::move(VAR38));
  }
  
  
  
  if (VAR11 && VAR8 && VAR8->FUN23())
    FUN24(VAR2, VAR4, 0, VAR8->FUN23());
}