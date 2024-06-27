FUN1(png_row_infop VAR1, png_bytep VAR2, int VAR3)
 {
    
 


    
    int VAR4[7] = {0, 4, 0, 2, 0, 1, 0};
 
    
    int VAR5[7] = {8, 8, 4, 4, 2, 2, 1};


 
    FUN2(1, "");
 
   
#ifdef VAR6
   if (VAR2 != NULL && VAR1 != NULL && VAR3 < 6)
#else
   if (VAR3 < 6)
#endif
   {
      
      switch (VAR1->VAR7)
      {
         case 1:
         {
            png_bytep VAR8;
            png_bytep VAR9;
            int VAR10;
            int VAR11;
            int VAR12;
            png_uint_32 VAR13;
            png_uint_32 VAR14 = VAR1->VAR15;

            VAR9 = VAR2;
            VAR11 = 0;
            VAR10 = 7;
            for (VAR13 = VAR4[VAR3]; VAR13 < VAR14;
               VAR13 += VAR5[VAR3])
            {
               VAR8 = VAR2 + (VAR16)(VAR13 >> 3);
               VAR12 = (int)(*VAR8 >> (7 - (int)(VAR13 & 0x07))) & 0x01;
               VAR11 |= (VAR12 << VAR10);

               if (VAR10 == 0)
               {
                  VAR10 = 7;
                  *VAR9++ = (VAR17)VAR11;
                  VAR11 = 0;
               }
               else
                  VAR10--;

            }
            if (VAR10 != 7)
               *VAR9 = (VAR17)VAR11;
            break;
         }
         case 2:
         {
            png_bytep VAR8;
            png_bytep VAR9;
            int VAR10;
            int VAR11;
            int VAR12;
            png_uint_32 VAR13;
            png_uint_32 VAR14 = VAR1->VAR15;

            VAR9 = VAR2;
            VAR10 = 6;
            VAR11 = 0;
            for (VAR13 = VAR4[VAR3]; VAR13 < VAR14;
               VAR13 += VAR5[VAR3])
            {
               VAR8 = VAR2 + (VAR16)(VAR13 >> 2);
               VAR12 = (*VAR8 >> ((3 - (int)(VAR13 & 0x03)) << 1)) & 0x03;
               VAR11 |= (VAR12 << VAR10);

               if (VAR10 == 0)
               {
                  VAR10 = 6;
                  *VAR9++ = (VAR17)VAR11;
                  VAR11 = 0;
               }
               else
                  VAR10 -= 2;
            }
            if (VAR10 != 6)
                   *VAR9 = (VAR17)VAR11;
            break;
         }
         case 4:
         {
            png_bytep VAR8;
            png_bytep VAR9;
            int VAR10;
            int VAR11;
            int VAR12;
            png_uint_32 VAR13;
            png_uint_32 VAR14 = VAR1->VAR15;

            VAR9 = VAR2;
            VAR10 = 4;
            VAR11 = 0;
            for (VAR13 = VAR4[VAR3]; VAR13 < VAR14;
               VAR13 += VAR5[VAR3])
            {
               VAR8 = VAR2 + (VAR16)(VAR13 >> 1);
               VAR12 = (*VAR8 >> ((1 - (int)(VAR13 & 0x01)) << 2)) & 0x0f;
               VAR11 |= (VAR12 << VAR10);

               if (VAR10 == 0)
               {
                  VAR10 = 4;
                  *VAR9++ = (VAR17)VAR11;
                  VAR11 = 0;
               }
               else
                  VAR10 -= 4;
            }
            if (VAR10 != 4)
               *VAR9 = (VAR17)VAR11;
            break;
         }
         default:
         {
            png_bytep VAR8;
            png_bytep VAR9;
            png_uint_32 VAR13;
            png_uint_32 VAR14 = VAR1->VAR15;
            png_size_t VAR18;

            
            VAR9 = VAR2;
            
            VAR18 = (VAR1->VAR7 >> 3);
            
            for (VAR13 = VAR4[VAR3]; VAR13 < VAR14;
               VAR13 += VAR5[VAR3])
            {
               
               VAR8 = VAR2 + (VAR16)VAR13 * VAR18;
               
               if (VAR9 != VAR8)
                  FUN3(VAR9, VAR8, VAR18);
               
               VAR9 += VAR18;
            }
            break;
         }
      }
      
      VAR1->VAR15 = (VAR1->VAR15 +
         VAR5[VAR3] - 1 -
         VAR4[VAR3]) /
         VAR5[VAR3];
         VAR1->VAR19 = FUN4(VAR1->VAR7,
            VAR1->VAR15);
   }
}