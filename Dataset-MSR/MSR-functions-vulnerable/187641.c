FUN1(PNG_CONST VAR1 **this, unsigned int VAR2,


    png_uint_32 VAR3, char *VAR4, size_t VAR5, VAR6 *VAR7,
    png_byte VAR8, png_byte VAR9)
 {
 for (;;) 
 {
      png_uint_32 VAR10;
      VAR1 *VAR11;

 
 if (VAR3 == 0) 
 {
         FUN2();
 if (VAR2 <= 1)
            VAR3 = 1;
 else
            VAR3 = FUN3();
 }
 else 
 {
 switch (VAR2)
 {
 case 0: ++VAR3; break;
 case 1:  VAR3 <<= 1; break;
 default: VAR3 = FUN3(); break;
 }
 }

 
 *this = &VAR12;
 VAR11 = VAR13;
      VAR10 = 1;

 
 while (VAR11 != &VAR12)
 {
 if ((VAR3 & VAR10) != 0 && VAR11->VAR14 &&
 (VAR2 == 0 || VAR11->VAR15 < VAR2))
 {
 
 if (VAR11->FUN4(VAR11, this, VAR8, VAR9) || VAR2 == 0)
 {
 
 *VAR7 = FUN5(VAR4, VAR5, *VAR7, "");
 *VAR7 = FUN5(VAR4, VAR5, *VAR7, VAR11->VAR4);
 }

 else
 {
 
 *this = VAR11->VAR16;
 VAR11->VAR16 = 0;

 
 VAR11->VAR15 = VAR2;
 }
 }

         VAR10 <<= 1;
 VAR11 = VAR11->VAR11;
 }

 
 if (*this != &VAR12)
 return VAR3;

 
 if (!FUN6(VAR3, VAR2))
 return 0;

    }
 }