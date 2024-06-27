VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    int VAR9 = 0, VAR10 = 0, VAR11 = 0;
    uint8_t VAR12[60];
    int VAR13;
    int VAR14 = 0;
    int VAR15 = VAR6;

    if (FUN3(VAR8) || FUN4(VAR8) || FUN5(VAR8) || !VAR15 ||
        (FUN6(VAR8) && !VAR8->VAR16)) {
        return -1;
    }
#ifdef VAR17
    printf("", VAR15);
#endif

    
    if (VAR15 < VAR18) {
        memcpy(VAR12, VAR5, VAR15);
        memset(VAR12 + VAR15, 0, VAR18 - VAR15);
        VAR5 = VAR12;
        VAR15 = VAR18;
    }

    if (FUN7(VAR8)
        || (VAR9=FUN8(VAR8, VAR5, VAR15))
        || (VAR10=FUN9(VAR8, VAR5, VAR15))
        || (VAR11=FUN10(VAR8, VAR5, VAR15))) {

        FUN11(VAR8);

        if (!(FUN12(VAR8) & 0x8000) && VAR8->VAR19) {
            struct pcnet_RMD VAR20;
            int VAR21 = FUN13(VAR8)-1,VAR22;
            hwaddr VAR23;
            for (VAR22 = FUN14(VAR8)-1; VAR22 > 0; VAR22--, VAR21--) {
                if (VAR21 <= 1)
                    VAR21 = FUN14(VAR8);
                VAR23 = VAR8->VAR19 +
                    (FUN14(VAR8) - VAR21) *
                    (FUN15(VAR8) ? 16 : 8 );
                FUN16(&VAR20, VAR23);
                if (FUN17(VAR20.VAR24, VAR25, VAR26)) {
#ifdef VAR27
                    printf("",
                                VAR21, FUN13(VAR8));
#endif
                    FUN13(VAR8) = VAR21;
                    FUN11(VAR8);
                    break;
                }
            }
        }

        if (!(FUN12(VAR8) & 0x8000)) {
#ifdef VAR27
            printf("", FUN13(VAR8));
#endif
            VAR8->VAR28[0] |= 0x1000; 
            FUN18(VAR8)++;
        } else {
            VAR4 *VAR29 = VAR8->VAR30;
            hwaddr VAR31 = FUN19(VAR8);
            struct pcnet_RMD VAR20;
             int VAR32 = 0;
 
             if (!VAR8->VAR16) {












                 memcpy(VAR29, VAR5, VAR15);
                 
                 VAR29[VAR15] = 0;
                uint32_t VAR33 = ~0;
                VAR4 *VAR34 = VAR29;

                while (VAR34 != &VAR29[VAR15])
                    FUN20(VAR33, *VAR34++);
                *(VAR35 *)VAR34 = FUN21(VAR33);
                VAR15 += 4;
            } else {
                uint32_t VAR33 = ~0;
                VAR4 *VAR34 = VAR29;

                while (VAR34 != &VAR29[VAR15])
                    FUN20(VAR33, *VAR34++);
                VAR14 = (*(VAR35 *)VAR34 != FUN21(VAR33));
            }

#ifdef VAR36
            FUN22(VAR5);
#endif

            FUN16(&VAR20, FUN23(VAR8,VAR31));
            
                FUN24(&VAR20.VAR24, VAR25, VAR37, 1);

#VAR38 FUN25() do {                                 \
    int VAR39 = FUN26(4096 - FUN17(VAR20.VAR40, VAR41, VAR42),VAR13); \
    hwaddr VAR43 = FUN23(VAR8, VAR20.VAR43);          \
    VAR8->FUN27(VAR8->VAR44, VAR43, VAR29, VAR39, FUN28(VAR8)); \
    VAR29 += VAR39; VAR13 -= VAR39;                           \
    FUN24(&VAR20.VAR24, VAR25, VAR26, 0);                       \
    FUN29(&VAR20, FUN23(VAR8,VAR31));                           \
    VAR32++;                                                 \
} while (0)

            VAR13 = VAR15;
            FUN25();
            if ((VAR13 > 0) && FUN30(VAR8)) {
                hwaddr VAR23 = FUN30(VAR8);
#ifdef VAR27
                FUN31(&VAR20);
#endif
                FUN16(&VAR20, FUN23(VAR8,VAR23));
                if (FUN17(VAR20.VAR24, VAR25, VAR26)) {
                    VAR31 = VAR23;
                    FUN25();
#ifdef VAR27
                    FUN31(&VAR20);
#endif
                    if ((VAR13 > 0) && (VAR23=FUN32(VAR8))) {
                        FUN16(&VAR20, FUN23(VAR8,VAR23));
                        if (FUN17(VAR20.VAR24, VAR25, VAR26)) {
                            VAR31 = VAR23;
                            FUN25();
                        }
                    }
                }
            }

#undef VAR45

            FUN16(&VAR20, FUN23(VAR8,VAR31));
            if (VAR13 == 0) {
                FUN24(&VAR20.VAR46, VAR47, VAR48, VAR15);
                FUN24(&VAR20.VAR24, VAR25, VAR49, 1);
                FUN24(&VAR20.VAR24, VAR25, VAR50, !FUN7(VAR8) && VAR9);
                FUN24(&VAR20.VAR24, VAR25, VAR51, !FUN7(VAR8) && VAR11);
                FUN24(&VAR20.VAR24, VAR25, VAR52, !FUN7(VAR8) && VAR10);
                if (VAR14) {
                    FUN24(&VAR20.VAR24, VAR25, VAR53, 1);
                    FUN24(&VAR20.VAR24, VAR25, VAR54, 1);
                }
            } else {
                FUN24(&VAR20.VAR24, VAR25, VAR55, 1);
                FUN24(&VAR20.VAR24, VAR25, VAR56, 1);
                FUN24(&VAR20.VAR24, VAR25, VAR54, 1);
            }
            FUN29(&VAR20, FUN23(VAR8,VAR31));
            VAR8->VAR28[0] |= 0x0400;

#ifdef VAR17
            printf("",
                FUN13(VAR8), FUN23(VAR8,FUN19(VAR8)), VAR32);
#endif
#ifdef VAR27
            FUN31(&VAR20);
#endif

            while (VAR32--) {
                if (FUN13(VAR8) <= 1)
                    FUN13(VAR8) = FUN14(VAR8);
                else
                    FUN13(VAR8)--;
            }

            FUN11(VAR8);

        }
    }

    FUN33(VAR8);
    FUN34(VAR8);

    return VAR6;
}