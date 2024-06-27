FUN1(png_structp VAR1, png_infop VAR2, png_uint_32 VAR3)
 {
    png_color VAR4[VAR5];

   int VAR6, VAR7;


 #ifdef VAR8
    png_colorp VAR9;
 #endif

   FUN2(1, "");

   if (!(VAR1->VAR10 & VAR11))
      FUN3(VAR1, "");

   else if (VAR1->VAR10 & VAR12)
   {
      FUN4(VAR1, "");
      FUN5(VAR1, VAR3);
      return;
   }

   else if (VAR1->VAR10 & VAR13)
      FUN3(VAR1, "");

   VAR1->VAR10 |= VAR13;

   if (!(VAR1->VAR14&VAR15))
   {
      FUN4(VAR1,
        "");
      FUN5(VAR1, VAR3);
      return;
   }
#ifndef VAR16
   if (VAR1->VAR14 != VAR17)
   {
      FUN5(VAR1, VAR3);
      return;
   }
#endif

   if (VAR3 > 3*VAR5 || VAR3 % 3)
   {
      if (VAR1->VAR14 != VAR17)
      {
         FUN4(VAR1, "");
         FUN5(VAR1, VAR3);
         return;
      }

      else
      {
         FUN3(VAR1, "");
       }
    }
 


    VAR6 = (int)VAR3 / 3;
 


























 #ifdef VAR8
    for (VAR7 = 0, VAR9 = VAR4; VAR7 < VAR6; VAR7++, VAR9++)
    {
      png_byte VAR18[3];

      FUN6(VAR1, VAR18, 3);
      VAR9->VAR19 = VAR18[0];
      VAR9->VAR20 = VAR18[1];
      VAR9->VAR21 = VAR18[2];
   }
#else
   for (VAR7 = 0; VAR7 < VAR6; VAR7++)
   {
      png_byte VAR18[3];

      FUN6(VAR1, VAR18, 3);
      
      VAR4[VAR7].VAR19 = VAR18[0];
      VAR4[VAR7].VAR20 = VAR18[1];
      VAR4[VAR7].VAR21 = VAR18[2];
   }
#endif

   
#ifndef VAR16
    if (VAR1->VAR14 == VAR17)
 #endif
    {

      FUN5(VAR1, 0);


    }
 #ifndef VAR16
    else if (FUN7(VAR1))  
   {
      
      if (!(VAR1->VAR22 & VAR23))
      {
         if (VAR1->VAR22 & VAR24)
         {
            FUN8(VAR1, "");
         }
         else
         {
            FUN9(VAR1, "");
            return;
         }
      }
      
      else if (!(VAR1->VAR22 & VAR24))
      {
         FUN9(VAR1, "");
      }
   }
#endif

   FUN10(VAR1, VAR2, VAR4, VAR6);

#ifdef VAR25
   if (VAR1->VAR14 == VAR17)
   {
      if (VAR2 != NULL && (VAR2->VAR26 & VAR27))
      {
         if (VAR1->VAR28 > (VAR29)VAR6)
         {
            FUN4(VAR1, "");
            VAR1->VAR28 = (VAR29)VAR6;
         }
         if (VAR2->VAR28 > (VAR29)VAR6)
         {
            FUN4(VAR1, "");
            VAR2->VAR28 = (VAR29)VAR6;
         }
      }
   }
#endif

}