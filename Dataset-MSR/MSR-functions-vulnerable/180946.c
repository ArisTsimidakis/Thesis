static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    struct VAR5 *VAR6 = VAR1;
     VAR7 *VAR8 = VAR6->VAR9->VAR10;
     int VAR11, VAR12;
     int VAR13 = 0;


 
 VAR14:
     if (!VAR6->VAR15)
        return VAR16;

    if (!VAR6->VAR17) {
        int64_t VAR18;
        struct VAR19 *VAR20;

        
        if (VAR6->VAR21 && VAR6->VAR21->VAR22) {
            VAR6->VAR15 = 0;
            for (VAR12 = 0; VAR12 < VAR6->VAR23; VAR12++) {
                if (VAR6->VAR24[VAR12]->VAR25 < VAR26) {
                    VAR6->VAR15 = 1;
                    break;
                }
            }
        }
        if (!VAR6->VAR15) {
            FUN2(VAR6->VAR9, VAR27, "",
                VAR6->VAR28);
            return VAR16;
        }

        
         VAR18 = FUN3(VAR6);
 
 VAR29:






         if (!VAR6->VAR30 &&
             FUN4() - VAR6->VAR31 >= VAR18) {
             if ((VAR11 = FUN5(VAR8, VAR6->VAR32, VAR6, NULL)) < 0) {
                FUN2(VAR6->VAR9, VAR33, "",
                       VAR6->VAR28);
                return VAR11;
            }
            
            VAR18 = VAR6->VAR34 / 2;
        }
        if (VAR6->VAR35 < VAR6->VAR36) {
            FUN2(NULL, VAR33,
                   "",
                   VAR6->VAR36 - VAR6->VAR35);
            VAR6->VAR35 = VAR6->VAR36;
        }
        if (VAR6->VAR35 >= VAR6->VAR36 + VAR6->VAR37) {
            if (VAR6->VAR30)
                return VAR16;
            while (FUN4() - VAR6->VAR31 < VAR18) {
                if (FUN6(VAR8->VAR38))
                    return VAR39;
                FUN7(100*1000);
            }
            
            goto VAR29;
        }

        VAR20 = FUN8(VAR6);

        
        VAR11 = FUN9(VAR6, VAR20);
        if (VAR11)
            return VAR11;

        VAR11 = FUN10(VAR8, VAR6, VAR20);
        if (VAR11 < 0) {
            if (FUN6(VAR8->VAR38))
                return VAR39;
            FUN2(VAR6->VAR9, VAR33, "",
                   VAR6->VAR28);
            VAR6->VAR35 += 1;
            goto VAR29;
        }
        VAR13 = 1;
    }

    if (VAR6->VAR40 < VAR6->VAR41) {
        
        int VAR42 = FUN11(VAR6->VAR41 - VAR6->VAR40, VAR4);
        memcpy(VAR3, VAR6->VAR43, VAR42);
        VAR6->VAR40 += VAR42;
        return VAR42;
    }

    VAR11 = FUN12(VAR6, FUN8(VAR6), VAR3, VAR4, VAR44);
    if (VAR11 > 0) {
        if (VAR13 && VAR6->VAR45 != 0) {
            
            FUN13(VAR6, VAR3, VAR4, &VAR11);
        }

        return VAR11;
    }
    FUN14(VAR6->VAR9, &VAR6->VAR17);
    VAR6->VAR35++;

    VAR8->VAR35 = VAR6->VAR35;

    goto VAR14;
}