int FUN1(VAR1 *VAR2,
                      const unsigned char *VAR3, size_t VAR4, size_t VAR5)
{
    int VAR6 = 0;
    const unsigned char *VAR7 = NULL;
    size_t VAR8 = 0;

    if (VAR2->VAR9 != NULL) {
        FUN2(VAR10, VAR11);
        VAR2->VAR12 = VAR13;
        FUN3(VAR2->VAR9);
        VAR2->VAR9 = NULL;
        return 0;
    }

    if (VAR3 != NULL) {
        if (VAR5 > 0) {
            if (VAR2->VAR14 < VAR4) {
                FUN2(VAR10,
                    VAR15);
                VAR2->VAR12 = VAR13;
                return 0;
            }

            if (VAR5 > 8 * VAR4) {
                FUN2(VAR10, VAR16);
                VAR2->VAR12 = VAR13;
                return 0;
            }

            
            VAR2->VAR9 = FUN4(VAR3, VAR4, VAR5);
            if (VAR2->VAR9 == NULL)
                return 0;
        } else {
            if (VAR2->VAR17 < VAR4) {
                FUN2(VAR10,
                        VAR18);
                VAR2->VAR12 = VAR13;
                return 0;
            }
            VAR7 = VAR3;
            VAR8 = VAR4;
        }
    }

    
    if (VAR2->VAR12 == VAR13)
        FUN5(VAR2);

    
    if (VAR2->VAR12 == VAR19) {
        
        FUN6(VAR2,
                              (const unsigned char *) VAR20,
                              sizeof(VAR20) - 1);
        
        VAR6 = (VAR2->VAR12 == VAR21);
    }

    
    if (VAR2->VAR12 == VAR21) {
        if (VAR7 != NULL) {
            
            VAR2->VAR22->FUN7(VAR2, VAR7, VAR8, NULL, 0);
        } else if (VAR6 == 0) {
            
            FUN8(VAR2, NULL, 0, 0);
        }
    }

    FUN3(VAR2->VAR9);
    VAR2->VAR9 = NULL;

    return VAR2->VAR12 == VAR21;
}