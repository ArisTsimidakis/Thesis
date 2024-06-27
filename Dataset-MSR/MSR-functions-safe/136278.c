void VAR1::FUN1(const VAR2& VAR3,
                               const VAR4& VAR5) {
  if (VAR6.FUN2())
    return;

  const PaintPhase VAR7 = VAR3.VAR8;

  if (FUN3(VAR7)) {
    if (VAR6.FUN4()->FUN5() == VAR9::VAR10 &&
        VAR6.FUN6())
      VAR6.FUN7(VAR3, VAR5);
    
    
    
    if (VAR11::FUN8())
      FUN9(VAR3);
    
    if (VAR7 == VAR12::VAR13)
      return;
  }

  if (VAR7 == VAR12::VAR14 &&
      VAR6.FUN4()->FUN5() == VAR9::VAR10) {
    VAR6.FUN10(VAR3, VAR5);
    return;
  }

  if (VAR7 == VAR12::VAR15 &&
      VAR6.FUN4()->FUN5() == VAR9::VAR10) {
    
    FUN11(!VAR11::FUN12());
    FUN13(VAR6).FUN14(VAR3, VAR5);
    return;
  }

  if (VAR7 == VAR12::VAR16 && VAR3.FUN15())
    FUN16(VAR6)
        .FUN17(VAR3, VAR5);

  if (VAR7 != VAR12::VAR17) {
    VAR18::VAR19<VAR20> VAR21;
    VAR18::VAR19<VAR22> VAR23;
    VAR18::VAR19<VAR2> VAR24;
    if (VAR11::FUN12()) {
      if (const auto* VAR25 = VAR3.FUN18(VAR6)) {
        const auto* VAR26 = VAR25->FUN19();
        auto* VAR27 = VAR26
                                       ? VAR26->FUN20()
                                       : nullptr;
        if (VAR27) {
          VAR21.FUN21(
              VAR3.VAR28.FUN22(), VAR27,
              VAR6, VAR29::FUN23(VAR7));
          VAR24.FUN21(VAR3);
          if (VAR11::FUN8()) {
            VAR24->FUN24(
                FUN25(VAR6.FUN26(VAR5)),
                VAR27->FUN27().FUN28());
          } else {
            VAR24->FUN29(
                VAR27->FUN27().FUN28());
          }
        }
      }
    } else if (VAR6.FUN30()) {
      IntSize VAR30 = VAR6.FUN31();
      if (VAR6.FUN32()->FUN33() || !VAR30.FUN34()) {
        VAR23.FUN21(VAR3.VAR28, VAR6, VAR7,
                                VAR30);
        VAR24.FUN21(VAR3);
        AffineTransform VAR31;
        VAR31.FUN35(-VAR30.FUN36(), -VAR30.FUN37());
        VAR24->FUN29(VAR31);
      }
    }

    const VAR2& VAR32 =
        VAR24 ? *VAR24 : VAR3;

    if (VAR6.FUN38()) {
      VAR33 FUN39(FUN40(VAR6));
      VAR34.FUN41(VAR32, VAR5);
      if (VAR7 == VAR12::VAR35 ||
          VAR7 == VAR12::VAR36 ||
          VAR7 == VAR12::VAR37)
        VAR34.FUN42(VAR32, VAR5);
    } else {
      FUN41(VAR32, VAR5);
    }
  }

  if (FUN43(VAR7))
    FUN16(VAR6).FUN44(VAR3, VAR5);

  
  
  if (VAR7 == VAR12::VAR16 &&
      VAR6.FUN45())
    FUN46(VAR3, VAR5);
}