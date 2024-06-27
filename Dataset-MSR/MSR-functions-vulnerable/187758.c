FUN1(VAR1* VAR2, void* VAR3, size_t VAR4)
 {
    png_uint_32 VAR5 = VAR2[0], VAR6 = VAR2[1];

   png_bytep VAR7 = FUN2(VAR8, VAR3);


 
    
 size_t VAR9;
 for (VAR9=0; VAR9<VAR4; ++VAR9)
 {
 
      png_uint_32 VAR10 = ((VAR5 >> (20-8)) ^ ((VAR6 << 7) | (VAR5 >> (32-7)))) & 0xff;
      VAR6 <<= 8;
      VAR6 |= VAR5 >> 24;
      VAR5 <<= 8;
      VAR5 |= VAR10;
 *VAR7++ = (VAR11)VAR10;
 }

   VAR2[0] = VAR5;
   VAR2[1] = VAR6;
}