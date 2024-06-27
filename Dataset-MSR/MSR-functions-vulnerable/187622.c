VAR1@FUN1(VAR2 *this,

    PNG_CONST VAR2 **VAR3, char *VAR4, size_t VAR5,

    VAR6 *VAR7, png_byte VAR8, png_byte VAR9)

{

   this->VAR10 = *VAR3;

   *VAR3 = this;



   *VAR7 = FUN2(VAR4, VAR5, *VAR7, "");



   return 1;

}