bool VAR1::FUN1() {
  if (VAR2.FUN2())
    return true;
 
   bool VAR3 = false;
   VAR4::string VAR5 = VAR6;

  int VAR7 = 12;


   int VAR8 = VAR9::VAR10;
   VAR9::Weight VAR11 = VAR9::VAR12::VAR10;
   FontRenderParams VAR13;

  
  
  const VAR14* VAR15 = VAR14::FUN3();
  if (VAR15) {
    VAR15->FUN4(&VAR5, &VAR7, &VAR8, &VAR11,
                                        &VAR13);
  } else if (VAR16) {
#if FUN5(VAR17)
    
    
    FontRenderParamsQuery VAR18;
    FUN6(VAR19::FUN7(*VAR16,
                                     &VAR18.VAR20, &VAR18.VAR8,
                                     &VAR18.VAR21, &VAR18.VAR11))
        << "" << *VAR16;
    VAR13 = VAR22::FUN8(VAR18, &VAR5);
    VAR7 = VAR18.VAR21;
    VAR8 = VAR18.VAR8;
    VAR11 = VAR18.VAR11;
#else
    FUN9();
#endif
  }

  VAR23<VAR24> VAR25 =
      FUN10(VAR8 & VAR9::VAR26, VAR11, &VAR5, &VAR3);
  if (!VAR3)
    return false;
  VAR2.FUN2() = new FUN11(
      VAR4::move(VAR25), VAR5, VAR7, VAR8, VAR11, VAR13);
  return true;
}