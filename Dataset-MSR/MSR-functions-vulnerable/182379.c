NO_INLINE VAR1 *FUN1(VAR1 *VAR2) {
  if (VAR3->VAR4=='' || VAR3->VAR4==VAR5 || VAR3->VAR4==VAR6 ||
      VAR3->VAR4==VAR7 || VAR3->VAR4==VAR8 || VAR3->VAR4==VAR9 ||
      VAR3->VAR4==VAR10 || VAR3->VAR4==VAR11 ||
      VAR3->VAR4==VAR12 || VAR3->VAR4==VAR13 ||
      VAR3->VAR4==VAR14 || VAR3->VAR4==VAR15) {
    VAR1 *VAR16;

    int VAR17 = VAR3->VAR4;
    FUN2(VAR17);
    VAR16 = FUN3();
    VAR16 = FUN4(VAR16); 
 
     if (VAR18 && VAR2) {
       if (VAR17=='') {

        

        if (!FUN5(VAR2) && FUN6(VAR2)) {

          if (!FUN7(VAR2) && !FUN8(VAR2))

            FUN9(VAR19.VAR20, VAR2);

        }

        FUN10(VAR2, VAR16);


       } else {
         if (VAR17==VAR5) VAR17='';
         else if (VAR17==VAR6) VAR17='';
        else if (VAR17==VAR7) VAR17='';
        else if (VAR17==VAR8) VAR17='';
        else if (VAR17==VAR9) VAR17='';
        else if (VAR17==VAR10) VAR17='';
        else if (VAR17==VAR11) VAR17='';
        else if (VAR17==VAR12) VAR17='';
        else if (VAR17==VAR13) VAR17=VAR21;
        else if (VAR17==VAR14) VAR17=VAR22;
        else if (VAR17==VAR15) VAR17=VAR23;
        if (VAR17=='' && FUN6(VAR2)) {
          VAR1 *VAR24 = FUN11(VAR2);
          if (FUN12(VAR24) && !FUN13(VAR24) && FUN5(VAR24)==1 && VAR16!=VAR24) {
            
            VAR1 *VAR25 = FUN14(VAR16, false);
            FUN15(VAR24, VAR25);
            FUN16(VAR25);
            VAR17 = 0;
          }
          FUN16(VAR24);
        }
        if (VAR17) {
          
          VAR1 *VAR26 = FUN17(VAR2,VAR16,VAR17);
          FUN10(VAR2, VAR26);
          FUN16(VAR26);
        }
      }
    }
    FUN16(VAR16);
  }
  return VAR2;
}