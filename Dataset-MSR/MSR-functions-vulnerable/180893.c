int FUN1(VAR1 *VAR2, VAR3 *VAR4,
                                  const VAR5 *VAR6, const VAR7 *VAR8,
                                  VAR9 *VAR10,
                                  VAR11 *VAR12, uint32_t VAR13,
                                  uint32_t VAR14,
                                  uint8_t VAR15, void *VAR16)
{
    FUN2();
    VAR17;

    VAR4->VAR18++;

    if (VAR4->VAR18 == VAR2->VAR19) {
        VAR4->VAR20 = 1;
        FUN3(VAR4, VAR8->VAR21, 0);
        FUN4(0);
    }

    if (VAR8 == NULL || VAR13 == 0) {
        FUN3(VAR4, VAR8->VAR21, 0);
        FUN4(0);
    }

    
    if (VAR8->VAR21 == VAR22) {

        VAR23 *VAR24 = (VAR23 *)VAR8->VAR25;
        FUN5(""VAR26""VAR26, VAR24->VAR27, VAR13);

        
        
        
        

        
#ifdef VAR28
        FUN6(VAR24->VAR29 != 0 && VAR24->VAR29 <= VAR24->VAR30);
#endif

        
        VAR11 *VAR31 = NULL;
        uint32_t VAR30 = 0;
        uint32_t VAR29 = VAR13;
        uint32_t VAR32 = 0; 
        uint32_t VAR33 = VAR4->VAR34;

        do {
            if ((VAR24->VAR35 & VAR36) ||
                (VAR24->VAR35 & VAR37)) {
                FUN5(""VAR26, VAR4->VAR34);

                VAR30 = VAR33;
                VAR29 = VAR13;

                int VAR38 = VAR24->VAR38;
                if (VAR24->VAR35 & VAR36) {
                    if (VAR24->VAR35 & VAR39) {
                        VAR38 = VAR4->VAR40[VAR24->VAR38];
                    }
                    if (VAR38 < 0 && (VAR41)(FUN7(VAR38)) > VAR30)
                        VAR30 = 0;
                    else
                        VAR30 += VAR38;

                    FUN5(""VAR42""VAR26""VAR26,
                               VAR38, VAR30, VAR29);
                }

                if (VAR24->VAR35 & VAR37) {
                    if (VAR24->VAR35 & VAR43) {
                        if ((VAR44)VAR29 > (VAR44)(VAR33 + VAR4->VAR40[VAR24->VAR45] + VAR38)) {
                            VAR29 = VAR33 + VAR4->VAR40[VAR24->VAR45] + VAR38;
                        }
                    } else {
                        if ((VAR44)VAR29 > (VAR44)(VAR33 + VAR24->VAR45 + VAR38)) {
                            VAR29 = VAR33 + VAR24->VAR45 + VAR38;
                        }

                        FUN5(""VAR42""VAR26""VAR26,
                                   VAR24->VAR45, VAR33, VAR29);
                    }

                    if (VAR14 != 0 && VAR33 == 0) {
                        if (VAR29 <= VAR14) {
                            goto VAR46;
                        } else if (VAR29 >= (VAR14 + VAR13)) {
                            ;
                        } else {
                            VAR29 = VAR29 - VAR14;
                        }
                    }
                }

                if (VAR24->VAR35 & VAR47) {
                    if ((VAR4->VAR40[VAR24->VAR29] + VAR33) < VAR29) {
                        VAR29 = VAR33 + VAR4->VAR40[VAR24->VAR29];
                    }
                } else {
                    if (VAR24->VAR29 != 0) {
                        if ((VAR24->VAR29 + VAR33) < VAR29) {
                            VAR29 = VAR33 + VAR24->VAR29;
                        }

                        FUN5(""VAR26""VAR26, VAR24->VAR29, VAR29);
                    }
                }

                if (VAR24->VAR35 & VAR48) {
                    if (VAR4->VAR40[VAR24->VAR30] > VAR30)
                        VAR30 = VAR4->VAR40[VAR24->VAR30];
                } else {
                    if (VAR24->VAR30 > VAR30) {
                        VAR30 = VAR24->VAR30;
                        FUN5(""VAR26, VAR30);
                    }
                }
            } else { 
                
                if (VAR24->VAR35 & VAR47) {
                    VAR29 = VAR4->VAR40[VAR24->VAR29];
                } else {
                    if (VAR24->VAR29 != 0) {
                        VAR29 = VAR24->VAR29;
                    }
                }

                if (VAR14 != 0 && VAR24->VAR35 & VAR49) {
                    if (VAR29 <= VAR14) {
                        goto VAR46;
                    } else if (VAR29 >= (VAR14 + VAR13)) {
                        ;
                    } else {
                        VAR29 = VAR29 - VAR14;
                    }
                }

                
                if (VAR24->VAR35 & VAR48)
                    VAR30 = VAR4->VAR40[VAR24->VAR30];
                else
                    VAR30 = VAR24->VAR30;
                VAR33 = 0;
            }

            
            FUN5(""VAR26""VAR26, VAR30, VAR32);
            if (VAR32 != 0)
                VAR30 = VAR32;

            FUN5(""VAR26""VAR26, VAR30, VAR29);

            if (VAR29 > VAR13)
                VAR29 = VAR13;

            
            if (VAR30 > VAR29 || VAR29 == 0) {
                if (VAR24->VAR35 & VAR50) {
                    goto VAR51;
                } else {
                    goto VAR46;
                }
            }

            VAR11 *VAR52 = VAR12 + VAR30;
            uint32_t VAR53 = VAR29 - VAR30;
            uint32_t VAR54 = 0;
            FUN5(""VAR26, VAR53);
#ifdef VAR28
            FUN6(VAR53 > VAR13);
#endif

            

            
            VAR31 = FUN8(VAR24->VAR55, VAR4->VAR56, VAR52,
                            VAR53);

            
             FUN5("", VAR31, VAR24->VAR35 & VAR50 ? "" : "");
 
             if (VAR31 == NULL && !(VAR24->VAR35 & VAR50)) {










                 goto VAR46;
             } else if (VAR31 == NULL && (VAR24->VAR35 & VAR50)) {
                 goto VAR51;
            } else if (VAR31 != NULL && (VAR24->VAR35 & VAR50)) {
                FUN5(""VAR26""VAR26"", VAR24->VAR27, VAR54);
                
                if (FUN9(VAR24))
                    VAR4->VAR20 = 1;
                goto VAR46;
            } else {
                VAR54 = (VAR41)((VAR31 - VAR12) + VAR24->VAR57);
                FUN5(""VAR26""VAR26"", VAR24->VAR27, VAR54);
                VAR4->VAR34 = VAR54;

                
                if (VAR24->VAR35 & VAR58) {
                    if (VAR15 == VAR59) {
                        
                        VAR4->VAR60 = FUN10(VAR4->VAR60, VAR31, VAR24);
                    } else {
                         FUN11(VAR61, "");
                     }
                 }

                if (!(VAR24->VAR35 & VAR62)) {

                    FUN5("");

                    goto VAR51;

                }
 

                


                 if (VAR8->VAR63) {

                    goto VAR46;


                 }
 
                 FUN5(""VAR26, VAR24->VAR27);
                FUN3(VAR4, VAR8->VAR21, 1);

                
                int VAR64 = FUN1(VAR2, VAR4, VAR6, VAR8+1,
                        VAR10, VAR12, VAR13, VAR14, VAR15, VAR16);
                 if (VAR64 == 1) {
                     FUN4(1);
                 }


 

                if (VAR4->VAR20)




                     goto VAR46;




















 
                 
                 VAR32 = (VAR54 - (VAR24->VAR57 - 1));
                FUN5(""VAR26, VAR32);
            }

        } while(1);

    } else if (VAR8->VAR21 == VAR65) {
        FUN5("");

        VAR66 *VAR27 = (VAR66 *)VAR8->VAR25;
        if (VAR27->VAR35 & VAR67) {
            if (VAR4->VAR34 + VAR27->VAR68 > VAR13) {
                FUN5(""VAR26""VAR26, VAR4->VAR34 + VAR27->VAR68, VAR13);
                if (VAR27->VAR35 & VAR69)
                    goto VAR51;
                goto VAR46;
            } else {
                FUN5("");
                if (VAR27->VAR35 & VAR69)
                    goto VAR46;
                goto VAR51;
            }
        } else {
            if (VAR27->VAR68 < VAR13) {
                FUN5("");
                if (VAR27->VAR35 & VAR69)
                    goto VAR46;
                goto VAR51;
            } else {
                FUN5(""VAR26""VAR26"", VAR27->VAR68, VAR13);
                if (VAR27->VAR35 & VAR69)
                    goto VAR51;
                goto VAR46;
            }
        }

    } else if (VAR8->VAR21 == VAR70) {
        FUN5("");
        VAR71 *VAR72 = (VAR71 *)VAR8->VAR25;
        uint32_t VAR33 = VAR4->VAR34;
        uint32_t VAR32 = 0;
        int VAR64 = 0;

        VAR4->VAR73 = 0;
        do {
            VAR74 *VAR75 = NULL;
            if (VAR15 == VAR59)
                VAR75 = (VAR74 *)VAR16;
            VAR64 = FUN12(VAR4, VAR6, VAR8, VAR75, VAR10,
                                       VAR12, VAR13);
            if (VAR64 == 0) {
                goto VAR46;
            }

            if (!(VAR72->VAR35 & VAR76)) {
                FUN5("");
                goto VAR51;
            }
            FUN3(VAR4, VAR8->VAR21, 1);

            
            VAR32 = VAR4->VAR73;

            
            VAR64 = FUN1(VAR2, VAR4, VAR6, VAR8+1,
                    VAR10, VAR12, VAR13, VAR14, VAR15, VAR16);
            if (VAR64 == 1) {
                FUN4(1);
            }

            if (VAR4->VAR20)
                goto VAR46;

            VAR4->VAR34 = VAR33;
            VAR4->VAR73 = VAR32;
        } while (1);

    } else if (VAR8->VAR21 == VAR77) {
        VAR78 *VAR79 = (VAR78 *)VAR8->VAR25;
        uint8_t VAR35 = VAR79->VAR35;
        int32_t VAR30 = VAR79->VAR30;
        uint64_t VAR80 = VAR79->VAR80;
        if (VAR35 & VAR81) {
            VAR30 = VAR4->VAR40[VAR30];
        }
        if (VAR35 & VAR82) {
            VAR80 = VAR4->VAR40[VAR80];
        }

        
        if (VAR35 & VAR83 && VAR16 != NULL) {
            VAR84 *VAR85 = (VAR84 *)VAR16;
            
            VAR35 |= ((VAR85->VAR86.VAR87.VAR88[0] & 0x10) ?
                      VAR89: 0);
        }

        if (FUN13(VAR4, VAR6, VAR8->VAR25, VAR12, VAR13, VAR35,
                                  VAR30, VAR80) != 1) {
            goto VAR46;
        }

        goto VAR51;

    } else if (VAR8->VAR21 == VAR90) {
        VAR91 *VAR92 = (VAR91 *)VAR8->VAR25;
        uint8_t VAR35 = VAR92->VAR35;
        int32_t VAR30 = VAR92->VAR30;

        if (VAR35 & VAR93) {
            VAR30 = VAR4->VAR40[VAR30];
        }

        
        if (VAR35 & VAR94 && VAR16 != NULL) {
            VAR84 *VAR85 = (VAR84 *)VAR16;
            
            VAR35 |= ((VAR85->VAR86.VAR87.VAR88[0] & 0x10) ?
                      VAR95: 0);
        }

        if (FUN14(VAR4, VAR6, VAR8->VAR25, VAR12, VAR13,
                                  VAR35, VAR30) != 1) {
            goto VAR46;
        }

        goto VAR51;

    } else if (VAR8->VAR21 == VAR96) {

        VAR97 *VAR98 = (VAR97 *)VAR8->VAR25;
        uint8_t VAR99 = VAR98->VAR99;

        
        if ((VAR98->VAR35 & VAR100) &&
            VAR99 == VAR101 && VAR16 != NULL) {

            VAR84 *VAR85 = (VAR84 *)VAR16;
            
            VAR99 |= ((VAR85->VAR86.VAR87.VAR88[0] == 0x10) ?
                       VAR102 : VAR103);
        }

        if (FUN15(VAR4, VAR8, VAR6, VAR12,
                                     VAR13,
                                     &VAR4->VAR40[VAR98->VAR104],
                                     VAR99) != 1) {
            goto VAR46;
        }

        goto VAR51;

        
    } else if (VAR8->VAR21 == VAR105) {
        FUN5("");

        int VAR64 = 0;
        VAR106 *VAR107 = (VAR106 *) VAR8->VAR25;

        switch (VAR107->VAR108) {
            case VAR109:
                if (VAR13 == VAR107->VAR110)
                    VAR64 = 1;
                break;
            case VAR111:
                if (VAR13 < VAR107->VAR110)
                    VAR64 = 1;
                break;
            case VAR112:
                if (VAR13 > VAR107->VAR110)
                    VAR64 = 1;
                break;
            case VAR113:
                if (VAR13 > VAR107->VAR110 &&
                    VAR13 < VAR107->VAR114) {
                    VAR64 = 1;
                }
                break;
        }

        if (VAR64 == 1) {
            goto VAR51;
        }

        VAR4->VAR20 = 0;

        goto VAR46;
#ifdef VAR115
    }
    else if (VAR8->VAR21 == VAR116) {
        FUN5("");

        if (FUN16(VAR4, VAR6, VAR8, VAR12, VAR13,
                    VAR4->VAR34, VAR10) != 1)
        {
            FUN5("");
            goto VAR46;
        }
        FUN5("");
        goto VAR51;
#endif 
    } else if (VAR8->VAR21 == VAR117) {
        if (FUN17(VAR4, VAR6, VAR8, VAR12, VAR13)) {
            if (VAR6->VAR118[VAR119] != NULL) {
                FUN3(VAR4, VAR8->VAR21, 1);
                if (FUN18(VAR2, VAR4, VAR6, VAR10)) {
                    
                    goto VAR120;
                }
            }
        }
    } else {
        FUN5("", VAR8->VAR21);
#ifdef VAR28
        FUN6(1);
#endif
    }

VAR46:
    FUN3(VAR4, VAR8->VAR21, 0);
    FUN4(0);

VAR51:
    
    if (!VAR8->VAR63) {
        FUN3(VAR4, VAR8->VAR21, 1);
        int VAR64 = FUN1(VAR2, VAR4, VAR6, VAR8+1,
                VAR10, VAR12, VAR13, VAR14, VAR15, VAR16);
        FUN4(VAR64);
    }
VAR120:
    FUN3(VAR4, VAR8->VAR21, 1);
    FUN4(1);
}