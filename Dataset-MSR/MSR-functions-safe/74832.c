static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR3->VAR6; VAR5++)
        if (VAR3->VAR7[VAR5].VAR4 == VAR4)
            return &VAR3->VAR7[VAR5];
    return NULL;
}