int FUN1(const VAR1::VAR2& VAR3) {
  bool VAR4 =
      VAR5::FUN2()->FUN3(VAR6::VAR7);
  VAR8::ScopedTempDir VAR9;

  if (VAR4) {
    FUN4(VAR9.FUN5());
    FUN4(!VAR9.FUN6().FUN7().FUN8());
    VAR5::FUN2()->FUN9(
        VAR6::VAR10,
        VAR9.FUN6().FUN7());
  }

  VAR11<VAR1::VAR12> FUN10(
      VAR1::VAR12::FUN11());

  int VAR13 = VAR14->FUN12(VAR3);

  if (VAR13 >= 0)
    return VAR13;

  if (VAR5::FUN2()->FUN3(
        VAR6::VAR15)) {
    VAR16::FUN13()->FUN14(VAR17, VAR16::FUN15());
    VAR14->FUN16();
    VAR14->FUN17();
    return 0;
  }

  if (VAR4) {
    VAR1::WebKitTestController VAR18;
    VAR19::string VAR20;
    VAR5::StringVector VAR21 =
        VAR5::FUN2()->FUN18();
    size_t VAR22 = 0;
    bool VAR23 = false;

#if FUN19(VAR24)
    VAR19::VAR25 << "";
     VAR19::VAR25.FUN20();
 #endif
 














     while (FUN21(VAR21, &VAR22, &VAR20)) {
       if (VAR20.FUN8())
         continue;
      if (VAR20 == "")
        break;

      bool VAR26;
      VAR19::string VAR27;
      FilePath VAR28;
      GURL VAR29 = FUN22(
          VAR20, &VAR28, &VAR26, &VAR27);
      if (!VAR1::VAR30::FUN23()->FUN24(
              VAR29, VAR28, VAR26, VAR27)) {
        break;
      }

       VAR23 = true;
       VAR14->FUN16();
 












       if (!VAR1::VAR30::FUN23()->FUN25())
         break;
     }
    if (!VAR23) {
      VAR16::FUN13()->FUN14(VAR17, VAR16::FUN15());
      VAR14->FUN16();
    }
    VAR13 = 0;
  } else {
    VAR13 = VAR14->FUN16();
  }

  VAR14->FUN17();

  return VAR13;
}