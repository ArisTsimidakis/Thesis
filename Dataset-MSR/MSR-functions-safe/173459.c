OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE     VAR2,
        OMX_IN OMX_INDEXTYPE VAR3,
        OMX_INOUT OMX_PTR     VAR4)
{
 (void) VAR2;
    OMX_ERRORTYPE VAR5 = VAR6;

    FUN2("");
 if (VAR7 == VAR8) {
        FUN3("");
 return VAR9;
 }
 if (VAR4 == NULL) {
        FUN2("");
 return VAR10;
 }
 switch ((unsigned long)VAR3) {
 case VAR11: {
                               FUN4(VAR4, VAR12);
                               VAR12 *VAR13 =
 (VAR12 *) VAR4;
                               FUN2("");
                               VAR5 = FUN5(VAR13);
 if (VAR5 == VAR6)
                                   VAR14 = *VAR13;
 break;
 }
 case VAR15: {
                              FUN4(VAR4, VAR16);
                              VAR16 *VAR17 =
 (VAR16 *) VAR4;
                              FUN2("");

                              VAR17->VAR18.VAR18 = VAR19;
                              VAR17->VAR20 = sizeof(VAR16);
                              VAR17->VAR21           = 2;
                              VAR17->VAR22 = 0;
 break;
 }
 case VAR23: {
                                FUN4(VAR4, VAR24);
                                VAR24 *VAR25 =
 (VAR24 *)VAR4;
                                FUN2("");

                                VAR25->VAR18.VAR18 = VAR19;
                                VAR25->VAR20             = sizeof(VAR24);

 if (0 == VAR25->VAR26) {
 if (0 == VAR25->VAR27) {
                                        VAR25->VAR28 =  VAR29;
                                        VAR25->VAR30 = VAR30;
 } else {
                                        FUN3(""\
 "");
                                        VAR5 =  VAR31;
 }
 } else if (1 == VAR25->VAR26) {
                                    VAR25->VAR30 =  VAR32;

 
 
 
 
 
 bool VAR33 = false;
#if FUN6(VAR34) && !FUN6(VAR35)
                                    VAR33 = (VAR36 == VAR37);
#endif
                                    VAR25->VAR28 = VAR33 ?
                                        FUN7(VAR25->VAR27) :
                                        FUN8(VAR25->VAR27);

 if (VAR25->VAR28 == VAR38 ) {
                                        VAR5 = VAR31;
                                        FUN2(""\
 "");
 }
                                    FUN9("", VAR25->VAR28);
 } else {
                                    FUN3("",
 (int)VAR25->VAR26);
                                    VAR5 = VAR39;
 }
 break;
 }
 
 case VAR40: {
                              FUN4(VAR4, VAR16);
                              VAR16 *VAR41 =
 (VAR16 *) VAR4;
                              FUN2("");
                              VAR41->VAR18.VAR18 = VAR19;
                              VAR41->VAR20 = sizeof(VAR16);
                              VAR41->VAR21           = 0;
                              VAR41->VAR22 = 0;
 break;
 }
 
 case VAR42: {
                              FUN4(VAR4, VAR16);
                              VAR16 *VAR43 =
 (VAR16 *) VAR4;
                              FUN2("");
                              VAR43->VAR18.VAR18 = VAR19;
                              VAR43->VAR20 = sizeof(VAR16);
                              VAR43->VAR21           = 0;
                              VAR43->VAR22 = 0;
 break;

 }
 
 case VAR44: {
                              FUN3("",
                                      VAR3);
                              VAR5 =VAR45;
 break;
 }
 case VAR46: {
                                  FUN4(VAR4, VAR47);
                                  VAR47 *VAR48;
                                  VAR48 = (VAR47 *) VAR4;
                                  VAR48->VAR18.VAR18 = VAR19;
                                  VAR48->VAR20 = sizeof(*VAR48);

                                  FUN2("",
                                          VAR3);
                                  FUN10((char*)VAR48->VAR49,(const char*)VAR50,
                                          VAR51);
 break;
 }
 
 case VAR52: {
                             FUN4(VAR4, VAR53);
                             VAR53 *VAR54 =
 (VAR53 *) VAR4;
                             FUN2("");
                             VAR54->VAR18.VAR18 = VAR19;
                             VAR54->VAR20 = sizeof(VAR53);

 break;
 }
 
 case VAR55: {
                                   FUN4(VAR4, VAR56);
                                   VAR56 *VAR57 =
 (VAR56*) VAR4;
                                   FUN2("");

                                   VAR57->VAR20 = sizeof(VAR56);
                                   VAR57->VAR18.VAR18 = VAR19;
 if (0 == VAR57->VAR26)
                                       VAR57->VAR26 = VAR58;
 else if (1 == VAR57->VAR26)
                                       VAR57->VAR26 = VAR58;
 else
                                       VAR5 = VAR39;


 break;
 }
 case VAR59: {
                             FUN2("",
                                     VAR3);
 break;
 }
 case (VAR60)VAR61: {
                             FUN2("",
                                     VAR3);
 break;
 }
 case VAR62: {
                              FUN2("",
                                      VAR3);
 break;
 }
 case VAR63: {
                               FUN2("",
                                       VAR3);
 break;
 }
 case VAR64: {
                               FUN2("",
                                       VAR3);
 break;
 }
 case VAR65: {
                                        FUN4(VAR4, VAR66);
                                        FUN2("", VAR3);
                                        VAR66 *VAR67 =
 (VAR66 *)VAR4;
                                        VAR5 = FUN11(VAR67);
 break;
 }
#if FUN6 (VAR68) || FUN6 (VAR69)
 case VAR70: {
                                        FUN4(VAR4, VAR71);
                                        FUN2("");
 VAR71* VAR72 = (VAR71 *) VAR4;
 if (VAR72->VAR26 == VAR73) {

 if (VAR74 && !VAR75) {
                                                VAR72->VAR76 = (VAR77 | VAR78 |
                                                        VAR79);
 } else {
                                                VAR72->VAR76 =
 (VAR80 |
                                                     VAR79);
 }
 } else {
                                            FUN9("");
                                            VAR5 = VAR10;
 }
 }
 break;
#endif

#ifdef VAR35
 case VAR81: {
                FUN2("");
                FUN4(VAR4, VAR82);
                VAR5 = FUN12(VAR4);
 break;
 }
#endif

 default: {
                 FUN3("", VAR3);
                 VAR5 =VAR45;
 }

 }

    FUN2("",
            VAR83.VAR84.VAR85,
            VAR83.VAR84.VAR86,
            VAR83.VAR84.VAR87,
            VAR83.VAR84.VAR88);

 return VAR5;
}