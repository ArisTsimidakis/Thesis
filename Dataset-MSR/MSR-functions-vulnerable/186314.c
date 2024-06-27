VAR1::FUN1(
     VAR2::VAR3<void(double)> VAR4)
     : FUN2(VAR5::move(VAR4)) {
   FUN3(VAR5::VAR6<VAR7::VAR8>(

      VAR7::VAR8::VAR9::VAR10, VAR11));




 

  VAR12 = FUN4(VAR5::VAR6<VAR7::VAR13>(5, false));

  VAR12->FUN5(VAR7::FUN6(VAR14));




 
   
   VAR15::Font VAR16;
  int VAR17 = VAR18 - VAR16.FUN7();
  VAR15::Font VAR19 = VAR16.FUN8(VAR17, VAR15::VAR20::VAR21,
                                       VAR15::VAR20::VAR22::VAR21);
  VAR15::VAR23 FUN9(VAR19);

  auto VAR24 = VAR5::VAR6<VAR7::VAR25>();
  auto* VAR26 =
      VAR24->FUN3(VAR5::VAR6<VAR7::VAR27>());
  VAR26->FUN10(VAR7::VAR28::VAR29)
      .FUN11(VAR7::VAR30::VAR31)
      .FUN12(VAR7::VAR30::VAR31)
      .FUN13(true);

  auto VAR32 = VAR5::VAR6<VAR7::VAR33>();
  VAR32->FUN14(VAR34);
  VAR32->FUN15(VAR35);
  VAR32->FUN16(false);
  VAR36 = VAR24->FUN4(VAR5::move(VAR32));

  auto VAR37 = VAR5::VAR6<VAR7::VAR25>();
  VAR37->FUN17(VAR38);
  VAR37->FUN18(VAR7::VAR39,
                            VAR7::VAR40::FUN19(
                                VAR7::VAR41::VAR42,
                                VAR7::VAR43::VAR44));
  VAR24->FUN4(VAR5::move(VAR37));

  auto VAR45 = VAR5::VAR6<VAR7::VAR33>();
  VAR45->FUN14(VAR34);
  VAR45->FUN15(VAR35);
  VAR45->FUN16(false);
  VAR46 = VAR24->FUN4(VAR5::move(VAR45));

  FUN4(VAR5::move(VAR24));
}