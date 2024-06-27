OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE         VAR2,
        OMX_IN VAR3* VAR4)
{
    OMX_ERRORTYPE VAR5 = VAR6;

     unsigned int VAR7 ;
 
     FUN2("", VAR4, VAR4->VAR8);

    if (VAR9 == VAR10) {






         FUN3("");
         return VAR11;
     }

 if (VAR4 == NULL || (VAR4->VAR12 != sizeof(VAR3))) {
        FUN3("");
 return VAR13;
 }

 if (VAR4->VAR14.VAR14 != VAR15) {
        FUN3("");
 return VAR16;
 }

 if (VAR4->VAR17 != (VAR18)VAR19) {
        FUN3("");
 return VAR20;
 }
 if (!VAR21.VAR22) {
        FUN3("");
 return VAR23;
 }

    VAR7 = VAR4 - ((!VAR24)?VAR25:VAR26);

 if (VAR7 > VAR21.VAR27 ) {
        FUN3("", VAR7);
 return VAR13;
 }

    VAR28++;
    FUN2("", (unsigned)VAR4->VAR29);
    FUN4 ((unsigned long)VAR2,(unsigned long)VAR4,VAR30);
 return VAR6;
}