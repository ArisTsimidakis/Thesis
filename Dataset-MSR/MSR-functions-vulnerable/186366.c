SessionStartupPref VAR1::FUN1(
    const VAR2::VAR3& VAR4,
    VAR5* VAR6) {
  FUN2(VAR6);
  VAR7* VAR8 = VAR6->FUN3();
  SessionStartupPref VAR9 = VAR10::FUN4(VAR8);

  
  
  
  
#if FUN5(VAR11)
  const bool VAR12 =
      VAR13::VAR14::FUN6()->FUN7();
  
  
  
  
  
  const bool VAR15 = false;
  VAR1::FUN8();
#else
  const bool VAR12 = VAR16::FUN9();
  const bool VAR15 = VAR1::FUN8();
#endif

  
  
  
  
  
  if (VAR12 && VAR10::FUN10(VAR8))
    VAR9.VAR17 = VAR10::VAR18;

  
  
  
  
  
  if ((VAR4.FUN11(VAR19::VAR20) || VAR15) &&
      !VAR6->FUN12()) {
    VAR9.VAR17 = VAR10::VAR21;
  }

  
  if (!VAR6->FUN13()) {
    VAR22* VAR23 = nullptr;
    bool VAR24 =
        VAR25->FUN14()
            ->FUN15()
            .FUN16(VAR6->FUN17(), &VAR23);

    if (VAR24 && VAR23->FUN18())
       VAR9.VAR17 = VAR10::VAR21;
   }
 

  if (VAR9.VAR17 == VAR10::VAR21 &&

      VAR26::FUN19(VAR4, VAR8)) {


     
     
     
    VAR9.VAR17 = VAR10::VAR18;
  }

  return VAR9;
}