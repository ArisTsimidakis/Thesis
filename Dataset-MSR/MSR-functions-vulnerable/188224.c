OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, const OMX_PTR VAR3) {
 switch (VAR2) {
 case VAR4:
 {

             VAR5 *VAR6 =
                 (VAR5 *)VAR3;
 








             if (VAR6->VAR7 != VAR8) {
                 return VAR9;
             }

            VAR10 = VAR6->VAR11;
 return VAR12;
 }

 case VAR13:
 {

             VAR14 *VAR6 =
                 (VAR14 *)VAR3;
 








             if (VAR6->VAR7 != VAR8) {
                 return VAR9;
             }

 if (VAR15 != VAR6->VAR16) {
                VAR15 = VAR6->VAR16;
                VAR17 = true;
 }
 return VAR12;
 }

 default:
 return VAR18::FUN1(VAR2, VAR3);
 }
}