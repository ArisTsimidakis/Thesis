int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR4;
    int VAR5;

    
    if ((VAR2->VAR6 != -1) && VAR2->VAR7 && VAR2->VAR7->VAR8) {
        int VAR9;
        VAR10 *VAR11;
        VAR11 = FUN2(VAR2);
        
        if (VAR11 == NULL) {
            VAR2->VAR12 = 0;
            return 1;
        }
        
        VAR2->VAR13->VAR14 = VAR11;
        VAR9 = VAR2->VAR7->FUN3(VAR2, VAR2->VAR7->VAR15);
        switch (VAR9) {
            
        case VAR16:
            VAR2->VAR12 = 0;
            break;
            
        case VAR4:
            if (VAR2->VAR17)
                VAR2->VAR12 = 1;
            else
                VAR2->VAR12 = 0;
            break;
            
        case VAR18:
            VAR3 = VAR18;
            VAR5 = VAR19;
            goto VAR20;
        }
    } else
        VAR2->VAR12 = 0;

 VAR20:
    switch (VAR3) {
    case VAR18:
        FUN4(VAR2, VAR21, VAR5);
        return -1;

    case VAR22:
        FUN4(VAR2, VAR23, VAR5);
        return 1;

    default:
        return 1;
    }
}