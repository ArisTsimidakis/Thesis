static VAR1 FUN1(AddressParts VAR2)
{
    TCGv VAR3;

    FUN2(VAR3);
    if (VAR2.VAR4 >= 0) {
        if (VAR2.VAR5 == 0) {
            VAR3 = VAR6[VAR2.VAR4];
        } else {
            FUN3(VAR7, VAR6[VAR2.VAR4], VAR2.VAR5);
            VAR3 = VAR7;
        }
        if (VAR2.VAR8 >= 0) {
            FUN4(VAR7, VAR3, VAR6[VAR2.VAR8]);
            VAR3 = VAR7;
        }
    } else if (VAR2.VAR8 >= 0) {
        VAR3 = VAR6[VAR2.VAR8];
    }
    if (FUN5(VAR3)) {
        FUN6(VAR7, VAR2.VAR9);
        VAR3 = VAR7;
    } else if (VAR2.VAR9 != 0) {
        FUN7(VAR7, VAR3, VAR2.VAR9);
        VAR3 = VAR7;
    }

    return VAR3;
}