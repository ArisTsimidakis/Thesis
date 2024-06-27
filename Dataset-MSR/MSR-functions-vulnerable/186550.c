void VAR1::FUN1(
    const VAR2& VAR3,
    VAR4* VAR5,
    VAR4::CreateStatus VAR6) {
  if (VAR7)
    FUN2(VAR8->FUN3(), VAR9.FUN4());
  VAR10* VAR11 = NULL;
  if (VAR9) {
    VAR11 = VAR9->FUN5();
  }

  VAR12* VAR13 =
      VAR14::FUN6(VAR8);
  VAR13->FUN7("");

  
  VAR15::string VAR16 =
      VAR17::FUN6(VAR8)
          ->FUN8(VAR18, VAR19);

  VAR20::AccessPoint VAR21 =
      VAR22::FUN9(VAR23);
  VAR20::Reason VAR24 =
      VAR22::FUN10(VAR23);

  VAR25* VAR26 = VAR27::FUN6(VAR8);
  VAR15::string VAR28 =
      VAR26->FUN11().VAR29;
  if (VAR30::FUN12(VAR19, VAR28) &&
      (VAR24 == VAR20::VAR31::VAR32 ||
       VAR24 == VAR20::VAR31::VAR33) &&
      !VAR34.FUN13() && VAR35::FUN14(VAR8)) {
    VAR36::FUN15(VAR8, VAR34);
  }

#if FUN16(VAR37)
  if (!VAR34.FUN13()) {
    VAR38<VAR39::VAR40> VAR41 =
        VAR42::FUN6(VAR8,
                                            VAR43::VAR44);
    if (VAR41 && !VAR28.FUN13()) {
      VAR41->FUN17(
          VAR28, VAR45::FUN18(VAR34),
          VAR39::VAR46::VAR47::
              VAR48);
    }
  }
#endif

   if (VAR24 == VAR20::VAR31::VAR32 ||
       VAR24 == VAR20::VAR31::VAR33 ||
       VAR24 == VAR20::VAR31::VAR49) {

    VAR50::FUN6(VAR8)->

        FUN19(VAR16, VAR3.VAR51);








 
     if (VAR22::FUN20(VAR23)) {
       
      
      bool VAR52 = FUN21(
          VAR23,
          VAR53::FUN22(VAR8));
      VAR45::VAR54::FUN23()->FUN24(
          VAR55, VAR45::FUN25(&VAR56::VAR57, VAR9,
                                    VAR52));
    }

    if (VAR24 == VAR20::VAR31::VAR32 ||
        VAR24 == VAR20::VAR31::VAR33) {
      VAR26->FUN26();
    }
    FUN27(VAR24);
  } else {
    VAR58::VAR59* VAR60 =
        VAR61::FUN6(VAR8);
    VAR62* VAR63 =
        VAR64::FUN6(VAR8);

    VAR65::StartSyncMode VAR66 =
        VAR65::VAR67;
    if (VAR21 == VAR20::VAR68::VAR69 ||
        VAR70) {
      bool VAR71 =
          VAR63->FUN28() && VAR60 &&
          VAR60->FUN29();
      if (!VAR71)
        VAR66 = VAR65::VAR72;
    }

    VAR65::ConfirmationRequired VAR73 =
        VAR74 ?
            VAR65::VAR75 :
            VAR65::VAR76;

    bool VAR77 = !FUN30(
        VAR3.VAR51, VAR73, VAR66);
    if (VAR77) {
      FUN31(VAR11, VAR23, VAR3.VAR51,
                        VAR65::VAR78, VAR66,
                        VAR73);
      VAR45::VAR54::FUN23()->FUN32(VAR55, this);
    }
  }
}