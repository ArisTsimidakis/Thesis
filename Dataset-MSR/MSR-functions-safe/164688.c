bool VAR1::FUN1(
    VAR2::VAR3<VAR4> VAR5,
    VAR6* VAR7,
    bool VAR8) {
  
  FUN2(VAR9::FUN3(VAR7->VAR10),
            !FUN4());

  
  
  VAR2::VAR3<VAR4> VAR11 = nullptr;
  if (VAR5 &&
      VAR5->FUN5().VAR12 != VAR7->VAR12) {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    VAR11 = VAR2::move(VAR5);

    
    
  }

  if (!FUN6(VAR7, VAR8))
    return false;

  
  
  
  
  if (VAR5 &&
      VAR5->FUN5().VAR12 != VAR7->VAR12) {
    VAR11 = VAR2::move(VAR5);
  }

  
  
  
  
  if (!FUN7()) {
    bool VAR13 = FUN8()->FUN9()->FUN10();
    VAR14 = true;
    FUN8()->FUN11(!VAR8,
                                       VAR13);
  }

  if (VAR5)
    VAR15 = VAR5->FUN12().VAR16;

  
  
  
  if (!VAR5) {
    
    
    
    
    
    VAR17* VAR18 = nullptr;
    if (VAR11 && FUN13(
                               VAR11.FUN14(), *VAR7,
                               VAR8)) {
      VAR18 = VAR17::FUN15(
          FUN8()->FUN16()->FUN17()->FUN18());
    }

    VAR5 = FUN19(
        *VAR7, VAR8, VAR18);
  }

  FUN20(VAR5);
  FUN20(VAR5->FUN21());

  
  
  
  
  VAR5->FUN22(VAR7->VAR10);

  VAR5->FUN23(VAR7->VAR19 ==
                                           VAR20);

  FUN24(VAR7->VAR12, VAR7->VAR21);

  
  
  
  
  VAR22 =
      (VAR5->FUN25() == "" ||
       VAR5->FUN25() == "");

  VAR23 = 0;
  FUN8()->FUN16()->FUN26(this, *VAR7,
                                              VAR2::move(VAR5),
                                              VAR8);

  
  
  if (VAR8 && VAR11)
    VAR24 = VAR2::move(VAR11);

  return true;
}