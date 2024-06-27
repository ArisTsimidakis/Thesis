IntRect VAR1::FUN1(int VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6 = FUN2(VAR4 - VAR7, 0);
    int VAR8 = FUN3(VAR5 - VAR7, (int)VAR9);
    
    if (VAR6 > VAR8)
        return FUN4();

    VAR10* VAR11 = FUN5();
    int VAR12 = FUN6();
    int VAR13 = FUN7();
    VAR14* VAR15 = VAR11->FUN8(VAR16);
    const VAR17& VAR18 = VAR15->FUN9();

    const VAR19* VAR20 = VAR11->FUN10()->FUN11() + VAR7;
    int VAR21 = VAR9;
    BufferForAppendingHyphen VAR22;
    if (VAR8 == VAR21 && FUN12()) {
        FUN13(VAR22, VAR15, VAR20, VAR21);
        VAR8 = VAR21;
     }
 
     IntRect VAR23 = FUN14(VAR18.FUN15(FUN16(VAR20, VAR21, VAR11->FUN17(), FUN18(), VAR24, !FUN19(), VAR25),

                                                        FUN20(VAR2 + VAR26, VAR3 + VAR12), VAR13, VAR6, VAR8));

    if (VAR23.FUN21() > VAR2 + VAR26 + VAR27)

        VAR23.FUN22(0);

    else if (VAR23.FUN23() - 1 > VAR2 + VAR26 + VAR27)

        VAR23.FUN22(VAR2 + VAR26 + VAR27 - VAR23.FUN21());

    return VAR23;


























 }