FUN1(VAR1* PNG_CONST VAR2, png_byte PNG_CONST VAR3,

    png_byte PNG_CONST VAR4, int PNG_CONST VAR5,

    png_uint_32 PNG_CONST VAR6, png_uint_32 PNG_CONST VAR7,

    int PNG_CONST VAR8)








 {
    FUN2(VAR2, VAR9);
 

   
    FUN3(VAR5);
 
    VAR10
 {
      png_infop VAR11;
      png_structp VAR12;
 unsigned int VAR13;

 
       
       char VAR14[VAR15];

      PNG_CONST png_uint_32 VAR16 = FUN4(VAR3, VAR4, 0,


          VAR5, VAR6, VAR7, VAR8);
 
       FUN5(VAR14, sizeof VAR14, 0, VAR16);
      VAR12 = FUN6(VAR2, &VAR11, VAR14);

 
 if (VAR12 == NULL)
 Throw VAR2;

      FUN7(VAR12, VAR11, VAR6, VAR7, VAR4, VAR3, VAR5,
         VAR17, VAR18);

#ifdef VAR19
 {
 static char VAR20[] = ""; 
 size_t VAR21;
         png_text VAR22;
 char copy[VAR15];

 
         VAR22.VAR23 = VAR24;
         VAR22.VAR20 = VAR20;
 
         VAR21 = FUN8(copy, sizeof copy, 0, VAR2->VAR25);
         VAR22.VAR22 = copy;
         VAR22.VAR26 = VAR21;
         VAR22.VAR27 = 0;
         VAR22.VAR28 = 0;
         VAR22.VAR29 = 0;

         FUN9(VAR12, VAR11, &VAR22, 1);
 }
#endif

 if (VAR3 == 3) 
         FUN10(VAR2, VAR12, VAR11, 1U << VAR4, 0);

      FUN11(VAR12, VAR11);

 
       VAR13 = FUN12(VAR12, VAR3, VAR4);
       if (FUN13(VAR12, VAR11) != ((VAR6 * VAR13) + 7) / 8)

         FUN14(VAR12, "");


 
       else
       {
 int VAR30 = FUN15(VAR12, VAR5);
         png_uint_32 VAR31;
 int VAR32;
#        ifdef VAR33
 int VAR34 = VAR35;
#        endif
         png_byte VAR36[16][VAR37];

 
          memset(VAR36, 0xff, sizeof VAR36);
 

         if (!VAR8 && VAR30 != FUN16(VAR12))




             FUN14(VAR12, "");
 
          
 for (VAR31=0; VAR31<VAR7; ++VAR31)
            FUN17(VAR36[VAR31], VAR6 * VAR13, VAR31);


          for (VAR32=0; VAR32<VAR30; ++VAR32)
          {
             

            PNG_CONST png_uint_32 VAR38 = FUN18(VAR6, VAR32);


 
             
 for (VAR31=0; VAR31<VAR7; ++VAR31)
 {
               png_const_bytep VAR39 = VAR36[VAR31];
               png_byte VAR40[VAR37];

 
 if (VAR8 && VAR5 == VAR41)
 {
 
 if (FUN19(VAR31, VAR32) && VAR38 > 0)
 {
 
                      memset(VAR40, 0xff, sizeof VAR40);

                     FUN20(VAR40, VAR39, VAR13, VAR6, VAR32);




                      VAR39 = VAR40;
                   }
                   else
 continue;
 }

#           ifdef VAR33
 
               FUN21(VAR12, 0,
                  VAR34 >= VAR35 ? VAR42 : VAR34);

 if (VAR34-- == 0)
                  VAR34 = VAR35-1;
#           endif

               FUN22(VAR12, VAR39);
 }
 }
 }

#ifdef VAR19
 {
 static char VAR20[] = "";
 static char VAR43[] = "";
         png_text VAR22;

 
         VAR22.VAR23 = VAR24;
         VAR22.VAR20 = VAR20;
         VAR22.VAR22 = VAR43;
         VAR22.VAR26 = (sizeof VAR43)-1;
         VAR22.VAR27 = 0;
         VAR22.VAR28 = 0;
         VAR22.VAR29 = 0;

         FUN9(VAR12, VAR11, &VAR22, 1);
 }
#endif

      FUN23(VAR12, VAR11);

 
      FUN24(VAR2, VAR16);

      FUN25(VAR2);
 }

 FUN26(VAR9)
 {
 
      FUN25(VAR9);
 }

 }