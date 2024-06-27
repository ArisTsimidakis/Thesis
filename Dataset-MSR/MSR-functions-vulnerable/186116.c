bool VAR1::FUN1(
    VAR2::VAR3::Package VAR4,
    VAR2::VAR3::StartupInfo VAR5,
    VAR6::VAR7<VAR2::VAR3::VAR8>
        VAR9) {
  FUN2(!VAR10);
  FUN2(!VAR11);

  VAR12 = FUN3(*VAR4.VAR13);
  if (!VAR12.FUN4()) {
    FUN5(VAR14) << "" << VAR12;
    return false;
  }

  if (VAR9.FUN4()) {
    VAR15.FUN6(VAR16::move(VAR9));
    VAR15.FUN7(
         VAR17::FUN8(this, &VAR1::VAR18));
   }
 

  VAR19->FUN9()->FUN10(VAR20.FUN11(),

                                  VAR21.FUN12());


   VAR21->FUN13(VAR22.FUN12());
   VAR22->FUN14(VAR12.FUN15(), nullptr);
 
  
  
  
  
  
  VAR10 = VAR16::VAR23<VAR24::VAR2::VAR25>(
      VAR16::move(VAR5.VAR26.VAR27));
  VAR11 = VAR16::VAR23<
      VAR24::VAR2::VAR28<VAR2::VAR29::VAR30::VAR31>>(
      VAR10.FUN16(), this);

  return true;
}