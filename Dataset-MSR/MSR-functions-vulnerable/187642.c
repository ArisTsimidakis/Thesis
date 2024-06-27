FUN1(VAR1 *this,

    PNG_CONST VAR1 **VAR2, png_byte VAR3, png_byte VAR4)


 {
    FUN2(VAR3)
    FUN2(VAR4)

 this->VAR5 = *VAR2;
 *VAR2 = this;

 return 1;
}