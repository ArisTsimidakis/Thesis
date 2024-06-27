static int FUN1(VAR1 *VAR2, unsigned char **VAR3,
                                       unsigned char *VAR4, int VAR5, int *VAR6)
{
    unsigned short VAR7;
    unsigned short VAR8;
    unsigned short VAR9;
    unsigned char *VAR10 = *VAR3;
    int VAR11 = 0;
    int VAR12 = 0;

# ifndef VAR13
    VAR2->VAR14->VAR15 = 0;
# endif
    VAR2->VAR16 = 0;

    if (VAR2->VAR14->VAR17) {
        FUN2(VAR2->VAR14->VAR17);
        VAR2->VAR14->VAR17 = NULL;
    }
# ifndef VAR18
    VAR2->VAR19 &= ~(VAR20 |
                              VAR21);
 # endif
 

    if (VAR10 >= (VAR4 + VAR5 - 2))


         goto VAR22;
 
     FUN3(VAR10, VAR7);

    if (VAR10 + VAR7 != VAR4 + VAR5) {


         *VAR6 = VAR23;
         return 0;
     }
 

    while (VAR10 <= (VAR4 + VAR5 - 4)) {


         FUN3(VAR10, VAR8);
         FUN3(VAR10, VAR9);
 

        if (VAR10 + VAR9 > (VAR4 + VAR5))


             goto VAR22;
 
         if (VAR2->VAR24)
            VAR2->FUN4(VAR2, 1, VAR8, VAR10, VAR9, VAR2->VAR25);

        if (VAR8 == VAR26) {
            if (VAR2->VAR27 == NULL || VAR9 > 0) {
                *VAR6 = VAR28;
                return 0;
            }
            VAR11 = 1;
        }
# ifndef VAR29
        else if (VAR8 == VAR30) {
            unsigned char *VAR31 = VAR10;
            int VAR32 = *(VAR31++);

            if (VAR32 != VAR9 - 1) {
                *VAR6 = VAR33;
                return 0;
            }
            if (!VAR2->VAR34) {
                VAR2->VAR35->VAR36 = 0;
                if (VAR2->VAR35->VAR37 != NULL)
                    FUN2(VAR2->VAR35->VAR37);
                if ((VAR2->VAR35->VAR37 =
                     FUN5(VAR32)) == NULL) {
                    *VAR6 = VAR38;
                    return 0;
                }
                VAR2->VAR35->VAR36 =
                    VAR32;
                memcpy(VAR2->VAR35->VAR37, VAR31,
                       VAR32);
            }
#  if 0
            fprintf(VAR39,
                    "");
            VAR31 = VAR2->VAR35->VAR37;
            for (VAR40 = 0; VAR40 < VAR2->VAR35->VAR36; VAR40++)
                fprintf(VAR39, "", *(VAR31++));
            fprintf(VAR39, "");
#  endif
        }
# endif                         

        else if (VAR8 == VAR41) {
            if (VAR2->VAR42 &&
                !VAR2->FUN6(VAR2, VAR10, VAR9,
                                              VAR2->VAR43))
            {
                *VAR6 = VAR38;
                return 0;
            }
            if ((FUN7(VAR2) & VAR44)
                || (VAR9 > 0)) {
                *VAR6 = VAR45;
                return 0;
            }
            VAR2->VAR16 = 1;
        }
# ifdef VAR46
        else if (VAR8 == VAR46) {
            unsigned char *VAR31 = VAR10;

            if (VAR9 < 2) {
                *VAR6 = VAR23;
                return 0;
            }
            FUN3(VAR31, VAR2->VAR14->VAR47);
            if (VAR2->VAR14->VAR47 != VAR9 - 2) {
                *VAR6 = VAR23;
                return 0;
            }

            if (VAR2->VAR14->VAR48 != NULL) {
                
                FUN2(VAR2->VAR14->VAR48);
            }
            if (VAR2->VAR14->VAR47 == 0) {
                
                VAR2->VAR14->VAR48 = FUN5(1);
            } else {
                VAR2->VAR14->VAR48 =
                    FUN8(VAR31, VAR2->VAR14->VAR47);
            }

            if (VAR2->VAR14->VAR48 == NULL) {
                *VAR6 = VAR38;
                return 0;
            }
        }
# endif
        else if (VAR8 == VAR49) {
            
            if ((VAR2->VAR50 == -1) || (VAR9 > 0)) {
                *VAR6 = VAR45;
                return 0;
            }
            
            VAR2->VAR51 = 1;
        }
# ifndef VAR13
        else if (VAR8 == VAR52 &&
                 VAR2->VAR14->VAR53.VAR54 == 0) {
            unsigned char *VAR55;
            unsigned char VAR56;

            
            if (VAR2->VAR57->VAR58 == NULL) {
                *VAR6 = VAR45;
                return 0;
            }
            
            if (!FUN9(VAR10, VAR9)) {
                *VAR6 = VAR33;
                return 0;
            }
            if (VAR2->
                VAR57->FUN10(VAR2, &VAR55, &VAR56, VAR10,
                                          VAR9,
                                          VAR2->VAR57->VAR59) !=
                VAR60) {
                *VAR6 = VAR38;
                return 0;
            }
            VAR2->VAR61 = FUN5(VAR56);
            if (!VAR2->VAR61) {
                *VAR6 = VAR38;
                return 0;
            }
            memcpy(VAR2->VAR61, VAR55, VAR56);
            VAR2->VAR62 = VAR56;
            VAR2->VAR14->VAR15 = 1;
        }
# endif

        else if (VAR8 == VAR63) {
            unsigned VAR64;

            
            if (!VAR2->VAR65->VAR66) {
                *VAR6 = VAR45;
                return 0;
            }
            if (VAR9 < 4) {
                *VAR6 = VAR33;
                return 0;
            }
            
            VAR64 = VAR10[0];
            VAR64 <<= 8;
            VAR64 |= VAR10[1];
            if (VAR64 != (unsigned)VAR9 - 2) {
                *VAR6 = VAR33;
                return 0;
            }
            VAR64 = VAR10[2];
            if (VAR64 != (unsigned)VAR9 - 3) {
                *VAR6 = VAR33;
                return 0;
            }
            if (VAR2->VAR14->VAR17)
                FUN2(VAR2->VAR14->VAR17);
            VAR2->VAR14->VAR17 = FUN5(VAR64);
            if (!VAR2->VAR14->VAR17) {
                *VAR6 = VAR38;
                return 0;
            }
            memcpy(VAR2->VAR14->VAR17, VAR10 + 3, VAR64);
            VAR2->VAR14->VAR67 = VAR64;
        }

        else if (VAR8 == VAR68) {
            if (!FUN11(VAR2, VAR10, VAR9, VAR6))
                return 0;
            VAR12 = 1;
        }
# ifndef VAR18
        else if (VAR8 == VAR69) {
            switch (VAR10[0]) {
            case 0x01:         
                VAR2->VAR19 |= VAR20;
                break;
            case 0x02:         
                VAR2->VAR19 |= VAR20;
                VAR2->VAR19 |= VAR21;
                break;
            default:
                *VAR6 = VAR70;
                return 0;
            }
        }
# endif
# ifndef VAR71
        else if (FUN12(VAR2) && VAR8 == VAR72) {
            if (FUN13(VAR2, VAR10, VAR9, VAR6))
                return 0;
        }
# endif
        
        else if (FUN14(VAR2, 0, VAR8, VAR10, VAR9, VAR6) <= 0)
            return 0;

        VAR10 += VAR9;
    }

    if (VAR10 != VAR4 + VAR5) {
        *VAR6 = VAR23;
        return 0;
    }

    if (!VAR2->VAR34 && VAR11 == 1) {
        if (VAR2->VAR27) {
            if (VAR2->VAR35->VAR27 == NULL) {
                VAR2->VAR35->VAR27 = FUN15(VAR2->VAR27);
                if (!VAR2->VAR35->VAR27) {
                    *VAR6 = VAR73;
                    return 0;
                }
            } else {
                *VAR6 = VAR23;
                return 0;
            }
        }
    }

    *VAR3 = VAR10;

 VAR22:

    
    if (!VAR12 && !(VAR2->VAR74 & VAR75)
        && !(VAR2->VAR74 & VAR76)) {
        *VAR6 = VAR77;
        FUN16(VAR78,
               VAR79);
        return 0;
    }

    return 1;
}