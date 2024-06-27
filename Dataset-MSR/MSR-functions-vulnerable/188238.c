OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, OMX_PTR VAR3) {
 switch ((int)VAR2) {
 case VAR4:
 {

             VAR5 *VAR6 =
                 (VAR5 *)VAR3;
 








             if (VAR6->VAR7 != 0) {
                 return VAR8;
             }

            VAR6->VAR9 = 0;
            VAR6->VAR10 = VAR11;
            VAR6->VAR12 = 0;

 if (!FUN2()) {
                VAR6->VAR13 = 1;
 } else {
                VAR6->VAR13 = VAR14->VAR15;
 }

 return VAR16;
 }

 case VAR17:
 {

             VAR18 *VAR19 =
                 (VAR18 *)VAR3;
 








             if (VAR19->VAR7 != 1) {
                 return VAR8;
             }

            VAR19->VAR20 = VAR21;
            VAR19->VAR22 = VAR23;
            VAR19->VAR24 = VAR25;
            VAR19->VAR26 = 16;
            VAR19->VAR27 = VAR28;
            VAR19->VAR29[0] = VAR30;
            VAR19->VAR29[1] = VAR31;
            VAR19->VAR32 = VAR11;

 if (!FUN2()) {
                VAR19->VAR13 = 1;
 } else {
                VAR19->VAR13 = VAR14->VAR15;
 }

 return VAR16;
 }

 default:
 return VAR33::FUN1(VAR2, VAR3);
 }
}