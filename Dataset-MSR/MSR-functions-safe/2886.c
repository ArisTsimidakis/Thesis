FUN1 (VAR1 * VAR2, VAR3 * VAR4)
{
    uint VAR5 = FUN2(&VAR2->VAR6.VAR7);
    VAR8 *VAR9, *VAR10 = VAR2->VAR6.VAR7.VAR11.VAR12;

    
    VAR9 = (VAR8 *) FUN3(VAR2->VAR13, VAR5 + VAR14, sizeof(VAR8),
                                        "");

    if (VAR9 == 0) {
        FUN4(VAR15);
    }
    FUN5(&VAR2->VAR6.VAR7, VAR16, VAR5 + VAR14, VAR9);
    FUN5(&VAR2->VAR6.VAR17, VAR16 | VAR18, 0,
               VAR2->VAR6.VAR7.VAR11.VAR12);

    memcpy(VAR9, VAR10, VAR5 * sizeof(VAR8));
    FUN6(&VAR2->VAR6.VAR17, VAR5);

    FUN7 (VAR2->VAR13, VAR10, "");
    return(0);
}