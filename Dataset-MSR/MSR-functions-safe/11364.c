FUN1 (VAR1 *VAR2, const VAR1 *VAR3, int VAR4, CARD8 VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR4; ++VAR6) {
        CARD32 VAR7 = FUN2(VAR3 + VAR6);
        CARD32 VAR8 = FUN2(VAR2 + VAR6);
        CARD32 VAR9,VAR10,VAR11,VAR12;
        CARD16 VAR13, VAR14, VAR15, VAR16, VAR17;
        CARD8 VAR18 = VAR7 >> 24;
        CARD8 VAR19 = VAR8 >> 24;

        switch (VAR5 & VAR20) {
        default:
            VAR13 = 0;
            break;
        case VAR21:
            VAR13 = FUN3 (VAR18, VAR19);
            break;
        case VAR22:
            VAR13 = FUN4 (VAR18, VAR19);
            break;
        case VAR20:
            VAR13 = 0xff;
            break;
        }

        switch (VAR5 & VAR23) {
        default:
            VAR14 = 0;
            break;
        case VAR24:
            VAR14 = FUN3 (VAR19, VAR18);
            break;
        case VAR25:
            VAR14 = FUN4 (VAR19, VAR18);
            break;
        case VAR23:
            VAR14 = 0xff;
            break;
        }
        VAR9 = FUN5 (VAR7,VAR8,0,VAR13,VAR14,VAR15, VAR16, VAR17);
        VAR10 = FUN5 (VAR7,VAR8,8,VAR13,VAR14,VAR15, VAR16, VAR17);
        VAR11 = FUN5 (VAR7,VAR8,16,VAR13,VAR14,VAR15, VAR16, VAR17);
        VAR12 = FUN5 (VAR7,VAR8,24,VAR13,VAR14,VAR15, VAR16, VAR17);
        VAR7 = VAR9|VAR10|VAR11|VAR12;
        FUN6(VAR2 + VAR6, VAR7);
    }
}