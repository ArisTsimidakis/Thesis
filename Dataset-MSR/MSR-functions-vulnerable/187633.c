FUN1(VAR1 *VAR2, VAR3 *VAR4, png_uint_32 VAR5,
     double VAR6, double VAR7, png_byte VAR8, int VAR9,
     int VAR10, int VAR11, int VAR12,

    int VAR13, PNG_CONST VAR14 *VAR15,


     double VAR16)
 {
    

   FUN2(&VAR2->this, &VAR4->this, VAR5, 0,


       VAR4->VAR17);
 
    
   VAR2->VAR4 = VAR4;
   VAR2->VAR6 = VAR6;
   VAR2->VAR7 = VAR7;
   VAR2->VAR16 = VAR16;
   VAR2->VAR8 = VAR8;
   VAR2->VAR9 = VAR9;
   VAR2->VAR10 = VAR10;
   VAR2->VAR11 = VAR11;
   VAR2->VAR12 = VAR12;
   VAR2->VAR13 = VAR13;
 if (VAR13 && VAR15 != 0)
      VAR2->VAR18 = *VAR15;
 else
      memset(&VAR2->VAR18, 0, sizeof VAR2->VAR18);

 
   VAR2->VAR19 = VAR2->VAR20 = VAR2->VAR21 = 0;
}