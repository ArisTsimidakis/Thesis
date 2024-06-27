static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4 && VAR2->VAR5) {
        VAR2->VAR5 = false;
        FUN2(&VAR2->VAR6, &VAR2->VAR7.VAR8);
    }
    FUN3(&VAR2->VAR9[0], false);
    FUN3(&VAR2->VAR9[1], false);
}