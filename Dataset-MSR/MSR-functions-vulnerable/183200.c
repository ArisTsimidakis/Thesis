FUN1(VAR1 *VAR2,
                     const VAR3 *VAR4, const struct VAR5 *VAR6, struct VAR7 *VAR8)
{
    const struct VAR9 *VAR10 = VAR11;
    u_int VAR12, VAR13, VAR14 = 0;
    uint8_t VAR15,VAR16;
    uint32_t VAR17;
    int VAR18;
    const VAR3 *VAR19;


    VAR8->VAR20 = 0;
    VAR8->VAR21 = 0;
    VAR8->VAR22 = 0;


    VAR8->VAR23 = VAR6->VAR24;
    VAR8->VAR25 = VAR6->VAR25;
    FUN2(VAR4[0], 4);
    VAR8->VAR26 = VAR4[3];
    VAR8->VAR27 = VAR4[3]&VAR28;

    if (FUN3(VAR4) != VAR29) { 
        FUN4((VAR2, ""));
        return 0;
    }

    if (VAR2->VAR30) 
        FUN4((VAR2, "", FUN5(VAR31, "", VAR8->VAR27)));

    
    VAR14 = 4;

    if (VAR2->VAR32 > 1)
        FUN4((VAR2, "",
               FUN6(VAR33, "", VAR8->VAR26)));

    
    if ((VAR8->VAR26 & VAR34 ) == VAR34 ) {

        VAR19 = VAR4+VAR14;

        
        FUN2(VAR19[0], 2);
        VAR13 = FUN7(VAR19);
        VAR14 += 2;
        VAR19 +=2;

        
        VAR14 += VAR13;

        if (VAR2->VAR32 > 1)
            FUN4((VAR2, "", VAR13));

        FUN2(VAR19[0], VAR13);
        while (VAR13 > VAR35) {
            VAR15 = *(VAR19++);
            VAR16 = *(VAR19++);
            VAR18 = 0;

            
            if (VAR15 == 0 || VAR16 == 0)
                break;
            if (VAR16+VAR35 > VAR13)
                goto VAR36;

            if (VAR2->VAR32 > 1)
                FUN4((VAR2, "",
                       FUN5(VAR37,"",VAR15),
                       VAR15,
                       VAR16));

            VAR18 = FUN8(VAR19, VAR15, VAR16);
            switch (VAR15) {
            case VAR38:
                
                break;
            case VAR39:
            case VAR40:
                if (VAR18 != -1) {
                    if (VAR2->VAR32 > 1)
                        FUN4((VAR2, "",
                               FUN5(VAR41, "", VAR18),
                               VAR18));
                }
                break;
            case VAR42:
            case VAR43:
                if (VAR18 != -1) {
                    if (VAR2->VAR32 > 1)
                        FUN4((VAR2, "",
                               FUN5(VAR44, "", VAR18),
                               VAR18));
                }
                break;
            case VAR45: 
            case VAR46:
            case VAR47:
            default:
                if (VAR18 != -1) {
                    if (VAR2->VAR32 > 1)
                        FUN4((VAR2, "", VAR18));
                }
                break;
            }

            VAR19+=VAR16;
            VAR13 -= VAR16+VAR35;
        }

        if (VAR2->VAR32 > 1)
            FUN4((VAR2, ""));
    }

    if ((VAR8->VAR26 & VAR48 ) == VAR48 ) {
        if (VAR2->VAR30)
            FUN4((VAR2, ""));

        
        FUN2(VAR4[VAR14 + 4], 1);
        if (FUN9(VAR2, VAR4 + VAR14 + 4,
                               VAR8->VAR23 - (VAR14 + 4)) == 0)
            FUN4((VAR2, ""));

        VAR8->VAR20=VAR14+4;
        return 0; 

    }
    VAR8->VAR20 = VAR14;
    VAR4+=VAR8->VAR20;
    VAR8->VAR23 -= VAR8->VAR20;
    VAR8->VAR25 -= VAR8->VAR20;

    
    FUN10(VAR4[0]);
    while (VAR10->VAR49 != NULL) {
        if (VAR10->VAR50 == VAR8->VAR50) {

            VAR8->VAR21 += VAR10->VAR21;

            switch (VAR4[0]) {
            case VAR51:
                VAR8->VAR52 = VAR51;
                VAR8->VAR21 += 2;
                break;
            case VAR53:
                VAR8->VAR52 = VAR53;
                VAR8->VAR21 = 8;
                break;

            default:
                VAR8->VAR54 = VAR8->VAR55[0];
                break;
            }


#ifdef VAR56
            
            if (VAR8->VAR50 == VAR56 &&
                (VAR4[0] & VAR57) == VAR57) {
                VAR8->VAR21 = 0;
            }
#endif

            VAR8->VAR20 += VAR8->VAR21;
            VAR8->VAR23 -= VAR8->VAR21;
            VAR8->VAR25 -= VAR8->VAR21;

            if (VAR2->VAR30)
                FUN4((VAR2, "",
                       VAR10->VAR49,
                       VAR8->VAR21));

            if (VAR8->VAR21 > 0) {
                FUN2(VAR4[0], VAR8->VAR21);
                if (VAR2->VAR30)
                    FUN4((VAR2, ""));
                for (VAR12 = 0; VAR12 < VAR8->VAR21; VAR12++) {
                    VAR8->VAR55[VAR12] = VAR4[VAR12]; 
                    if (VAR2->VAR30) FUN4((VAR2, "", VAR4[VAR12]));
                }
            }

             if (VAR2->VAR30) FUN4((VAR2, "")); 
 
 


             VAR8->VAR22 = FUN7(VAR4+VAR8->VAR21);
             break;
         }
        ++VAR10;
    }
    VAR4+=VAR8->VAR21;

    
    switch(VAR8->VAR50) {
#ifdef VAR58
    case VAR58:
        switch (VAR8->VAR52) {
        case VAR51:
            VAR8->VAR54 = VAR8->VAR55[1];
            break;
        case VAR53:
            VAR8->VAR54 = (FUN7(&VAR8->VAR55[6])>>3)&0xfff;
            VAR8->VAR22 = (VAR8->VAR55[5])&VAR59;
            break;
        default:
            VAR8->VAR54 = VAR8->VAR55[0];
            break;
        }
        break;
#endif
#ifdef VAR60
    case VAR60:
        switch (VAR8->VAR52) {
        case VAR51:
            FUN2(VAR4[0], 2);
            VAR8->VAR54 = VAR8->VAR55[1];
            VAR8->VAR22 = FUN7(VAR4);
            VAR8->VAR20 += 2;
            VAR8->VAR23 -= 2;
            VAR8->VAR25 -= 2;
            break;
        case VAR53:
            VAR8->VAR54 = (FUN7(&VAR8->VAR55[6])>>3)&0xfff;
            VAR8->VAR22 = (VAR8->VAR55[5])&VAR59;
            break;
        default:
            VAR8->VAR54 = VAR8->VAR55[0];
            VAR8->VAR20 += 2;
            VAR8->VAR23 -= 2;
            VAR8->VAR25 -= 2;
            break;
        }
        break;
#endif
#ifdef VAR56
    case VAR56:
        switch (VAR8->VAR52) {
        case VAR51:
            FUN2(VAR4[0], 2);
            VAR8->VAR54 = VAR8->VAR55[1];
            VAR8->VAR22 = FUN7(VAR4);
            VAR8->VAR20 += 2;
            VAR8->VAR23 -= 2;
            VAR8->VAR25 -= 2;
            break;
        case VAR53:
            VAR8->VAR54 = (FUN7(&VAR8->VAR55[6])>>3)&0xfff;
            VAR8->VAR22 = (VAR8->VAR55[5])&VAR59;
            break;
        default:
            VAR8->VAR54 = VAR8->VAR55[0];
            break;
        }
        break;
#endif
#ifdef VAR61
    case VAR61:
        FUN2(VAR4[0], 4);
        
        if (VAR8->VAR55[7] & VAR62) {
            VAR17 = FUN11(VAR4);
            
            switch(VAR17) {
            case 0: 
            case 0x08000000: 
            case 0x08380000: 
                VAR8->VAR20 += 4;
                break;
            default:
                break;
            }

            if (VAR2->VAR30)
                FUN4((VAR2, "", VAR17));
        }
        break;
#endif
#ifdef VAR63
    case VAR63:
        break;
#endif
#ifdef VAR64
    case VAR64:
        break;
#endif
#ifdef VAR65
    case VAR65:
        break;
#endif
#ifdef VAR66
    case VAR66:
        break;
#endif
#ifdef VAR67
    case VAR67:
        break;
#endif
#ifdef VAR68
    case VAR68:
        break;
#endif

    default:
        FUN4((VAR2, "", VAR8->VAR50));
        break;
    }

    if (VAR2->VAR30 > 1)
        FUN4((VAR2, "", VAR8->VAR20, VAR8->VAR22));

    return 1; 
 VAR36:
    FUN4((VAR2, "", VAR6->VAR24));
    return 0;
}