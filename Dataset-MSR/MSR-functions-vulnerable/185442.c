void FUN1(const VAR1::VAR2& VAR3,

                      VAR1::VAR2* VAR4,


                       VAR1::VAR2* VAR5) {
   FUN2(VAR4 && VAR5);
   size_t VAR6 = VAR3.FUN3('');
   if (VAR6 != VAR1::VAR2::VAR7) {

    VAR4->FUN4(VAR3, 0, VAR6);


     VAR5->FUN4(VAR3, VAR6 + 1, VAR1::VAR2::VAR7);
   } else {

    VAR4->FUN4(VAR3);


     VAR5->FUN4(VAR3);
   }
 }