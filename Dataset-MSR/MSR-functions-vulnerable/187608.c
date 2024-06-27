FUN1(const char **VAR1, VAR2 *VAR3, int VAR4, int VAR5,
    volatile png_fixed_point VAR6, VAR7 * volatile VAR8,

   unsigned int VAR9, unsigned int *VAR10)


 {
    png_structp VAR11 = FUN2(VAR12,
       VAR1, VAR13, VAR14);
 volatile png_infop VAR15 = NULL;
 volatile png_bytep VAR16 = NULL;

 if (VAR11 == NULL)
 {
      fprintf(VAR17, "");
 return 1;
 }

 if (FUN3(FUN4(VAR11)))
 {
      png_structp VAR18 = VAR11;
      png_infop VAR19 = VAR15;

      VAR11 = NULL;
      VAR15 = NULL;
      FUN5(&VAR18, &VAR19);
 if (VAR16 != NULL) free(VAR16);
 return 1;
 }

 
    
    FUN6(VAR11, 1);


















    FUN7(VAR11, VAR3);
 
    VAR15 = FUN8(VAR11);
 if (VAR15 == NULL)

       FUN9(VAR11, "");
 
    {

      unsigned int VAR20 = FUN10(VAR4, VAR5, VAR10);






       png_fixed_point VAR21 = 45455; 
       png_byte VAR22[256];
       double VAR23;
 
















































       
 if (VAR6 == VAR24)
         VAR6 = 65909;

 else if (VAR6 > 0 && VAR6 < 1000)
         VAR6 = VAR25;

 if (VAR6 > 0)
         VAR21 = VAR6;

 {
 unsigned int VAR26;

 if (VAR21 == 45455) for (VAR26=0; VAR26<256; ++VAR26)
 {
            VAR22[VAR26] = (VAR27)VAR26;
            VAR23 = 1.;
 }

 else
 {
 
            VAR23 = VAR21;
            VAR23 /= 45455;


             VAR22[0] = 0;
 
             for (VAR26=1; VAR26<255; ++VAR26)

               VAR22[VAR26] = (VAR27)FUN11(FUN12(VAR26/255.,VAR23) * 255 + .5);


 
             VAR22[255] = 255;
          }
       }
 

      FUN13(VAR11, VAR15, VAR20, VAR20, VAR5, VAR4,


          VAR28, VAR29, VAR30);
 
       if (VAR4 & VAR31)
 {
 int VAR32;
         png_color VAR33[256];
         png_byte VAR34[256];


          VAR32 = FUN14(VAR33, VAR34, VAR5, VAR22,
             VAR10);
          FUN15(VAR11, VAR15, VAR33, VAR32);

         FUN16(VAR11, VAR15, VAR34, VAR32-1,

            NULL);








 
          
          for (VAR32=0; VAR32<256; ++VAR32)
             VAR22[VAR32] = (VAR27)VAR32;
       }
 




















       if (VAR6 == VAR35)
          FUN17(VAR11, VAR15, VAR36);
 
 else if (VAR6 > 0) 
 {
         FUN18(VAR11, VAR15, VAR21);

 
         FUN19(VAR11, VAR15,
 
  31270, 32900,
  64000, 33000,
  30000, 60000,
  15000, 6000
 );
 }

 
 while (VAR8 != NULL)
 {
         VAR8->FUN20(VAR11, VAR15, VAR8->VAR37, VAR8->VAR38);
         VAR8 = VAR8->VAR39;
 }

 
      FUN21(VAR11, VAR15);

 

       FUN22(VAR11, VAR30, VAR9);
 
       {

         int VAR40 = FUN23(VAR11);










          int VAR41;
          png_size_t VAR42 = FUN24(VAR11, VAR15);
 
         VAR16 = malloc(VAR42);

 if (VAR16 == NULL)
            FUN9(VAR11, "");

 for (VAR41 = 0; VAR41 < VAR40; ++VAR41)

          {
             unsigned int VAR43;
 

            for (VAR43=0; VAR43<VAR20; ++VAR43)


             {

               FUN25(VAR16, VAR42, VAR43, VAR4, VAR5,

                  VAR22, VAR23, VAR10);














                FUN26(VAR11, VAR16);
             }
          }
 }
 }

 
   FUN27(VAR11, VAR15);

 {
      png_structp VAR18 = VAR11;
      png_infop VAR19 = VAR15;

      VAR11 = NULL;
      VAR15 = NULL;
      FUN5(&VAR18, &VAR19);
 }
   free(VAR16);
 return 0;
}