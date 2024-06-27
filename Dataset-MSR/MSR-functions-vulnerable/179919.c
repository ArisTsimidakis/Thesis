FUN1(VAR1 *VAR2)
    {
    VAR3 *VAR4;
    
    VAR4 = FUN2(VAR2->VAR5->VAR6.VAR7);
    if (VAR4)
        {
        
        if (VAR2->VAR5->VAR6.VAR8 != VAR2->VAR5->VAR9)
            return(1);  
        
        
        while (FUN2(VAR2->VAR5->VAR6.VAR7))
            {
             FUN3(VAR2);
             if ( ! FUN4(VAR2))
                 return(0);

            FUN5(VAR2, &(VAR2->VAR5->VAR10), 

                VAR2->VAR11->VAR12.VAR13);






             }
         }
 
    
    VAR2->VAR5->VAR10.VAR8 = VAR2->VAR5->VAR9;
    VAR2->VAR5->VAR6.VAR8 = VAR2->VAR5->VAR9 + 1;

    return(1);
    }