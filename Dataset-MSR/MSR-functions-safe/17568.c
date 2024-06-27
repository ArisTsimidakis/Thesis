FUN1(ClientPtr VAR1)
{
    VAR2 *VAR3, *VAR4;
    int VAR5 = VAR6, VAR7;

    FUN2(VAR8);
    char *VAR9;
    int VAR10;

    FUN3(VAR8);

    FUN4(VAR3, VAR11->VAR3, VAR1, VAR12);
    FUN4(VAR4, VAR11->VAR4, VAR1, VAR13);

    VAR10 = (VAR1->VAR14 << 2) - sizeof(VAR8);

    if (VAR10 && (VAR9 = (char *) malloc(VAR10))) {
        memcpy(VAR9, VAR11 + 1, VAR10);

        FUN5(VAR7) {
            if (VAR7)
                memcpy(VAR11 + 1, VAR9, VAR10);
            if (VAR4->VAR15.VAR16.VAR17) {
                int VAR18 = VAR19.VAR20[VAR7]->VAR21;
                int VAR22 = VAR19.VAR20[VAR7]->VAR23;

                if (VAR18 || VAR22) {
                    VAR24 *VAR25 = (VAR24 *) (VAR11 + 1);
                    int VAR26 = VAR10 / sizeof(VAR24);

                    while (VAR26--) {
                        VAR25->VAR27.VAR21 -= VAR18;
                        VAR25->VAR27.VAR23 -= VAR22;
                        VAR25->VAR28.VAR21 -= VAR18;
                        VAR25->VAR28.VAR23 -= VAR22;
                        VAR25->VAR29.VAR21 -= VAR18;
                        VAR25->VAR29.VAR23 -= VAR22;
                        VAR25++;
                    }
                }
            }

            VAR11->VAR3 = VAR3->VAR30[VAR7].VAR31;
            VAR11->VAR4 = VAR4->VAR30[VAR7].VAR31;
            VAR5 = (*VAR32[VAR33]) (VAR1);

            if (VAR5 != VAR6)
                break;
        }

        free(VAR9);
    }

    return VAR5;
}