FUN1(ClientPtr VAR1)
{
    int VAR2, VAR3;
    PicturePtr VAR4, VAR5;
    PictFormatPtr VAR6;

    FUN2(VAR7);

    FUN3(VAR7);
    if (!FUN4(VAR8->VAR9)) {
        VAR1->VAR10 = VAR8->VAR9;
        return VAR11;
    }
    FUN5(VAR4, VAR8->VAR12, VAR1, VAR13);
    FUN5(VAR5, VAR8->VAR14, VAR1, VAR15);
    if (!VAR5->VAR16)
        return VAR17;
    if (VAR4->VAR16 && VAR4->VAR16->VAR18 != VAR5->VAR16->VAR18)
        return VAR19;
    if (VAR8->VAR20) {
        VAR2 = FUN6((void **) &VAR6, VAR8->VAR20,
                                     VAR21, VAR1, VAR13);
        if (VAR2 != VAR22)
            return VAR2;
    }
    else
        VAR6 = 0;
    VAR3 = ((VAR1->VAR23 << 2) - sizeof(VAR24));
    if (VAR3 & 4)
        return VAR25;
    VAR3 >>= 3;
    if (VAR3 >= 3)
        FUN7(VAR8->VAR9, VAR4, VAR5, VAR6,
                          VAR8->VAR26, VAR8->VAR27,
                          VAR3, (VAR28 *) &VAR8[1]);
    return VAR22;
}