static inline void FUN1(VAR1 *VAR2, struct VAR3 *VAR4,
                                  hwaddr VAR5)
{
    if (!FUN2(VAR2)) {
        struct {
            uint32_t VAR6;
            int16_t VAR7;
            int16_t VAR8;
	} VAR9;
        VAR2->FUN3(VAR2->VAR10, VAR5, (void *)&VAR9, sizeof(VAR9), 0);
        VAR4->VAR6 = FUN4(VAR9.VAR6) & 0xffffff;
        VAR4->VAR7 = FUN5(VAR9.VAR7);
        VAR4->VAR8 = (FUN4(VAR9.VAR6) >> 16) & 0xff00;
        VAR4->VAR11 = FUN5(VAR9.VAR8) << 16;
        VAR4->VAR12 = 0;
    } else {
        VAR2->FUN3(VAR2->VAR10, VAR5, (void *)VAR4, sizeof(*VAR4), 0);
        FUN6(&VAR4->VAR6);
        FUN7((VAR13 *)&VAR4->VAR7);
        FUN7((VAR13 *)&VAR4->VAR8);
        FUN6(&VAR4->VAR11);
        FUN6(&VAR4->VAR12);
        if (FUN8(VAR2) == 3) {
            uint32_t VAR14 = VAR4->VAR6;
            VAR4->VAR6 = VAR4->VAR11;
            VAR4->VAR11 = VAR14;
        }
    }
}