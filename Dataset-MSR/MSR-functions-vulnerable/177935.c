FUN1(ClientPtr VAR1)
 {
     VAR2 *VAR3;
     int VAR4;

    xEvent VAR5;


     VAR6 *VAR7;
     EventSwapPtr VAR8;
    FUN2(VAR9);
    FUN3(&VAR10->VAR11);
    FUN4(VAR9);
    FUN5(&VAR10->VAR12);
    FUN3(&VAR10->VAR13);

    if (VAR10->VAR11 !=
        FUN6(sizeof(VAR9)) + VAR10->VAR13 +
        FUN6(VAR10->VAR14 * sizeof(VAR6)))
        return VAR15;

    VAR7 = (VAR6 *) &VAR10[1];
    for (VAR4 = 0; VAR4 < VAR10->VAR14; VAR4++, VAR7++) {
        VAR8 = VAR16[VAR7->VAR17.VAR17.VAR18 & 0177];
        if (VAR8 == VAR19)     
            return VAR20;
        (*VAR8) (VAR7, &VAR5);
        *VAR7 = VAR5;
    }

    VAR3 = (VAR2 *) (((VAR6 *) &VAR10[1]) + VAR10->VAR14);
    FUN7(VAR3, VAR10->VAR13);
    return (FUN8(VAR1));
}