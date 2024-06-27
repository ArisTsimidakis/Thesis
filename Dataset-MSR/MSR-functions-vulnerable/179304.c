FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    krb5_error_code VAR5 = VAR6;
    char **VAR7, **VAR8, *VAR9=NULL;
    VAR10 *VAR11 = NULL, *VAR12 = NULL;
    char *VAR13 = NULL;

    
    if (FUN2(VAR2->VAR14, VAR15) &&
        !FUN2(VAR2->VAR14, VAR16) &&
        FUN3(VAR17, VAR2->VAR18) == 2) {

        VAR11 = FUN4(VAR17, VAR2->VAR18, 0);
        VAR12 = FUN4(VAR17, VAR2->VAR18, 1);

        VAR13 = calloc(1,VAR11->VAR19+1);
        if (!VAR13) {
             VAR5 = VAR20;
             goto VAR21;
         }

        FUN5(VAR13,VAR11->VAR22,VAR11->VAR19+1);




 
         if ((FUN6(VAR17, VAR2->VAR18) == VAR23 ||
              FUN6(VAR17, VAR2->VAR18) == VAR24 ||
             (FUN6(VAR17, VAR2->VAR18) == VAR25 &&
              VAR26->VAR27 != NULL &&
              (FUN7(VAR26->VAR27,
                                         VAR13) == VAR28 ||
               FUN7(VAR26->VAR27,
                                         VAR29) == VAR28))) &&
            (VAR26->VAR30 == NULL ||
             (FUN7(VAR26->VAR30,
                                        VAR29) == VAR31 &&
              FUN7(VAR26->VAR30,
                                        VAR13) == VAR31))) {

            if (memchr(VAR12->VAR22, '', VAR12->VAR19) == NULL)
                goto VAR21;
            VAR9 = calloc(1, VAR12->VAR19+1);
            if (!VAR9) {
                 VAR5 = VAR20;
                 goto VAR21;
             }

            FUN5(VAR9, VAR12->VAR22,VAR12->VAR19+1);




             VAR5 = FUN8(VAR17, VAR9, &VAR7);
             free(VAR9);
             if (VAR5) {
                
                FUN9(VAR17, VAR5, "");
                goto VAR21;
            }
            if (VAR7 == 0) {
                VAR5 = VAR6;
                goto VAR21;
            }
            
            if (VAR7[0] == 0 ||
                FUN10(VAR2->VAR18->VAR32, VAR7[0])) {
                free(VAR7[0]);
                free(VAR7);
                VAR5 = VAR6;
                goto VAR21;
            }
            
            VAR5 = FUN11(VAR17, VAR4,
                                          (*VAR2->VAR18).VAR32.VAR19,
                                          (*VAR2->VAR18).VAR32.VAR22,
                                          "", VAR7[0], (char *)0);
            for (VAR8 = VAR7; *VAR8; VAR8++)
                free(*VAR8);
        }
    }
VAR21:
    free(VAR13);

    return VAR5;
}