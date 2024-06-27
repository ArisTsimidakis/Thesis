FUN1(ClientPtr VAR1)
{
    DrawablePtr VAR2;
    XvPortPtr VAR3;
    GCPtr VAR4;
    int VAR5;

    FUN2(VAR6);
    FUN3(VAR6);

    FUN4(VAR7->VAR8, VAR2, VAR9);
    FUN5(VAR7->VAR10, VAR3, VAR9);

    if (!(VAR3->VAR11->VAR12 & VAR13) ||
        !(VAR3->VAR11->VAR12 & VAR14)) {
        VAR1->VAR15 = VAR7->VAR10;
        return VAR16;
    }

    VAR5 = FUN6(VAR3, VAR2);
    if (VAR5 != VAR17) {
        return VAR5;
    }

    return FUN7(VAR1, VAR2, VAR3, VAR4, VAR7->VAR18, VAR7->VAR19,
                        VAR7->VAR20, VAR7->VAR21, VAR7->VAR22, VAR7->VAR23,
                        VAR7->VAR24, VAR7->VAR25);
}