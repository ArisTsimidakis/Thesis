static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int64_t VAR7 = FUN2(VAR2);
    char VAR8[32] = { 0 };
    int VAR9 = 0;

    int VAR10 = ((VAR6->VAR11->VAR12 == VAR13 && VAR6->VAR11->VAR14 == VAR15)
                           || (VAR6->VAR11->VAR12 == VAR13 && VAR6->VAR11->VAR14 == VAR16)
                           ||  VAR6->VAR11->VAR12 == VAR17
                           ||  VAR6->VAR11->VAR12 == VAR18
                           ||  VAR6->VAR11->VAR12 == VAR19
                           ||  VAR6->VAR11->VAR12 == VAR20);

    FUN3(VAR2, 0); 
    if (VAR4->VAR21 != VAR22) {
        FUN4(VAR2, "");
    } else {
        FUN5(VAR2, VAR6->VAR23); 
    }
    FUN3(VAR2, 0); 
    FUN6(VAR2, 0); 
    FUN6(VAR2, 1); 

    if (VAR10) {
        FUN6(VAR2, 2); 
    } else {
        FUN6(VAR2, 0); 
    }
    FUN6(VAR2, 0); 
    if (VAR6->VAR24 == VAR25) {
        FUN4(VAR2, ""); 
        if (VAR6->VAR11->VAR12 == VAR13 || VAR10) {
            FUN3(VAR2, 0); 
            FUN3(VAR2, 0x400); 
        } else {
            FUN3(VAR2, 0x200); 
            FUN3(VAR2, 0x200); 
        }
    } else {
        FUN3(VAR2, 0); 
        FUN3(VAR2, 0); 
        FUN3(VAR2, 0); 
    }
    FUN6(VAR2, VAR6->VAR11->VAR26); 
    FUN6(VAR2, VAR6->VAR27); 
    FUN3(VAR2, 0x00480000); 
    FUN3(VAR2, 0x00480000); 
    FUN3(VAR2, 0); 
    FUN6(VAR2, 1); 

    
    FUN7(VAR8, 32, VAR6);
    FUN8(VAR2, strlen(VAR8));
    FUN9(VAR2, VAR8, 31);

    if (VAR6->VAR24 == VAR25 &&
       (VAR6->VAR11->VAR12 == VAR19 || VAR6->VAR11->VAR12 == VAR20))
        FUN6(VAR2, 0x18);
    else if (VAR6->VAR24 == VAR25 && VAR6->VAR11->VAR28)
        FUN6(VAR2, VAR6->VAR11->VAR28 |
                  (VAR6->VAR11->VAR14 == VAR29 ? 0x20 : 0));
    else
        FUN6(VAR2, 0x18); 

    if (VAR6->VAR24 == VAR25 && VAR6->VAR11->VAR14 == VAR30) {
        int VAR31 = 1 << VAR6->VAR11->VAR28;
        int VAR32;
        FUN6(VAR2, 0);             
        FUN3(VAR2, 0);             
        FUN6(VAR2, 0x8000);        
        FUN6(VAR2, VAR31 - 1);  
        for (VAR32 = 0; VAR32 < VAR31; VAR32++) {
            uint32_t VAR33 = VAR6->VAR34[VAR32];
            uint16_t VAR35 = (VAR33 >> 16) & 0xff;
            uint16_t VAR36 = (VAR33 >> 8)  & 0xff;
            uint16_t VAR37 = VAR33         & 0xff;
            FUN6(VAR2, 0);
            FUN6(VAR2, (VAR35 << 8) | VAR35);
            FUN6(VAR2, (VAR36 << 8) | VAR36);
            FUN6(VAR2, (VAR37 << 8) | VAR37);
        }
    } else
        FUN6(VAR2, 0xffff); 

    if (VAR6->VAR23 == FUN10('','','',''))
        FUN11(VAR2, VAR6);
    else if (VAR6->VAR11->VAR12 == VAR38)
        FUN12(VAR2);
    else if (VAR6->VAR11->VAR12 == VAR39 ||
            VAR6->VAR11->VAR12 == VAR40) {
        FUN13(VAR2, VAR6);
        FUN3(VAR2, 0);
    } else if (VAR6->VAR11->VAR12 == VAR41) {
        FUN14(VAR2, VAR6);
        VAR9 = 1;
    } else if (VAR6->VAR11->VAR12 == VAR42)
        FUN15(VAR2, VAR6);
    else if (VAR6->VAR11->VAR12 == VAR43 && !FUN16(VAR6->VAR23)) {
        FUN17(VAR2, VAR6);
        if (VAR6->VAR24 == VAR44)
            FUN18(VAR2);
    } else if (VAR6->VAR11->VAR12 == VAR45) {
        FUN19(VAR4->VAR46, VAR2, VAR6);
    } else if (VAR6->VAR11->VAR12 == VAR47 && VAR6->VAR48 > 0)
        FUN20(VAR2, VAR6);
    else if (VAR6->VAR11->VAR12 == VAR49 ||
             VAR6->VAR11->VAR12 == VAR50) {
        
    } else if (VAR6->VAR11->VAR12 == VAR51) {
        if (VAR6->VAR11->VAR52 == FUN10('','','',''))
            FUN21(VAR2, VAR6);
    } else if (VAR6->VAR48 > 0)
        FUN22(VAR2, VAR6);

    if (VAR6->VAR11->VAR12 != VAR43 &&
        VAR6->VAR11->VAR12 != VAR53 &&
        VAR6->VAR11->VAR12 != VAR41) {
        int VAR54 = VAR6->VAR11->VAR54;

#if VAR55
    VAR56
    if (VAR54 != VAR6->VAR57->VAR58->VAR54 && VAR6->VAR57->VAR58->VAR54 != VAR59)
        VAR54 = VAR6->VAR57->VAR58->VAR54;
    VAR60
#endif

        if (VAR54 != VAR59)
            FUN23(VAR2, VAR6, VAR54);
    }

    if (VAR4->VAR61 & VAR62) {
        if (VAR6->VAR24 == VAR25)
            FUN24(VAR2, VAR6, VAR4->VAR63);
        else
            FUN25(VAR4->VAR46, VAR64, "");
    }
    if (VAR4->VAR61 & VAR65) {
        if (VAR6->VAR24 == VAR25 || VAR6->VAR24 == VAR66)
            FUN26(VAR2, VAR6);
        else
            FUN25(VAR4->VAR46, VAR64, "");
    }

    if (VAR6->VAR24 == VAR66 && VAR4->VAR46->VAR67 <= VAR68) {
        VAR69* VAR70 = (VAR69*) FUN27(VAR6->VAR57, VAR71, NULL);
        VAR72* VAR73 = (VAR72*)FUN27(VAR6->VAR57, VAR74, NULL);

        if (VAR70)
            FUN28(VAR2, VAR70);
        if (VAR73)
            FUN29(VAR4->VAR46, VAR2, VAR73);
    }

    if (VAR6->VAR11->VAR75.VAR76 && VAR6->VAR11->VAR75.VAR77) {
        FUN30(VAR2, VAR6);
    }

    if (VAR10){
        FUN31(VAR2, VAR6);
    }

    if (VAR4->VAR21 != VAR22) {
        FUN32(VAR6, VAR2, VAR4->VAR78);
    }

    
    
    if (VAR9)
        FUN3(VAR2, 0);

    return FUN33(VAR2, VAR7);
}