OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, const OMX_PTR VAR3) {
 int32_t VAR4 = VAR2;

 switch (VAR4) {
 case VAR5:
 {
            VAR6 *VAR7 =
 (VAR6 *) VAR3;

 if (VAR7->VAR8 != 1 ||
                VAR7->VAR9 != VAR10) {
 return VAR11;
 }

            VAR12 = VAR7->VAR13;
 return VAR14;
 }

 case VAR15:
 {
            VAR16 *VAR17 =
 (VAR16 *)VAR3;

 if (VAR17->VAR8 != 1) {
 return VAR11;
 }

 if (VAR17->VAR18 != VAR19 ||
                VAR17->VAR20 != VAR21 ||
 (VAR17->VAR22 & VAR23) ||
                VAR17->VAR24 != VAR25 ||
                VAR17->VAR26 != VAR25 ||
                VAR17->VAR27 != 0 ||
                VAR17->VAR28 != 0) {
 return VAR11;
 }

 return VAR14;
 }

 case VAR29:
 {
            VAR30 *VAR31 =
 (VAR30 *)VAR3;

 if (VAR31->VAR8 != 1) {
 return VAR11;
 }

 if (VAR31->VAR18 != VAR32 ||
                VAR31->VAR20 != VAR33 ||
 (VAR31->VAR22 & VAR23) ||
                VAR31->VAR34 != 0 ||
                VAR31->VAR35 != 0 ||
                VAR31->VAR36 != VAR37 ||
                VAR31->VAR38 != 256 ||
                VAR31->VAR39 != 1000 ||
                VAR31->VAR40 != 0 ||
                VAR31->VAR41 != VAR25) {
 return VAR11;
 }

 return VAR14;
 }

 default:
 return VAR42::FUN1(VAR2, VAR3);
 }
}