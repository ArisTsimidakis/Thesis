void VAR1::FUN1(bool VAR2) {
   if (FUN2()) {

    FUN3()->FUN4()->FUN1(VAR2);


     return;
   }
   VAR3* const VAR4 =
      FUN5();
  if (VAR4) {
    VAR4->FUN6();
    return;
  }
  FUN7()->FUN8(VAR2);
 }