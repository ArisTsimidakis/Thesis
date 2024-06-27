FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
 {

    int VAR7 = 0;


     Jbig2RegionSegmentInfo VAR8;
     Jbig2TextRegionParams VAR9;
     VAR10 *VAR11 = NULL;
     VAR12 **VAR13 = NULL;

    int VAR14 = 0;


     uint16_t VAR15 = 0;
     uint16_t VAR16 = 0;
     VAR17 *VAR18 = NULL;
     int VAR19 = 0;
     VAR20 *VAR21 = NULL;
     VAR22 *VAR23 = NULL;

    int VAR24 = 0;


     const VAR25 *VAR26 = NULL;
 
     
    if (VAR4->VAR27 < 17)
        goto VAR28;
    FUN2(&VAR8, VAR6);
    VAR7 += 17;

    
    VAR15 = FUN3(VAR6 + VAR7);
    VAR7 += 2;

    FUN4(VAR2, VAR29, VAR4->VAR30, "", VAR15);

    
    memset(&VAR9, 0, sizeof(VAR31));

    VAR9.VAR32 = VAR15 & 0x0001;
    VAR9.VAR33 = VAR15 & 0x0002;
    VAR9.VAR34 = (VAR15 & 0x000c) >> 2;
    VAR9.VAR35 = 1 << VAR9.VAR34;
    VAR9.VAR36 = (VAR37)((VAR15 & 0x0030) >> 4);
    VAR9.VAR38 = VAR15 & 0x0040;
    VAR9.VAR39 = (VAR40)((VAR15 & 0x0180) >> 7);
    VAR9.VAR41 = VAR15 & 0x0200;
    
    VAR9.VAR42 = (VAR15 & 0x7C00) >> 10;
    if (VAR9.VAR42 > 0x0f)
        VAR9.VAR42 -= 0x20;
    VAR9.VAR43 = VAR15 & 0x8000;

    if (VAR9.VAR42) {
        FUN4(VAR2, VAR29, VAR4->VAR30, "", VAR9.VAR42);
    }

    if (VAR9.VAR32) {        
        
        VAR16 = FUN3(VAR6 + VAR7);
        VAR7 += 2;

        if (VAR16 & 0x8000)
            FUN4(VAR2, VAR44, VAR4->VAR30, "");
    } else {                    

        
        if ((VAR9.VAR33) && !(VAR9.VAR43)) {
            VAR9.VAR45[0] = VAR6[VAR7];
            VAR9.VAR45[1] = VAR6[VAR7 + 1];
            VAR9.VAR45[2] = VAR6[VAR7 + 2];
            VAR9.VAR45[3] = VAR6[VAR7 + 3];
            VAR7 += 4;
        }
    }

    
    VAR9.VAR46 = FUN5(VAR6 + VAR7);
    VAR7 += 4;

    if (VAR9.VAR32) {
        
        

        
        switch (VAR16 & 0x0003) {
        case 0:                
            VAR9.VAR47 = FUN6(VAR2, &VAR48);
            break;
        case 1:                
            VAR9.VAR47 = FUN6(VAR2, &VAR49);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR47 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        case 2:                
        default:
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
            break;
        }
        if (VAR9.VAR47 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x000c) >> 2) {
        case 0:                
            VAR9.VAR52 = FUN6(VAR2, &VAR53);
            break;
        case 1:                
            VAR9.VAR52 = FUN6(VAR2, &VAR54);
            break;
        case 2:                
            VAR9.VAR52 = FUN6(VAR2, &VAR55);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR52 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        }
        if (VAR9.VAR52 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x0030) >> 4) {
        case 0:                
            VAR9.VAR56 = FUN6(VAR2, &VAR57);
            break;
        case 1:                
            VAR9.VAR56 = FUN6(VAR2, &VAR58);
            break;
        case 2:                
            VAR9.VAR56 = FUN6(VAR2, &VAR59);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR56 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        }
        if (VAR9.VAR56 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x00c0) >> 6) {
        case 0:                
            VAR9.VAR60 = FUN6(VAR2, &VAR61);
            break;
        case 1:                
            VAR9.VAR60 = FUN6(VAR2, &VAR62);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR60 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        case 2:                
        default:
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
            break;
        }
        if (VAR9.VAR60 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x0300) >> 8) {
        case 0:                
            VAR9.VAR63 = FUN6(VAR2, &VAR61);
            break;
        case 1:                
            VAR9.VAR63 = FUN6(VAR2, &VAR62);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR63 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        case 2:                
        default:
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
            break;
        }
        if (VAR9.VAR63 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x0c00) >> 10) {
        case 0:                
            VAR9.VAR64 = FUN6(VAR2, &VAR61);
            break;
        case 1:                
            VAR9.VAR64 = FUN6(VAR2, &VAR62);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR64 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        case 2:                
        default:
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
            break;
        }
        if (VAR9.VAR64 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x3000) >> 12) {
        case 0:                
            VAR9.VAR65 = FUN6(VAR2, &VAR61);
            break;
        case 1:                
            VAR9.VAR65 = FUN6(VAR2, &VAR62);
            break;
        case 3:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR65 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        case 2:                
        default:
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
            break;
        }
        if (VAR9.VAR65 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        switch ((VAR16 & 0x4000) >> 14) {
        case 0:                
            VAR9.VAR66 = FUN6(VAR2, &VAR67);
            break;
        case 1:                
            VAR26 = FUN7(VAR2, VAR4, VAR24);
            if (VAR26 == NULL) {
                VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "", VAR24);
                goto VAR51;
            }
            VAR9.VAR66 = FUN6(VAR2, VAR26);
            ++VAR24;
            break;
        }
        if (VAR9.VAR66 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }

        if (VAR16 & 0x8000) {
            FUN4(VAR2, VAR44, VAR4->VAR30, "");
        }

        
        
    }

    FUN4(VAR2, VAR68, VAR4->VAR30,
                "", VAR8.VAR69, VAR8.VAR70, VAR8.VAR71, VAR8.VAR72, VAR9.VAR46);

    
    VAR14 = FUN8(VAR2, VAR4);
    if (VAR14 != 0) {
        VAR13 = FUN9(VAR2, VAR4);
    } else {
        VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
        goto VAR51;
    }
    if (VAR13 == NULL) {
         VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
         goto VAR51;
     } else {

        int VAR73;


 
         if (VAR13[0] == NULL) {
             VAR19 = FUN4(VAR2, VAR44, VAR4->VAR30, "");
            goto VAR51;
        }
        for (VAR73 = 1; VAR73 < VAR14; VAR73++)
            if (VAR13[VAR73] == NULL) {
                FUN4(VAR2, VAR44, VAR4->VAR30, "");
                VAR14 = VAR73;
            }
    }

    
    {
        int VAR74 = VAR9.VAR43 ? 1 << 10 : 1 << 13;

        VAR18 = FUN10(VAR2, VAR17, VAR74);
        if (VAR18 == NULL) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR51;
        }
        memset(VAR18, 0, VAR74);
    }

    VAR11 = FUN11(VAR2, VAR8.VAR69, VAR8.VAR70);
    if (VAR11 == NULL) {
        VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
        goto VAR75;
    }

    VAR21 = FUN12(VAR2, VAR6 + VAR7, VAR4->VAR27 - VAR7);
    if (VAR21 == NULL) {
        VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
        goto VAR75;
    }

    VAR23 = FUN13(VAR2, VAR21);
    if (VAR23 == NULL) {
        VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
        goto VAR75;
     }
 
     if (!VAR9.VAR32) {

        int VAR76, VAR73;

        int VAR77 = 0;




 
         for (VAR73 = 0; VAR73 < VAR14; VAR73++) {
             VAR77 += VAR13[VAR73]->VAR78;
        }

        VAR9.VAR79 = FUN14(VAR2);
        VAR9.VAR80 = FUN14(VAR2);
        VAR9.VAR81 = FUN14(VAR2);
        VAR9.VAR82 = FUN14(VAR2);
        if ((VAR9.VAR79 == NULL) || (VAR9.VAR80 == NULL) || (VAR9.VAR81 == NULL) || (VAR9.VAR82 == NULL)) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR83;
         }
 
         

        for (VAR76 = 0; (1 << VAR76) < VAR77; VAR76++) {


         }
         VAR9.VAR84 = FUN15(VAR2, VAR76);
         VAR9.VAR85 = FUN14(VAR2);
        VAR9.VAR86 = FUN14(VAR2);
        VAR9.VAR87 = FUN14(VAR2);
        VAR9.VAR88 = FUN14(VAR2);
        VAR9.VAR89 = FUN14(VAR2);
        if ((VAR9.VAR84 == NULL) || (VAR9.VAR85 == NULL) ||
                (VAR9.VAR86 == NULL) || (VAR9.VAR87 == NULL) || (VAR9.VAR88 == NULL) || (VAR9.VAR89 == NULL)) {
            VAR19 = FUN4(VAR2, VAR50, VAR4->VAR30, "");
            goto VAR90;
        }
    }

    VAR19 = FUN16(VAR2, VAR4, &VAR9,
                                    (const VAR12 * const *)VAR13, VAR14, VAR11,
                                    VAR6 + VAR7, VAR4->VAR27 - VAR7, VAR18, VAR23, VAR21);
    if (VAR19 < 0) {
        FUN4(VAR2, VAR50, VAR4->VAR30, "");
        goto VAR90;
    }

    if ((VAR4->VAR15 & 63) == 4) {
        
        VAR4->VAR91 = FUN17(VAR2, VAR11);
    } else {
        
        FUN4(VAR2, VAR29, VAR4->VAR30,
                    "", VAR8.VAR69, VAR8.VAR70, VAR8.VAR71, VAR8.VAR72);
        FUN18(VAR2, &VAR2->VAR92[VAR2->VAR93], VAR11, VAR8.VAR71, VAR8.VAR72, VAR8.VAR94);
    }

