unsigned int FUN1(unsigned int VAR1, int VAR2 = 0) {


     unsigned int VAR3 = 0;

    const VAR4* const VAR5 = FUN2(VAR2);
















     for (int VAR6 = 0; VAR6 < VAR7; ++VAR6) {
       for (int VAR8 = 0; VAR8 < VAR9; ++VAR8) {

        VAR3 += FUN3(VAR10[VAR6 * VAR11 + VAR8]

               - VAR5[VAR6 * VAR12 + VAR8]);

      }

      if (VAR3 > VAR1) {

        break;


















       }
     }
     return VAR3;
   }