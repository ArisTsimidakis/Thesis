OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, const OMX_PTR VAR3) {
 
 const int32_t VAR4 = VAR2;

 switch (VAR4) {
 case VAR5:
 {

             const VAR6 *VAR7 =
                 (const VAR6 *)VAR3;
 








             if (FUN2((const char *)VAR7->VAR8,
                         VAR9,
                         VAR10 - 1)) {
 return VAR11;
 }

 return VAR12;
 }

 case VAR13:
 {

             VAR14 *VAR15 =
                 (VAR14 *)VAR3;
 








             if (VAR15->VAR16 > VAR17) {
                 return VAR18;
             }

 if (VAR15->VAR19 != 0) {
 return VAR20;
 }

 if (VAR15->VAR16 == VAR21) {
 if (VAR15->VAR22 != VAR23
 || VAR15->VAR24 != VAR25) {
 return VAR26;
 }
 } else {
 if (VAR15->VAR22 != VAR27
 || VAR15->VAR24 != VAR28) {
 return VAR26;
 }
 }

 return VAR12;
 }

 case VAR29:

         {
             const VAR30* VAR31 =
                     (const VAR30 *)VAR3;










             VAR32 = VAR31->VAR33;
             if (VAR32) {
                 VAR34 = VAR31->VAR35;
                VAR36 = VAR31->VAR37;
                VAR38 = VAR34;
                VAR39 = VAR36;
 } else {
                VAR34 = 0;
                VAR36 = 0;
 }
            FUN3(true , true );
 return VAR12;
 }

 case VAR40:

         {
             VAR41 *VAR42 =
                 (VAR41 *)VAR3;










             VAR43 *VAR44 = &VAR42->VAR45.VAR46;
             VAR41 *VAR47 = &FUN4(VAR42->VAR16)->VAR48;
 
 uint32_t VAR49 = VAR47->VAR45.VAR46.VAR50;
 uint32_t VAR51 = VAR47->VAR45.VAR46.VAR52;
 uint32_t VAR53 = VAR44->VAR50;
 uint32_t VAR54 = VAR44->VAR52;
 if (VAR53 != VAR49 || VAR54 != VAR51) {
 bool VAR55 = (VAR42->VAR16 == VAR56);
 if (VAR55) {
 
                    VAR38 = VAR53;
                    VAR39 = VAR54;

                    FUN3(true , true );
 
                    VAR42->VAR57 = VAR47->VAR57;
 } else {
 
 
 
                    VAR47->VAR45.VAR46.VAR50 = VAR53;
                    VAR47->VAR45.VAR46.VAR52 = VAR54;
 }
 }
 return VAR58::FUN1(VAR2, VAR3);
 }

 default:
 return VAR58::FUN1(VAR2, VAR3);
 }
}