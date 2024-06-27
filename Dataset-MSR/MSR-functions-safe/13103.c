VAR1 FUN1(void *VAR2, const char *VAR3,
                               const char *VAR4, int *VAR5, VAR6 **VAR7)
{
    int VAR8;
    const VAR1 *VAR9;

    if (!VAR5) {
        VAR5 = &VAR8;
    }
    VAR9 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR7);
    if (!VAR9) {
        return 0;
    } else if (*VAR5 != 4) {
        FUN3(VAR7, "",
                   VAR10, VAR3, VAR4);
        *VAR5 = -VAR11;
        return 0;
    }
    return FUN4(*VAR9);
}