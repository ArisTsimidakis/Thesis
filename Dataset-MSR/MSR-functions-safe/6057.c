FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    uint32_t VAR5 = (VAR4 >> VAR6) & VAR7;
    uint32_t VAR8 = (VAR4 >> VAR9) & VAR10;
    uint32_t VAR11 = 0;

    if ((VAR5 < VAR12) && (VAR4 & VAR13)) {
        VAR2->VAR14[VAR5] = VAR8;
        VAR11 = VAR15;
    }

    VAR2->VAR16[VAR17] = VAR11                           |
                      (VAR5 << VAR6) |
                      (VAR8 << VAR9);
}