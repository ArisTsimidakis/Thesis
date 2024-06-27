FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    if ((VAR3 > VAR4) && (VAR3 < VAR5)) {
        VAR2->VAR6 = VAR3;
    } else {
        VAR2->VAR6 = VAR4;
        FUN2(VAR3);
    }

    VAR2->VAR7 = 0;
    VAR2->VAR8 = VAR9;

    FUN3(VAR2);
}