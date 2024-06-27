FUN1(VAR1 * VAR2, VAR3 * VAR4,
                      uint VAR5, const VAR6 * VAR7, bool VAR8,
                      VAR9 *VAR10)
{
    VAR11 *const VAR12 = (VAR11 *) VAR2;
    uint VAR13 = FUN2(VAR4);

    if (VAR13 == 0)
        FUN3(VAR14);
    VAR13 -= VAR5 + 1;
    if (VAR13 & 1)
        FUN3(VAR15);
    VAR2->VAR16.VAR17.read = VAR18;
    VAR2->VAR19 = VAR20;
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = VAR5;
    return FUN4(VAR12, VAR13 >> 1, VAR7, VAR8, VAR10);
}