static av_cold int FUN1(VAR1 *VAR2)
{
    VAR3       *VAR4 = VAR2->VAR5;
    int VAR6;

    FUN2(VAR4);

    FUN3(&VAR4->VAR7);

    FUN3(&VAR4->VAR8);

    for (VAR6 = 0; VAR6 < 3; VAR6++) {
        FUN3(&VAR4->VAR9[VAR6]);
        FUN3(&VAR4->VAR10[VAR6]);
    }
    FUN4(&VAR4->VAR11);

    for (VAR6 = 0; VAR6 < FUN5(VAR4->VAR12); VAR6++) {
        FUN6(VAR4, &VAR4->VAR12[VAR6], ~0);
        FUN4(&VAR4->VAR12[VAR6].VAR13);
    }

    FUN7(&VAR4->VAR14);

    FUN3(&VAR4->VAR15.VAR16);
    FUN3(&VAR4->VAR15.VAR17);
    FUN3(&VAR4->VAR15.VAR18);

    for (VAR6 = 1; VAR6 < VAR4->VAR19; VAR6++) {
        VAR20 *VAR21 = VAR4->VAR22[VAR6];
        if (VAR21) {
            FUN3(&VAR4->VAR22[VAR6]);
            FUN3(&VAR4->VAR23[VAR6]);
        }
    }
    if (VAR4->VAR24 == VAR4->VAR22[0])
        VAR4->VAR24 = NULL;
    FUN3(&VAR4->VAR22[0]);

    FUN8(&VAR4->VAR25);

    return 0;
}