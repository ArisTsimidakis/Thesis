VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
        return NULL;

    if (VAR3)
        *VAR3 = sizeof(*VAR4);

    VAR4->VAR5 = VAR6;

    return VAR4;
}