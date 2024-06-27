const char *FUN1(const VAR1 *VAR2, int VAR3)
{
    const VAR4 *VAR5;
    if (VAR3 == VAR6 || !VAR2->VAR7)
        return NULL;

    for (VAR5 = VAR2->VAR7; VAR5->VAR3 != VAR6; VAR5++)
        if (VAR5->VAR3 == VAR3)
            return VAR5->VAR8;

    return NULL;
}