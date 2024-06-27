int FUN1(VAR1 *VAR2, unsigned char *VAR3, int *VAR4)
{
    int VAR5, VAR6;
    unsigned int VAR7;
    *VAR4 = 0;

    if (VAR2->VAR8->VAR9 & VAR10) {
        VAR5 = VAR2->VAR8->FUN2(VAR2, VAR3, NULL, 0);
        if (VAR5 < 0)
            return 0;
        else
            *VAR4 = VAR5;
        return 1;
    }

    VAR7 = VAR2->VAR8->VAR11;
    if (VAR2->VAR9 & VAR12) {
        if (VAR2->VAR13) {
            FUN3(VAR14,
                   VAR15);
            return 0;
        }
        *VAR4 = 0;
        return 1;
    }
    if (VAR7 > 1) {
        if (VAR2->VAR13 || !VAR2->VAR16) {
            FUN3(VAR14, VAR17);
            return (0);
        }
        FUN4(VAR7 <= sizeof VAR2->final);

        
        VAR6 = VAR2->final[VAR7 - 1];
        if (VAR6 == 0 || VAR6 > (int)VAR7) {
            FUN3(VAR14, VAR18);
            return (0);
        }
        for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
            if (VAR2->final[--VAR7] != VAR6) {
                FUN3(VAR14, VAR18);
                return (0);
            }
        }
        VAR6 = VAR2->VAR8->VAR11 - VAR6;
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
            VAR3[VAR5] = VAR2->final[VAR5];
        *VAR4 = VAR6;
    } else
        *VAR4 = 0;
    return (1);
}