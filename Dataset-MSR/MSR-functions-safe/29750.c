static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    const VAR7 *VAR8 = FUN2(VAR2->VAR9);
    int VAR10 = VAR8->VAR11;
    int VAR12 = VAR8->VAR13;

    FUN3(&VAR4->VAR14);
    VAR4->VAR14 = FUN4((FUN5(VAR2->VAR15, 16) * (VAR4->VAR16 + 1) / 2 + 32) * sizeof(VAR17));
    if (!VAR4->VAR14)
        return FUN6(VAR18);

    VAR4->VAR19 = FUN7(VAR2->VAR15, VAR10);
    VAR4->VAR20 = FUN7(VAR2->VAR21, VAR12);
    VAR4->VAR22 = FUN8(((((VAR4->VAR16 >> VAR10) + (VAR4->VAR16 >> VAR12)) / 2 ) + 1) & ~1, 4, 32);

    return 0;
}