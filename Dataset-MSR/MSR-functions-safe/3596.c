int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4) {
        unsigned char *VAR5;
        
        if (!FUN2(VAR2->VAR6, 8 + VAR2->VAR7)) {
            VAR2->VAR3 = VAR8;
            return -1;
        }

        VAR5 = (unsigned char *)VAR2->VAR6->VAR9;

        
        *(VAR5++) = VAR10;
        
        FUN3(VAR2->VAR7 + 4, VAR5);
        
        *(VAR5++) = VAR2->VAR11;
        
        FUN3(VAR2->VAR7, VAR5);
        
        memcpy(VAR5, VAR2->VAR12, VAR2->VAR7);
        
        VAR2->VAR13 = 8 + VAR2->VAR7;
        VAR2->VAR3 = VAR14;
        VAR2->VAR15 = 0;
    }

    
    return (FUN4(VAR2, VAR16));
}