bool VAR1::FUN1() {
  VAR2* VAR3 = FUN2()->FUN3();
  FUN4(VAR3);
  VAR4<VAR5> FUN5(new FUN6());
  VAR2* VAR6 = NULL;
  VAR4<VAR5> VAR7;
  if (FUN7()) {
    VAR6 = FUN2()->FUN8();
     if (VAR6)
       VAR7.FUN9(new FUN6());
   }






   for (VAR8::const_iterator VAR9 = VAR8::FUN10();
        VAR9 != VAR8::FUN11(); ++VAR9) {
     VAR10* VAR11 = *VAR9;
     if (VAR11->FUN2() == VAR3) {

      VAR12::FUN12(VAR11, VAR13.FUN13());




     } else if (VAR7.FUN13() &&
                VAR11->FUN2() == VAR6) {

      VAR12::FUN12(VAR11, VAR7.FUN13());




     }
   }


   VAR5* VAR14 = new FUN6();
   if (VAR13->FUN14() > 0) {

    VAR14->FUN15(VAR12::FUN16(

        VAR3, VAR13.FUN17()));






   }
   if (VAR7.FUN13() && VAR7->FUN14() > 0) {

    VAR14->FUN15(VAR12::FUN16(

        VAR6, VAR7.FUN17()));






   }
   VAR15.FUN9(VAR14);
   return true;
}