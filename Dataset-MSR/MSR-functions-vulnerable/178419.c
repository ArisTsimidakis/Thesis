static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    const char *VAR4;
    VAR5 *VAR6;
    long VAR7;
    MS_STATIC char VAR8[VAR9];
#ifndef VAR10
    char *VAR11;
#endif
#if !FUN2(VAR12) && !FUN2(VAR13)
    const unsigned char *VAR14;
    unsigned VAR15;
#endif
    unsigned char *VAR16;

    VAR3 = FUN3(VAR2);
#ifdef VAR17
    {
        while (VAR3 <= 0 && FUN4(VAR2, VAR3) == VAR18
               && FUN5(VAR2) == VAR19) {
            fprintf(VAR20,
                    "");
            VAR3 = FUN3(VAR2);
        }
    }
#endif
#ifndef VAR21
    while (VAR3 <= 0 && FUN4(VAR2, VAR3) == VAR18) {
        FUN6(VAR22, "",
                   VAR23.VAR24);
        VAR23.VAR25 =
            FUN7(VAR23.VAR26,
                                  VAR23.VAR24);
        if (VAR23.VAR25)
            FUN6(VAR22, "",
     while (VAR3 <= 0 && FUN4(VAR2, VAR3) == VAR18) {
         FUN6(VAR22, "",
                    VAR23.VAR24);


         VAR23.VAR25 =

            FUN7(VAR23.VAR26,

                                  VAR23.VAR24);




         if (VAR23.VAR25)
             FUN6(VAR22, "",
                        VAR23.VAR25->VAR27);
            return (1);
        }

        FUN6(VAR28, "");
        VAR7 = FUN8(VAR2);
        if (VAR7 != VAR29) {
            FUN6(VAR28, "",
                       FUN9(VAR7));
        }
        
        FUN10(VAR28);
        return (0);
    }

    if (VAR30)
        FUN11(VAR28, VAR2);

    FUN12(VAR22, FUN13(VAR2));

    VAR6 = FUN14(VAR2);
    if (VAR6 != NULL) {
        FUN6(VAR22, "");
        FUN15(VAR22, VAR6);
        FUN16(FUN17(VAR6), VAR8, sizeof VAR8);
        FUN6(VAR22, "", VAR8);
        FUN16(FUN18(VAR6), VAR8, sizeof VAR8);
        FUN6(VAR22, "", VAR8);
        FUN19(VAR6);
    }

    if (FUN20(VAR2, VAR8, sizeof VAR8) != NULL)
        FUN6(VAR22, "", VAR8);
    VAR4 = FUN21(FUN22(VAR2));
    FUN23(VAR22, VAR2);
#ifndef VAR31
    FUN24(VAR22, VAR2);
    FUN25(VAR22, VAR2, 0);
#endif
    FUN6(VAR22, "", (VAR4 != NULL) ? VAR4 : "");

#if !FUN2(VAR12) && !FUN2(VAR13)
    FUN26(VAR2, &VAR14, &VAR15);
    if (VAR14) {
        FUN6(VAR22, "");
        FUN27(VAR22, VAR14, VAR15);
        FUN6(VAR22, "");
    }
#endif
#ifndef VAR32
    {
        VAR33 *VAR34
            = FUN28(VAR2);

        if (VAR34)
            FUN6(VAR22, "",
                       VAR34->VAR35);
    }
#endif
    if (FUN29(VAR2))
        FUN6(VAR22, "");
    if (FUN30(VAR2, VAR36, 0, NULL) &
        VAR37)
        FUN6(VAR22, "");
#ifndef VAR10
    VAR11 = FUN31(FUN32(VAR2));
    if (VAR11 != NULL) {
        FUN6(VAR22, "",
                   VAR11);
    }
#endif                          
    FUN6(VAR22, "",
               FUN33(VAR2) ? "" : "");
    if (VAR38 != NULL) {
        FUN6(VAR22, "");
        FUN6(VAR22, "", VAR38);
        FUN6(VAR22, "", VAR39);
        VAR16 = FUN34(VAR39);
        if (VAR16 != NULL) {
            if (!FUN35(VAR2, VAR16,
                                            VAR39,
                                            VAR38,
                                            strlen(VAR38),
                                            NULL, 0, 0)) {
                FUN6(VAR22, "");
            } else {
                FUN6(VAR22, "");
                for (VAR3 = 0; VAR3 < VAR39; VAR3++)
                    FUN6(VAR22, "", VAR16[VAR3]);
                FUN6(VAR22, "");
            }
            FUN36(VAR16);
        }
    }

    return (1);
}