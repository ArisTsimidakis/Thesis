void FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    EAS_I32 VAR9;
    EAS_I32 VAR10;
    EAS_I32 VAR11;
    EAS_I32 VAR12;
    EAS_I32 VAR13;
    EAS_I32 VAR14;

#if (VAR15 == 2)
    EAS_I32 VAR16, VAR17;
#endif

 

     VAR14 = VAR4->VAR14;
     if (VAR14 <= 0) {
         FUN2("");


         return;
     }
     VAR6 = VAR4->VAR6;
    VAR8 = VAR4->VAR18;

 
    VAR10 = (VAR4->VAR19.VAR20 - VAR4->VAR21) << (16 - VAR22);
 if (VAR10 < 0)
        VAR10++;
 
    VAR9 = VAR4->VAR21 << 16;

#if (VAR15 == 2)
    VAR16 = VAR2->VAR16;
    VAR17 = VAR2->VAR17;
#endif

 while (VAR14--) {

 
        VAR11 = *VAR8++;
        VAR9 += VAR10;
 
        VAR13 = VAR9 >> 16;

 
        VAR13 *= VAR11;


 
#if (VAR15 == 2)
 
        VAR13 = VAR13 >> 14;

 
        VAR12 = *VAR6;

 
        VAR11 = VAR13 * VAR16;
 
        VAR11 = VAR11 >> VAR23;
        VAR12 += VAR11;
 *VAR6++ = VAR12;

 
        VAR12 = *VAR6;

 
        VAR11 = VAR13 * VAR17;
 
        VAR11 = VAR11 >> VAR23;
        VAR12 += VAR11;
 *VAR6++ = VAR12;

 
#else

 
        VAR12 = *VAR6;
 
        VAR13 = VAR13 >> (VAR23 - 1);
        VAR12 += VAR13;
 *VAR6++ = VAR12;
#endif

 }
}