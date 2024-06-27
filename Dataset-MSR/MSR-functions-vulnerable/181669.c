static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4,
                        const char *VAR5, const char *VAR6,
                        const char *VAR7, int *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
     int VAR12, VAR13;
     char VAR14[VAR15] = "";
     char *VAR16 = NULL, *VAR17 = NULL;

    int64_t VAR18 = VAR10->VAR18;


     int VAR19 = 0;
     const char *VAR20;
     int VAR21 = 0;

    
    VAR12 = VAR2->VAR22 & VAR23;

    if (VAR10->VAR24) {
        
        VAR12            = 1;
        VAR10->VAR25 = 0;
    }

    if (VAR10->VAR20)
        VAR20 = VAR10->VAR20;
    else
        VAR20 = VAR12 ? "" : "";

    VAR16      = FUN2(&VAR10->VAR26, VAR6,
                                                VAR4, VAR20);
    VAR17 = FUN2(&VAR10->VAR27, VAR7,
                                                VAR4, VAR20);
    if (VAR12 && !VAR10->VAR24) {
        VAR21 = VAR10->VAR21;
        
        if (VAR6 && *VAR6 &&
            VAR10->VAR26.VAR28 == VAR29 &&
            VAR10->VAR30 != 401)
            VAR21 = 1;
    }

#if VAR31
    if (strcmp(VAR10->VAR32, VAR33)) {
        FUN3(VAR10, VAR34, "");
        VAR10->VAR35 = FUN4(VAR10->VAR32);
    }
#endif
    
    if (!FUN5(VAR10->VAR14, ""))
        VAR19 += FUN6(VAR14 + VAR19, sizeof(VAR14) - VAR19,
                           "", VAR10->VAR35);
    if (!FUN5(VAR10->VAR14, ""))
        VAR19 += FUN7(VAR14 + VAR19, "VAR36: *
    if (VAR10->VAR14)
        FUN7(VAR14 + VAR19, VAR10->VAR14, sizeof(VAR14) - VAR19);

    snprintf(VAR10->VAR37, sizeof(VAR10->VAR37),
             ""
             ""
             ""
             ""
             ""
             "",
             VAR20,
             VAR3,
             VAR12 && VAR10->VAR25 ? "" : "",
             VAR14,
             VAR16 ? VAR16 : "",
             VAR17 ? "" : "", VAR17 ? VAR17 : "");

    FUN3(VAR2, VAR38, "", VAR10->VAR37);

    if ((VAR13 = FUN8(VAR10->VAR39, VAR10->VAR37, strlen(VAR10->VAR37))) < 0)
        goto VAR40;

    if (VAR10->VAR24)
        if ((VAR13 = FUN8(VAR10->VAR39, VAR10->VAR24, VAR10->VAR41)) < 0)
            goto VAR40;

    
    VAR10->VAR42          = VAR10->VAR37;
    VAR10->VAR43          = VAR10->VAR37;
     VAR10->VAR44       = 0;
     VAR10->VAR18              = 0;
     VAR10->VAR45    = 0;

    VAR10->VAR46         = -1;


     VAR10->VAR47        = 0;
     VAR10->VAR48 = 0;
     VAR10->VAR49       = 0;
    if (VAR12 && !VAR10->VAR24 && !VAR21) {
        
        VAR10->VAR30 = 200;
        VAR13 = 0;
        goto VAR40;
    }

    
    VAR13 = FUN9(VAR2, VAR8);
    if (VAR13 < 0)
        goto VAR40;

    if (*VAR8)
        VAR10->VAR18 = VAR18;

    VAR13 = (VAR18 == VAR10->VAR18) ? 0 : -1;
VAR40:
    FUN10(&VAR16);
    FUN10(&VAR17);
    return VAR13;
}