OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, OMX_PTR VAR3) {
 switch (VAR2) {
 case VAR4:
 {

             VAR5 *VAR6 =
                 (VAR5 *)VAR3;
 








             if (VAR6->VAR7 > 1) {
                 return VAR8;
             }

 if (VAR6->VAR9 > 0) {
 return VAR10;
 }

            VAR6->VAR11 =
 (VAR6->VAR7 == 0)
 ? VAR12 : VAR13;

 return VAR14;
 }

 case VAR15:
 {

             VAR16 *VAR17 =
                 (VAR16 *)VAR3;
 








             if (VAR17->VAR7 != 1) {
                 return VAR8;
             }

            VAR17->VAR18 = 1;
            VAR17->VAR19 = VAR20;

            VAR17->VAR21 =
 (VAR22)(VAR23 + VAR24);

            VAR17->VAR25 = VAR26;
            VAR17->VAR27 = VAR28;

 return VAR14;
 }

 case VAR29:
 {

             VAR30 *VAR31 =
                 (VAR30 *)VAR3;
 








             if (VAR31->VAR7 != 0) {
                 return VAR8;
             }

            VAR31->VAR32 = VAR33;
            VAR31->VAR34 = VAR35;
            VAR31->VAR36 = VAR37;
            VAR31->VAR38 = 16;
            VAR31->VAR39 = VAR40;
            VAR31->VAR41[0] = VAR42;

            VAR31->VAR18 = 1;
            VAR31->VAR43 = VAR44;

 return VAR14;
 }

 default:
 return VAR45::FUN1(VAR2, VAR3);
 }
}