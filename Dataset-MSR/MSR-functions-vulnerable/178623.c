VAR1 FUN1(VAR2 *VAR3,
                     struct VAR4 *VAR5,
                     size_t VAR6,
                     size_t VAR7,
                     bool VAR8)
{
    ssize_t VAR9 = 0;
    VAR10 *VAR11 = NULL;
    struct VAR4 *VAR12 = FUN2(struct VAR4, VAR6);
    struct VAR4 *VAR13 = VAR12;
    unsigned int VAR14 = VAR6;

    VAR14 = FUN3(VAR12, VAR14, VAR5, VAR6, 0, VAR7);

    while (VAR14 > 0) {
        ssize_t VAR15;
        if (VAR8) {
            VAR15 = FUN4(VAR3, VAR12, VAR14, &VAR11);
        } else {
            VAR15 = FUN5(VAR3, VAR12, VAR14, &VAR11);
         }
         if (VAR15 == VAR16) {
             if (FUN6()) {

                

                FUN7();

            } else if (VAR9) {

                

                FUN8(VAR3,

                                 VAR8 ? VAR17 : VAR18);


             } else {
                 return -VAR19;
             }
            } else if (VAR9) {
                
                FUN8(VAR3,
                                 VAR8 ? VAR17 : VAR18);
            } else {
                return -VAR19;
            }
            continue;
        }
        if (VAR15 < 0) {
            FUN9("", FUN10(VAR11));
            FUN11(VAR11);
            
            VAR9 = -VAR20;
            goto VAR21;
        }

        if (VAR8 && VAR15 == 0) {
            break;
        }

        FUN12(&VAR12, &VAR14, VAR15);
        VAR9 += VAR15;
    }