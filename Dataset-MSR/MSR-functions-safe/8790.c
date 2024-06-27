static int FUN1(struct VAR1 *VAR2)
{
   
   if (VAR2->VAR3 == 0)
      return -1;

   
   if (VAR2->VAR4 >= VAR5)
      return -1;

   if (VAR2->VAR6 >= VAR7)
      return -1;

   
   if (VAR2->VAR8 > 1) {
      if (VAR2->VAR4 != VAR9 && VAR2->VAR4 != VAR10)
         return -1;
      
      if (VAR2->VAR11 > 0)
         return -1;
   }

   if (VAR2->VAR11 > 0) {
      
      if (VAR2->VAR4 == VAR12 || VAR2->VAR4 == VAR13)
         return -1;
      if (VAR2->VAR11 > (FUN2(FUN3(FUN4(VAR2->VAR14, VAR2->VAR15))) + 1))
         return -1;
   }
   if (VAR2->VAR16 != 0 && VAR2->VAR16 != VAR17)
      return -1;

   if (VAR2->VAR16 & VAR17)
      if (VAR2->VAR4 != VAR9 && VAR2->VAR4 != VAR13)
         return -1;

   
   if (VAR2->VAR4 == VAR18) {
      if (VAR2->VAR19 != 6)
         return -1;
   } else if (VAR2->VAR4 == VAR20) {
      if (VAR2->VAR19 % 6)
         return -1;
   } else if (VAR2->VAR19 > 1) {
      if (VAR2->VAR4 != VAR10 &&
          VAR2->VAR4 != VAR21)
         return -1;
   }

   if (VAR2->VAR22 == 0 ||
       VAR2->VAR22 == VAR23 ||
       VAR2->VAR22 == VAR24 ||
       VAR2->VAR22 == VAR25 ||
       VAR2->VAR22 == VAR26 ||
       VAR2->VAR22 == VAR27) {
      if (VAR2->VAR4 != VAR12)
         return -1;
      if (VAR2->VAR15 != 1 || VAR2->VAR28 != 1)
         return -1;
   } else {
      if (!((VAR2->VAR22 & VAR29) ||
            (VAR2->VAR22 & VAR30) ||
            (VAR2->VAR22 & VAR31) ||
            (VAR2->VAR22 & VAR32)))
         return -1;

      if (VAR2->VAR4 == VAR9 ||
          VAR2->VAR4 == VAR13 ||
          VAR2->VAR4 == VAR18 ||
          VAR2->VAR4 == VAR10 ||
          VAR2->VAR4 == VAR20) {
         if (VAR2->VAR28 != 1)
            return -1;
      }
      if (VAR2->VAR4 == VAR33 ||
          VAR2->VAR4 == VAR21) {
         if (VAR2->VAR15 != 1 || VAR2->VAR28 != 1)
            return -1;
      }
   }
   return 0;
}