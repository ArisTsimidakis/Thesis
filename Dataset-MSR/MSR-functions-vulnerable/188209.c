OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, const OMX_PTR VAR3) {
 switch ((int)VAR2) {
 case VAR4:
 {

             const VAR5 *VAR6 =
                 (const VAR5 *)VAR3;
 








             if (FUN2((const char *)VAR6->VAR7,
                         "",
                         VAR8 - 1)) {
 return VAR9;
 }

 return VAR10;
 }

 case VAR11:
 {

             const VAR12 *VAR13 =
                 (const VAR12 *)VAR3;
 








             if (VAR13->VAR14 != 0) {
                 return VAR9;
             }

 if (VAR13->VAR15 == VAR16) {
                VAR17 = false;
 } else if (VAR13->VAR15
 == VAR18) {
                VAR17 = true;
 } else {
 return VAR9;
 }

 return VAR10;
 }

 case VAR19:

         {
             const VAR20 *VAR21 =
                     (const VAR20 *)VAR3;










             
             
             
 
 
 
 
 
 if (VAR21->VAR22 >= 0) {
 int VAR23;
 if (VAR21->VAR22 >= 8) { VAR23 = 8; }
 else if (VAR21->VAR22 >= 6) { VAR23 = 6; }
 else if (VAR21->VAR22 >= 2) { VAR23 = 2; }
 else {
 
                    VAR23 = VAR21->VAR22;
 }
                FUN3("", VAR23);
                FUN4(VAR24, VAR25, VAR23);
 }
 bool VAR26 = false;
 if (VAR21->VAR27 >= 0) {
                FUN3("", VAR21->VAR27);
                VAR28.FUN5(VAR29,
                        VAR21->VAR27);
                VAR26 = true;
 }
 if (VAR21->VAR30 >= 0) {
                FUN3("", VAR21->VAR30);
                VAR28.FUN5(VAR31, VAR21->VAR30);
                VAR26 = true;
 }
 if (VAR21->VAR32 >= 0) {
                FUN3("", VAR21->VAR32);
                VAR28.FUN5(VAR33,
                        VAR21->VAR32);
                VAR26 = true;
 }
 if (VAR21->VAR34 >= 0) {
                FUN3("", VAR21->VAR34);
                VAR28.FUN5(VAR35,
                        VAR21->VAR34);
                VAR26 = true;
 }
 if (VAR21->VAR36 >= 0) {
                FUN3("", VAR21->VAR36);
                VAR28.FUN5(VAR37,
                        VAR21->VAR36);
                VAR26 = true;
 }
 if (VAR21->VAR38 >= 0) {
                FUN4(VAR24, VAR39,
 (VAR21->VAR38 != 0));
 }
 if (VAR26) {
                VAR28.update();
 }

 return VAR10;
 }

 case VAR40:
 {

             const VAR41 *VAR42 =
                 (VAR41 *)VAR3;
 








             if (VAR42->VAR14 != 1) {
                 return VAR9;
             }

 return VAR10;
 }

 default:
 return VAR43::FUN1(VAR2, VAR3);
 }
}