FUN1(voidpf VAR1, uInt VAR2, uInt VAR3)
 {
    png_voidp VAR4;

   png_structp VAR5=(VAR6)VAR1;

   png_uint_32 VAR7=VAR5->VAR8;




    png_uint_32 VAR9;
 
    if (VAR1 == NULL)
       return (NULL);








    if (VAR2 > VAR10/VAR3)
    {
      FUN2 (VAR5, "");
     return (NULL);
   }
   VAR9 = (VAR11)VAR2 * VAR3;

   VAR5->VAR8|=VAR12;
   VAR4 = (VAR13)FUN3((VAR6)VAR1, VAR9);
   VAR5->VAR8=VAR7;

#if FUN4(VAR14) && !FUN4(VAR15)
   if (VAR4 == NULL)
       return ((VAR16)VAR4);

   if (VAR9 > (VAR11)0x8000L)
   {
      FUN5(VAR4, 0, (VAR17)0x8000L);
      FUN5((VAR18)VAR4 + (VAR17)0x8000L, 0,
         (VAR17)(VAR9 - (VAR11)0x8000L));
   }
   else
   {
      FUN5(VAR4, 0, (VAR17)VAR9);
   }
#endif
   return ((VAR16)VAR4);
}