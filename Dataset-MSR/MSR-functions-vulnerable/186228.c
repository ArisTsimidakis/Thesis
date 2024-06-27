void VAR1::FUN1(
    const VAR2::VAR3<VAR2::VAR4>& VAR5) {
  if (VAR5.FUN2() != 2)
    return;

  if (!VAR5[0]->FUN3() || !VAR5[1]->FUN4())
    return;

  
  
  int VAR6 = VAR5[0]->FUN5();

  VAR7::string VAR8 =
      VAR9::FUN6(*VAR2::VAR10::FUN7(VAR5[1]));
  
  
  ViewType VAR11 = VAR12;
  if (VAR8 == VAR13) {
    VAR11 = VAR14;
  } else if (VAR8 == VAR15) {
    VAR11 = VAR16;
  } else if (VAR8 == VAR17) {
    VAR11 = VAR18;
  } else if (VAR8 == VAR19) {
    VAR11 = VAR20;
  } else if (VAR8 == VAR21) {
    VAR11 = VAR22;
  } else if (VAR8 == VAR23) {
    VAR11 = VAR24;
  } else if (VAR8 == VAR25) {
    VAR11 = VAR26;
  } else if (VAR8 != VAR27) {
    return;
  }

  VAR7::string VAR28 = FUN8()->FUN9();
  if (VAR28.FUN10())
    return;

   VAR7::VAR29<VAR30::VAR31*> VAR32 =
       VAR33::FUN11(VAR28, VAR6,
                                                VAR11);


   VAR2::VAR34<VAR2::VAR35> VAR36 = VAR2::VAR35::FUN12(VAR5.FUN13());
   int VAR37 = 0;
   for (VAR30::VAR31* VAR38 : VAR32) {
    
    
    
    
    if (VAR38->FUN14()->FUN15() != VAR38->FUN14())
      continue;

    VAR2::VAR34<VAR2::VAR39> VAR40 =
        VAR38->FUN14()->FUN16();
     if (!VAR40.FUN17()) {
       VAR2::VAR34<VAR2::VAR4> VAR41 = VAR40->FUN18();
       FUN19(!VAR41.FUN17());

      VAR36->FUN20(VAR2::VAR42::FUN12(VAR5.FUN13(), VAR37++), VAR41);






     }
   }
 
  VAR5.FUN21().FUN20(VAR36);
}