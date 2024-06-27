VAR1::VAR2<VAR3> VAR3::FUN1(
    VAR4* VAR5,
    bool VAR6,
    const VAR7::VAR8& VAR9,
    const VAR1::VAR10& VAR11) {
  
  
  FUN2(VAR12::FUN3(VAR12::VAR13) ||
         !VAR12::FUN4(VAR12::VAR13));

  VAR7::FilePath VAR14 =
      VAR5->FUN5().FUN6(VAR9);

  VAR1::VAR2<VAR3> VAR15 =
      VAR7::FUN7(new FUN8(
          VAR5, VAR14, VAR5->FUN9()));

  VAR15->VAR16 = VAR6;
  VAR15->VAR17 = VAR9;

  
  
  
  
  VAR15->VAR18 = new VAR19::FUN10(
      VAR6, VAR14,
      VAR7::FUN11({VAR12::VAR20}).FUN12(),
      VAR5->FUN9(),
      VAR7::FUN13(&VAR3::VAR21,
                          VAR15->VAR22.FUN14()));
  VAR23<VAR19::VAR24> VAR25 =
      VAR15->VAR18->FUN15();

  
  
  VAR15->VAR26 = FUN16(
      VAR5, VAR14, VAR6, VAR25.FUN12());

  VAR15->VAR27 = VAR7::VAR28<VAR19::VAR29>(
       VAR14, VAR6, VAR5->FUN9(),
       VAR25.FUN12());
 

  VAR15->VAR30 = new FUN17(


       VAR4::FUN18(VAR5),
       VAR6 ? VAR7::FUN19() : VAR5->FUN5(),
       VAR9, VAR5->FUN9());

  VAR15->VAR31 = new FUN20();

  VAR7::FilePath VAR32 = VAR6 ? VAR7::FUN19() : VAR14;
  VAR15->VAR33 = new FUN21(
      VAR32, VAR5->FUN9(), VAR25,
      VAR34::FUN22());

  VAR15->VAR35 = new FUN23(VAR5);
  VAR15->VAR35->FUN24(VAR32, VAR25);

  VAR15->VAR36 = new FUN25(VAR5);
  VAR15->VAR36->FUN26(VAR15.FUN12());

  VAR15->VAR37 =
      VAR7::VAR28<VAR38>(VAR25.FUN12());

  VAR15->VAR39 = VAR1::VAR40<VAR41>(
      VAR15.FUN12(), VAR15->VAR36,
      VAR15->VAR37);

  VAR15->VAR42 =
      new FUN27(VAR5, VAR15->VAR36);

#if !FUN28(VAR43)
  VAR15->VAR44 = new FUN29(
      VAR5->FUN30(VAR14));
#endif  

  VAR15->VAR45 =
      new FUN31(VAR32, VAR5,
                                          VAR15->VAR36);
  VAR15->VAR45->FUN32();

  VAR15->VAR46 =
      VAR7::VAR28<VAR47>(
          VAR5, VAR15->VAR36,
          VAR15->VAR35, VAR25);

  VAR15->VAR48 =
      VAR7::VAR28<VAR49>();
  VAR15->VAR48->FUN24(VAR15->VAR36);

  VAR15->VAR50 = new FUN33();
  VAR15->VAR50->FUN24(VAR15->VAR36);

  VAR15->VAR51 = new FUN34();

  VAR15->VAR52 = new FUN35();

  VAR23<VAR53> VAR54 =
      VAR53::FUN36(VAR5);

  VAR15->VAR55 = new FUN37();
  VAR15->VAR55->FUN32(VAR15.FUN12());

  VAR15->VAR36->FUN24(
      VAR32, VAR25.FUN12(), VAR5->FUN9(),
      VAR54.FUN12(), VAR15->VAR55.FUN12());

  VAR15->VAR56 =
      VAR57::FUN1(VAR54, VAR15->VAR26);

  VAR15->VAR37->FUN38(
      VAR15->VAR55.FUN12());

  VAR15->VAR58 =
      VAR7::VAR28<VAR59>();

  VAR15->VAR60 = VAR7::VAR28<VAR61>();
  
  
  
  
  VAR15->VAR60->FUN32(
      VAR15->VAR36, VAR7::FUN39());

  if (VAR7::VAR62::FUN40(VAR63::VAR64::VAR65)) {
    GeneratedCodeCacheSettings VAR66 =
        FUN41()->FUN42()->FUN43(VAR5);

    
    
    
    if (!VAR6 && VAR66.FUN44()) {
      VAR15->VAR67 =
          VAR7::VAR28<VAR68>();

      VAR7::FilePath VAR69;
      if (VAR11.FUN45()) {
        VAR69 = VAR66.FUN46().FUN47("");
      } else {
        
        VAR69 = VAR66.FUN46()
                              .FUN6(VAR9)
                              .FUN47("");
      }
      FUN48(VAR66.FUN49(), 0);
      VAR15->FUN50()->FUN32(
          VAR69, VAR66.FUN49());
    }
  }

  return VAR15;
}