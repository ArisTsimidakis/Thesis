OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, OMX_PTR VAR3) {
    FUN2("", VAR2);

 switch (VAR2) {
 case VAR4:
 {

             VAR5 *VAR6 =
                 (VAR5 *)VAR3;
 








             if (VAR6->VAR7 > 1) {
                 return VAR8;
             }

            VAR6->VAR9 = VAR10;
            VAR6->VAR11 = VAR12;
            VAR6->VAR13 = VAR14;
            VAR6->VAR15 = 16;
            VAR6->VAR16 = VAR17;
            VAR6->VAR18[0] = VAR19;
            VAR6->VAR18[1] = VAR20;

            VAR6->VAR21 = VAR22;
            VAR6->VAR23 = VAR24;

 return VAR25;
 }


         case VAR26:
         {
             VAR27 *VAR28 = (VAR27 *)VAR3;










             VAR28->VAR29 = VAR30;
             VAR28->VAR21 = VAR22;
             VAR28->VAR31 = VAR24;
 return VAR25;
 }

 default:
 return VAR32::FUN1(VAR2, VAR3);
 }
}