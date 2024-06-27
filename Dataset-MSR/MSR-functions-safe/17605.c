FUN1(unsigned char *VAR1, int VAR2, int VAR3)
{
    unsigned char VAR4;

    if (VAR5.VAR6 == VAR7)
        VAR4 = (1 << (VAR2 & 7));
    else
        VAR4 = (0x80 >> (VAR2 & 7));
    
    VAR1 += (VAR2 >> 3);
    if (VAR3)
        *VAR1 |= VAR4;
    else
        *VAR1 &= ~VAR4;
}