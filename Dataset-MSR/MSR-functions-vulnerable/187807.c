OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE         VAR2,
        OMX_IN OMX_U32                 VAR3,
        OMX_IN VAR4* VAR5)
{
    OMX_ERRORTYPE VAR6 = VAR7;
 unsigned int VAR8;
 (void) VAR2;
    FUN2("");

 if (VAR9 == VAR10 &&
 (FUN3(&VAR11 ,VAR12))) {
        FUN2("");
 } else if ((VAR13 == VAR14 && VAR3 == VAR15)||
 (VAR16 == VAR14 && VAR3 == VAR17)) {
        FUN2("", (unsigned int)VAR3);
 } else if ((VAR3 == VAR15 &&
                FUN3(&VAR11, VAR18)) ||
 (VAR3 == VAR17 &&
             FUN3(&VAR11, VAR19))) {
        FUN2("", (unsigned int)VAR3);
 } else if (VAR9 == VAR20 || VAR9 == VAR21) {
        FUN4("");
        FUN5(VAR22,
                VAR23,
                VAR24);

 return VAR25;
 } else if (VAR9 != VAR26) {
        FUN4("");
        FUN5(VAR22,
                VAR23,
                VAR24);
 }

 if (VAR3 == VAR15) {
 
 if (!VAR27 && !VAR28)
            VAR8 = VAR5 - VAR29;
 else

             VAR8 = VAR5 - VAR30;
 
         FUN2("", VAR8);

        if (VAR8 < VAR31.VAR32.VAR33) {




             
             FUN6(&VAR34,VAR8);
             FUN6(&VAR35,VAR8);
 if (VAR28 == true) {

                FUN2("",VAR8);
 if (VAR36)
                    FUN7(VAR36[VAR8]);
 } else {
 if (VAR27) {
 if (VAR36)
                        FUN7(VAR8,VAR36[VAR8]);
 else
                        FUN7(VAR8,NULL);
 } else
                    FUN7(VAR5);
 }
            VAR37 = VAR14;
 if(FUN8())
                FUN9(this, VAR38);
 
 if (FUN8()) {
                FUN10("");
                FUN11();
 }
 } else {
            FUN4("");
            VAR6 = VAR39;
 }

 if (FUN3((&VAR11),VAR40)
 && FUN8()) {
            FUN2("");
            FUN6((&VAR11),VAR40);
            FUN5(VAR41,
                    VAR15,
                    VAR24);
 }

     } else if (VAR3 == VAR17) {
         
         VAR8 = VAR5 - VAR42.FUN12();

        if (VAR8 < VAR31.VAR43.VAR33) {




             FUN2("", VAR8);
             
             FUN6(&VAR44,VAR8);
            VAR45 = VAR14;
            VAR42.FUN13 (VAR5);

 if(FUN14()) {
                FUN9(this, VAR46);
 }
 if (FUN14()) {
                FUN15();
 }
 } else {
            FUN4("");
            VAR6 = VAR39;
 }
 if (FUN3((&VAR11),VAR47)
 && FUN14()) {
            FUN2("");

            FUN2("");
            FUN6((&VAR11),VAR47);
#ifdef VAR48
 if (VAR49) {
                FUN2("");
                memset(&VAR50, 0 ,(sizeof(struct VAR51) * VAR52));
 }
#endif

            FUN5(VAR41,
                    VAR17,
                    VAR24);
 }
 } else {
        VAR6 = VAR39;
 }
 if ((VAR6 == VAR7) &&
 (FUN3(&VAR11 ,VAR12))) {
 if (FUN16()) {
 
            FUN6((&VAR11),VAR12);
            FUN5(VAR53, VAR54,
                    VAR24);
 }
 }
 return VAR6;
}