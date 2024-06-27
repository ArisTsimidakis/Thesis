FUN1(PNG_CONST VAR1 *this,


     VAR2 *VAR3, png_structp VAR4, png_infop VAR5)
 {

   PNG_CONST int VAR6 = 1; 


 
 #  ifdef VAR7
       FUN2(VAR4, VAR6, VAR8.VAR9, VAR8.VAR10);
#  else
      FUN3(VAR4, VAR6, VAR8.VAR9,
         VAR8.VAR10);
#  endif

#  ifdef VAR11
 if (VAR3->VAR12->VAR13 != 0)
 {
 
#        ifdef VAR7
#           define API_function VAR14
#           define VAR15 ""
#           define API_type double
#           VAR16 FUN4(VAR17) (VAR17)
#        else
#           define API_function VAR18
#           define VAR15 ""
#           define API_type VAR19
#           VAR16 FUN4(VAR17) ((double)(VAR17)/VAR20)
#        endif

         API_type VAR21, VAR22, VAR23;
         API_type VAR24, VAR25, VAR26;
         API_type VAR27, VAR28, VAR29;

 if ((FUN5(VAR4, VAR5, &VAR21, &VAR24, &VAR27, &VAR22, &VAR25, &VAR28, &VAR23, &VAR26, &VAR29)

                & VAR30) != 0)
          {
             double VAR31;

            PNG_CONST char *VAR32;


             color_encoding VAR33, VAR34;
 
             
            FUN6(VAR3->VAR12, &VAR34);
            FUN7(&VAR34);

 
 if (VAR8.VAR9 == -1 && VAR8.VAR10 == -1 &&
 (FUN8(VAR34.VAR35.VAR36 - VAR8.VAR37) > VAR38 ||
               FUN8(VAR34.VAR39.VAR36 - VAR8.VAR40) > VAR38 ||
               FUN8(VAR34.VAR41.VAR36 - VAR8.VAR42) > VAR38))
               FUN9(VAR4, "");

 
            VAR33.VAR43 = VAR34.VAR43; 
            VAR33.VAR35.VAR44 = FUN4(VAR21);
            VAR33.VAR35.VAR36 = FUN4(VAR24);
            VAR33.VAR35.VAR45 = FUN4(VAR27);
            VAR33.VAR39.VAR44 = FUN4(VAR22);
            VAR33.VAR39.VAR36 = FUN4(VAR25);
            VAR33.VAR39.VAR45 = FUN4(VAR28);
            VAR33.VAR41.VAR44 = FUN4(VAR23);
            VAR33.VAR41.VAR36 = FUN4(VAR26);
            VAR33.VAR41.VAR45 = FUN4(VAR29);

 
            VAR31 = 0;
            VAR32 = ""; 

#           VAR16 FUN10(VAR46,VAR17)\
 {\
 double VAR47 = FUN8(VAR34.VAR46.VAR17 - VAR33.VAR46.VAR17);\
 if (VAR47 > VAR31)\
 {\
                  VAR31 = VAR47;\
                  VAR32 = #VAR46 "" #VAR17 "";\
 }\
 }

            FUN10(VAR35,VAR44)
            FUN10(VAR35,VAR36)
            FUN10(VAR35,VAR45)
            FUN10(VAR39,VAR44)
            FUN10(VAR39,VAR36)
            FUN10(VAR39,VAR45)
            FUN10(VAR41,VAR44)
            FUN10(VAR41,VAR36)
            FUN10(VAR41,VAR45)

 
 if (VAR31 >= 1E-5)
 {
 size_t VAR48 = 0;
 char VAR49[256];

               VAR48 = FUN11(VAR49, sizeof VAR49, VAR48, VAR15);
               VAR48 = FUN11(VAR49, sizeof VAR49, VAR48, "");
               VAR48 = FUN11(VAR49, sizeof VAR49, VAR48, VAR32);
               VAR48 = FUN11(VAR49, sizeof VAR49, VAR48, "");
               VAR48 = FUN12(VAR49, sizeof VAR49, VAR48, VAR31, 7);
               VAR48 = FUN11(VAR49, sizeof VAR49, VAR48, "");
 
               VAR48 = FUN13(VAR49, sizeof VAR49, VAR48, &VAR34, 0);
               VAR48 = FUN11(VAR49, sizeof VAR49, VAR48, "");
               VAR48 = FUN13(VAR49, sizeof VAR49, VAR48, &VAR33, 0);

               FUN9(VAR4, VAR49);
 }
 }
 }
#  endif 

 this->VAR50->FUN14(this->VAR50, VAR3, VAR4, VAR5);

 }