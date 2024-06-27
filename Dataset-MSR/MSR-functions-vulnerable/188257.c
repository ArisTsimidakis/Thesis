static bool FUN1(VAR1<VAR2>& VAR3, const VAR4* VAR5, size_t VAR6) {
     const size_t VAR7 = 6;
     const size_t VAR8 = 14;
 const size_t VAR9 = 16;
 const size_t VAR10 = 8; 
 if (VAR8 > VAR6) {
 return false;
 }
 size_t VAR11 = FUN2(VAR5, VAR7) >> 1;
 if (VAR9 + VAR11 * VAR10 > VAR6) {

         return false;
     }
     for (size_t VAR12 = 0; VAR12 < VAR11; VAR12++) {

        int VAR13 = FUN2(VAR5, VAR8 + 2 * VAR12);

        int VAR14 = FUN2(VAR5, VAR9 + 2 * (VAR11 + VAR12));

        int VAR15 = FUN2(VAR5, VAR9 + 2 * (3 * VAR11 + VAR12));














         if (VAR15 == 0) {

            int VAR16 = FUN2(VAR5, VAR9 + 2 * (2 * VAR11 + VAR12));


             if (((VAR13 + VAR16) & 0xffff) > VAR13 - VAR14) {
                 FUN3(VAR3, VAR14, VAR13 + 1);
             } else {

                for (int VAR17 = VAR14; VAR17 < VAR13 + 1; VAR17++) {


                     if (((VAR17 + VAR16) & 0xffff) != 0) {
                         FUN3(VAR3, VAR17, VAR17 + 1);
                     }
                 }
             }
         } else {

            for (int VAR17 = VAR14; VAR17 < VAR13 + 1; VAR17++) {


                 uint32_t VAR18 = VAR9 + 6 * VAR11 + VAR15 +
                     (VAR12 + VAR17 - VAR14) * 2;
                 if (VAR18 + 2 > VAR6) {
                     return false;
                 }

                int VAR19 = FUN2(VAR5, VAR18);


                 if (VAR19 != 0) {
                     FUN3(VAR3, VAR17, VAR17 + 1);
                 }
 }
 }
 }
 return true;
}