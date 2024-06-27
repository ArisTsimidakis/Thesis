static VAR1<VAR2> FUN1(VAR3* VAR4,
 VAR5<VAR6> VAR7,

                                          VAR5<VAR8> VAR9,
                                          uint32_t VAR10, uint32_t VAR11) {
     FUN2(VAR6::FUN3(VAR4, *VAR7));

    VAR5<VAR12> VAR13 = FUN4(VAR7->FUN5(), VAR4);


     VAR5<VAR14> FUN6(VAR14::FUN7(VAR7->FUN8()),
                                      VAR4);
 
     for (uint32_t VAR15 = VAR10; VAR15 < VAR11; ++VAR15) {


       uint32_t VAR16 = FUN9(VAR4, *VAR7, *VAR17, VAR15,
                                             VAR18);
       if (VAR16 == VAR19) {
 continue;
 }

 VAR5<VAR8> VAR20 =
 VAR21::FUN10(VAR4, *VAR17, VAR16);

 if (VAR20->FUN11()) {
 VAR22 FUN12(VAR4, VAR7, VAR15, VAR22::VAR23);
        FUN2(VAR24.FUN13());
        FUN14(VAR24.FUN15(), VAR22::VAR25);
        FUN16(VAR4, VAR20,
 VAR8::FUN17(&VAR24),
 VAR26<VAR2>());

 if (VAR9->FUN18(*VAR20)) {
 return VAR27<VAR2>(VAR15);
 }

 if (VAR7->FUN5() != *VAR13) {
 
 return FUN19(VAR4, VAR7, VAR9, VAR15 + 1, VAR11);
 }
 } else if (VAR9->FUN18(*VAR20)) {
 return VAR27<VAR2>(VAR15);
 }
 }
 return VAR27<VAR2>(-1);
 }