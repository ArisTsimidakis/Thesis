void VAR1::FUN1() {
  FUN2(VAR2);
  VAR3* VAR4 = FUN3();

  if (VAR4 == nullptr)
    return;

  VAR5::VAR6<VAR7::VAR8> VAR9;
  for (const auto& VAR10 : VAR11) {
    auto VAR12 = VAR10.VAR13->VAR14;
    const VAR15::ProcessId VAR16 = FUN4(VAR12);
    if (VAR16 == VAR15::VAR17) {
      FUN5(1) << """ << VAR12.FUN6()
              << "" << VAR12.FUN7() << """;
      continue;
    }
     VAR9.FUN8(VAR10.VAR13->VAR18.FUN9(), VAR16, VAR10.VAR13->VAR19);
   }
 

  auto VAR20 = VAR15::FUN10(

      &VAR1::VAR21, VAR15::FUN11(this));

  auto VAR22 = VAR15::FUN10(&VAR1::VAR23,

                                VAR15::FUN11(this), VAR4->VAR24);












   VAR7::FUN12(VAR4, VAR9, VAR20,
                                             VAR22);
 
   VAR15::VAR25::FUN13()->FUN14(
       VAR26,
       VAR15::FUN15(&VAR1::VAR27,

                     VAR15::FUN11(this), VAR4->VAR24),


       VAR28);
 
   if (VAR4->VAR29.VAR30 && VAR31) {
    VAR4->VAR32 = true;

    
    
    
    
    bool VAR33 =
        VAR15::VAR34::VAR35::FUN16()
            ->FUN17()
             .FUN18();
     VAR31->FUN19(
         VAR33,

            VAR15::FUN20(&VAR1::VAR36,

                           VAR15::FUN11(this), VAR4->VAR24));






 
     VAR15::VAR25::FUN13()->FUN14(
         VAR26,
         VAR15::FUN15(&VAR1::VAR37,

                       VAR15::FUN11(this), VAR4->VAR24),


         VAR38);
   }
 
  
  FUN21();
}