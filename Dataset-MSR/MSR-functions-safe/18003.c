FUN1(VAR1 *VAR2, Jbig2Options VAR3, VAR4 *VAR5, Jbig2ErrorCallback VAR6, void *VAR7)
{
    VAR8 *VAR9;

    if (VAR2 == NULL)
        VAR2 = &VAR10;
    if (VAR6 == NULL)
        VAR6 = &VAR11;

    VAR9 = (VAR8 *) FUN2(VAR2, sizeof(VAR8), 1);
    if (VAR9 == NULL) {
        FUN3(VAR7, "", VAR12, -1);
        return VAR9;
    }

    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR5 = (const VAR8 *)VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;

    VAR9->VAR13 = (VAR3 & VAR14) ? VAR15 : VAR16;

    VAR9->VAR17 = NULL;

    VAR9->VAR18 = 0;
    VAR9->VAR19 = 16;
    VAR9->VAR20 = FUN4(VAR9, VAR21 *, VAR9->VAR19);
    if (VAR9->VAR20 == NULL) {
        FUN3(VAR7, "", VAR12, -1);
        FUN5(VAR2, VAR9);
        return VAR9;
    }
    VAR9->VAR22 = 0;

    VAR9->VAR23 = 0;
    VAR9->VAR24 = 4;
    VAR9->VAR25 = FUN4(VAR9, VAR26, VAR9->VAR24);
    if (VAR9->VAR25 == NULL) {
        FUN3(VAR7, "", VAR12, -1);
        FUN5(VAR2, VAR9->VAR20);
        FUN5(VAR2, VAR9);
        return VAR9;
    }
    {
        int VAR27;

        for (VAR27 = 0; VAR27 < VAR9->VAR24; VAR27++) {
            VAR9->VAR25[VAR27].VAR13 = VAR28;
            VAR9->VAR25[VAR27].VAR29 = 0;
            VAR9->VAR25[VAR27].VAR30 = NULL;
        }
    }

    return VAR9;
}