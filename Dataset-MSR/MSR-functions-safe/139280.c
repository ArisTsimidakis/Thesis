void FUN1(VAR1::VAR2<VAR1::VAR3>* VAR4,
                       VAR1::VAR2<VAR1::VAR3>* VAR5) {
    VAR6 FUN2(FUN3()->FUN4(""));
    FUN5(FUN6(), VAR7);

    VAR1::string VAR8 = FUN7(
        "");
    FUN8(VAR8.FUN9());

    int VAR9;
    VAR1::string VAR10;
    VAR11<VAR12::VAR13> FUN10(
        VAR12::VAR14::FUN11(VAR8,
                                             VAR12::VAR15,
                                             &VAR9,
                                             &VAR10));

    FUN12(VAR16.FUN13() != NULL) << VAR10;
    FUN14(VAR16->FUN15(), VAR12::VAR13::VAR17);

    VAR12::VAR18* VAR19;
    FUN12(VAR16->FUN16(&VAR19));

    for (VAR12::VAR18::iterator VAR20 = VAR19->FUN17();
         VAR20 != VAR19->FUN18(); ++VAR20) {
      const VAR12::VAR21* VAR22;
      VAR1::string VAR23;
      VAR1::string VAR24;
      FUN12((*VAR20)->FUN19(&VAR22));
      FUN12(VAR22->FUN20("", &VAR23));
      FUN12(VAR22->FUN20("", &VAR24));
      FUN21(VAR24.FUN9());
      FUN22(VAR23 == "" || VAR23 == "");
      if (VAR23 == "") {
        VAR4->FUN23(VAR24);
      } else if (VAR23 == "") {
        VAR5->FUN23(VAR24);
      }
    }
    FUN21(VAR4->FUN9());
    FUN21(VAR5->FUN9());
  }