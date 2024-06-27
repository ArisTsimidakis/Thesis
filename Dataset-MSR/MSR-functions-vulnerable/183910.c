void VAR1::FUN1(VAR2* const VAR3) {
  VAR4 *VAR5 = NULL;
  if (!FUN2("", &VAR5)) {
    VAR3->FUN3(new FUN4(
        VAR6, ""));
    return;
  }

  VAR7 FUN5(VAR7::VAR8);
  VAR9* VAR10 = NULL;
  const char* VAR11 = "";
  if (VAR5->FUN6(VAR11,
                                                &VAR10)) {
    for (size_t VAR12 = 0; VAR12 < VAR10->FUN7(); ++VAR12) {
      VAR13::string VAR14;
      if (!VAR10->FUN8(VAR12, &VAR14)) {
        VAR3->FUN3(new FUN4(
            VAR6, ""));
        return;
      }
      size_t VAR15 = VAR14.FUN9("");
      if (VAR15 != VAR13::VAR16::VAR17) {
        VAR7::StringType VAR18;
        if (!VAR10->FUN8(VAR12, &VAR18)) {
          VAR3->FUN3(new FUN4(
              VAR6, ""));
          return;
        }
        VAR19.FUN10(
            VAR14.FUN11(0, VAR15),
            VAR18.FUN11(VAR15 + 1));
      } else {
        VAR19.FUN12(VAR14);
      }
    }
  } else if (VAR5->FUN13(VAR11)) {
    VAR3->FUN3(new FUN4(
         VAR6, ""));
     return;
   }




























 
   FilePath VAR20;
   VAR21::StringType VAR22;
  if (VAR5->FUN14("", &VAR22))
    VAR20 = FUN15(VAR22);

  
  VAR23* VAR24 = new FUN16();
  VAR25* VAR26 = VAR24->FUN17(VAR20, VAR19);
  if (VAR26) {
    VAR3->FUN3(VAR26);
    return;
  }

  bool VAR27 = false;
  VAR28* VAR29 = NULL;
  if (VAR5->FUN18(
          "", &VAR29)) {
    if (VAR29->FUN19(&VAR27)) {
      VAR24->FUN20(VAR27);
    }
  }
  bool VAR30 = false;
  if (VAR5->FUN21(
          "", &VAR30)) {
     VAR24->FUN22(VAR30);
   }
 

  FUN23(1) << "" << VAR24->FUN24();


   VAR13::ostringstream VAR31;
   VAR32* VAR33 = VAR32::FUN25();
   VAR31 << "" << VAR33->FUN26() << ""
         << VAR24->FUN24();
  VAR3->FUN27(VAR34);
  VAR3->FUN28(VAR28::FUN29(VAR31.FUN30()));
}