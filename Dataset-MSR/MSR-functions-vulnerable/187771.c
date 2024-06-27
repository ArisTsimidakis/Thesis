OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE         VAR2,
        OMX_IN VAR3* VAR4)
{

     OMX_ERRORTYPE VAR5 = VAR6;
     unsigned int VAR7 = VAR8.VAR9.VAR10;
 

    if (VAR11 == VAR12) {






         FUN2("");
         return VAR13;
     }

 if (VAR4 == NULL) {
        FUN2("");
 return VAR14;
 }

 if (!VAR15) {
        FUN2("");
 return VAR16;
 }

 if (VAR4->VAR17 != VAR18) {
        FUN2("", (unsigned int)VAR4->VAR17);
 return VAR19;
 }

#ifdef VAR20
 if (VAR21) {
        OMX_ERRORTYPE VAR22 = VAR21->FUN3(VAR4);
 if (VAR22 != VAR6) {
 
            FUN4("", VAR22);
 }
 }
#endif 
 if (VAR23) {
 if (!VAR24) {
            VAR25.FUN5();
            VAR24 = VAR25.FUN6();
            VAR25.FUN7();
 }
 }

 if (VAR26) {
        VAR7 = VAR4 - VAR27;
 } else {
 if (VAR28 == true) {
            VAR7 = VAR4 - VAR27;
            VAR29[VAR7].VAR30 = VAR27[VAR7].VAR30;
            VAR29[VAR7].VAR31 = VAR27[VAR7].VAR31;
            VAR29[VAR7].VAR32 = VAR27[VAR7].VAR32;
            VAR4 = &VAR29[VAR7];
            FUN4("",
 &VAR27[VAR7], &VAR29[VAR7],VAR7, VAR4, (unsigned int)VAR4->VAR30);
 } else {
            VAR7 = VAR4 - VAR29;
 }
 }

 if (VAR7 > VAR8.VAR9.VAR10 ) {
        FUN2("");
 return VAR14;
 }

 if (VAR4->VAR32 & VAR33) {
        VAR34 = true;
        FUN4("", VAR35);
 }

    FUN4("",
            VAR4, VAR4->VAR36, VAR4->VAR31, (unsigned int)VAR4->VAR30);
 if (VAR26) {
        FUN8 ((unsigned long)VAR2,(unsigned long)VAR4,
                VAR37);
 } else {
        FUN8 ((unsigned long)VAR2,(unsigned long)VAR4,VAR38);
 }
    VAR39.FUN9(VAR4);
 return VAR6;
}