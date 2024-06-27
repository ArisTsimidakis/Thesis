static inline int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    unsigned int VAR4;
    struct VAR5 *VAR6 = NULL;
    struct VAR7 *VAR8;

    if (VAR9->VAR10 == VAR11) {
        return close(VAR2->VAR12);
    }

    VAR3   = VAR2->VAR13;
    VAR4 = VAR2->VAR14;

    VAR6 = FUN2(VAR3, VAR2->VAR15);
    if (FUN3(!VAR6)) {
        return close(VAR2->VAR12);
    }

    
    VAR8 = FUN4(VAR4, VAR6);
    if (VAR8) {
        
        VAR8->VAR16--;
        if (VAR8->VAR16 == 0) {
            VAR8->VAR17   = -1;
            VAR8->VAR4 = 0;
            VAR6->VAR18++;
            return close(VAR2->VAR12);
        }
        else {
             return 0;
         }
     }


     return close(VAR2->VAR12);
 }