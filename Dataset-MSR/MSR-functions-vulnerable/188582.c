void FUN1() {
 VAR1 FUN2(VAR1::FUN3());

     int VAR2 = 0;
     int VAR3 = 0;
     const int VAR4 = 100000;

    FUN4(16, VAR5, VAR6, 64);

    FUN4(16, VAR5, VAR7, 64);

    FUN4(16, VAR8, VAR9, 64);

    FUN4(16, VAR8, VAR10, 64);
















 
     for (int VAR11 = 0; VAR11 < VAR4; ++VAR11) {

      


       for (int VAR12 = 0; VAR12 < 64; ++VAR12) {

        VAR10[VAR12] = VAR13.FUN5();

        VAR9[VAR12] = VAR13.FUN5();

        VAR6[VAR12] = VAR10[VAR12] - VAR9[VAR12];






















       }
 

      FUN6(


           FUN7(VAR6, VAR7, VAR14));
       for (int VAR12 = 0; VAR12 < 64; ++VAR12) {
           if (VAR7[VAR12] > 0) {
            VAR7[VAR12] += 2;
            VAR7[VAR12] /= 4;
            VAR7[VAR12] *= 4;
 } else {
            VAR7[VAR12] -= 2;
            VAR7[VAR12] /= 4;

             VAR7[VAR12] *= 4;
           }
       }

      FUN6(

          FUN8(VAR7, VAR9, VAR14));


















 
       for (int VAR12 = 0; VAR12 < 64; ++VAR12) {








         const int VAR15 = VAR9[VAR12] - VAR10[VAR12];


         const int VAR16 = VAR15 * VAR15;
         if (VAR2 < VAR16)
           VAR2 = VAR16;
        VAR3 += VAR16;

       }
     }
 

    FUN9(1, VAR2)


       << ""
       << "";
 

    FUN9(VAR4/5, VAR3)


       << ""
       << "";
   }