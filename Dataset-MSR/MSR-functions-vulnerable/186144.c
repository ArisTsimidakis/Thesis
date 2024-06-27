FUN1(png_bytep VAR1)
 {

   png_uint_32 VAR2 = ((VAR3)(*VAR1) << 24) +

      ((VAR3)(*(VAR1 + 1)) << 16) +

      ((VAR3)(*(VAR1 + 2)) << 8) +

      (VAR3)(*(VAR1 + 3));








 
    return (VAR2);
 }