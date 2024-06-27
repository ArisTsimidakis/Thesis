static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    unsigned VAR8;
    enum AVFieldOrder VAR9 = VAR10;

    if (VAR2->VAR11->VAR12 < 1) 
        return 0;
    VAR7 = VAR2->VAR11->VAR13[VAR2->VAR11->VAR12-1];
    if (VAR5.VAR14 < 2)
        return VAR15;
    VAR8 = FUN2(VAR4);
    if ((VAR8 & 0xFF00) == 0x0100)
        VAR9 = VAR16;
    else if ((VAR8 & 0xFF00) == 0x0200) {
        switch (VAR8 & 0xFF) {
        case 0x01: VAR9 = VAR17;
                   break;
        case 0x06: VAR9 = VAR18;
                   break;
        case 0x09: VAR9 = VAR19;
                   break;
        case 0x0E: VAR9 = VAR20;
                   break;
        }
    }
    if (VAR9 == VAR10 && VAR8) {
        FUN3(NULL, VAR21, "", VAR8);
    }
    VAR7->VAR22->VAR23 = VAR9;

    return 0;
}