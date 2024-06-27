int FUN1(char *VAR1)
{
    int VAR2;
    size_t VAR3 = 0;
    char VAR4[1024], VAR5[1024];
    char *VAR6;
    VAR7 *VAR8, *VAR9;
    VAR10 *VAR11;
    json_error_t VAR12;

    sprintf(VAR4, "", VAR1, VAR13);
    if (!(VAR8 = fopen(VAR4, ""))) {
        fprintf(VAR14, ""%VAR15\"", VAR4);
        return 2;
    }

    sprintf(VAR4, "", VAR1, VAR13);
    VAR9 = fopen(VAR4, "");
    if (VAR9) {
        FUN2(VAR9);
        fclose(VAR9);
    }

    if (VAR16.VAR17 < 0 || VAR16.VAR17 > 255) {
        fprintf(VAR14, "", VAR16.VAR17);
        return 2;
    }

    if (VAR16.VAR17)
        VAR3 |= FUN3(VAR16.VAR17);

    if (VAR16.VAR18)
        VAR3 |= VAR19;

    if (VAR16.VAR20)
        VAR3 |= VAR21;

    if (VAR16.VAR22)
        VAR3 |= VAR23;

     if (VAR16.VAR24)
         VAR3 |= VAR25;
 






     if (VAR16.VAR26) {
         
         VAR6 = FUN4(VAR8);
        VAR11 = FUN5(FUN6(VAR6), 0, &VAR12);
        free(VAR6);
    }
    else
        VAR11 = FUN7(VAR8, 0, &VAR12);

    fclose(VAR8);

    if (!VAR11) {
        sprintf(VAR5, "",
                VAR12.VAR27, VAR12.VAR28, VAR12.VAR29,
                VAR12.VAR30);

        VAR2 = FUN8(VAR5, VAR1, "");
        return VAR2;
    }

    VAR6 = FUN9(VAR11, VAR3);
    VAR2 = FUN8(VAR6, VAR1, "");
    free(VAR6);
    FUN10(VAR11);

    return VAR2;
}