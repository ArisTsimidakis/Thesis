void VAR1::FUN1(
    VAR2<VAR3::VAR4> VAR5) {
  FUN2(VAR6);

  VAR7 = 0;
  VAR8 = VAR5->FUN3();
  VAR2<VAR9::VAR10> VAR11 =
      VAR9::VAR12::FUN4();

  auto VAR13 = VAR14::VAR15::VAR16::FUN5();

  
  VAR13->VAR17 = true;

  
  VAR14::VAR15::CompositorFrameSinkAssociatedPtrInfo VAR18;
  VAR13->VAR19 = VAR20::FUN6(&VAR18);
  VAR14::VAR15::CompositorFrameSinkClientRequest VAR21 =
      VAR20::FUN6(&VAR13->VAR22);
  VAR13->VAR23 = VAR20::FUN6(&VAR24);
  VAR25 = VAR26::VAR27<VAR28>(
      VAR9::FUN7(&VAR1::VAR29,
                          VAR30.FUN8()),
      VAR9::FUN7(
          &VAR1::VAR31,
          VAR30.FUN8()));
  VAR13->VAR32 =
       VAR25->FUN9(VAR11).FUN10();
 
   VAR14::RendererSettings VAR33;


   VAR33.VAR34 = false;
   VAR33.VAR35 = 2048;
   VAR33.VAR36 = VAR37;
  VAR33.VAR38 =
      VAR39::VAR40::FUN11()
          ->FUN12(VAR41)
          .FUN13();
  VAR33.VAR42 = VAR43::FUN14();
  VAR33.VAR44 = VAR45;
  VAR13->VAR46 = VAR47;
  VAR13->VAR48 = VAR49;
  VAR13->VAR50 = true;
  VAR13->VAR33 = VAR33;

  FUN15()->FUN16(
      VAR26::move(VAR13));

  
  VAR51::VAR52::VAR53::InitParams VAR54;
  VAR54.VAR55 = VAR11;
  VAR54.VAR56 = VAR57::FUN17()
                                         ->FUN18()
                                         ->FUN19();
  VAR54.VAR58.VAR59 = VAR26::move(VAR18);
  VAR54.VAR58.VAR21 = VAR26::move(VAR21);
  VAR54.VAR60 = true;
  VAR54.VAR61 =
      VAR26::VAR27<VAR14::VAR62>(
          false ,
          true );
  VAR54.VAR63 = VAR64;
  auto VAR65 =
      VAR26::VAR27<VAR51::VAR52::VAR53>(
          VAR26::move(VAR5), nullptr, &VAR54);
  VAR66->FUN20(VAR26::move(VAR65));
  VAR24->FUN21(true);
  VAR24->FUN22(VAR67);
  VAR24->FUN23(VAR45,
                                         VAR45);
  VAR24->FUN24(VAR68);
}