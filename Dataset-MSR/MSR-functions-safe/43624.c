FUN1(int) FUN2(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    VAR6 *VAR7;
    header_struct VAR8;
    VAR9 *VAR10;
    int VAR11;
    char *VAR12 = NULL, *VAR13;
    apr_size_t VAR14 = 0;
    apr_size_t VAR15;
    long VAR16 = -1; 

    if (VAR2->VAR17 != VAR18) {
        return VAR19;
    }

    
    while (VAR2->VAR20) {
        VAR2 = VAR2->VAR20;
    }
    VAR4 = FUN3(VAR2->VAR21->VAR22);

    if (VAR4->VAR23 == VAR24) {
        FUN4(VAR2->VAR25, "",
                      "");
        return VAR26;
    }

    if (VAR4->VAR23 == VAR27)
        
        VAR11 = VAR28;
    else
        VAR11 = VAR29;

    if ((VAR5 = FUN5(VAR2, VAR11))) {
        if (VAR5 == VAR30)
            FUN4(VAR2->VAR25, "",
                          "");
        return VAR5;
    }

    if (FUN6(VAR2)) {

        if (VAR2->VAR31 > 0) {
            if (VAR2->VAR31 > 65536) {
                FUN4(VAR2->VAR25, "",
                       "");
                return VAR30;
            }
            
            VAR15 = (VAR32)VAR2->VAR31 + 32;
        }
        else {
            
            VAR15 = 73730;
        }

        VAR13 = VAR12 = FUN7(VAR2->VAR33, VAR15);

        
        while ((!VAR14 || VAR15 >= 32) &&
               (VAR16 = FUN8(VAR2, VAR13, VAR15)) > 0) {
            VAR14 += VAR16;
            VAR15 -= VAR16;
            VAR13 += VAR16;
        }
        if (VAR16 > 0 && VAR15 < 32) {
            
            while (FUN8(VAR2, VAR12, VAR14) > 0)
                ;
            FUN4(VAR2->VAR25, "",
                   "");
            return VAR30;
        }

        if (VAR16 < 0) {
            return VAR34;
        }
    }

    FUN9(VAR2, "");

    

    VAR7 = FUN10(VAR2->VAR33, VAR2->VAR35->VAR36);
#if VAR37
    {
        char *VAR38;
        apr_size_t VAR39;
        VAR39 = strlen(VAR2->VAR40);
        VAR38 = FUN11(VAR2->VAR33, VAR2->VAR40, VAR39);
        FUN12(VAR38, VAR39);
        FUN13(VAR7, NULL, NULL, VAR38, VAR41, NULL);
    }
#else
    FUN13(VAR7, NULL, NULL, VAR2->VAR40, VAR42, NULL);
#endif
    VAR8.VAR33 = VAR2->VAR33;
    VAR8.VAR7 = VAR7;
    FUN14((int (*) (void *, const char *, const char *))
                 VAR43, (void *) &VAR8, VAR2->VAR44, NULL);
    FUN15(VAR7, NULL, NULL, VAR41);

    
    if (VAR14) {
        VAR10 = FUN16(VAR12, VAR14,
                                   VAR2->VAR33, VAR7->VAR36);
        FUN17(VAR7, VAR10);
    }

    FUN18(VAR2->VAR45,  VAR7);

    return VAR46;
}