VAR90:
    if (!VAR9.VAR32) {
        FUN19(VAR2, VAR9.VAR84);
        FUN20(VAR2, VAR9.VAR85);
        FUN20(VAR2, VAR9.VAR86);
        FUN20(VAR2, VAR9.VAR87);
        FUN20(VAR2, VAR9.VAR88);
        FUN20(VAR2, VAR9.VAR89);
    }

VAR83:
    if (!VAR9.VAR32) {
        FUN20(VAR2, VAR9.VAR79);
        FUN20(VAR2, VAR9.VAR80);
        FUN20(VAR2, VAR9.VAR81);
        FUN20(VAR2, VAR9.VAR82);
    }
    FUN21(VAR2->VAR95, VAR23);
    FUN22(VAR2, VAR21);

VAR75:
    FUN21(VAR2->VAR95, VAR18);
    FUN23(VAR2, VAR11);

VAR51:
    if (VAR9.VAR32) {
        FUN24(VAR2, VAR9.VAR47);
        FUN24(VAR2, VAR9.VAR52);
        FUN24(VAR2, VAR9.VAR56);
        FUN24(VAR2, VAR9.VAR64);
        FUN24(VAR2, VAR9.VAR65);
        FUN24(VAR2, VAR9.VAR60);
        FUN24(VAR2, VAR9.VAR63);
        FUN24(VAR2, VAR9.VAR66);
    }
    FUN21(VAR2->VAR95, VAR13);

    return VAR19;

VAR28:
    return FUN4(VAR2, VAR50, VAR4->VAR30, "");
}