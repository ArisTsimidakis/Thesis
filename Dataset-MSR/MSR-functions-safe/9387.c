int FUN1(VAR1 *VAR2)
{
    unsigned char *VAR3;
    unsigned char *VAR4, *VAR5;
    int VAR6;
    unsigned long VAR7;
#ifndef VAR8
    int VAR9;
    VAR10 *VAR11;
#endif

    VAR3 = (unsigned char *)VAR2->VAR12->VAR13;
    if (VAR2->VAR14 == VAR15) {
        VAR16 *VAR17 = VAR2->VAR18;
        if ((VAR17 == NULL) || (VAR17->VAR19 != VAR2->VAR20) ||
#ifdef VAR21
            !VAR17->VAR22 ||
#else
            
            (!VAR17->VAR22 && !VAR17->VAR23) ||
#endif
            (VAR17->VAR24)) {
            if (!FUN2(VAR2, 0))
                goto VAR25;
        }
        

        VAR4 = VAR2->VAR26->VAR27;

        if (FUN3(VAR2, 0, VAR4, VAR28) <= 0)
            goto VAR25;

        
        VAR5 = VAR4 = &(VAR3[4]);

        
#if 0
        *(VAR4++) = VAR2->VAR20 >> 8;
        *(VAR4++) = VAR2->VAR20 & 0xff;
        VAR2->VAR29 = VAR2->VAR20;
#else
        *(VAR4++) = VAR2->VAR29 >> 8;
        *(VAR4++) = VAR2->VAR29 & 0xff;
#endif

        
        memcpy(VAR4, VAR2->VAR26->VAR27, VAR28);
        VAR4 += VAR28;

        
        if (VAR2->VAR30)
            VAR6 = 0;
        else
            VAR6 = VAR2->VAR18->VAR22;
        *(VAR4++) = VAR6;
        if (VAR6 != 0) {
            if (VAR6 > (int)sizeof(VAR2->VAR18->VAR31)) {
                FUN4(VAR32, VAR33);
                goto VAR25;
            }
            memcpy(VAR4, VAR2->VAR18->VAR31, VAR6);
            VAR4 += VAR6;
        }

        
        VAR6 = FUN5(VAR2, FUN6(VAR2), &(VAR4[2]), 0);
        if (VAR6 == 0) {
            FUN4(VAR32, VAR34);
            goto VAR25;
        }
#ifdef VAR35
        
        if (FUN7(VAR2) >= VAR36
            && VAR6 > VAR35)
            VAR6 = VAR35 & ~1;
#endif
        FUN8(VAR6, VAR4);
        VAR4 += VAR6;

        
#ifdef VAR8
        *(VAR4++) = 1;
#else

        if ((VAR2->VAR37 & VAR38)
            || !VAR2->VAR39->VAR40)
            VAR9 = 0;
        else
            VAR9 = FUN9(VAR2->VAR39->VAR40);
        *(VAR4++) = 1 + VAR9;
        for (VAR6 = 0; VAR6 < VAR9; VAR6++) {
            VAR11 = FUN10(VAR2->VAR39->VAR40, VAR6);
            *(VAR4++) = VAR11->VAR41;
        }
#endif
        *(VAR4++) = 0;             

#ifndef VAR21
        
        if (FUN11(VAR2) <= 0) {
            FUN4(VAR32, VAR42);
            goto VAR25;
        }
        if ((VAR4 =
             FUN12(VAR2, VAR4,
                                        VAR3 + VAR43)) ==
            NULL) {
            FUN4(VAR32, VAR33);
            goto VAR25;
        }
#endif

        VAR7 = (VAR4 - VAR5);
        VAR5 = VAR3;
        *(VAR5++) = VAR44;
        FUN13(VAR7, VAR5);

        VAR2->VAR14 = VAR45;
        
        VAR2->VAR46 = VAR4 - VAR3;
        VAR2->VAR47 = 0;
    }

    
    return (FUN14(VAR2, VAR48));
 VAR25:
    VAR2->VAR14 = VAR49;
    return (-1);
}