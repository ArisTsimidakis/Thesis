int FUN1(VAR1 **VAR2, const unsigned char **VAR3, long VAR4,
                     const VAR5 *VAR6,
                     int VAR7, int VAR8, char VAR9, VAR10 *VAR11)
{
    const VAR12 *VAR13, *VAR14 = NULL;
    const VAR15 *VAR16;
    const VAR17 *VAR18;
    const VAR19 *VAR20 = VAR6->VAR21;
    VAR22 *VAR23;
    const unsigned char *VAR24 = NULL, *VAR25;
    unsigned char *VAR26 = NULL;   
    unsigned char VAR27 = 0, VAR28;
    char VAR29, VAR30, VAR31, VAR32;
    long VAR33;
    int VAR34;
    int VAR35;
    int VAR36 = 0;
    VAR1 **VAR37, *VAR38;
    if (!VAR2)
        return 0;
    if (VAR20 && VAR20->VAR23)
        VAR23 = VAR20->VAR23;
    else
        VAR23 = 0;

    switch (VAR6->VAR39) {
    case VAR40:
        if (VAR6->VAR41) {
            
            if ((VAR7 != -1) || VAR9) {
                FUN2(VAR42,
                        VAR43);
                goto VAR44;
            }
            return FUN3(VAR2, VAR3, VAR4,
                                        VAR6->VAR41, VAR9, VAR11);
        }
        return FUN4(VAR2, VAR3, VAR4, VAR6,
                                     VAR7, VAR8, VAR9, VAR11);
        break;

    case VAR45:
        VAR24 = *VAR3;
        
        VAR36 = FUN5(NULL, &VAR35, &VAR28, NULL, NULL,
                              &VAR24, VAR4, -1, 0, 1, VAR11);
        if (!VAR36) {
            FUN2(VAR42, VAR46);
            goto VAR44;
        }

        
        if (VAR28 != VAR47) {
            
            if (VAR9)
                return -1;
            FUN2(VAR42, VAR48);
            goto VAR44;
        }
        
        if (!(FUN6(VAR35) & VAR6->VAR49)) {
            
            if (VAR9)
                return -1;
            FUN2(VAR42, VAR50);
            goto VAR44;
        }
        return FUN4(VAR2, VAR3, VAR4, VAR6, VAR35, 0, 0, VAR11);

    case VAR51:
        
        VAR18 = VAR6->VAR21;
        return VAR18->FUN7(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR11);

    case VAR52:
        
        VAR16 = VAR6->VAR21;

        
        if (VAR9) {
            int VAR53;
            VAR24 = *VAR3;
            if (VAR7 == -1)
                VAR53 = VAR6->VAR49;
            else
                VAR53 = VAR7;
            

            VAR36 = FUN5(NULL, NULL, NULL, NULL, NULL,
                                  &VAR24, VAR4, VAR53, VAR8, 1, VAR11);
            if (!VAR36) {
                FUN2(VAR42, VAR46);
                goto VAR44;
            }
            if (VAR36 == -1)
                return -1;
        }

        

        if (VAR7 != -1) {
            VAR26 = *(unsigned char **)VAR3;
            VAR27 = *VAR26;
            if (VAR24 == NULL) {
                FUN2(VAR42, VAR46);
                goto VAR44;
            }
            *VAR26 = (unsigned char)((*VAR24 & VAR54)
                                  | VAR6->VAR49);
        }

        VAR38 = VAR16->FUN8(VAR2, VAR3, VAR4);

        if (VAR7 != -1)
            *VAR26 = VAR27;

        if (VAR38)
            return 1;

        FUN2(VAR42, VAR46);
        goto VAR44;

     case VAR55:
         if (VAR23 && !FUN9(VAR56, VAR2, VAR6, NULL))
             goto VAR57;



        

        if (!*VAR2 && !FUN10(VAR2, VAR6)) {




















             FUN2(VAR42, VAR46);
             goto VAR44;
         }
            VAR36 = FUN3(VAR37, &VAR24, VAR4, VAR13, 1, VAR11);
            
            if (VAR36 == -1)
                continue;
            
            if (VAR36 > 0)
                break;
            
            VAR14 = VAR13;
            FUN2(VAR42, VAR46);
            goto VAR44;
        }

        
        if (VAR34 == VAR6->VAR58) {
            
            if (VAR9) {
                
                FUN11(VAR2, VAR6);
                return -1;
            }
            FUN2(VAR42, VAR59);
            goto VAR44;
        }

        FUN12(VAR2, VAR34, VAR6);
        *VAR3 = VAR24;
        if (VAR23 && !FUN9(VAR60, VAR2, VAR6, NULL))
            goto VAR57;
        return 1;

    case VAR61:
    case VAR62:
        VAR24 = *VAR3;
        VAR33 = VAR4;

        
        if (VAR7 == -1) {
            VAR7 = VAR63;
            VAR8 = VAR47;
        }
        
        VAR36 = FUN5(&VAR4, NULL, NULL, &VAR29, &VAR31,
                              &VAR24, VAR4, VAR7, VAR8, VAR9, VAR11);
        if (!VAR36) {
            FUN2(VAR42, VAR46);
            goto VAR44;
        } else if (VAR36 == -1)
            return -1;
        if (VAR20 && (VAR20->VAR64 & VAR65)) {
            VAR4 = VAR33 - (VAR24 - *VAR3);
            VAR30 = 1;
        }
        
        else
            VAR30 = VAR29;
        if (!VAR31) {
            FUN2(VAR42, VAR66);
            goto VAR44;
        }

        if (!*VAR2 && !FUN10(VAR2, VAR6)) {
            FUN2(VAR42, VAR46);
            goto VAR44;
        }

        if (VAR23 && !FUN9(VAR56, VAR2, VAR6, NULL))
            goto VAR57;

        
        for (VAR34 = 0, VAR13 = VAR6->VAR41; VAR34 < VAR6->VAR58; VAR34++, VAR13++) {
            const VAR12 *VAR67;
            VAR1 **VAR68;
         if (VAR23 && !FUN9(VAR56, VAR2, VAR6, NULL))
             goto VAR57;
 






















         
         for (VAR34 = 0, VAR13 = VAR6->VAR41; VAR34 < VAR6->VAR58; VAR34++, VAR13++) {
             const VAR12 *VAR67;
            }
            
            if (VAR34 == (VAR6->VAR58 - 1))
                VAR32 = 0;
            else
                VAR32 = (char)(VAR67->VAR64 & VAR69);
            

            VAR36 = FUN3(VAR68, &VAR24, VAR4, VAR67, VAR32, VAR11);
            if (!VAR36) {
                VAR14 = VAR67;
                goto VAR44;
            } else if (VAR36 == -1) {
                
                FUN13(VAR68, VAR67);
                continue;
            }
            
            VAR4 -= VAR24 - VAR25;
        }

        
        if (VAR29 && !FUN14(&VAR24, VAR4)) {
            FUN2(VAR42, VAR70);
            goto VAR44;
        }
        
        if (!VAR30 && VAR4) {
            FUN2(VAR42, VAR71);
            goto VAR44;
        }

        
        for (; VAR34 < VAR6->VAR58; VAR13++, VAR34++) {
            const VAR12 *VAR67;
            VAR67 = FUN15(VAR2, VAR13, 1);
            if (!VAR67)
                goto VAR44;
            if (VAR67->VAR64 & VAR69) {
                VAR1 **VAR68;
                VAR68 = FUN16(VAR2, VAR67);
                FUN13(VAR68, VAR67);
            } else {
                VAR14 = VAR67;
                FUN2(VAR42, VAR72);
                goto VAR44;
            }
        }
        
        if (!FUN17(VAR2, *VAR3, VAR24 - *VAR3, VAR6))
            goto VAR57;
        *VAR3 = VAR24;
        if (VAR23 && !FUN9(VAR60, VAR2, VAR6, NULL))
            goto VAR57;
        return 1;

    default:
        return 0;
    }