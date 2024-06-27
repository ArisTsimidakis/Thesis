int FUN1(struct VAR1 *VAR2, uint32_t VAR3,
                       uint32_t VAR4, uint32_t VAR5,
                       uint32_t VAR6, uint32_t VAR7)
{
   struct VAR8 *VAR9;
   struct VAR10 *VAR11;
   uint32_t VAR12;
   VAR11 = FUN2(VAR2, VAR6);
   if (!VAR11) {
      FUN3(VAR2, VAR13, VAR6);
      return VAR14;
   }

   VAR9 = FUN4(VAR8);
   if (!VAR9)
      return VAR15;

   FUN5(&VAR9->VAR16);
   VAR9->VAR17 = VAR4;
   VAR9->VAR18 = VAR5;
   VAR9->VAR19 = VAR2->VAR19;

   FUN6(&VAR9->VAR11, VAR11);

   switch (VAR9->VAR17) {
   case VAR20:
      VAR9->VAR21 = VAR22;
      break;
   case VAR23:
      VAR9->VAR21 = VAR24;
      break;
   case VAR25:
      VAR9->VAR21 = VAR26;
      break;
   case VAR27:
      VAR9->VAR21 = VAR28;
      break;
   case VAR29:
      VAR9->VAR21 = VAR30;
      break;
   case VAR31:
      VAR9->VAR21 = VAR32;
      break;
   default:
      fprintf(VAR33,"", VAR9->VAR17);
      break;
   }

   FUN7(1, &VAR9->VAR34);

   VAR12 = FUN8(VAR2, VAR9, sizeof(struct VAR8), VAR3,
                                             VAR35);
   if (!VAR12) {
      FUN9(VAR9);
      return VAR15;
   }
   return 0;
}