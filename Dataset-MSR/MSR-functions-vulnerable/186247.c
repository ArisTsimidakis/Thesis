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

    bool VAR15 =
        VAR3.FUN3() == VAR2::VAR10;

    
    
    
    
    VAR16::FUN8(
        VAR16::VAR17, VAR18,
        VAR19::FUN9(
            &VAR1::VAR20,
            VAR21.FUN10(),
            VAR22::FUN11(VAR3.FUN6()),
            true , VAR3.FUN12(),
            VAR15));

    
    
    return;
  }

  
  
  
  FUN13(VAR23::VAR24, VAR25);
  VAR26* VAR27 =
      VAR25 == VAR23::VAR28
          ? VAR29->FUN14()->FUN15()
          : VAR29->FUN16();
  FUN2(VAR27);

  VAR30->FUN17(VAR27->FUN18());

  VAR31* VAR32 =
      VAR29->FUN19()->FUN20()->FUN21();
  VAR33* VAR34 = VAR31::FUN22(
      VAR32, VAR27->FUN23());
  FUN2(VAR34);

  
  
  
  FUN2(!VAR35);

  
  
  bool VAR36 =
      (VAR29->FUN24().VAR37 &
       VAR38::VAR39::VAR40) != VAR38::VAR39::VAR40;
  VAR41.VAR42 = VAR36;
  if (VAR36) {
    VAR43* VAR44 =
        static_cast<VAR43*>(
            VAR34->FUN25());
    VAR30->FUN26(VAR44);
  }

  if (FUN27(VAR45.VAR46)) {
    if (VAR27->FUN28()
            ->FUN29()
            .VAR47) {
      VAR30->FUN30(
          static_cast<VAR48*>(VAR34->FUN31()));
    }
  }

  
  VAR41.VAR49.VAR50 = VAR19::VAR51::FUN32();

  GURL VAR52;
#if FUN33(VAR53)
  
  
  VAR54* VAR55 =
      VAR29->FUN19()->FUN20()->FUN34();
  if (VAR55)
    VAR52 = VAR55->FUN35();
#endif
  const VAR56& VAR57 =
      !VAR52.FUN36()
          ? VAR52
           : VAR29->FUN37()->FUN38()->FUN39();
 
   

  


   
   
   
  
  const VAR58* VAR59 = VAR29->FUN40();
  bool VAR60 = true;
  while (VAR59 && VAR60) {
    if (!VAR11::VAR61::FUN41(
            VAR57, VAR59->FUN39(),
            VAR11::VAR61::VAR62)) {
      VAR60 = false;
     }
     VAR59 = VAR59->FUN40();
   }


   const VAR56& VAR63 =

      VAR60


           ? (VAR29->FUN42() ? VAR45.VAR46
                                              : VAR57)

          : VAR56::FUN43();


   bool VAR64 = !VAR29->FUN40()
                                   ? false
                                   : VAR29->FUN40()->FUN42();

  VAR65::VAR66<VAR67> VAR68;
  if (VAR30->FUN44())
    VAR68 = VAR30->FUN44()->FUN45();

  bool VAR69 =
      VAR30->FUN46()->FUN47().
          FUN48(VAR70);

  
  
  bool VAR71 = false;
  VAR72::FUN49(
      VAR29, VAR73.FUN50(), &VAR71);
  VAR72::FUN51(*this);

  VAR35 = VAR74::FUN52(
      VAR32->FUN53(), VAR34,
      VAR65::VAR75<VAR76>(
          VAR45, VAR73.FUN45(), VAR63,
          VAR29->FUN42(), VAR64,
          FUN54(VAR29->FUN40()),
          VAR29->FUN55(), VAR69,
          VAR71,
          VAR27->FUN56() ==
              VAR38::VAR77::VAR78::VAR79,
          VAR80,
          VAR81 ? VAR81->FUN45()
                                   : nullptr,
          FUN57(),
          VAR29->FUN58()),
      VAR65::move(VAR68),
      VAR30->FUN59(),
      VAR30->FUN60(), this);
}