void FUN1(OobeScreen VAR1) {
  if (VAR2::FUN2())
    return;

  FUN3(1) << "" << FUN4(VAR1);

  VAR3::VAR4* VAR5 =
      VAR3::VAR4::FUN5();

  
  
  if (VAR6 && VAR6->FUN6()) {
    VAR5->FUN7()->FUN8();

    VAR7* VAR8 = VAR6->FUN6();
    
    
    system::VAR9::FUN5()->FUN9(
        VAR8->FUN10(VAR8::VAR10));
    
    
    
    system::VAR9::FUN5()->FUN11(
        VAR8->FUN10(VAR11::VAR8::VAR12));
  }
  system::VAR9::FUN5()->FUN12(
      VAR13::VAR14::FUN13()->FUN14(
          VAR15::VAR16));

  auto VAR17 = VAR18::VAR19::VAR20;
  if (FUN15() || VAR1 == VAR21::VAR22)
    VAR17 = VAR18::VAR19::VAR23;
  VAR18::VAR24::FUN5()->FUN16(VAR17);

  bool VAR25 =
      (VAR1 == VAR21::VAR26);
  if (VAR25) {
    const VAR27::VAR28& VAR29 =
        VAR30::FUN5()->FUN17();
    const bool VAR31 = false;
    const bool VAR32 = true;
    
    auto* VAR33 = new FUN18();
    VAR33->FUN19(VAR29, VAR31,
                                 VAR32);
    return;
  }

  
  const VAR34::EnrollmentConfig VAR35 =
      VAR6->FUN20()
          ->FUN21()
          ->FUN22();
  if (VAR35.FUN23() &&
      VAR1 == VAR21::VAR36) {
    
    auto* VAR33 = new FUN18();
    
    
    
    VAR33->FUN24(VAR21::VAR37);
    return;
  }

  if (VAR38::FUN25()) {
    FUN26(
        VAR13::VAR39::FUN27(VAR40),
        VAR41::FUN28()
            ->FUN29());

    VAR6->FUN20()
        ->FUN30()
        ->FUN31();
  }

  VAR7* VAR8 = VAR6->FUN6();
  VAR27::string VAR42 = VAR8->FUN32(VAR8::VAR43);
  VAR44::FUN33(&VAR42);
  FUN3(1) << "" << VAR42;

  if (FUN34(VAR1)) {
    VAR27::string VAR45 = FUN35();
    if (VAR45 == VAR42)
      VAR45.FUN36();

    VAR27::VAR46<VAR47> VAR48 =
        VAR27::VAR49<VAR47>(
            VAR1, nullptr);
    FUN37(VAR45, VAR27::move(VAR48));
    return;
  }

  
  const VAR50* VAR51 =
      VAR50::FUN28();

  
  
  
  
  const VAR27::VAR28& VAR52 = VAR51->FUN38();

  const VAR27::VAR28& VAR53 = VAR51->FUN39();
  FUN3(1) << "" << VAR52 << "" << VAR53;

  
  
  VAR5->FUN7()->FUN40(VAR52,
                                                                  VAR53);

  VAR27::VAR46<VAR47> FUN41(
      new FUN42(VAR1,
                                                    VAR51));

  if (!VAR42.FUN43() || VAR52.FUN43()) {
    FUN37(VAR27::FUN44(), VAR27::move(VAR48));
    return;
  }

  
  
  
  
  VAR8->FUN45(VAR8::VAR43, VAR52);
  VAR38::FUN46(VAR52);

  FUN37(VAR52, VAR27::move(VAR48));
}