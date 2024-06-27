FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, Jbig2ComposeOp VAR8)
 {

    int VAR9, VAR10;

    int VAR11, VAR12;

    int VAR13, VAR14;

    int VAR15;








     VAR16 *VAR17, *VAR18;
     VAR16 *VAR19, *VAR20;
     uint8_t VAR21, VAR22;

    if (VAR8 != VAR23) {
        
        return FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
    }

    
    VAR11 = VAR5->VAR24;
    VAR12 = VAR5->VAR25;
    VAR18 = VAR5->VAR26;

    if (VAR6 < 0) {
        VAR11 += VAR6;
        VAR6 = 0;
    }
    if (VAR7 < 0) {
         VAR12 += VAR7;
         VAR7 = 0;
     }

    VAR11 = (VAR6 + VAR11 < VAR4->VAR24) ? VAR11 : VAR4->VAR24 - VAR6;

    VAR12 = (VAR7 + VAR12 < VAR4->VAR25) ? VAR12 : VAR4->VAR25 - VAR7;




 #ifdef VAR27
     FUN3(VAR2, VAR28, -1, "", VAR11, VAR12, VAR6, VAR7);
 #endif

    
    if ((VAR11 <= 0) || (VAR12 <= 0)) {
#ifdef VAR27
        FUN3(VAR2, VAR28, -1, "");
#endif
        return 0;
    }
#if 0
    
    
    if ((VAR6 == 0) && (VAR11 == VAR5->VAR24)) {
        memcpy(VAR4->VAR26 + VAR7 * VAR4->VAR29, VAR5->VAR26, VAR12 * VAR5->VAR29);
        return 0;
     }
 #endif
 

    VAR13 = VAR6 >> 3;

    VAR14 = (VAR6 + VAR11 - 1) >> 3;




     VAR15 = VAR6 & 7;
 
     
    VAR17 = VAR18;
    VAR19 = VAR20 = VAR4->VAR26 + VAR7 * VAR4->VAR29 + VAR13;
    if (VAR19 < VAR4->VAR26 || VAR13 > VAR4->VAR29 || VAR12 * VAR4->VAR29 < 0 || VAR19 - VAR13 + VAR12 * VAR4->VAR29 > VAR4->VAR26 + VAR4->VAR25 * VAR4->VAR29) {
        return FUN3(VAR2, VAR30, -1, "");
    }
    if (VAR13 == VAR14) {
        VAR21 = 0x100 - (0x100 >> VAR11);
        for (VAR10 = 0; VAR10 < VAR12; VAR10++) {
            *VAR19 |= (*VAR17 & VAR21) >> VAR15;
            VAR19 += VAR4->VAR29;
            VAR17 += VAR5->VAR29;
        }
    } else if (VAR15 == 0) {
        VAR22 = (VAR11 & 7) ? 0x100 - (1 << (8 - (VAR11 & 7))) : 0xFF;
        for (VAR10 = 0; VAR10 < VAR12; VAR10++) {
            for (VAR9 = VAR13; VAR9 < VAR14; VAR9++)
                *VAR19++ |= *VAR17++;
            *VAR19 |= *VAR17 & VAR22;
            VAR19 = (VAR20 += VAR4->VAR29);
            VAR17 = (VAR18 += VAR5->VAR29);
        }
    } else {
        bool VAR31 = (((VAR11 + 7) >> 3) < ((VAR6 + VAR11 + 7) >> 3) - (VAR6 >> 3));

        VAR21 = 0x100 - (1 << VAR15);
        if (VAR31)
            VAR22 = (0x100 - (0x100 >> ((VAR6 + VAR11) & 7))) >> (8 - VAR15);
        else
            VAR22 = 0x100 - (0x100 >> (VAR11 & 7));
        for (VAR10 = 0; VAR10 < VAR12; VAR10++) {
            *VAR19++ |= (*VAR17 & VAR21) >> VAR15;
            for (VAR9 = VAR13; VAR9 < VAR14 - 1; VAR9++) {
                *VAR19 |= ((*VAR17++ & ~VAR21) << (8 - VAR15));
                *VAR19++ |= ((*VAR17 & VAR21) >> VAR15);
            }
            if (VAR31)
                *VAR19 |= (*VAR17 & VAR22) << (8 - VAR15);
            else
                *VAR19 |= ((VAR17[0] & ~VAR21) << (8 - VAR15)) | ((VAR17[1] & VAR22) >> VAR15);
            VAR19 = (VAR20 += VAR4->VAR29);
            VAR17 = (VAR18 += VAR5->VAR29);
        }
    }

    return 0;
}