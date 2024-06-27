void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR1 *VAR5;

    FUN2(&VAR2->VAR6);
    FUN2(&VAR2->VAR7);
    FUN2(&VAR2->VAR8);
    FUN2(&VAR2->VAR9[0]);
    FUN2(&VAR2->VAR9[1]);
    FUN2(&VAR2->VAR10);
    FUN2(&VAR2->VAR11);
    FUN2(&VAR2->VAR12);
    VAR2->VAR13 = NULL;
    FUN2(&VAR2->VAR14);

    FUN2(&VAR2->VAR15);
    FUN2(&VAR2->VAR16);

    FUN3(&VAR2->VAR17);
    FUN3(&VAR2->VAR18);
    FUN3(&VAR2->VAR19);
    FUN3(&VAR2->VAR20);

     if (VAR3 && VAR2->VAR21) {
         for (VAR4 = 0; VAR4 < VAR22; VAR4++)
             FUN4(VAR2, &VAR2->VAR21[VAR4]);


         FUN2(&VAR2->VAR21);
     } else if (VAR2->VAR21) {
         for (VAR4 = 0; VAR4 < VAR22; VAR4++)
            VAR2->VAR21[VAR4].VAR23 = 1;
    }

    VAR2->VAR24 = NULL;

    for (VAR4 = 0; VAR4 < VAR25; VAR4++) {
        VAR5 = VAR2->VAR26[VAR4];
        if (!VAR5)
            continue;
        FUN2(&VAR5->VAR27[1]);
        FUN2(&VAR5->VAR27[0]);
        FUN2(&VAR5->VAR28);
        FUN2(&VAR5->VAR29);
        FUN2(&VAR5->VAR30);
        FUN2(&VAR5->VAR31.VAR32);
        FUN2(&VAR5->VAR31.VAR33);
        FUN2(&VAR5->VAR31.VAR34);
        FUN2(&VAR5->VAR31.VAR35);
        FUN2(&VAR5->VAR31.VAR36);

        if (VAR3) {
            FUN2(&VAR5->VAR37[1]);
            FUN2(&VAR5->VAR37[0]);
            VAR5->VAR38[0] = 0;
            VAR5->VAR38[1] = 0;
        }
        if (VAR4)
            FUN2(&VAR2->VAR26[VAR4]);
    }
}