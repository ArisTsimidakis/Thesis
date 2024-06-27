static struct VAR1 *FUN1(struct VAR2 *VAR3,
                                        struct VAR4 *VAR5,
                                        const char *VAR6)
{
    struct VAR1 *VAR7;
    char *VAR8;
    char VAR9[VAR10];

    if (!VAR5->VAR11[0])
        return NULL;

    VAR7 = FUN2(sizeof(*VAR7));
    if (!VAR7)
        return NULL;

    FUN3(VAR9, sizeof(VAR9), VAR6, VAR5->VAR11);
    VAR7->VAR12 = FUN4(VAR9);
    if (!VAR7->VAR12) {
        FUN5(VAR7);
        return NULL;
    }

    if (VAR5->VAR13[0]) {
        VAR7->VAR14 = FUN6(VAR5->VAR13, NULL, 10);
        VAR8 = strchr(VAR5->VAR13, '');
        if (VAR8)
            VAR7->VAR15 = FUN6(VAR8+1, NULL, 10);
    } else {
        
        VAR7->VAR14 = -1;
    }

    FUN7(&VAR3->VAR16, &VAR3->VAR17, VAR7);

    return VAR7;
}