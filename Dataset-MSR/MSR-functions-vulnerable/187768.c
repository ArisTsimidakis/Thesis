OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE  VAR2,
        OMX_IN VAR3* VAR4)
{
 (void)VAR2;
    VAR5 *VAR6 = NULL;
 int VAR7 = 0;
 unsigned VAR8 = 0;
    OMX_ERRORTYPE VAR9 = VAR10;
    VAR11 *VAR12 = NULL;

#ifdef VAR13
 int VAR14 = 0;
#endif
    FUN2("", VAR4->VAR15);
 if (VAR4 == NULL) {
        FUN3("", VAR4);
 return VAR16;
 }

 
 if (VAR17 && !VAR18) {
 
 bool VAR19 = false;
        VAR8 = VAR4 - VAR20;
 if (VAR8 >= VAR21.VAR22) {
            FUN3("", VAR8);
 return VAR16;
 }
        VAR12 = (VAR11 *)VAR20[VAR8].VAR15;
 if (VAR12) {
 if (VAR12->VAR23 != VAR24 &&
                    VAR12->VAR23 != VAR25) {
                VAR19 = true;
 } else {
 if (VAR12->VAR23 == VAR24) {
 if (VAR12->VAR26 == NULL)
                        VAR19 = true;
 else if ((VAR12->VAR26->VAR27 != 1 &&
                                VAR12->VAR26->VAR28 != 2))
                        VAR19 = true;
 }
 }
 } else
            VAR19 = true;
 if (VAR19) {
            FUN3("");
            FUN4 ((unsigned long)VAR4,0,VAR29);
 return VAR16;
 }
 } else {
        VAR8 = VAR4 - ((VAR3 *)VAR30);
 if (VAR8 >= VAR21.VAR22) {
            FUN3("", VAR8);
 return VAR16;
 }
 }

    VAR31++;
 if (VAR32 == true) {
        FUN4 ((unsigned long)VAR4,0,
                VAR29);
        FUN3("");
 return VAR10;
 }
#ifdef VAR13
 if (!VAR17) {
        VAR14 = VAR33[VAR8].VAR14;
 }
#endif
#ifdef VAR34
 if (VAR17 && !VAR35) {
 
 struct pmem VAR36;
 if (!VAR12) {
            FUN3("",VAR37);
 return VAR16;
 }
 if (VAR12->VAR23 == VAR24) {
 VAR36.VAR4 = VAR12;
 VAR36.VAR14 = VAR12->VAR26->VAR38[0];
#ifdef VAR13
            VAR14 = VAR36.VAR14;
#endif
 VAR36.VAR39 = VAR12->VAR26->VAR38[1];
 VAR36.VAR40 = VAR12->VAR26->VAR38[2];
            FUN2("",
 VAR36.VAR14, VAR36.VAR39,
 VAR36.VAR40);
 } else {
 VAR41 *VAR42 = (VAR41 *)VAR12->VAR26;
 VAR36.VAR4 = VAR12;
 VAR36.VAR14 = VAR42->VAR14;
#ifdef VAR13
            VAR14 = VAR36.VAR14;
#endif
 VAR36.VAR39 = 0;
 VAR36.VAR40 = VAR42->VAR40;
            FUN2("",
 VAR36.VAR14, VAR36.VAR39,
 VAR36.VAR40);
 }
 if (FUN5(&VAR36,VAR43,0) != true) {
            FUN3("");
            FUN4 ((unsigned long)VAR4,0,VAR29);
 return VAR16;
 }
 } else if (VAR17 && !VAR18) {
 
 if (VAR12->VAR23 == VAR25) {
 VAR41 *VAR42 = (VAR41 *)VAR12->VAR26;
            VAR14 = VAR42->VAR14;
            FUN2("",
                    VAR14, VAR42->VAR40);
 } else {
            FUN3(""
 "");
            FUN4 ((unsigned long)VAR4,0,VAR29);
 return VAR16;
 }
 } else if (VAR44 && !VAR45)
#else
 if (VAR44 && !VAR45)

 #endif
     {
         FUN2("");




         VAR6 = (VAR5 *)VAR33[VAR8].VAR4;

        memcpy (VAR6, (VAR4->VAR15 + VAR4->VAR46),

                VAR4->VAR47);








         FUN2("");
     } else if (VAR35) {
         
        VAR14 = VAR33[VAR8].VAR14;
        FUN2("",
                VAR14, (unsigned int)VAR4->VAR47);
 } else if (VAR21.VAR48.VAR49.VAR50 ==
                    VAR51) {
 
 
 
 if (!FUN6(VAR4, VAR21.VAR48.VAR49.VAR52,
                                    VAR21.VAR48.VAR49.VAR53)) {
                    FUN3("");
                    FUN4((unsigned long)VAR4, 0, VAR29);
 return VAR54;
 }
 }
#ifdef VAR13
 if (FUN7(VAR4, VAR6,VAR8,VAR14) != true)
#else
 if (FUN7(VAR4, VAR6,0,0) != true)
#endif
 {
        FUN3("");
#ifdef VAR34
        FUN8(VAR4);
#endif
        FUN4 ((unsigned long)VAR4,0,VAR29);
 
        VAR31--;
 if (VAR55) {
 return VAR56;
 }
 return VAR16;
 }
 return VAR9;
}