FUN1(VAR1 *VAR2, VAR3 *VAR4,
                  VAR5 *VAR6)
{
    krb5_error_code VAR7 = VAR8;
    char **VAR9 = NULL, *VAR10 = NULL;
    krb5_data VAR11 = VAR4->VAR12->VAR13;

    if (!FUN2(VAR2, VAR4))
        goto VAR14;

    VAR10 = FUN3(FUN4(VAR15,
                                                VAR4->VAR12, 1));
    if (VAR10 == NULL) {
        VAR7 = VAR16;
        goto VAR14;
    }
    
    if (strchr(VAR10, '') == NULL)
        goto VAR14;
    VAR7 = FUN5(VAR15, VAR10, &VAR9);
    if (VAR7) {
        
        FUN6(VAR15, VAR7, "");
         goto VAR14;
     }
     

    if (VAR9 == NULL || VAR9[0] == '' ||


         FUN7(VAR11, VAR9[0])) {
         VAR7 = VAR8;
         goto VAR14;
    }
    VAR7 = FUN8(VAR15, VAR6,
                                  VAR11.VAR17, VAR11.VAR18,
                                  "", VAR9[0], (char *)0);
VAR14:
    FUN9(VAR15, VAR9);
    free(VAR10);

    return VAR7;
}