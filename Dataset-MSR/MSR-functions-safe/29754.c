static av_cold int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;

    VAR4->VAR6  = (1 << 15) / VAR4->VAR7;
    VAR4->VAR8  = FUN2((VAR4->VAR8 + 1) & ~1, 4, 32);

    VAR4->VAR9   = VAR10;
    VAR4->VAR11 = VAR12;

    if (VAR13)
        FUN3(VAR4);

    FUN4(VAR2, VAR14, "", VAR4->VAR7, VAR4->VAR8);

    return 0;
}