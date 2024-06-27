void VAR1::FUN1() {

  VAR2.VAR3 = VAR4.FUN2();




 
   const int VAR5[] = {7, 6, 2, 0};
   const bool VAR6[] = {true, true, false, false};
 
   for (size_t VAR7 = 0; VAR7 < VAR8::VAR9; VAR7++) {

    for (size_t VAR10 = 0; VAR10 < VAR8::VAR11; VAR10++) {


       int8_t VAR12 = 0;

      VAR2.VAR13[VAR7][VAR10] = VAR4.FUN2();

      if (VAR2.VAR13[VAR7][VAR10]) {




         VAR12 = VAR4.FUN3(VAR5[VAR10]);
         if (VAR6[VAR10])
           if (VAR4.FUN2())
             VAR12 = -VAR12;
       }

      VAR2.VAR14[VAR7][VAR10] = VAR12;


     }
   }
 }