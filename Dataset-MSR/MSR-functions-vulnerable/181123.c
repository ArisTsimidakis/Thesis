FUN1(VAR1 *VAR2,
                   const struct VAR3 *VAR4, register const VAR5 *VAR6)
{
        struct juniper_l2info_t VAR7;

        VAR7.VAR8 = VAR9;
        if (FUN2(VAR2, VAR6, VAR4, &VAR7) == 0)
            return VAR7.VAR10;

        VAR6+=VAR7.VAR10;

        
        if (VAR2->VAR11 && FUN3(VAR7.VAR12) != 1)
            FUN4((VAR2, "", VAR7.VAR13));
         switch (VAR7.VAR14) {
         case (VAR15):
         case (VAR15<<8):

            FUN5(VAR2, VAR6, VAR7.VAR16, VAR7.VAR17);


             break;
         case (VAR15<<8 | VAR18):
         case (VAR15<<8 | VAR19):
         case (VAR15<<8 | VAR20):
             

            FUN5(VAR2, VAR6 - 1, VAR7.VAR16 + 1, VAR7.VAR17 + 1);


             break;
         default:
             FUN4((VAR2, "", VAR7.VAR14, VAR7.VAR16));
        }

        return VAR7.VAR10;
}