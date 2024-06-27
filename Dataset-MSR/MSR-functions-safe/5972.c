FUN1(VAR1 *VAR2)
{
    VAR2->VAR3[VAR4] &= ~VAR5;
    if (VAR2->VAR3[VAR4]) {
        VAR2->VAR3[VAR4] |= VAR5;
    }

    FUN2(VAR2->VAR3[VAR4]);
}