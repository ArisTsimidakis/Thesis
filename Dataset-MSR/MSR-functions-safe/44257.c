int FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4,
                    const VAR1 *VAR5, VAR6 *VAR7)
{
    int VAR8 = 0;
    const int VAR9 = FUN2(VAR5) + 1;
    int *VAR10 = NULL;
    FUN3(VAR3);
    FUN3(VAR4);
    FUN3(VAR5);
    if ((VAR10 = FUN4(sizeof(*VAR10) * VAR9)) == NULL)
        goto VAR11;
    VAR8 = FUN5(VAR5, VAR10, VAR9);
    if (!VAR8 || VAR8 > VAR9) {
        FUN6(VAR12, VAR13);
        goto VAR11;
    }
    VAR8 = FUN7(VAR2, VAR3, VAR4, VAR10, VAR7);
    FUN3(VAR2);
 VAR11:
    FUN8(VAR10);
    return VAR8;
}