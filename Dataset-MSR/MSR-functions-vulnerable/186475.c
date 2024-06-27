static void FUN1(unsigned char* VAR1,

                             size_t VAR2,

                             size_t VAR3,




                              bool VAR4) {
   if (VAR4) {

    for (size_t VAR5 = 0; VAR5 < VAR2 / 2; VAR5++) {

      size_t VAR6 = VAR5 * VAR3;

      size_t VAR7 = (VAR2 - 1 - VAR5) * VAR3;






       if (VAR8 == VAR9) {  

        for (size_t VAR10 = 0; VAR10 < VAR3; VAR10 += 4) {


           VAR11::FUN2(VAR1[VAR6 + VAR10],
                     VAR1[VAR7 + VAR10 + 2]);
           VAR11::FUN2(VAR1[VAR6 + VAR10 + 1],
                    VAR1[VAR7 + VAR10 + 1]);
          VAR11::FUN2(VAR1[VAR6 + VAR10 + 2],
                    VAR1[VAR7 + VAR10]);
          VAR11::FUN2(VAR1[VAR6 + VAR10 + 3],
                    VAR1[VAR7 + VAR10 + 3]);
        }
      } else {
        VAR11::FUN3(VAR1 + VAR6,
                         VAR1 + VAR6 + VAR3,
                         VAR1 + VAR7);
      }
     }
   } else {
     if (VAR8 == VAR9)  

      for (size_t VAR5 = 0; VAR5 < VAR2 * VAR3; VAR5 += 4)


         VAR11::FUN2(VAR1[VAR5], VAR1[VAR5 + 2]);
   }
 }