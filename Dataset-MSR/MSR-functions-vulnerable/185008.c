void VAR1::FUN1(
    const VAR2& VAR3,
    bool VAR4,
    int64 VAR5,
    VAR6::GDataErrorCode VAR7,
    VAR8<VAR6::VAR9> VAR10) {
  FUN2(VAR11::FUN3(VAR11::VAR12));
 
   FileError VAR13 = FUN4(VAR7);
   if (VAR13 != VAR14) {

    FUN5(VAR13);








     return;
   }
 
   FUN2(VAR10);
 
   int64 VAR15 = VAR10->FUN6();

  if (VAR5 >= VAR15) {

    if (VAR5 > VAR15) {

      FUN7(VAR16) << ""

                   << VAR5 << "" << VAR15;

    }



    

    FUN5(VAR14);

    return;

  }


   int64 VAR17 = VAR5 > 0 ? VAR5 + 1 : 0;
   if (VAR3.FUN8()) {
























     
     
     FUN9(VAR17);
  } else {
    
    
    int64 VAR18 = VAR19::FUN10(VAR3.FUN11(),
                                           VAR5);

    
    
    
    
    VAR20::FUN12(VAR21::VAR22,
              "",
              VAR3.FUN13().FUN14(),
              VAR23::FUN15(VAR15).FUN14());

    
    
    if (VAR18 >= VAR15) {
      FUN16(VAR3, VAR4,
                             VAR17, VAR14);
      return;
    }

    
    
    VAR2 FUN17(
        VAR3.FUN18(), VAR3.FUN19(),
        VAR15);
    FUN20(
        VAR24,
        VAR23::FUN21(&VAR1::VAR25,
                   VAR26.FUN22(),
                   VAR3,
                   VAR4,
                   VAR17));
  }
}