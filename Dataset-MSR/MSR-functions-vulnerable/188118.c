static VAR1<bool> FUN1(VAR2* VAR3,
 VAR4<VAR5> VAR6,
 VAR4<VAR7> VAR8,
 uint32_t VAR9, uint32_t VAR10) {
    FUN2(VAR5::FUN3(VAR3, *VAR6));
 bool VAR11 = VAR8->FUN4(VAR3);

 if (!VAR11) {
 VAR1<bool> VAR12 = VAR13<bool>();
 if (VAR14::FUN5(
              VAR3, VAR6, VAR8, VAR9, VAR10, &VAR12)) {

         return VAR12;
       }
     }




     VAR4<VAR15> FUN6(
         VAR15::FUN7(VAR6->FUN8()), VAR3);
     
     
     for (uint32_t VAR16 = VAR9; VAR16 < VAR10; ++VAR16) {


       int VAR17 = VAR18->FUN9(VAR3, VAR16);
       if (VAR17 == VAR15::VAR19) {
         if (VAR11) return FUN10(true);
 continue;
 }

 PropertyDetails VAR20 = FUN11(*VAR18, VAR17);
 switch (VAR20.FUN12()) {
 case VAR21: {
 VAR7* VAR22 = VAR18->FUN13(VAR17);
 if (VAR8->FUN14(VAR22)) return FUN10(true);
 break;
 }
 case VAR23: {
 VAR24 FUN15(VAR3, VAR6, VAR16,
 VAR24::VAR25);
          FUN2(VAR26.FUN16());
          FUN17(VAR26.FUN18(), VAR24::VAR27);
 VAR4<VAR7> VAR22;

          FUN19(
              VAR3, VAR22, VAR5::FUN20(&VAR26),
 VAR13<bool>());

 if (VAR8->FUN14(*VAR22)) return FUN10(true);

 
 if (!VAR5::FUN3(VAR3, *VAR6)) {
 return FUN21(VAR3, VAR6, VAR8, VAR16 + 1,
                                         VAR10);
 }

 
 if (*VAR18 == VAR6->FUN8()) continue;

 
 if (VAR6->FUN22() != VAR28) {
 if (VAR6->FUN23()->FUN24() == VAR6->FUN8()) {
 
 
 return FUN10(VAR11);
 }
 
 return FUN21(VAR3, VAR6, VAR8, VAR16 + 1,
                                         VAR10);
 }
          VAR18 = FUN25(
 VAR15::FUN7(VAR6->FUN8()), VAR3);
 break;
 }
 }
 }
 return FUN10(false);
 }