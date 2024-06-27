void VAR1::FUN1(
    const VAR2& VAR3,
    TextGranularity VAR4,
    EndPointsAdjustmentMode VAR5,
    HandleVisibility VAR6) {
  
  
  FUN2().FUN3();

  const VAR7& VAR8 =
      FUN4(VAR3);
  
  
  const VAR9& VAR10 =
      VAR11.FUN5();
  const VAR12& VAR13 =
      VAR10.FUN6() ? FUN7(VAR10)
                                  : FUN8();
  const VAR12& VAR14 =
      VAR13.FUN9() ? VAR13
                                : FUN7(VAR8.FUN10());
  const VAR12& VAR15 =
      FUN7(VAR8.FUN11());
  const VAR2& VAR16 =
      VAR5 == VAR17
          ? FUN12(VAR14, VAR15)
          : VAR2::FUN13()
                .FUN14(VAR14.FUN15(),
                                  VAR15.FUN15())
                .FUN16();

  VAR2::VAR18 FUN17(VAR8.FUN18());
  if (VAR16.FUN10() != VAR14.FUN15() ||
      VAR16.FUN11() != VAR15.FUN15()) {
    VAR11 = VAR14.FUN19();
    FUN20(&FUN2());
    VAR19.FUN14(VAR16.FUN10(),
                             VAR16.FUN11());
  } else if (VAR13.FUN9()) {
    if (FUN7(
            FUN21().FUN22().FUN10())
            .FUN15() ==
        FUN7(VAR8.FUN10()).FUN15()) {
      VAR19.FUN14(VAR13.FUN15(),
                               VAR8.FUN11());
    }
     VAR11 = FUN23();
   }
 

  VAR19.FUN24(VAR6 == VAR20::VAR21);
   const VAR2& VAR22 = VAR19.FUN16();




   if (FUN21().FUN22() ==
           FUN4(VAR22) &&

      FUN21().FUN25() == VAR22.FUN25())


     return;
   FUN21().FUN26(
       FUN27(VAR22),
      VAR23::FUN13()
          .FUN28(true)
           .FUN29(true)
           .FUN30(VAR24::VAR25)
           .FUN31(VAR4)


           .FUN16());
 }