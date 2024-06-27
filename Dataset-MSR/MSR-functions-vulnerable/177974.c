static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    unsigned long VAR8;
    unsigned char *VAR9;
    const VAR10 *VAR11;
    const VAR12 *VAR13;
    const VAR14 *VAR15;

    VAR9 = (unsigned char *)VAR2->VAR16->VAR17;
    if (VAR2->VAR18 == VAR19) {
        VAR4 = FUN2(VAR2, (char *)&(VAR9[VAR2->VAR20]), 10 - VAR2->VAR20);

        if (VAR4 < (10 - VAR2->VAR20))
            return (FUN3(VAR2, VAR21, VAR4));
        VAR2->VAR20 = 10;

        if (*(VAR9++) != VAR22) {
            if (VAR9[-1] != VAR23) {
                FUN4(VAR2, VAR24);
                FUN5(VAR21,
                       VAR25);
            } else
                FUN5(VAR21, VAR26);
            return (-1);
        }

        VAR11 = FUN6(VAR9);
        if (VAR11 == NULL) {
            FUN4(VAR2, VAR27);
            FUN5(VAR21, VAR28);
            return (-1);
        }
        VAR2->VAR29->VAR30 = VAR11;

        VAR9 += 3;
        FUN7(VAR9, VAR4);
        VAR2->VAR31->VAR32.VAR33 = VAR4;
        FUN7(VAR9, VAR4);
        VAR2->VAR31->VAR32.VAR34 = VAR4;
        FUN7(VAR9, VAR4);
        if (VAR4 > VAR35) {
            FUN4(VAR2, VAR24);
            FUN5(VAR21, VAR36);
            return -1;
        }
        VAR2->VAR29->VAR37 = VAR4;
        VAR2->VAR18 = VAR38;
    }

    
    VAR9 = (unsigned char *)VAR2->VAR16->VAR17;
    if (VAR2->VAR16->VAR39 < VAR40) {
        FUN4(VAR2, VAR24);
        FUN5(VAR21, VAR41);
        return -1;
    }
    VAR6 = VAR2->VAR29->VAR37;
    VAR8 =
        10 + (unsigned long)VAR2->VAR31->VAR32.VAR33 + (unsigned long)VAR2->VAR31->VAR32.VAR34 +
        (unsigned long)VAR6;
    if (VAR8 > VAR40) {
        FUN4(VAR2, VAR24);
        FUN5(VAR21, VAR42);
        return -1;
    }
    VAR5 = (int)VAR8 - VAR2->VAR20;
    VAR4 = FUN2(VAR2, (char *)&(VAR9[VAR2->VAR20]), VAR5);
    if (VAR4 != VAR5)
        return (FUN3(VAR2, VAR21, VAR4));
    if (VAR2->VAR43) {
        
        VAR2->FUN8(0, VAR2->VAR44, 0, VAR9, (VAR45)VAR8, VAR2,
                        VAR2->VAR46);
    }
    VAR9 += 10;

    memcpy(VAR2->VAR29->VAR47, &(VAR9[VAR2->VAR31->VAR32.VAR33 + VAR2->VAR31->VAR32.VAR34]),
           (unsigned int)VAR6);

    if (VAR2->VAR48->VAR49[VAR50].VAR51 == NULL) {
        FUN4(VAR2, VAR24);
         FUN5(VAR21, VAR52);
         return (-1);
     }

    VAR4 = FUN9(VAR2->VAR48, VAR2->VAR31->VAR32.VAR34,

                                &(VAR9[VAR2->VAR31->VAR32.VAR33]),

                                &(VAR9[VAR2->VAR31->VAR32.VAR33]),

                                (VAR2->VAR31->VAR53) ? VAR54 :

                                VAR55);
 
     VAR3 = FUN10(VAR2->VAR29->VAR30);
 
                                (VAR2->VAR31->VAR53) ? VAR54 :
                                VAR55);

    VAR3 = FUN10(VAR2->VAR29->VAR30);

    if (!FUN11(VAR2->VAR29, &VAR13, &VAR15, NULL, NULL, NULL)) {
        FUN4(VAR2, VAR27);
        FUN5(VAR21,
               VAR56);
        return (0);
     } else
         VAR7 = 5;
 


















































































     
 # if 1
     

    if ((VAR4 < 0) || ((!VAR3 && (VAR4 != FUN12(VAR13)))

                    || (VAR3 && ((VAR4 != VAR7)

                                      || (VAR2->VAR31->VAR32.VAR33 +

                                          (unsigned int)VAR4 != (unsigned int)

                                          FUN12(VAR13)))))) {




         FUN13();
         if (VAR3)
             VAR4 = VAR7;
         else
             VAR4 = FUN12(VAR13);

        if (FUN14(VAR9, VAR4) <= 0)


             return 0;
     }
 # else
    unsigned long VAR8;
    unsigned char *VAR9;
    FUN15(VAR10) *VAR57;   
    FUN15(VAR10) *VAR58;   
    FUN15(VAR10) *VAR59, *VAR60;
    int VAR61;

    
    if (VAR2->VAR18 == VAR62) {
        VAR2->VAR63 = 1;
        VAR2->VAR18 = VAR64;
    }
 # endif
 
     if (VAR3)

        VAR4 += VAR2->VAR31->VAR32.VAR33;


 
     if (VAR4 > VAR65) {
         FUN4(VAR2, VAR24);

        if (*(VAR9++) != VAR66) {
            if (VAR9[-1] != VAR23) {
                FUN4(VAR2, VAR24);
                FUN5(VAR67, VAR25);
            } else
                FUN5(VAR67, VAR26);
            return (-1);
        }
        FUN7(VAR9, VAR4);
        if (VAR4 < VAR2->VAR44)
            VAR2->VAR44 = VAR4;
        FUN7(VAR9, VAR4);
        VAR2->VAR31->VAR32.VAR68 = VAR4;
        FUN7(VAR9, VAR4);
        VAR2->VAR31->VAR32.VAR69 = VAR4;
        FUN7(VAR9, VAR4);
        VAR2->VAR31->VAR70 = VAR4;
        if ((VAR4 < VAR71) ||
            (VAR4 > VAR72)) {
            FUN4(VAR2, VAR24);
            FUN5(VAR67, VAR73);
            return (-1);
        }
        VAR2->VAR18 = VAR74;
    }

    
    VAR9 = (unsigned char *)VAR2->VAR16->VAR17;
    VAR8 =
        9 + (unsigned long)VAR2->VAR31->VAR32.VAR68 +
        (unsigned long)VAR2->VAR31->VAR70 +
        (unsigned long)VAR2->VAR31->VAR32.VAR69;
    if (VAR8 > VAR40) {
        FUN4(VAR2, VAR24);
        FUN5(VAR67, VAR42);
        return -1;
    }
    VAR5 = (int)VAR8 - VAR2->VAR20;
    VAR4 = FUN2(VAR2, (char *)&(VAR9[VAR2->VAR20]), VAR5);
    if (VAR4 != VAR5)
        return (FUN3(VAR2, VAR67, VAR4));
    if (VAR2->VAR43) {
        
        VAR2->FUN8(0, VAR2->VAR44, 0, VAR9, (VAR45)VAR8, VAR2,
                        VAR2->VAR46);
    }
    VAR9 += 9;

    
    
    if ((VAR2->VAR31->VAR32.VAR69 != 0) &&
        (VAR2->VAR31->VAR32.VAR69 != VAR75)) {
        FUN4(VAR2, VAR24);
        FUN5(VAR67, VAR76);
        return (-1);
    }

    if (VAR2->VAR31->VAR32.VAR69 == 0) {
        if (!FUN16(VAR2, 1)) {
            FUN4(VAR2, VAR24);
            return (-1);
        }
    } else {
        VAR4 = FUN17(VAR2, &(VAR9[VAR2->VAR31->VAR32.VAR68]),
                                 VAR2->VAR31->VAR32.VAR69, NULL);
        if (VAR4 == 1) {           
            VAR2->VAR77 = 1;
        } else if (VAR4 == -1) {
            FUN4(VAR2, VAR24);
            return (-1);
        } else {
            if (VAR2->VAR48 == NULL) {
                FUN4(VAR2, VAR78);
                FUN5(VAR67, VAR79);
                return (-1);
            }

            if (!FUN16(VAR2, 1)) {
                FUN4(VAR2, VAR24);
                return (-1);
            }
        }
    }

    if (!VAR2->VAR77) {
        VAR57 = FUN18(VAR2, VAR9, VAR2->VAR31->VAR32.VAR68,
                                      &VAR2->VAR29->VAR80);
        if (VAR57 == NULL)
            goto VAR81;

        VAR58 = FUN19(VAR2);

        if (VAR2->VAR82 & VAR83) {
            VAR59 = FUN20(VAR58);
            if (VAR59 == NULL)
                goto VAR81;
            VAR60 = VAR57;
        } else {
            VAR59 = VAR57;
            VAR60 = VAR58;
        }
        for (VAR61 = 0; VAR61 < FUN21(VAR59); VAR61++) {
            if (FUN22(VAR60, FUN23(VAR59, VAR61)) < 0) {
                (void)FUN24(VAR59, VAR61);
                VAR61--;
            }
        }
        if (VAR2->VAR82 & VAR83) {
            FUN25(VAR2->VAR29->VAR80);
            VAR2->VAR29->VAR80 = VAR59;
        }
        
    }
    VAR9 += VAR2->VAR31->VAR32.VAR68;
    

    
    VAR9 += VAR2->VAR31->VAR32.VAR69;

    
    if (VAR2->VAR31->VAR70 > sizeof VAR2->VAR31->VAR84) {
        FUN4(VAR2, VAR24);
        FUN5(VAR67, VAR41);
        return -1;
    }
    memcpy(VAR2->VAR31->VAR84, VAR9, (unsigned int)VAR2->VAR31->VAR70);
    return (1);
 VAR81:
    FUN5(VAR67, VAR85);
    return (0);
}