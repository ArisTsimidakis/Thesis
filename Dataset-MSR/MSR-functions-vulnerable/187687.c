FUN1(VAR1* PNG_CONST VAR2, png_byte PNG_CONST VAR3,

    png_byte PNG_CONST VAR4, unsigned int VAR5,




     int VAR6, png_const_charp VAR7)
 {
    FUN2(VAR2, VAR8);

   FUN3(VAR6);

 VAR9

    {
       png_infop VAR10;
       png_structp VAR11 = FUN4(VAR2, &VAR10, VAR7);

      png_uint_32 VAR12;


 
       

       if (VAR11 == NULL)
          Throw VAR2;
 


       VAR12 = FUN5(VAR11, VAR3, VAR4);
 

      FUN6(VAR11, VAR10, FUN7(VAR11, VAR3, VAR4), VAR12,

         VAR4, VAR3, VAR6,


          VAR13, VAR14);
 
 #ifdef VAR15
#  if FUN8(VAR16) && FUN8(VAR17)
#     define TEXT_COMPRESSION VAR18
#  else
#     define TEXT_COMPRESSION VAR19
#  endif
 {
 static char VAR20[] = ""; 
 size_t VAR21;
         png_text VAR22;
 char copy[VAR23];

 
         VAR22.VAR24 = VAR25;
         VAR22.VAR20 = VAR20;
 
         VAR21 = FUN9(copy, sizeof copy, 0, VAR2->VAR26);
         VAR22.VAR22 = copy;
         VAR22.VAR27 = VAR21;
         VAR22.VAR28 = 0;
         VAR22.VAR29 = 0;
         VAR22.VAR30 = 0;

         FUN10(VAR11, VAR10, &VAR22, 1);
 }
#endif


       if (VAR3 == 3) 
          FUN11(VAR2, VAR11, VAR10, 1U << VAR4, 1);
 










       FUN12(VAR11, VAR10);
 
       if (FUN13(VAR11, VAR10) !=
           FUN14(VAR11, VAR3, VAR4))

         FUN15(VAR11, "");


 
       else
       {
 

         int VAR31 = FUN16(VAR11);


          int VAR32;
 
          if (VAR31 != FUN17(VAR11, VAR6))
            FUN15(VAR11, "");

 for (VAR32=0; VAR32<VAR31; ++VAR32)

          {
             png_uint_32 VAR33;
 






             for (VAR33=0; VAR33<VAR12; ++VAR33)
             {
                png_byte VAR34[VAR35];
 
                FUN18(VAR11, VAR34, VAR3, VAR4, VAR33);














































                FUN19(VAR11, VAR34);
             }
          }
 }

#ifdef VAR15
 {
 static char VAR20[] = "";
 static char VAR36[] = "";
         png_text VAR22;

 
         VAR22.VAR24 = VAR25;
         VAR22.VAR20 = VAR20;
         VAR22.VAR22 = VAR36;
         VAR22.VAR27 = (sizeof VAR36)-1;
         VAR22.VAR28 = 0;
         VAR22.VAR29 = 0;
         VAR22.VAR30 = 0;

         FUN10(VAR11, VAR10, &VAR22, 1);
 }
#endif

      FUN20(VAR11, VAR10);

 
      FUN21(VAR2, FUN22(VAR3, VAR4, VAR5,
         VAR6, 0, 0, 0));

      FUN23(VAR2);
 }

 FUN24(VAR8)
 {
 
      FUN23(VAR8);
 }

 }