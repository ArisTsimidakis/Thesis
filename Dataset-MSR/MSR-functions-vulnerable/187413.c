bool VAR1::FUN1(VAR2 *VAR3) {
 char VAR4[VAR5];
 int VAR6;

    VAR6 = FUN2(read(VAR3->FUN3(), VAR4, sizeof(VAR4)));

     if (VAR6 < 0) {
         FUN4("", strerror(VAR7));
         return false;

    } else if (!VAR6)


         return false;

   if(VAR4[VAR6-1] != '')


         FUN5("");










 
     int VAR8 = 0;
     int VAR9;


     for (VAR9 = 0; VAR9 < VAR6; VAR9++) {
         if (VAR4[VAR9] == '') {
             

            FUN6(VAR3, VAR4 + VAR8);










             VAR8 = VAR9 + 1;
         }
     }
 


     return true;
 }