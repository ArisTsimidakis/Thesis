int FUN1(VAR1 *VAR2, int VAR3)
{
    unsigned char *VAR4, *VAR5;
    unsigned char VAR6[VAR7];
    unsigned char VAR8[VAR7];
    unsigned char VAR9[VAR10 * 2];
    unsigned char VAR11[VAR10 * 2];
    unsigned char *VAR12, *VAR13, *VAR14;
    VAR15 *VAR16;
    const VAR17 *VAR18;
#ifndef VAR19
    const VAR20 *VAR21;
#endif
    const VAR22 *VAR23;
    int VAR24;
    int *VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    int VAR30, VAR31, VAR32, VAR33, VAR34;
    int VAR35 = 0;

    VAR18 = VAR2->VAR36->VAR37.VAR38;
    VAR23 = VAR2->VAR36->VAR37.VAR39;
    VAR24 = VAR2->VAR36->VAR37.VAR40;
#ifndef VAR19
    VAR21 = VAR2->VAR36->VAR37.VAR41;
 #endif
 
     if (VAR3 & VAR42) {










         if (VAR2->VAR36->VAR37.VAR43->VAR44 & VAR45)
             VAR2->VAR46 |= VAR47;
         else
            VAR2->VAR46 &= ~VAR47;

        if (VAR2->VAR48 != NULL)
            VAR35 = 1;
        else if ((VAR2->VAR48 = FUN2()) == NULL)
            goto VAR49;
        else
            
            FUN3(VAR2->VAR48);
        VAR16 = VAR2->VAR48;
        VAR27 = FUN4(&VAR2->VAR50, NULL);
        if (VAR27 == NULL)
            goto VAR49;
#ifndef VAR19
        FUN5(VAR2->VAR51);
        VAR2->VAR51 = NULL;
        if (VAR21 != NULL) {
            VAR2->VAR51 = FUN6(VAR21->VAR52);
            if (VAR2->VAR51 == NULL) {
                FUN7(VAR53,
                       VAR54);
                goto VAR55;
            }
        }
#endif
        
        if (!FUN8(VAR2))
            FUN9(&VAR2->VAR56);
         VAR5 = &(VAR2->VAR36->VAR57[0]);
         VAR25 = &(VAR2->VAR36->VAR58);
     } else {










         if (VAR2->VAR36->VAR37.VAR43->VAR44 & VAR45)
             VAR2->VAR46 |= VAR59;
         else
            VAR2->VAR46 &= ~VAR59;
        if (VAR2->VAR60 != NULL && !FUN8(VAR2))
            VAR35 = 1;
        else if ((VAR2->VAR60 = FUN2()) == NULL)
            goto VAR49;
        VAR16 = VAR2->VAR60;
        if (FUN8(VAR2)) {
            VAR27 = FUN10();
            if (VAR27 == NULL)
                goto VAR49;
            VAR2->VAR61 = VAR27;
        } else {
            VAR27 = FUN4(&VAR2->VAR61, NULL);
            if (VAR27 == NULL)
                goto VAR49;
        }
#ifndef VAR19
        FUN5(VAR2->VAR62);
        VAR2->VAR62 = NULL;
        if (VAR21 != NULL) {
            VAR2->VAR62 = FUN6(VAR21->VAR52);
            if (VAR2->VAR62 == NULL) {
                FUN7(VAR53,
                       VAR54);
                goto VAR55;
            }
        }
#endif
        
        if (!FUN8(VAR2))
            FUN11(&VAR2->VAR56);
        VAR5 = &(VAR2->VAR36->VAR63[0]);
        VAR25 = &(VAR2->VAR36->VAR64);
    }

    if (VAR35)
        FUN3(VAR16);

    VAR4 = VAR2->VAR36->VAR37.VAR65;
    VAR31 = *VAR25 = VAR2->VAR36->VAR37.VAR66;

    VAR34 = FUN12(VAR18);
    VAR32 = VAR34;
    
    
    if (FUN13(VAR18) == VAR67)
        VAR33 = VAR68;
    else if (FUN13(VAR18) == VAR69)
        VAR33 = VAR70;
    else
        VAR33 = FUN14(VAR18);
    if ((VAR3 == VAR71) ||
        (VAR3 == VAR72)) {
        VAR12 = &(VAR4[0]);
        VAR30 = VAR31 + VAR31;
        VAR13 = &(VAR4[VAR30]);
        VAR30 += VAR32 + VAR32;
        VAR14 = &(VAR4[VAR30]);
        VAR30 += VAR33 + VAR33;
    } else {
        VAR30 = VAR31;
        VAR12 = &(VAR4[VAR30]);
        VAR30 += VAR31 + VAR32;
        VAR13 = &(VAR4[VAR30]);
        VAR30 += VAR32 + VAR33;
        VAR14 = &(VAR4[VAR30]);
        VAR30 += VAR33;
    }

    if (VAR30 > VAR2->VAR36->VAR37.VAR73) {
        FUN7(VAR53, VAR74);
        goto VAR55;
    }

    memcpy(VAR5, VAR12, VAR31);

    if (!(FUN15(VAR18) & VAR75)) {
        VAR29 = FUN16(VAR24, NULL,
                                       VAR5, *VAR25);
        if (VAR29 == NULL
            || FUN17(VAR27, NULL, VAR23, NULL, VAR29) <= 0) {
            FUN18(VAR29);
            FUN7(VAR53, VAR74);
            goto VAR55;
        }
        FUN18(VAR29);
    }
#ifdef VAR76
    printf("", VAR3);
    {
        int VAR77;
        for (VAR77 = 0; VAR77 < VAR31; VAR77++)
            printf("", VAR12[VAR77], ((VAR77 + 1) % 16) ? '' : '');
    }
#endif

    if (FUN13(VAR18) == VAR67) {
        if (!FUN19(VAR16, VAR18, NULL, VAR13, NULL, (VAR3 & VAR78))
            || !FUN20(VAR16, VAR79, VAR33, VAR14)) {
            FUN7(VAR53, VAR74);
            goto VAR55;
        }
    } else if (FUN13(VAR18) == VAR69) {
        int VAR80;
        if (VAR2->VAR36->VAR37.
            VAR43->VAR81 & (VAR82 | VAR83))
            VAR80 = 8;
        else
            VAR80 = 16;
        if (!FUN19(VAR16, VAR18, NULL, NULL, NULL, (VAR3 & VAR78))
            || !FUN20(VAR16, VAR84, 12, NULL)
            || !FUN20(VAR16, VAR85, VAR80, NULL)
            || !FUN20(VAR16, VAR86, VAR33, VAR14)
            || !FUN19(VAR16, NULL, NULL, VAR13, NULL, -1)) {
            FUN7(VAR53, VAR74);
            goto VAR55;
        }
    } else {
        if (!FUN19(VAR16, VAR18, NULL, VAR13, VAR14, (VAR3 & VAR78))) {
            FUN7(VAR53, VAR74);
            goto VAR55;
        }
    }
    
    if ((FUN15(VAR18) & VAR75) && *VAR25
        && !FUN20(VAR16, VAR87,
                                *VAR25, VAR5)) {
        FUN7(VAR53, VAR74);
        goto VAR55;
    }
#ifdef VAR88
    if (VAR2->VAR89) {
        int VAR90 = VAR3 & VAR78 ? VAR91 : 0;
        if (*VAR25)
            VAR2->FUN21(2, VAR2->VAR92, VAR90 | VAR93,
                            VAR5, *VAR25,
                            VAR2, VAR2->VAR94);
        if (VAR18->VAR95)
            VAR2->FUN21(2, VAR2->VAR92, VAR90 | VAR96,
                            VAR13, VAR18->VAR95, VAR2, VAR2->VAR94);
        if (VAR33) {
            if (FUN13(VAR18) == VAR67)
                VAR90 |= VAR97;
            else
                VAR90 |= VAR98;
            VAR2->FUN21(2, VAR2->VAR92, VAR90, VAR14, VAR33, VAR2, VAR2->VAR94);
        }
    }
#endif

#ifdef VAR76
    printf("", VAR3);
    {
        int VAR77;
        for (VAR77 = 0; VAR77 < FUN12(VAR18); VAR77++)
            printf("", VAR13[VAR77], ((VAR77 + 1) % 16) ? '' : '');
    }
    printf("");
    {
        int VAR77;
        for (VAR77 = 0; VAR77 < VAR33; VAR77++)
            printf("", VAR14[VAR77], ((VAR77 + 1) % 16) ? '' : '');
    }
    printf("");
#endif

    FUN22(VAR6, sizeof(VAR6));
    FUN22(VAR8, sizeof(VAR6));
    FUN22(VAR9, sizeof(VAR9));
    FUN22(VAR11, sizeof(VAR11));
    return (1);
 VAR49:
    FUN7(VAR53, VAR99);
 VAR55:
    FUN22(VAR6, sizeof(VAR6));
    FUN22(VAR8, sizeof(VAR6));
    FUN22(VAR9, sizeof(VAR9));
    FUN22(VAR11, sizeof(VAR11));
    return (0);
}