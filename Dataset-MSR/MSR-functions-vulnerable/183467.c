bool VAR1::FUN1(const VAR2* VAR3,
                                       VAR4::VAR5** VAR6,
                                       VAR7::VAR8* VAR9) {
   FUN2(VAR3 && (VAR6 || VAR9));
   VAR10* VAR11 = NULL;
   if (VAR3->FUN3(VAR12::VAR13)) {




     VAR7::string VAR14;


     FUN4(
         VAR3->FUN5(VAR12::VAR13, &VAR14));

    VAR11 = VAR15::FUN6(


         VAR14, FUN7(), FUN8());
     if (!VAR11) {
       VAR16 = VAR17::FUN9(
           VAR12::VAR18, VAR14);
       return false;
     }
   } else {




     
     VAR19* VAR20 = FUN10();
     if (!VAR20) {
      VAR16 = VAR12::VAR21;
      return false;
    }
    VAR11 = VAR20->FUN7();
  }
  FUN2(VAR11);
   if (VAR6)
     *VAR6 = VAR11->FUN11()->FUN12();
   if (VAR9)

    *VAR9 = VAR15::FUN13(VAR11);




   return true;
 }