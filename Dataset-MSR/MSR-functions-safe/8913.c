void FUN1(struct VAR1 *VAR2,
                                         uint32_t VAR3, uint32_t VAR4,
                                         uint32_t VAR5, uint32_t VAR6, uint32_t VAR7,
                                         uint32_t VAR8, uint32_t VAR9,
                                         const struct VAR10 *VAR11)
{
   struct VAR12 *VAR13, *VAR14;
   GLbitfield VAR15 = 0;
   GLint VAR16, VAR17, VAR18, VAR19;

   if (VAR2->VAR20)
      return;

   VAR13 = FUN2(VAR2, VAR8);
   VAR14 = FUN2(VAR2, VAR3);

   if (!VAR13) {
      FUN3(VAR2, VAR21, VAR8);
      return;
   }
   if (!VAR14) {
      FUN3(VAR2, VAR21, VAR3);
      return;
   }

   if (VAR13->VAR22.VAR23 == VAR24 && VAR14->VAR22.VAR23 == VAR24) {
      
      FUN4(VAR2, VAR13, VAR14, VAR5,
                                 VAR11->VAR25, VAR11->VAR26);
      return;
   }

   if (!FUN5(VAR13->VAR22.VAR27) ||
       !FUN5(VAR14->VAR22.VAR27)) {
      FUN6(VAR2, VAR13, VAR14, VAR4, VAR5,
                                   VAR6, VAR7, VAR9, VAR11);

      return;
   }

   FUN7(VAR28, VAR2->VAR29->VAR30[0]);
   
   FUN8(VAR28, VAR31,
                             VAR32, 0, 0);
   FUN9(VAR13, 0, VAR9, VAR11->VAR33);

   FUN7(VAR28, VAR2->VAR29->VAR30[1]);
   FUN8(VAR28, VAR31,
                             VAR32, 0, 0);
   FUN9(VAR14, 0, VAR4, VAR7);
   FUN7(VAR34, VAR2->VAR29->VAR30[1]);

   FUN7(VAR35, VAR2->VAR29->VAR30[0]);

   VAR15 = VAR36;
   FUN10(VAR37);

   if (!VAR13->VAR38) {
      VAR16 = VAR11->VAR39;
      VAR17 = VAR11->VAR39 + VAR11->VAR40;
   } else {
      VAR16 = VAR13->VAR22.VAR41 - VAR11->VAR39 - VAR11->VAR40;
      VAR17 = VAR13->VAR22.VAR41 - VAR11->VAR39;
   }

   if (!VAR14->VAR38) {
      VAR18 = VAR6;
      VAR19 = VAR6 + VAR11->VAR40;
   } else {
      VAR18 = VAR14->VAR22.VAR41 - VAR6 - VAR11->VAR40;
      VAR19 = VAR14->VAR22.VAR41 - VAR6;
   }

   FUN11(VAR11->VAR25, VAR16,
                     VAR11->VAR25 + VAR11->VAR26,
                     VAR17,
                     VAR5, VAR18,
                     VAR5 + VAR11->VAR26,
                     VAR19,
                     VAR15, VAR42);

}