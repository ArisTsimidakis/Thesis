bool VAR1::FUN1() {
   VAR2<VAR3::VAR4> FUN2(VAR3::VAR4::FUN3(*VAR5));

  FUN4(VAR6.FUN5());


 


   VAR7<VAR8> VAR9 =

      VAR10::FUN6(VAR6->VAR9, &VAR11);






   if (!VAR9.FUN5())
     return false;
 
  const VAR12::VAR13* VAR14 = FUN7();

  
  APIPermissionSet VAR15 = VAR9->FUN8();
  for (VAR16::const_iterator VAR17 = VAR15.FUN9();
       VAR17 != VAR15.FUN10(); ++VAR17) {
    if (!VAR17->FUN11()->FUN12()) {
      VAR11 = VAR18::FUN13(
          VAR19, VAR17->FUN14());
      return false;
    }
  }

  
  const VAR8* VAR20 = VAR14->FUN15();
  VAR7<VAR8> FUN16(
      VAR8::FUN17(VAR9.FUN5(), VAR20));
  if (!VAR21->FUN18()) {
    VAR11 = VAR22;
    VAR23 = VAR3::VAR24::FUN3(false);
    return false;
  }

  FUN19(FUN20()).FUN21(VAR14, VAR9.FUN5());
  VAR23 = VAR3::VAR24::FUN3(true);
  return true;
}