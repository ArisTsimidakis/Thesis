static int FUN1(VAR1 *VAR2, unsigned char **VAR3,
                                       unsigned char *VAR4, int *VAR5)
{
    unsigned short VAR6;
    unsigned short VAR7;
    unsigned short VAR8;
    unsigned char *VAR9 = *VAR3;
    int VAR10 = 0;

    VAR2->VAR11 = 0;
    VAR2->VAR12 = -1;
# ifndef VAR13
    VAR2->VAR14->VAR15 = 0;
# endif

    if (VAR2->VAR14->VAR16) {
        FUN2(VAR2->VAR14->VAR16);
        VAR2->VAR14->VAR16 = NULL;
    }
    VAR2->VAR14->VAR17 = 0;
    if (VAR2->VAR18->VAR19) {
        FUN2(VAR2->VAR18->VAR19);
        VAR2->VAR18->VAR19 = NULL;
    }
    VAR2->VAR18->VAR20 = 0;
# ifndef VAR21
    VAR2->VAR22 &= ~(VAR23 |
                             VAR24);
# endif

# ifndef VAR25
    if (VAR2->VAR26 & VAR27)
        FUN3(VAR2, VAR9, VAR4);
# endif                         

    
    if (VAR2->VAR18->VAR28) {
        FUN2(VAR2->VAR18->VAR28);
        VAR2->VAR18->VAR28 = NULL;
    }
# ifndef VAR29
    if (VAR2->VAR30.VAR31 != NULL) {
        FUN2(VAR2->VAR30.VAR31);
        VAR2->VAR30.VAR31 = NULL;
    }
# endif

    VAR2->VAR32 = NULL;

     if (VAR9 == VAR4)
         goto VAR33;
 

    if (VAR9 > (VAR4 - 2))


         goto VAR34;
 
     FUN4(VAR9, VAR8);
 

    if (VAR9 + VAR8 != VAR4)


         goto VAR34;
 

    while (VAR9 <= (VAR4 - 4)) {


         FUN4(VAR9, VAR6);
         FUN4(VAR9, VAR7);
 

        if (VAR9 + VAR7 > (VAR4))


             goto VAR34;
 # if 0
         fprintf(VAR35, "", VAR6, VAR7);
# endif
        if (VAR2->VAR36)
            VAR2->FUN5(VAR2, 0, VAR6, VAR9, VAR7, VAR2->VAR37);


        if (VAR6 == VAR38) {
            unsigned char *VAR39;
            int VAR40;
            int VAR41;

            if (VAR7 < 2)
                goto VAR34;
            FUN4(VAR9, VAR41);
            VAR7 -= 2;
            if (VAR41 > VAR7)
                goto VAR34;

            VAR39 = VAR9;
            while (VAR41 > 3) {
                VAR40 = *(VAR39++);
                FUN4(VAR39, VAR8);
                VAR41 -= 3;

                if (VAR8 > VAR41)
                    goto VAR34;

                if (VAR2->VAR11 == 0)
                    switch (VAR40) {
                    case VAR42:
                        if (!VAR2->VAR43) {
                            if (VAR2->VAR44->VAR45)
                                goto VAR34;

                            if (VAR8 > VAR46) {
                                *VAR5 = VAR47;
                                return 0;
                            }
                            if ((VAR2->VAR44->VAR45 =
                                 FUN6(VAR8 + 1)) == NULL) {
                                *VAR5 = VAR48;
                                return 0;
                            }
                            memcpy(VAR2->VAR44->VAR45, VAR39, VAR8);
                            VAR2->VAR44->VAR45[VAR8] = '';
                            if (strlen(VAR2->VAR44->VAR45) != VAR8) {
                                FUN2(VAR2->VAR44->VAR45);
                                VAR2->VAR44->VAR45 = NULL;
                                *VAR5 = VAR47;
                                return 0;
                            }
                            VAR2->VAR11 = 1;

                        } else
                            VAR2->VAR11 = VAR2->VAR44->VAR45
                                && strlen(VAR2->VAR44->VAR45) == VAR8
                                && FUN7(VAR2->VAR44->VAR45,
                                           (char *)VAR39, VAR8) == 0;

                        break;

                    default:
                        break;
                    }

                VAR41 -= VAR8;
            }
            if (VAR41 != 0)
                goto VAR34;

        }
# ifndef VAR29
        else if (VAR6 == VAR49) {
            if (VAR7 == 0 || ((VAR8 = VAR9[0])) != (VAR7 - 1))
                goto VAR34;
            if (VAR2->VAR30.VAR31 != NULL)
                goto VAR34;
            if ((VAR2->VAR30.VAR31 = FUN6(VAR8 + 1)) == NULL)
                return -1;
            memcpy(VAR2->VAR30.VAR31, &VAR9[1], VAR8);
            VAR2->VAR30.VAR31[VAR8] = '';

            if (strlen(VAR2->VAR30.VAR31) != VAR8)
                goto VAR34;
        }
# endif

# ifndef VAR25
        else if (VAR6 == VAR50) {
            unsigned char *VAR39 = VAR9;
            int VAR51 = *(VAR39++);

            if (VAR51 != VAR7 - 1 ||
                VAR51 < 1)
                goto VAR34;
            if (!VAR2->VAR43) {
                if (VAR2->VAR44->VAR52) {
                    FUN2(VAR2->VAR44->VAR52);
                    VAR2->VAR44->VAR52 = NULL;
                }
                VAR2->VAR44->VAR53 = 0;
                if ((VAR2->VAR44->VAR52 =
                     FUN6(VAR51)) == NULL) {
                    *VAR5 = VAR48;
                    return 0;
                }
                VAR2->VAR44->VAR53 =
                    VAR51;
                memcpy(VAR2->VAR44->VAR52, VAR39,
                       VAR51);
            }
#  if 0
            fprintf(VAR35,
                    "",
                    VAR2->VAR44->VAR53);
            VAR39 = VAR2->VAR44->VAR52;
            for (VAR54 = 0; VAR54 < VAR2->VAR44->VAR53; VAR54++)
                fprintf(VAR35, "", *(VAR39++));
            fprintf(VAR35, "");
#  endif
        } else if (VAR6 == VAR55) {
            unsigned char *VAR39 = VAR9;
            int VAR56 = (*(VAR39++) << 8);
            VAR56 += (*(VAR39++));

            if (VAR56 != VAR7 - 2 ||
                VAR56 < 1 ||
                
                VAR56 & 1)
                    goto VAR34;

            if (!VAR2->VAR43) {
                if (VAR2->VAR44->VAR57)
                    goto VAR34;

                VAR2->VAR44->VAR58 = 0;
                if ((VAR2->VAR44->VAR57 =
                     FUN6(VAR56)) == NULL) {
                    *VAR5 = VAR48;
                    return 0;
                }
                VAR2->VAR44->VAR58 =
                    VAR56;
                memcpy(VAR2->VAR44->VAR57, VAR39,
                       VAR56);
            }
#  if 0
            fprintf(VAR35,
                    "",
                    VAR2->VAR44->VAR58);
            VAR39 = VAR2->VAR44->VAR57;
            for (VAR54 = 0; VAR54 < VAR2->VAR44->VAR58; VAR54++)
                fprintf(VAR35, "", *(VAR39++));
            fprintf(VAR35, "");
#  endif
        }
# endif                         
# ifdef VAR59
        else if (VAR6 == VAR59) {
            unsigned char *VAR39 = VAR9;

            if (VAR7 < 2) {
                *VAR5 = VAR60;
                return 0;
            }
            FUN4(VAR39, VAR2->VAR14->VAR61);
            if (VAR2->VAR14->VAR61 != VAR7 - 2) {
                *VAR5 = VAR60;
                return 0;
            }

            if (VAR2->VAR14->VAR62 != NULL) {
                
                FUN2(VAR2->VAR14->VAR62);
            }

            
            if (VAR2->VAR14->VAR61 == 0)
                VAR2->VAR14->VAR62 = FUN6(1);
            else
                VAR2->VAR14->VAR62 =
                    FUN8(VAR39, VAR2->VAR14->VAR61);
            if (VAR2->VAR14->VAR62 == NULL) {
                *VAR5 = VAR48;
                return 0;
            }
        }
# endif
        else if (VAR6 == VAR63) {
            if (VAR2->VAR64 &&
                !VAR2->FUN9(VAR2, VAR9, VAR7,
                                              VAR2->VAR65))
            {
                *VAR5 = VAR48;
                return 0;
            }
        } else if (VAR6 == VAR66) {
            if (!FUN10(VAR2, VAR9, VAR7, VAR5))
                return 0;
            VAR10 = 1;
        } else if (VAR6 == VAR67) {
            int VAR41;
            if (VAR2->VAR18->VAR28 || VAR7 < 2)
                goto VAR34;
            FUN4(VAR9, VAR41);
            VAR7 -= 2;
            if (VAR41 != VAR7 || VAR41 & 1 || !VAR41)
                goto VAR34;
            if (!FUN11(VAR2, VAR9, VAR41))
                goto VAR34;
        } else if (VAR6 == VAR68) {

            if (VAR7 < 5)
                goto VAR34;

            VAR2->VAR12 = *VAR9++;
            VAR7--;
            if (VAR2->VAR12 == VAR69) {
                const unsigned char *VAR39;
                int VAR41;
                
                FUN4(VAR9, VAR41);
                VAR7 -= 2;
                if (VAR41 > VAR7)
                    goto VAR34;
                while (VAR41 > 0) {
                    VAR70 *VAR71;
                    int VAR72;
                    if (VAR41 < 4)
                        goto VAR34;
                    FUN4(VAR9, VAR72);
                    VAR41 -= 2 + VAR72;
                    VAR7 -= 2 + VAR72;
                    if (VAR41 < 0)
                        goto VAR34;
                    VAR39 = VAR9;
                    VAR9 += VAR72;
                    VAR71 = FUN12(NULL, &VAR39, VAR72);
                    if (!VAR71)
                        goto VAR34;
                    if (VAR9 != VAR39) {
                        FUN13(VAR71);
                        goto VAR34;
                    }
                    if (!VAR2->VAR73
                        && !(VAR2->VAR73 =
                             FUN14())) {
                        FUN13(VAR71);
                        *VAR5 = VAR74;
                        return 0;
                    }
                    if (!FUN15(VAR2->VAR73, VAR71)) {
                        FUN13(VAR71);
                        *VAR5 = VAR74;
                        return 0;
                    }
                }

                
                if (VAR7 < 2)
                    goto VAR34;
                FUN4(VAR9, VAR41);
                VAR7 -= 2;
                if (VAR41 != VAR7)
                    goto VAR34;
                VAR39 = VAR9;
                if (VAR41 > 0) {
                    if (VAR2->VAR75) {
                        FUN16(VAR2->VAR75,
                                                   VAR76);
                    }

                    VAR2->VAR75 =
                        FUN17(NULL, &VAR39, VAR41);
                    if (!VAR2->VAR75 || (VAR9 + VAR41 != VAR39))
                        goto VAR34;
                }
            }
            
            else
                VAR2->VAR12 = -1;
        }
# ifndef VAR21
        else if (VAR6 == VAR77) {
            switch (VAR9[0]) {
            case 0x01:         
                VAR2->VAR22 |= VAR23;
                break;
            case 0x02:         
                VAR2->VAR22 |= VAR23;
                VAR2->VAR22 |= VAR24;
                break;
            default:
                *VAR5 = VAR78;
                return 0;
            }
        }
# endif
# ifndef VAR13
        else if (VAR6 == VAR79 &&
                 VAR2->VAR14->VAR80.VAR81 == 0) {
            
            VAR2->VAR14->VAR15 = 1;
        }
# endif

        else if (VAR6 == VAR82 &&
                 VAR2->VAR14->VAR80.VAR81 == 0) {
            if (FUN18(VAR2, VAR9, VAR7, VAR5) != 0)
                return 0;
        }

        
# ifndef VAR83
        else if (FUN19(VAR2) && FUN20(VAR2)
                 && VAR6 == VAR84) {
            if (FUN21(VAR2, VAR9, VAR7, VAR5))
                return 0;
        }
# endif

        VAR9 += VAR7;
    }

    
    if (VAR9 != VAR4)
        goto VAR34;

    *VAR3 = VAR9;

 VAR33:

    

    if (!VAR10 && VAR2->VAR85 &&
        !(VAR2->VAR26 & VAR86)) {
        *VAR5 = VAR87;
        FUN22(VAR88,
               VAR89);
        return 0;
    }

    return 1;
VAR34:
    *VAR5 = VAR60;
    return 0;
}