bool VAR1::FUN1() {
  if (!VAR2 || FUN2())
    return false;

  FUN3("",
                            VAR3, VAR4);

  const VAR5& VAR6 = VAR2->VAR7;
  const VAR8::VAR9<int>& VAR10 = VAR2->VAR10;

  if (!VAR11.FUN1(
          VAR8::move(VAR12), VAR10, VAR6.VAR13)) {
    return false;
  }

  PageSizeMargins VAR14;
  double VAR15 =
      VAR6.VAR15 >= VAR16 ? VAR6.VAR15 : 1.0f;

  FUN4(VAR11.FUN5(), 0,
                                  VAR6, VAR17,
                                  &VAR15, &VAR14);
  bool VAR18 =
      FUN6(VAR11.FUN5(),
                                    VAR11.FUN7());
  int VAR19 = FUN8(&VAR6);

  VAR20::VAR21 FUN9(
      FUN10(VAR6.VAR22.FUN11(), VAR19, VAR23),
      FUN10(VAR6.VAR22.FUN12(), VAR19, VAR23),
      FUN10(VAR6.VAR22.FUN13(), VAR19, VAR23),
      FUN10(VAR6.VAR22.FUN14(), VAR19, VAR23));

  double VAR24 = 1.0f;
  if (!VAR11.FUN15()) {
    VAR25::VAR26* VAR27 = VAR11.FUN16();
    const VAR25::VAR28& VAR29 = VAR11.FUN17();
    VAR25::WebPrintPresetOptions VAR30;
    if (VAR27->FUN18(VAR29,
                                                     &VAR30)) {
      if (VAR30.VAR31) {
        
        bool VAR32 = VAR33.FUN13() >
                                           VAR33.FUN14();
        bool VAR34 = VAR30.VAR35.VAR36 >
                                   VAR30.VAR35.VAR37;
        bool VAR38 = VAR32 != VAR34;
        
        double VAR39 = VAR38 ? VAR33.FUN14()
                                        : VAR33.FUN13();
        double VAR40 = VAR38 ? VAR33.FUN13()
                                         : VAR33.FUN14();
        double VAR41 =
            VAR39 /
            static_cast<double>(VAR30.VAR35.VAR36);
        double VAR42 =
            VAR40 /
            static_cast<double>(VAR30.VAR35.VAR37);
        VAR24 = VAR8::FUN19(VAR41, VAR42);
      } else {
        VAR24 = 0.0f;
      }
    }
  }
  int VAR43 = static_cast<int>(100.0f * VAR24);
  
  FUN20(new FUN21(
      FUN22(), VAR14, VAR33,
      VAR18));

  PrintHostMsg_DidGetPreviewPageCount_Params VAR7;
  VAR7.VAR44 = VAR11.FUN7();
  VAR7.VAR43 = VAR43;
  VAR7.VAR45 = VAR6.VAR45;
  VAR7.VAR46 = VAR11.FUN23() ||
                              !VAR11.FUN15();
  FUN20(new FUN24(FUN22(), VAR7));
  if (FUN2())
    return false;

  while (!VAR11.FUN25()) {
    int VAR47 = VAR11.FUN26();
    FUN27(VAR47, 0);
    if (!FUN28(VAR47, VAR6))
      return false;

    if (FUN2())
      return false;

    
    
    
    
    
    
    
    if (VAR11.FUN25())
      VAR11.FUN29();

    if (VAR11.FUN30()) {
      FUN31(VAR11.FUN15() ||
             VAR11.FUN25());
      if (!FUN32())
        return false;
    }
  }
  VAR11.FUN33();
  return true;
}