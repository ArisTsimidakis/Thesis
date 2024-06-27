void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    long VAR4;

#ifdef VAR5
    if (VAR3->VAR6.VAR7 && VAR3->VAR6.VAR8)
        VAR4 = FUN2(VAR3);
    else
#endif 
#ifdef VAR9
        if (VAR3->VAR10) {
            VAR4 = FUN3(VAR3);
            if (VAR4 == -1) {
                FUN4(VAR3);
                return;
            } else if (VAR4 == -2) {
                FUN5(VAR3);
                return;
            }
        } else
#endif 
        {
        VAR4 = FUN6(VAR3);
        }
    if (!VAR4) {
        if (VAR3->VAR11 == -1)
            FUN7(VAR3);
        return;
    }

    while (VAR3->VAR12 && VAR3->VAR13.VAR14 >= VAR3->VAR15) {
        size_t VAR16 = VAR3->VAR15;
        int VAR4;

        VAR4 = VAR3->FUN8(VAR3, VAR3->VAR13.VAR17, VAR16);
        if (VAR3->VAR11 == -1) {
            FUN7(VAR3);
            return;
        }

        if (!VAR4) {
            FUN9(&VAR3->VAR13, VAR16);
        } else {
            VAR3->VAR15 = VAR4;
        }
    }
}