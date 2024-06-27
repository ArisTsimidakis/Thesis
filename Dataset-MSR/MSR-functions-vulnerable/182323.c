FUN1(png_const_structrp VAR1, const png_uint_32 VAR2)
{
   png_alloc_size_t VAR3 = VAR4;

# ifdef VAR5
   if (VAR1->VAR6 > 0 &&
       VAR1->VAR6 < VAR3)
      VAR3 = VAR1->VAR6;
# elif VAR7 > 0
   if (VAR7 < VAR3)
      VAR3 = VAR7;
# endif
   if (VAR1->VAR8 == VAR9)
    {
       png_alloc_size_t VAR10 = VAR4;
       size_t VAR11 =

         (VAR1->VAR12 * VAR1->VAR13 * (VAR1->VAR14 > 8? 2: 1)

          + 1 + (VAR1->VAR15? 6: 0));










       if (VAR1->VAR16 > VAR17/VAR11)

         VAR10=VAR4;


       else
          VAR10 = VAR1->VAR16 * VAR11;
       VAR11 = VAR11 > 32566? 32566 : VAR11;
      VAR10 += 6 + 5*(VAR10/VAR11+1); 
      VAR10=VAR10 < VAR4? VAR10 : VAR4;
      VAR3 = VAR3 < VAR10? VAR10 : VAR3;
   }

   if (VAR2 > VAR3)
   {
      FUN2(0,"",
         (unsigned long)VAR2,(unsigned long)VAR3);
      FUN3(VAR1, "");
   }
}