void VAR1::FUN1(
    VAR2::ThrottleCheckResult VAR3) {
  FUN2(VAR3.FUN3() != VAR2::VAR4);
  FUN2(VAR3.FUN3() != VAR2::VAR5);

  if (VAR6)
    VAR6.FUN4();
  
  if (VAR3.FUN3() == VAR2::VAR7 ||
      VAR3.FUN3() == VAR2::VAR8 ||
      VAR3.FUN3() == VAR2::VAR9 ||
      VAR3.FUN3() == VAR2::VAR10) {
#if FUN5()
    if (VAR3.FUN3() == VAR2::VAR9) {
      FUN2(VAR3.FUN6() == VAR11::VAR12 ||
             VAR3.FUN6() == VAR11::VAR13);
    }
    
    else if (VAR3.FUN3() == VAR2::VAR7) {
      FUN7(VAR3.FUN6(), VAR11::VAR14);
    }
#endif

    
    
    
    
    VAR15::FUN8(
        VAR15::VAR16, VAR17,
        VAR18::FUN9(&VAR1::VAR19,
                       VAR20.FUN10(), false,
                       VAR3.FUN6(), VAR18::VAR21, true,
                       VAR3.FUN11()));

    
    
    return;
  }

  
  
  
  FUN12(VAR22::VAR23, VAR24);
  VAR25* VAR26 =
      VAR24 == VAR22::VAR27
          ? VAR28->FUN13()->FUN14()
          : VAR28->FUN15();
  FUN2(VAR26);

  VAR29->FUN16(VAR26->FUN17());

  VAR30* VAR31 =
      VAR28->FUN18()->FUN19()->FUN20();
  VAR32* VAR33 = VAR30::FUN21(
      VAR31, VAR26->FUN22());
  FUN2(VAR33);

  
  
  bool VAR34 =
      (VAR28->FUN23().VAR35 &
       VAR36::VAR37::VAR38) != VAR36::VAR37::VAR38;
  VAR39.VAR40 = VAR34;
  if (VAR34) {
    VAR41* VAR42 =
        static_cast<VAR41*>(
            VAR33->FUN24());
    VAR29->FUN25(VAR42);
  }

  if (FUN26(VAR43.VAR44)) {
    if (VAR26->FUN27()
            ->FUN28()
            .VAR45) {
      VAR29->FUN29(
          static_cast<VAR46*>(VAR33->FUN30()));
    }
  }

  
  VAR39.VAR47.VAR48 = VAR18::VAR49::FUN31();

  GURL VAR50;
#if FUN32(VAR51)
  
  
  VAR52* VAR53 =
      VAR28->FUN18()->FUN19()->FUN33();
  if (VAR53)
    VAR50 = VAR53->FUN34();
#endif
  const VAR54& VAR55 =
       !VAR50.FUN35()
           ? VAR50
           : VAR28->FUN36()->FUN37()->FUN38();








   

  

  

  
























   const VAR54& VAR56 =

      VAR28->FUN39() ? VAR43.VAR44 : VAR55;








   bool VAR57 = !VAR28->FUN40()
                                   ? false
                                   : VAR28->FUN40()->FUN39();

  VAR58::VAR59<VAR60> VAR61;
  if (VAR29->FUN41())
    VAR61 = VAR29->FUN41()->FUN42();

  bool VAR62 =
      VAR29->FUN43()->FUN44().
          FUN45(VAR63);

  
  
  bool VAR64 = false;
  VAR65::FUN46(
      VAR28, VAR66.FUN47(), &VAR64);
  VAR65::FUN48(*this);

  VAR67 = VAR68::FUN49(
      VAR31->FUN50(), VAR33,
      VAR58::VAR69<VAR70>(
          VAR43, VAR66.FUN42(), VAR56,
          VAR28->FUN39(), VAR57,
          FUN51(VAR28->FUN40()),
          VAR28->FUN52(), VAR62,
          VAR64,
          VAR26->FUN53() ==
              VAR36::VAR71::VAR72::VAR73,
          VAR74 ? VAR74->FUN42()
                                   : nullptr),
      VAR58::move(VAR61),
      VAR29->FUN54(),
      VAR29->FUN55(), this);
}