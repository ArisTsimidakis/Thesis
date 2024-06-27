FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4,
   png_const_colorp VAR5)
{
 ptrdiff_t VAR6 = VAR2->VAR7;
 ptrdiff_t VAR8 = VAR3->VAR7;
   png_const_bytep VAR9 = VAR2->VAR10+16;
   png_const_bytep VAR11 = VAR3->VAR10+16;
 const png_uint_32 VAR12 = VAR2->VAR13.VAR12;
 const png_uint_32 VAR14 = VAR2->VAR13.VAR14;
 const png_uint_32 VAR15 = VAR2->VAR13.VAR16;
 const png_uint_32 VAR17 = VAR3->VAR13.VAR16;
 const unsigned int VAR18 = FUN2(VAR15);
 const unsigned int VAR19 = FUN2(VAR17);
 int VAR20, VAR21;
 int VAR22;
 int VAR23[4];
   png_uint_32 VAR24;
 Transform VAR25;

 
 if (VAR12 != VAR3->VAR13.VAR12 || VAR14 != VAR3->VAR13.VAR14)
 return FUN3(VAR2, VAR2->VAR26, "",
         VAR3->VAR26);

 
   FUN4(&VAR25, VAR2, VAR3, VAR5, VAR4);

 
 if (!(VAR15 & VAR27) &&
 (VAR15 & VAR28))
      VAR6 *= 2;

 if (!(VAR17 & VAR27) &&
 (VAR17 & VAR28))
      VAR8 *= 2;

 if (VAR6 < 0) VAR9 += (VAR14-1) * (-VAR6);
 if (VAR8 < 0) VAR11 += (VAR14-1) * (-VAR8);

 
 if (VAR15 & VAR17 & VAR27)
 {
 
      png_const_bytep VAR29, VAR30;
 int VAR31;
      png_byte VAR32[256], VAR33 = 0, VAR34 = 0;

      memset(VAR32, 0, sizeof VAR32);

      VAR29 = VAR9;
      VAR30 = VAR11;

 
 for (VAR24=0, VAR31=1; VAR24<VAR14 && VAR31; ++VAR24, VAR29 += VAR6, VAR30 += VAR8)
 {
         png_uint_32 VAR35;

 for (VAR35=0; VAR35<VAR12; ++VAR35)
 {
            png_byte VAR36 = VAR30[VAR35];
            png_byte VAR37 = VAR29[VAR35];

 if (VAR36 > VAR34)
               VAR34 = VAR36;

 if (VAR36 != VAR37)
               VAR31 = 0;

            VAR32[VAR37] = 1;
 if (VAR37 > VAR33)
               VAR33 = VAR37;
 }
 }

 
 if (VAR31)
 {
 
         png_const_bytep VAR38 = (VAR39)VAR2->VAR40;
         png_const_bytep VAR41 = (VAR39)VAR3->VAR40;
 int VAR42 = 1; 

 
         VAR25.VAR43 = 1;

 for (VAR24=0; VAR24<256; ++VAR24, VAR38 += VAR18, VAR41 += VAR19)
 if (VAR32[VAR24])
 {
 
 if (VAR24 >= VAR2->VAR13.VAR44)
 {
 if ((VAR2->VAR45 & VAR46) == 0)
 {
 char VAR47[9];
                  sprintf(VAR47, "", (unsigned long)VAR24,
 (unsigned long)VAR2->VAR13.VAR44);
                  FUN3(VAR2, VAR2->VAR26, "", VAR47);
 }
               VAR42 = 0;
 }

 
             else if (VAR24 >= VAR3->VAR13.VAR44)
             {

               if ((VAR2->VAR45 & VAR46) == 0)


                   {
                   char VAR47[9];
                   sprintf(VAR47, "", (unsigned long)VAR24,
 (unsigned long)VAR3->VAR13.VAR44);
                  FUN3(VAR3, VAR3->VAR26, "", VAR47);
 }
               VAR42 = 0;
 }

 
 else if (!FUN5(&VAR25, VAR38, VAR41, 0, VAR24))
               VAR42 = 0;
 }

 
 if (VAR2->VAR45 & VAR46)
 {
            VAR25.VAR48[0] = VAR25.VAR49[0];
            VAR25.VAR48[1] = VAR25.VAR49[1];
            VAR25.VAR48[2] = VAR25.VAR49[2];
            VAR25.VAR48[3] = VAR25.VAR49[3];
            VAR42 = 1; 
 }

 return VAR42;
 }

 
 else if ((VAR2->VAR45 & VAR46) == 0)
 {
 
 if (VAR33 >= VAR2->VAR13.VAR44)
 {
 char VAR47[9];
            sprintf(VAR47, "", VAR33,
 (unsigned long)VAR2->VAR13.VAR44);
 return FUN3(VAR2, VAR2->VAR26, "", VAR47);
 }

 else if (VAR34 >= VAR3->VAR13.VAR44)
 {
 char VAR47[9];
            sprintf(VAR47, "", VAR34,
 (unsigned long)VAR3->VAR13.VAR44);
 return FUN3(VAR3, VAR3->VAR26, "", VAR47);
 }
 }
 }

 
 if (!(((VAR15 ^ VAR17) & VAR28) |
 (VAR15 & (VAR17 ^ VAR50) & VAR50)))
 {
 
 const png_uint_32 VAR51 = (VAR15 ^ VAR17) &
         VAR52;

 
      VAR21 = (VAR15 & VAR51) != 0;

 
      VAR20 = (VAR17 & VAR51) != 0;

 
 {
 int VAR53;
         png_byte VAR54[4];
         png_byte VAR55[4];

 
 (void)FUN6(VAR54, VAR15);
         VAR22 = FUN6(VAR55, VAR17);

 
 for (VAR53=0; VAR53<4; ++VAR53) if (VAR55[VAR53] < 4)
            VAR23[VAR55[VAR53]] = VAR54[VAR53]; 

 if (VAR20)
            VAR20 = VAR55[0]; 

 else
            VAR20 = 4; 

 if (VAR21)
            VAR21 = VAR54[0]; 

 else
            VAR21 = 4;
 }
 }

 else
 {
 
      VAR22 = 0;
      VAR21 = VAR20 = 4;
      VAR23[3] = VAR23[2] = VAR23[1] = VAR23[0] = 4; 
 }

 for (VAR24=0; VAR24<VAR14; ++VAR24, VAR9 += VAR6, VAR11 += VAR8)
 {
      png_const_bytep VAR29, VAR30;
      png_uint_32 VAR35;

 for (VAR35=0, VAR29=VAR9, VAR30=VAR11; VAR35<VAR12; ++VAR35)
 {
         png_const_bytep VAR56, VAR57;

 if (VAR15 & VAR27)
            VAR56 = (VAR39)VAR2->VAR40 + VAR18 * *VAR29++;
 else
            VAR56 = VAR29, VAR29 += VAR18;

 if (VAR17 & VAR27)
            VAR57 = (VAR39)VAR3->VAR40 + VAR19 * *VAR30++;
 else
            VAR57 = VAR30, VAR30 += VAR19;

 
 if (VAR22)
 {
 
 if (VAR17 & VAR28) 
 {
               png_const_uint_16p VAR58 = FUN7(VAR59, VAR56);
               png_const_uint_16p VAR60 = FUN7(VAR59, VAR57);

 switch (VAR22)
 {
 case 4:
 if (VAR58[VAR23[3]] != VAR60[3]) break;
 case 3:
 if (VAR58[VAR23[2]] != VAR60[2]) break;
 case 2:
 if (VAR58[VAR23[1]] != VAR60[1]) break;
 case 1:
 if (VAR58[VAR23[0]] != VAR60[0]) break;
 if (VAR20 != 4 && VAR60[VAR20] != 65535) break;
 continue; 
 default:
 break; 
 }
 }

 else if (VAR21 == 4 || VAR56[VAR21] == 255)
 {
 switch (VAR22)
 {
 case 4:
 if (VAR56[VAR23[3]] != VAR57[3]) break;
 case 3:
 if (VAR56[VAR23[2]] != VAR57[2]) break;
 case 2:
 if (VAR56[VAR23[1]] != VAR57[1]) break;
 case 1:
 if (VAR56[VAR23[0]] != VAR57[0]) break;
 if (VAR20 != 4 && VAR57[VAR20] != 255) break;
 continue; 
 default:
 break; 
 }
 }
 }

 
 if (!FUN5(&VAR25, VAR56, VAR57, VAR35, VAR24) && (VAR2->VAR45 & VAR61) == 0)
 return 0; 
 }
 }

 
 if (VAR2->VAR45 & VAR46)
 {
      VAR25.VAR48[0] = VAR25.VAR49[0];
      VAR25.VAR48[1] = VAR25.VAR49[1];
      VAR25.VAR48[2] = VAR25.VAR49[2];
      VAR25.VAR48[3] = VAR25.VAR49[3];
 }

 return 1;
}