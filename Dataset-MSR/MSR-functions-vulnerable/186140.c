FUN1(png_structp VAR1)
{
   png_row_infop VAR2 = &(VAR1->VAR2);
   png_bytep VAR3 = VAR1->VAR4 + 1;
   int VAR5 = VAR1->VAR5;
    png_uint_32 VAR6 = VAR1->VAR6;
    
    


    PNG_CONST int VAR7[7] = {8, 8, 4, 4, 2, 2, 1};


 
    FUN2(1, "");
    if (VAR3 != NULL && VAR2 != NULL)
   {
      png_uint_32 VAR8;

      VAR8 = VAR2->VAR9 * VAR7[VAR5];

      switch (VAR2->VAR10)
      {
         case 1:
         {
            png_bytep VAR11 = VAR3 + (VAR12)((VAR2->VAR9 - 1) >> 3);
            png_bytep VAR13 = VAR3 + (VAR12)((VAR8 - 1) >> 3);
            int VAR14, VAR15;
            int VAR16, VAR17, VAR18;
            int VAR19 = VAR7[VAR5];
            png_byte VAR20;
            png_uint_32 VAR21;
            int VAR22;

#ifdef VAR23
            if (VAR6 & VAR24)
            {
                VAR14 = (int)((VAR2->VAR9 + 7) & 0x07);
                VAR15 = (int)((VAR8 + 7) & 0x07);
                VAR16 = 7;
                VAR17 = 0;
                VAR18 = -1;
            }
            else
#endif
            {
                VAR14 = 7 - (int)((VAR2->VAR9 + 7) & 0x07);
                VAR15 = 7 - (int)((VAR8 + 7) & 0x07);
                VAR16 = 0;
                VAR17 = 7;
                VAR18 = 1;
            }

            for (VAR21 = 0; VAR21 < VAR2->VAR9; VAR21++)
            {
               VAR20 = (VAR25)((*VAR11 >> VAR14) & 0x01);
               for (VAR22 = 0; VAR22 < VAR19; VAR22++)
               {
                  *VAR13 &= (VAR25)((0x7f7f >> (7 - VAR15)) & 0xff);
                  *VAR13 |= (VAR25)(VAR20 << VAR15);
                  if (VAR15 == VAR17)
                  {
                     VAR15 = VAR16;
                     VAR13--;
                  }
                  else
                     VAR15 += VAR18;
               }
               if (VAR14 == VAR17)
               {
                  VAR14 = VAR16;
                  VAR11--;
               }
               else
                  VAR14 += VAR18;
            }
            break;
         }
         case 2:
         {
            png_bytep VAR11 = VAR3 + (VAR26)((VAR2->VAR9 - 1) >> 2);
            png_bytep VAR13 = VAR3 + (VAR26)((VAR8 - 1) >> 2);
            int VAR14, VAR15;
            int VAR16, VAR17, VAR18;
            int VAR19 = VAR7[VAR5];
            png_uint_32 VAR21;

#ifdef VAR23
            if (VAR6 & VAR24)
            {
               VAR14 = (int)(((VAR2->VAR9 + 3) & 0x03) << 1);
               VAR15 = (int)(((VAR8 + 3) & 0x03) << 1);
               VAR16 = 6;
               VAR17 = 0;
               VAR18 = -2;
            }
            else
#endif
            {
               VAR14 = (int)((3 - ((VAR2->VAR9 + 3) & 0x03)) << 1);
               VAR15 = (int)((3 - ((VAR8 + 3) & 0x03)) << 1);
               VAR16 = 0;
               VAR17 = 6;
               VAR18 = 2;
            }

            for (VAR21 = 0; VAR21 < VAR2->VAR9; VAR21++)
            {
               png_byte VAR20;
               int VAR22;

               VAR20 = (VAR25)((*VAR11 >> VAR14) & 0x03);
               for (VAR22 = 0; VAR22 < VAR19; VAR22++)
               {
                  *VAR13 &= (VAR25)((0x3f3f >> (6 - VAR15)) & 0xff);
                  *VAR13 |= (VAR25)(VAR20 << VAR15);
                  if (VAR15 == VAR17)
                  {
                     VAR15 = VAR16;
                     VAR13--;
                  }
                  else
                     VAR15 += VAR18;
               }
               if (VAR14 == VAR17)
               {
                  VAR14 = VAR16;
                  VAR11--;
               }
               else
                  VAR14 += VAR18;
            }
            break;
         }
         case 4:
         {
            png_bytep VAR11 = VAR3 + (VAR12)((VAR2->VAR9 - 1) >> 1);
            png_bytep VAR13 = VAR3 + (VAR12)((VAR8 - 1) >> 1);
            int VAR14, VAR15;
            int VAR16, VAR17, VAR18;
            png_uint_32 VAR21;
            int VAR19 = VAR7[VAR5];

#ifdef VAR23
            if (VAR6 & VAR24)
            {
               VAR14 = (int)(((VAR2->VAR9 + 1) & 0x01) << 2);
               VAR15 = (int)(((VAR8 + 1) & 0x01) << 2);
               VAR16 = 4;
               VAR17 = 0;
               VAR18 = -4;
            }
            else
#endif
            {
               VAR14 = (int)((1 - ((VAR2->VAR9 + 1) & 0x01)) << 2);
               VAR15 = (int)((1 - ((VAR8 + 1) & 0x01)) << 2);
               VAR16 = 0;
               VAR17 = 4;
               VAR18 = 4;
            }

            for (VAR21 = 0; VAR21 < VAR2->VAR9; VAR21++)
            {
               png_byte VAR20 = (VAR25)((*VAR11 >> VAR14) & 0xf);
               int VAR22;

               for (VAR22 = 0; VAR22 < VAR19; VAR22++)
               {
                  *VAR13 &= (VAR25)((0xf0f >> (4 - VAR15)) & 0xff);
                  *VAR13 |= (VAR25)(VAR20 << VAR15);
                  if (VAR15 == VAR17)
                  {
                     VAR15 = VAR16;
                     VAR13--;
                  }
                  else
                     VAR15 += VAR18;
               }
               if (VAR14 == VAR17)
               {
                  VAR14 = VAR16;
                  VAR11--;
               }
               else
                  VAR14 += VAR18;
            }
            break;
         }
         default:
         {
            png_size_t VAR27 = (VAR2->VAR10 >> 3);
            png_bytep VAR11 = VAR3 + (VAR12)(VAR2->VAR9 - 1)
                * VAR27;
            png_bytep VAR13 = VAR3 + (VAR12)(VAR8 - 1) * VAR27;

            int VAR19 = VAR7[VAR5];
            png_uint_32 VAR21;

            for (VAR21 = 0; VAR21 < VAR2->VAR9; VAR21++)
            {
               png_byte VAR20[8];
               int VAR22;

               FUN3(VAR20, VAR11, VAR27);
               for (VAR22 = 0; VAR22 < VAR19; VAR22++)
               {
                  FUN3(VAR13, VAR20, VAR27);
                  VAR13 -= VAR27;
               }
               VAR11 -= VAR27;
            }
            break;
         }
      }
      VAR2->VAR9 = VAR8;
      VAR2->VAR28 = FUN4(VAR2->VAR10, VAR8);
   }
#ifndef VAR23
   FUN5(VAR6) 
#endif
}