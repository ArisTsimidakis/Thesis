int FUN1(int VAR1, unsigned int *VAR2)
{
    const VAR3 *VAR4;
    
    if ((VAR1 < 1) || ((unsigned int)VAR1 > FUN2(VAR5)))
        return 0;
    VAR4 = VAR5 + VAR1 - 1;
    if (VAR2)
        *VAR2 = VAR4->VAR6;
    return VAR4->VAR7;
}