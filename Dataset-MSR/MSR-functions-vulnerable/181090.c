FUN1(VAR1 *VAR2,
                      const struct VAR3 *VAR4, register const VAR5 *VAR6)
{
        struct juniper_l2info_t VAR7;
        struct VAR8 {
            uint8_t VAR9;
            uint8_t VAR10;
            uint8_t VAR11[2];
            uint8_t VAR12[4];
        };
        const struct VAR8 *VAR13;

        VAR7.VAR14 = VAR15;
        if (FUN2(VAR2, VAR6, VAR4, &VAR7) == 0)
            return VAR7.VAR16;

         VAR6+=VAR7.VAR16;
         VAR13 = (const struct VAR8 *)VAR6;
 


         if (VAR2->VAR17)
             FUN3((VAR2, "",
                    FUN4(&VAR13->VAR12),
                   FUN5(&VAR13->VAR11),
                   VAR13->VAR9));

        
         FUN6 (VAR2, VAR6, VAR7.VAR18);
 
         return VAR7.VAR16;








 }