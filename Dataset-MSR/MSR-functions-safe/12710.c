int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3->VAR4) {
        VAR2->VAR3->VAR5 =
            VAR2->VAR3->VAR4 - FUN2(FUN3(VAR2));
        VAR2->VAR3->VAR4 = 0;
    }

    
    if (VAR2->VAR3->VAR5 < FUN4(VAR2)) {
        if (!(FUN5(VAR2) & VAR6)) {
            VAR2->VAR3->VAR5 =
                FUN6(FUN3(VAR2), VAR7, 0, NULL);

            
            if (VAR2->VAR3->VAR5 < FUN4(VAR2)) {
                
                VAR2->VAR3->VAR5 = FUN4(VAR2);
                FUN6(FUN3(VAR2), VAR8,
                         VAR2->VAR3->VAR5, NULL);
            }
        } else
            return 0;
    }
    return 1;
}