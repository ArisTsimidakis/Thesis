static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 <= 0) {
        FUN2(VAR2, VAR6, "", VAR5);
        return VAR7;
    }
    VAR4->VAR8->VAR5       = VAR5;
    VAR4->VAR8->VAR9 = (VAR4->VAR8->VAR5 == 1) ? VAR10
                                                                 : VAR11;
    return 0;
}