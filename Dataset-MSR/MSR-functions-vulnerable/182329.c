int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    unsigned VAR8, VAR9;
    int VAR10;
    int VAR11 = 0;

    
    FUN2(VAR4);

    
    
    
    if (!VAR6->VAR12 && VAR6->VAR13->VAR14 != 8)
        VAR6->VAR13->VAR14 = 0;

    if (VAR6->VAR15 == FUN3("") && FUN4(VAR4, 24) == 0x575630) {
        FUN5(VAR4, 24);
        if (FUN6(VAR4, 8) == 0xF0)
            goto VAR16;
    }

    VAR8 = 0xff;
    for (;;) {
        if (FUN7(VAR4) >= VAR4->VAR17) {
            if (VAR4->VAR17 == 8 &&
                (VAR2->VAR18 >= 0 || VAR2->VAR19 >= 0) || VAR6->VAR15 == FUN3("")) {
                FUN8(VAR6->VAR13, VAR20, "", VAR4->VAR17);
                return VAR21;  
            } else
                return VAR22;  
        }

        
        VAR9 = FUN6(VAR4, 8);
        VAR8 = ((VAR8 << 8) | VAR9) & 0xffffffff;

        if ((VAR8 & 0xFFFFFF00) != 0x100)
            continue;  

        if (VAR6->VAR13->VAR23 & VAR24) {
            FUN8(VAR6->VAR13, VAR25, "", VAR8);
            if (VAR8 <= 0x11F)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 <= 0x12F)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 <= 0x13F)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 <= 0x15F)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 <= 0x1AF)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B0)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B1)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B2)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B3)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B4)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B5)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B6)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B7)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B8)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1B9)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1BA)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1BB)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1BC)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1BD)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1BE)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1BF)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1C0)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1C1)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1C2)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 == 0x1C3)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 <= 0x1C5)
                FUN8(VAR6->VAR13, VAR25, "");
            else if (VAR8 <= 0x1FF)
                FUN8(VAR6->VAR13, VAR25, "");
            FUN8(VAR6->VAR13, VAR25, "", FUN7(VAR4));
        }

        if (VAR8 >= 0x120 && VAR8 <= 0x12F) {
            if (VAR11) {
                FUN8(VAR6->VAR13, VAR26, "");
                continue;
            }
            VAR11++;
            if ((VAR10 = FUN9(VAR2, VAR4)) < 0)
                return VAR10;
        } else if (VAR8 == VAR27) {
            FUN10(VAR2, VAR4);
        } else if (VAR8 == VAR28) {
            FUN11(VAR6, VAR4);
        } else if (VAR8 == VAR29) {
            int VAR30, VAR31;
            FUN12(VAR6, VAR4, &VAR30, &VAR31);
            if (VAR30 == VAR32 &&
                (VAR31 > 0 && VAR31 < 9)) {
                VAR6->VAR12 = 1;
                FUN13(VAR4);
                FUN14(VAR6, VAR4, 0);
            } else if (VAR6->VAR12) {
                FUN15(VAR6->VAR13, "");
                return VAR33;
            }
            VAR6->VAR13->VAR30 = VAR30;
            VAR6->VAR13->VAR31   = VAR31;
        } else if (VAR8 == VAR34) {
            if (VAR6->VAR12) {
                if ((VAR10 = FUN16(VAR2, VAR4)) < 0)
                    return VAR10;
            } else
                FUN17(VAR6, VAR4);
        } else if (VAR8 == VAR35) {
            break;
        }

        FUN2(VAR4);
        VAR8 = 0xff;
    }

VAR16:
    if (VAR6->VAR13->VAR36 & VAR37)
        VAR6->VAR38 = 1;
     VAR6->VAR13->VAR39 = !VAR6->VAR38;
 
     if (VAR6->VAR12) {

        FUN18(VAR6->VAR13->VAR30 == VAR32);
         if (!VAR6->VAR13->VAR14) {
             FUN8(VAR6->VAR13, VAR40, "");
             return VAR22;
        }
        return FUN19(VAR2, VAR4);
    } else
        return FUN20(VAR2, VAR4);
}