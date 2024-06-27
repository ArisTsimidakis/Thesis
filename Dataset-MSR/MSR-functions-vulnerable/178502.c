int FUN1(const VAR1 *VAR2, VAR3 *VAR4,
                         const VAR5 *VAR6, const VAR3 *VAR7,
                         VAR8 *VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR3 *VAR16 = NULL;
    VAR3 *VAR17 = NULL;
    VAR5 *VAR18 = NULL;
    VAR5 *VAR19 = NULL;
    VAR5 *VAR20 = NULL;
    int VAR21 = 0;

    
    if (VAR7 != NULL && FUN2(VAR2, VAR7))
        return FUN3(VAR2, VAR4);

    if (FUN4(VAR2->VAR22)) {
        FUN5(VAR23, VAR24);
        return 0;
    }
    if (FUN4(VAR2->VAR25)) {
        FUN5(VAR23, VAR26);
        return 0;
    }

    FUN6(VAR9);

    if (((VAR16 = FUN7(VAR2)) == NULL)
        || ((VAR17 = FUN7(VAR2)) == NULL)) {
        FUN5(VAR23, VAR27);
        goto VAR28;
    }

    if (VAR7 == NULL) {
        if (!FUN8(VAR16, VAR2->VAR29)) {
            FUN5(VAR23, VAR30);
            goto VAR28;
        }
    } else {
        if (!FUN8(VAR16, VAR7)) {
            FUN5(VAR23, VAR30);
            goto VAR28;
        }
    }

    FUN9(VAR16, VAR31);
    FUN9(VAR4, VAR31);
    FUN9(VAR17, VAR31);

    VAR20 = FUN10(VAR9);
    VAR19 = FUN10(VAR9);
    VAR18 = FUN10(VAR9);
    if (VAR18 == NULL) {
        FUN5(VAR23, VAR27);
        goto VAR28;
    }

    if (!FUN11(VAR20, VAR2->VAR22, VAR2->VAR25, VAR9)) {
        FUN5(VAR23, VAR32);
        goto VAR28;
    }

    
     VAR11 = FUN12(VAR20);
     VAR12 = FUN13(VAR20);

    if ((FUN14(VAR18, VAR12 + 1) == NULL)

        || (FUN14(VAR19, VAR12 + 1) == NULL)) {




         FUN5(VAR23, VAR32);
         goto VAR28;
     }

    if (!FUN15(VAR18, VAR6)) {
        FUN5(VAR23, VAR32);
        goto VAR28;
    }

    FUN16(VAR18, VAR31);

    if ((FUN12(VAR18) > VAR11) || (FUN17(VAR18))) {
        
        if (!FUN18(VAR18, VAR18, VAR20, VAR9)) {
            FUN5(VAR23, VAR32);
            goto VAR28;
        }
    }

    if (!FUN19(VAR19, VAR18, VAR20)) {
        FUN5(VAR23, VAR32);
        goto VAR28;
    }
    FUN16(VAR19, VAR31);
    if (!FUN19(VAR18, VAR19, VAR20)) {
        FUN5(VAR23, VAR32);
        goto VAR28;
    }
    
     VAR13 = FUN20(VAR19, VAR11);

    FUN21(VAR13, VAR18, VAR19, VAR12 + 1);


 
     VAR12 = FUN13(VAR2->VAR33);
     if ((FUN14(VAR17->VAR34, VAR12) == NULL)
        || (FUN14(VAR17->VAR35, VAR12) == NULL)
        || (FUN14(VAR17->VAR36, VAR12) == NULL)
        || (FUN14(VAR4->VAR34, VAR12) == NULL)
        || (FUN14(VAR4->VAR35, VAR12) == NULL)
        || (FUN14(VAR4->VAR36, VAR12) == NULL)
        || (FUN14(VAR16->VAR34, VAR12) == NULL)
        || (FUN14(VAR16->VAR35, VAR12) == NULL)
        || (FUN14(VAR16->VAR36, VAR12) == NULL)) {
        FUN5(VAR23, VAR32);
        goto VAR28;
    }

    
    if (!FUN22(VAR2, VAR16, VAR9)) {
        FUN5(VAR23, VAR37);
        goto VAR28;
    }

    
    if (!FUN23(VAR2, VAR4, VAR17, VAR16, VAR9)) {
        FUN5(VAR23, VAR38);
        goto VAR28;
    }

    
    VAR14 = 1;

#VAR39 FUN24(VAR40, VAR41, VAR42, VAR43, VAR44) do {         \
        FUN21(VAR40, (VAR41)->VAR34, (VAR42)->VAR34, VAR43);   \
        FUN21(VAR40, (VAR41)->VAR35, (VAR42)->VAR35, VAR43);   \
        FUN21(VAR40, (VAR41)->VAR36, (VAR42)->VAR36, VAR43);   \
        VAR44 = ((VAR41)->VAR15 ^ (VAR42)->VAR15) & (VAR40); \
        (VAR41)->VAR15 ^= (VAR44);                      \
        (VAR42)->VAR15 ^= (VAR44);                      \
} while(0)

    

    for (VAR10 = VAR11 - 1; VAR10 >= 0; VAR10--) {
        VAR13 = FUN20(VAR18, VAR10) ^ VAR14;
        FUN24(VAR13, VAR4, VAR17, VAR12, VAR15);

        
        if (!FUN25(VAR2, VAR4, VAR17, VAR16, VAR9)) {
            FUN5(VAR23, VAR45);
            goto VAR28;
        }
        
        VAR14 ^= VAR13;
    }
    
    FUN24(VAR14, VAR4, VAR17, VAR12, VAR15);
#undef VAR46

    
    if (!FUN26(VAR2, VAR4, VAR17, VAR16, VAR9)) {
        FUN5(VAR23, VAR47);
        goto VAR28;
    }

    VAR21 = 1;

 VAR28:
    FUN27(VAR16);
    FUN27(VAR17);
    FUN28(VAR9);

    return VAR21;
}