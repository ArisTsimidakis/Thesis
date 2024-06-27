static int FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR6;
    char *VAR7 = (char *)VAR4->VAR8;

    if (VAR5 != 4)
        return VAR9;

    VAR2->VAR10 = *VAR7++;
    VAR2->VAR11 = *VAR7++;
    VAR2->VAR12 = *VAR7++;
    VAR2->VAR13 = *VAR7;

    return VAR14;
}