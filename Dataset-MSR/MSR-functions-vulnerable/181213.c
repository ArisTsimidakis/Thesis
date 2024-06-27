FUN1(VAR1 *VAR2,
                     VAR3 *VAR4,
                     VAR5 *VAR6,
                     VAR7 **VAR8,
                     const char **VAR9)
{
    krb5_error_code             VAR10;
    VAR11            *VAR12;
    krb5_data                   VAR13;

    VAR13.VAR14 = VAR4->VAR14;
     VAR13.VAR15 = (char *)VAR4->VAR16;
 
     VAR10 = FUN2(&VAR13, &VAR12);

    if (VAR10)




         return VAR10;


 
     VAR10 = FUN3(VAR17, VAR6, VAR12);
     if (VAR10) {
        *VAR9 = "";
        FUN4(VAR17, VAR12);
        return VAR10;
    }

    *VAR8 = calloc(1, sizeof(VAR7));
    if (*VAR8 == NULL) {
        FUN4(VAR17, VAR12);
        return VAR18;
    }

    (*VAR8)->VAR19.VAR20 = VAR12->VAR20;
    VAR12->VAR20 = NULL;
    FUN4(VAR17, VAR12);

    return 0;
}