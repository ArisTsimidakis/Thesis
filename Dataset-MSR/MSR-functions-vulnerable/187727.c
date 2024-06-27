FUN1(PNG_CONST VAR1* VAR2, png_const_structp VAR3, int VAR4,


    png_uint_32 VAR5)
 {
    png_size_t VAR6 = (VAR4 * VAR2->VAR7 + VAR5) * (VAR2->VAR8 + 5) + 2;

 if (VAR2->VAR9 == NULL)
      FUN2(VAR3, "");

 if (VAR6 + VAR2->VAR8 + 3 > VAR2->VAR10)
      FUN2(VAR3, "");

 return VAR2->VAR9 + VAR6;
}