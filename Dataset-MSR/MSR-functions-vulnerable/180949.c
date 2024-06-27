static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = NULL, *VAR10 = NULL; 
    int VAR11, VAR12;
    int VAR13;

    FUN2(VAR7, 4);

    VAR11 = FUN3(VAR7);
    if (VAR11 == 2) {
        uint64_t VAR14;
        int VAR15;
        FUN2(VAR7, 22);

        
        VAR9 = FUN4(VAR2, NULL);
        if (!VAR9)
            return FUN5(VAR16);

        VAR10 = FUN4(VAR2, NULL);
        if (!VAR10)
            return FUN5(VAR16);
        FUN6(VAR10, 64, 1, 15);
        VAR10->VAR17->VAR18 = VAR19;
        VAR10->VAR20    = FUN7(VAR10->VAR21);
        VAR10->VAR22         = FUN8(VAR7);
        VAR15 = FUN8(VAR7);
        switch (VAR15) {
        case 1:
            VAR10->VAR17->VAR23 = VAR24;
            break;
        case 2:
            VAR10->VAR17->VAR25 = VAR26;
            VAR10->VAR17->VAR23 = VAR27;
            break;
        default:
            FUN9(VAR2, "", VAR15);
            break;
        }
        VAR10->VAR17->VAR28 = 0;
        VAR10->VAR17->VAR29     = FUN8(VAR7);
        VAR10->VAR17->VAR30    = FUN8(VAR7);
        FUN2(VAR7, 12);

        VAR9->VAR17->VAR18  = VAR31;
        VAR9->VAR22          = VAR10->VAR22;
        VAR9->VAR17->VAR32 = FUN8(VAR7);
        if (VAR9->VAR17->VAR32 <= 0) {
            FUN10(VAR2, VAR33, "", VAR9->VAR17->VAR32);
            return VAR34;
        }
        FUN6(VAR9, 33, 1, VAR9->VAR17->VAR32);
        if (FUN11(VAR2, VAR9, FUN8(VAR7)) < 0)
            return VAR34;

        VAR15 = FUN8(VAR7);
        if (VAR15 == VAR35) {
            VAR9->VAR17->VAR23 = VAR36;
        } else {
            FUN9(VAR2, "", VAR15);
        }

        FUN2(VAR7, 12);
        FUN12(VAR2, "", 0x80);
        FUN12(VAR2, "", 0x100);
        FUN2(VAR7, 0x80);

        VAR14 = 0;
        for (VAR12 = 0; VAR12 < VAR10->VAR22; VAR12++) {
             uint32_t VAR37   = FUN8(VAR7);
             uint32_t VAR38 = FUN8(VAR7);
             uint32_t VAR39 = FUN8(VAR7);




             FUN2(VAR7, 8);
             FUN13(VAR9, VAR37, VAR14, VAR38, 0, VAR40);
             FUN13(VAR10, VAR37 + VAR38, VAR12, VAR39, 0, VAR40);
            VAR14 += VAR38 / (VAR9->VAR17->VAR41 * 2);
        }
    } else if (!VAR11 && FUN3(VAR7) == 3) {
        FUN2(VAR7, 4);

        if ((VAR13 = FUN14(VAR2, NULL, VAR42)) < 0)
            return VAR13;

        if (VAR4->VAR43 > 1) {
            FUN9(VAR2, "");
            return VAR44;
        } else if (VAR4->VAR43) {
            VAR9 = FUN4(VAR2, NULL);
            if (!VAR9)
                return FUN5(VAR16);
            VAR9->VAR17->VAR18 = VAR31;
            if ((FUN14(VAR2, VAR9, VAR45)) < 0)
                return VAR13;
            if (VAR4->VAR46 == 100 &&
                VAR4->VAR47 == VAR35 &&
                VAR9->VAR17->VAR48 == 16) {
                VAR9->VAR17->VAR23 = VAR36;
            } else {
                FUN9(VAR2,
                                      "",
                                      VAR4->VAR46, VAR4->VAR47,
                                      VAR9->VAR17->VAR48);
                VAR9->VAR17->VAR23 = VAR49;
            }
            if (VAR9->VAR17->VAR41 <= 0) {
                FUN10(VAR2, VAR33, "");
                return VAR34;
            }
        }

        if (VAR4->VAR50 > 1) {
            FUN9(VAR2, "");
            return VAR44;
        } else if (VAR4->VAR50) {
            VAR10 = FUN4(VAR2, NULL);
            if (!VAR10)
                return FUN5(VAR16);
            VAR10->VAR17->VAR18 = VAR19;
            if ((VAR13 = FUN14(VAR2, VAR10, VAR51))<0)
                return VAR13;
        }

        if (VAR4->VAR43)
            FUN15(VAR7, VAR9);

        if (VAR4->VAR50)
            FUN15(VAR7, VAR10);
    } else {
        FUN9(VAR2, "", VAR11);
        return VAR44;
    }

    return 0;
}