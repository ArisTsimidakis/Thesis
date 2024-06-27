static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR2.VAR8);
    uint32_t VAR9;

    
    assert(VAR4->VAR2.VAR10 == NULL);

    if (VAR4->VAR2.VAR11.VAR12 != VAR13) {
        FUN3("");
        FUN4(VAR4, -VAR14);
         return;
     }
 

    VAR9 = VAR4->VAR15.VAR16 / 512;


     if (VAR9) {
         if (VAR6->VAR17) {
             FUN4(VAR4, -VAR18);
         }

        FUN5(&VAR4->VAR19, &VAR4->VAR15, 1);


         FUN6(VAR6->VAR20, &VAR4->VAR21, VAR9 * VAR22, VAR23);
         VAR4->VAR2.VAR10 = FUN7(VAR6->VAR20, VAR4->VAR24, &VAR4->VAR19, VAR9,

                                   VAR25, VAR4);


         if (VAR4->VAR2.VAR10 == NULL) {
             FUN4(VAR4, -VAR26);
         }
     } else {

        


         FUN4(VAR4, 0);
     }
 }