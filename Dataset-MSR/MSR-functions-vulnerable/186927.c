void VAR1::FUN1(
    VAR2* VAR3,
    int32_t VAR4,
    int32_t VAR5,
    int32_t VAR6,
    const VAR7::VAR8& VAR9,
    VAR10* VAR11) {
  
  FUN2((VAR4 == VAR12),
            (VAR5 == VAR12));
  FUN2((VAR4 == VAR12),
            (VAR6 == VAR12));
  FUN3(VAR3);

  int VAR13 = VAR3->FUN4()->FUN5();
  VAR14* VAR15 = VAR3->FUN6();

  
  
  FUN3(!VAR16::FUN7(VAR13, VAR5));

  
  
  
  
  bool VAR17 = VAR18::FUN8(this);

  
  
  
  FUN3(!VAR9.VAR19 || VAR4 == VAR12);

  VAR20<VAR14> VAR21 =
      VAR9.VAR19 && !VAR17
          ? VAR14::FUN9(FUN10(), VAR9.VAR22)
          : VAR15;

  
  
  
  const VAR23::VAR24& VAR25 =
      FUN11()->FUN12()->
          FUN13(FUN10(),
                                       VAR21->FUN14());
  VAR26* VAR27 = VAR28::FUN15(
      FUN10(), VAR21.FUN16());
  VAR29* VAR30 =
      static_cast<VAR29*>(VAR27->FUN17());
  VAR31* VAR32 =
      static_cast<VAR31*>(VAR11);
  FUN18(VAR32->FUN19(VAR30));

  if (VAR33 &&
      !VAR33->FUN20(
          this, VAR3, VAR15, VAR4,
          VAR5, VAR6,
          VAR9.VAR34, VAR3->FUN21(),
          VAR9.VAR35, VAR9.VAR22, VAR25,
          VAR11)) {
    
    
    
    
    
    VAR16* VAR36 =
        VAR16::FUN7(VAR13, VAR5);
    if (VAR36) {
      FUN3(VAR36->FUN22());
      VAR36->FUN23();
    }
    return;
  }

  
  
  VAR37 FUN24(FUN10(), VAR21.FUN16());
  VAR38.VAR39 = VAR4;
  VAR38.VAR40 = VAR5;
  VAR38.VAR41 = VAR6;
  VAR38.VAR42 = VAR9.VAR35;
  VAR38.VAR43 = VAR13;
  VAR38.VAR44 = VAR3->FUN25();
  VAR38.VAR19 = VAR9.VAR19;
  if (VAR9.VAR45 == VAR46::VAR47)
    VAR38.VAR48 = true;
  VAR38.VAR49 =
      VAR5 != VAR12;

  VAR1* VAR50 = NULL;
  if (!VAR17) {
    VAR38.VAR51 = VAR52->FUN26();
    VAR38.VAR53 = FUN27().FUN28();
    VAR50 = static_cast<VAR1*>(
        VAR54::FUN29(VAR38));
  }  else {
    VAR50 = FUN30()->FUN31(VAR38);
  }
  VAR50->FUN32().FUN33(
      VAR25,
      VAR11);

  
  
  
  
  if (!VAR9.VAR35.FUN34())
    VAR50->FUN35()->FUN36();

  
  
  if (!VAR9.VAR19) {
    if (!VAR17) {
      VAR55* VAR56 = VAR50->VAR52.FUN16();

      
      
      VAR56->FUN37(
          VAR50->FUN38()->FUN39(), false);
    }
    
    
    FUN40(VAR12, VAR6);
    VAR57[VAR23::FUN41(
        VAR13, VAR6)] = VAR50;
    FUN42(VAR50);
  }

  if (VAR33) {
    VAR33->FUN43(this, VAR13,
                                  VAR3->FUN25(), VAR9.VAR35,
                                  VAR9.VAR22, VAR50);
  }

  if (VAR3) {
    for (auto& VAR58 : VAR59) {
      VAR58.FUN44(VAR50, VAR3, VAR9.VAR22,
                                   VAR9.VAR60, VAR9.VAR45,
                                   VAR61::VAR62,
                                   false,  
                                   true);  
     }
   }
 










   if (VAR9.VAR19) {
     
     
    bool VAR63 = false;
    if (VAR33) {
      VAR64::Rect VAR65;
      VAR66::VAR67<VAR1> VAR68 =
          VAR50->VAR69.FUN45();

      VAR33->FUN46(
          this, VAR50, VAR9.VAR45, VAR65,
          VAR9.VAR70, &VAR63);

      if (!VAR68)
        return;  
    }
    if (!VAR63) {
      VAR71 FUN47(VAR9.VAR22, VAR9.VAR60,
                                VAR46::VAR72,
                                VAR61::VAR62,
                                true );
      VAR73.VAR70 = VAR9.VAR70;

      if (VAR33 && !VAR17 &&
          !VAR33->FUN48()) {
        
        VAR50->VAR74.FUN49(
            new FUN50(VAR73));
      } else {
        VAR50->FUN51(VAR73);
      }
    }
  }
}