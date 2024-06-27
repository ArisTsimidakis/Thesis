int FUN1(VAR1 *VAR2)
{
    int VAR3;
    size_t VAR4;
    
     if (VAR2->VAR5->VAR6) {
         FUN2(VAR2->VAR5->VAR6);
         VAR2->VAR5->VAR6 = NULL;


     }
     
     for (VAR4 = 0; VAR4 < VAR7; VAR4++) {
        VAR2->VAR5->VAR8[VAR4].VAR9 = 0;
    }

    
    if (VAR2->VAR5->VAR10) {
        if (!FUN3(VAR2)) {
            FUN4(VAR11, VAR12);
            VAR3 = VAR13;
            goto VAR14;
        }
        
        if (!VAR2->VAR5->VAR6) {
            FUN4(VAR11,
                   VAR15);
            VAR3 = VAR16;
            goto VAR14;
        }
    } else
        FUN5(VAR2->VAR5);
    return 1;
 VAR14:
    FUN6(VAR2, VAR17, VAR3);
    return 0;
}