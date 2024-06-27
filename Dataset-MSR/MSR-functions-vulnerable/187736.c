FUN1(VAR1 *VAR2, png_const_structp VAR3,

    png_infop VAR4)
 {
    

   PNG_CONST VAR5* PNG_CONST VAR6 = VAR2->this.VAR6;

   PNG_CONST png_byte VAR7 = VAR2->this.VAR8;

   PNG_CONST png_byte VAR9 = VAR2->this.VAR10;

   PNG_CONST png_uint_32 VAR11 = VAR2->this.VAR11;

   PNG_CONST png_uint_32 VAR12 = VAR2->this.VAR12;

   PNG_CONST png_byte VAR13 = VAR2->VAR14;

   PNG_CONST png_byte VAR15 = VAR2->VAR16;

   PNG_CONST png_byte VAR17 = (VAR18)(VAR13 ==
















       VAR19 ? 8 : VAR15);

   PNG_CONST png_byte VAR20 = VAR2->this.VAR20;

   PNG_CONST png_byte VAR21 = VAR2->this.VAR21;

   PNG_CONST png_byte VAR22 = VAR2->this.VAR22;

   PNG_CONST png_byte VAR23 = VAR2->this.VAR23;

   PNG_CONST int VAR24 = VAR2->this.VAR25;










    double VAR26;
 
    store_palette VAR27;
   png_uint_32 VAR28;

   FUN2(VAR4)

 
   FUN3(VAR2->this.VAR6, VAR3, 0);

 
 if (VAR13 == VAR19)
 {
 
 int VAR29 = (-1);

 (void)FUN4(VAR27, &VAR29, VAR3, VAR4);
 if (VAR29 != VAR2->this.VAR29)
         FUN5(VAR3, "");

      VAR26 = .5;
 }
 else
 {
      png_byte VAR30;

      memset(VAR27, 0x5e, sizeof VAR27);

 
 if (VAR7 == VAR19 || VAR9 < 16)
         VAR30 = 8;
 else
         VAR30 = VAR9;

 if (VAR17 != 16 || VAR30 > 8 ||
 !VAR2->VAR31->VAR32)
         VAR26 = .5;

 
 else
         VAR26 = .5 * 257;
 }

 
    for (VAR28=0; VAR28<VAR12; ++VAR28)
    {

      png_const_bytep PNG_CONST VAR33 = FUN6(VAR6, VAR3, 0, VAR28);


       png_uint_32 VAR34;
 
       
      png_byte VAR35[VAR36];

      FUN7(VAR3, VAR35, VAR7, VAR9, VAR28);

 
 for (VAR34=0; VAR34<VAR11; ++VAR34)
 {
         image_pixel VAR37, VAR38;

          unsigned int VAR39, VAR40, VAR41, VAR42;
 
          

         FUN8(&VAR37, VAR35, VAR7, VAR9, VAR34, VAR2->this.VAR43);




 
          VAR37.VAR20 = VAR20;
          VAR37.VAR21 = VAR21;
          VAR37.VAR22 = VAR22;
          VAR37.VAR23 = VAR23;

         VAR37.VAR24 = VAR24;


 
          
          VAR39 = VAR37.VAR44;
         VAR40 = VAR37.VAR45;

          VAR41 = VAR37.VAR46;
          VAR42 = VAR37.VAR47;
 








          VAR2->VAR48->FUN9(VAR2->VAR48, &VAR37, VAR3, VAR2);
 
          

         FUN8(&VAR38, VAR33, VAR13, VAR15, VAR34, VAR27);




 
          
 if (VAR7 == VAR19 &&
            VAR13 == VAR19)
 {
 if (VAR37.VAR49 != VAR38.VAR49)
               FUN5(VAR3, "");
 }

 
 if (VAR37.VAR44 != VAR38.VAR44)
            FUN10(VAR3, VAR39, VAR40, VAR41, VAR42, VAR37.VAR44, VAR37.VAR50,
               VAR38.VAR44, VAR17, VAR37.VAR51,
               VAR2->VAR31->VAR52 + 1./(2*((1U<<VAR37.VAR20)-1)), "",
               VAR26);

 if ((VAR13 & VAR53) != 0 &&
            VAR37.VAR45 != VAR38.VAR45)
            FUN10(VAR3, VAR39, VAR40, VAR41, VAR42, VAR37.VAR45,
               VAR37.VAR54, VAR38.VAR45, VAR17, VAR37.VAR55,
               VAR2->VAR31->VAR52 + 1./(2*((1U<<VAR37.VAR21)-1)), "",
               VAR26);

 if ((VAR13 & VAR53) != 0 &&
            VAR37.VAR46 != VAR38.VAR46)
            FUN10(VAR3, VAR39, VAR40, VAR41, VAR42, VAR37.VAR46, VAR37.VAR56,
               VAR38.VAR46, VAR17, VAR37.VAR57,
               VAR2->VAR31->VAR52 + 1./(2*((1U<<VAR37.VAR22)-1)), "",
               VAR26);

 if ((VAR13 & VAR58) != 0 &&
            VAR37.VAR47 != VAR38.VAR47)
            FUN10(VAR3, VAR39, VAR40, VAR41, VAR42, VAR37.VAR47,
               VAR37.VAR59, VAR38.VAR47, VAR17, VAR37.VAR60,
               VAR2->VAR31->VAR52 + 1./(2*((1U<<VAR37.VAR23)-1)), "",
               VAR26);
 } 
 } 

 
   VAR2->this.VAR6->VAR61 = 1;
}