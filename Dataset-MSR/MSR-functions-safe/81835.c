static void FUN1(VAR1* VAR2, int VAR3)
{
    if (VAR2) {
        FUN2(VAR2, 0, sizeof(VAR1));

        VAR2->VAR4  = VAR5;
        VAR2->VAR6  = VAR7;
        VAR2->VAR8  = VAR9;
        VAR2->VAR10 = (VAR11)VAR3;

        if (VAR3 == VAR12)
            VAR2->VAR13 = VAR14;
        if (VAR3 == VAR15)
            VAR2->VAR16 = VAR17;
    }
}