FUN1(krb5_context VAR1,
                          pkinit_identity_crypto_context VAR2,
                          unsigned char *VAR3,
                          unsigned int VAR4,
                          unsigned char **VAR5,
                          unsigned int *VAR6)
{
    CK_OBJECT_HANDLE VAR7;
    CK_ULONG VAR8;
    CK_MECHANISM VAR9;
    unsigned char *VAR10;
    int VAR11;

    if (FUN2(VAR1, VAR2)) {
        FUN3("");
        return VAR12;
    }

    FUN4(VAR2, VAR13, &VAR7);

    VAR9.VAR14 = VAR15;
    VAR9.VAR16 = NULL;
    VAR9.VAR17 = 0;

    if ((VAR11 = VAR2->VAR18->FUN5(VAR2->VAR19, &VAR9,
                                              VAR7)) != VAR20) {
        FUN3("", (int) VAR11);
        return VAR12;
    }
    FUN3("", VAR4);
    VAR10 = malloc((VAR21) VAR4);
    if (VAR10 == NULL)
        return VAR22;
    VAR8 = VAR4;
    FUN3("",
             (void *) VAR2->VAR19, (void *) VAR3, (int) VAR4,
             (void *) VAR10, (void *) &VAR8, (int) VAR8);
    if ((VAR11 = FUN6(VAR2, VAR3, (VAR23) VAR4,
                              VAR10, &VAR8)) != VAR20) {
        FUN3("", FUN7(VAR11));
        if (VAR11 == VAR24)
            FUN3("", (int) VAR4, (int) VAR8);
        return VAR12;
    }
    FUN3("", (int) VAR4, (int) VAR8);
    *VAR6 = VAR8;
    *VAR5 = VAR10;

    return 0;
}