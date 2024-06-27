static void FUN1(struct VAR1 *VAR2,
                                        VAR3 *VAR4, size_t VAR5)
{
    if ((VAR2->VAR6 & VAR7) && 
        (VAR5 > 27 && VAR5 < 1500) && 
        (VAR4[12] == 0x08 && VAR4[13] == 0x00) && 
        (VAR4[23] == 17) && 
        (VAR4[34] == 0 && VAR4[35] == 67)) { 
        FUN2(VAR4, VAR5);
        VAR2->VAR6 &= ~VAR7;
    }
}