static inline int FUN1(
    const VAR1 *VAR2,
    const VAR3 *VAR4,
    const VAR5 *VAR6,
    const uint32_t VAR7,
    const uint8_t VAR8)
{
    
    if ((VAR2->VAR9 & VAR10) && (VAR7 & VAR11)) {
        int VAR12  = VAR4->VAR13 ? 1 : 0;

        
        if (VAR12 == 0) {
            FUN2(""
                    "");
            return 0;
        }
    }

    if ((VAR8 & VAR14) && !FUN3(VAR2)) {
        FUN2("");
        return 0;
    }
    if ((VAR8 & VAR15) && !FUN4(VAR2)) {
        FUN2("");
        return 0;
    }

    if (FUN5(&VAR6->VAR16, FUN6(VAR2)) == 0) {
        FUN2("");
        return 0;
    }

    
    if (VAR2->VAR16 == VAR17 || VAR2->VAR16 == VAR18 || VAR2->VAR16 == VAR19) {
        if (!(VAR7 & VAR20)) {
            if (VAR2->VAR9 & VAR21)
                return 0;
            VAR22 *VAR23 = FUN7(VAR6->VAR24,VAR2->VAR24);
            if (VAR23 == NULL) {
                FUN2("");
                return 0;
            }
        }
        if (!(VAR7 & VAR25)) {
            if (VAR2->VAR9 & VAR21)
                return 0;
            VAR22 *VAR26 = FUN7(VAR6->VAR27,VAR2->VAR27);
            if (VAR26 == NULL) {
                FUN2("");
                return 0;
            }
        }
    } else if ((VAR7 & (VAR20|VAR25)) != (VAR20|VAR25)) {
        FUN2("");
        return 0;
    }

    
    if (!(VAR7 & VAR28)) {
        if (FUN3(VAR2)) {
            if (FUN8(VAR6->VAR29, VAR6->VAR30, &VAR2->VAR31) == 0)
                return 0;
        } else if (FUN4(VAR2)) {
            if (FUN9(VAR6->VAR32, VAR6->VAR33, &VAR2->VAR31) == 0)
                return 0;
        }
    }
    
    if (!(VAR7 & VAR34)) {
        if (FUN3(VAR2)) {
            if (FUN8(VAR6->VAR35, VAR6->VAR36, &VAR2->VAR37) == 0)
                return 0;
        } else if (FUN4(VAR2)) {
            if (FUN9(VAR6->VAR38, VAR6->VAR39, &VAR2->VAR37) == 0)
                return 0;
        }
    }

    return 1;
}