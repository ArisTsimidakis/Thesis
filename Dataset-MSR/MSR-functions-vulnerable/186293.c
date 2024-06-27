void VAR1::FUN1() {
  
  if (VAR2.FUN2()) {
    if (FUN3()->FUN4()) {
      FUN5(static_cast<VAR3*>(
                 FUN3()->FUN6()->FUN7())
                 ->FUN8());
      VAR4* VAR5 =
          static_cast<VAR4*>(
              FUN3()->FUN6()->FUN7());
      FUN3()->FUN9(VAR5);
    }
   }
 
   bool VAR6 =

      FUN10() &&

      FUN3()->FUN11()->FUN12();


   if (FUN10())

    FUN3()->FUN13();


   for (auto& VAR7 : VAR8)
     VAR7.FUN14();
 
  
  
  if (VAR6 && VAR9.FUN15())
    FUN16(true, true, nullptr);
}