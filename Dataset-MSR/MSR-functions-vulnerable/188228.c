OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, const OMX_PTR VAR3) {
 switch (VAR2) {
 case VAR4:
 {

             VAR5 *VAR6 =
                 (VAR5 *)VAR3;
 








             if (VAR6->VAR7 != 0 && VAR6->VAR7 != 1) {
                 return VAR8;
             }

 if (VAR6->VAR9 < 1 || VAR6->VAR9 > 2) {
 return VAR8;
 }

 if(VAR6->VAR7 == 0) {
                VAR10 = VAR6->VAR9;
 }

            VAR11 = VAR6->VAR12;

 return VAR13;
 }

 case VAR14:
 {

             const VAR15 *VAR16 =
                 (const VAR15 *)VAR3;
 








             if (VAR17) {
                 if (FUN2((const char *)VAR16->VAR18,
                             "",
                            VAR19 - 1)) {
 return VAR8;
 }
 } else {
 if (FUN2((const char *)VAR16->VAR18,
 "",
                            VAR19 - 1)) {
 return VAR8;
 }
 }

 return VAR13;
 }

 default:
 return VAR20::FUN1(VAR2, VAR3);
 }
}