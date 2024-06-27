static __forceinline void FUN1(float *VAR1, int VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
   int VAR7 = VAR5 - VAR3;
   int VAR8 = VAR4 - VAR2;
   int VAR9 = FUN2(VAR7);
   int VAR10;
   int VAR11=VAR2,VAR12=VAR3;
   int VAR13 = 0;
   int VAR14;

#ifdef VAR15
   if (VAR8 < VAR16 && VAR9 < VAR17) {
      if (VAR7 < 0) {
         VAR10 = -VAR18[VAR9][VAR8];
         VAR14 = VAR10-1;
      } else {
         VAR10 =  VAR18[VAR9][VAR8];
         VAR14 = VAR10+1;
      }
   } else {
      VAR10 = VAR7 / VAR8;
      if (VAR7 < 0)
         VAR14 = VAR10 - 1;
      else
         VAR14 = VAR10+1;
   }
#else
   VAR10 = VAR7 / VAR8;
   if (VAR7 < 0)
      VAR14 = VAR10 - 1;
   else
      VAR14 = VAR10+1;
#endif
    VAR9 -= FUN2(VAR10) * VAR8;
    if (VAR4 > VAR6) VAR4 = VAR6;
    if (VAR11 < VAR4) {

      FUN3(VAR1[VAR11], VAR19[VAR12]);


       for (++VAR11; VAR11 < VAR4; ++VAR11) {
          VAR13 += VAR9;
          if (VAR13 >= VAR8) {
             VAR13 -= VAR8;
             VAR12 += VAR14;
          } else
             VAR12 += VAR10;

         FUN3(VAR1[VAR11], VAR19[VAR12]);


       }
    }
 }