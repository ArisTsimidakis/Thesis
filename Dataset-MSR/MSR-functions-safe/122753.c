void VAR1::FUN1(VAR2* VAR3,
                                          const VAR4::VAR5& VAR6,
                                          const VAR4::VAR5& VAR7,
                                          const VAR8::VAR9& VAR10,
                                          VAR11::VAR12* VAR13) {
  FUN2(!VAR14.FUN3());
  VAR15 = VAR6;
  VAR16 = VAR7;
  VAR17* VAR18 = static_cast<VAR17*>(
      FUN4()->FUN5());
  VAR11::VAR12* VAR19 = new FUN6(FUN7());

  
  
  VAR20<char> FUN8(new char[VAR10.VAR21]);
  memcpy(VAR22.FUN3(), &VAR10, VAR10.VAR21);
  VAR8::VAR9* VAR23 =
      reinterpret_cast<VAR8::VAR9*>(VAR22.FUN3());
  if (VAR10.VAR24 == VAR8::VAR9::VAR25)
    VAR23->VAR24 = VAR8::VAR9::VAR26;

  VAR19->FUN9(VAR22.FUN3(), VAR10.VAR21);
  
  if (VAR23->VAR24 == VAR8::VAR9::VAR26)
    VAR19->FUN10(false);
  if (!FUN11(VAR19)) {
    
    
    
    VAR27::FUN12(
        VAR13, false );
    FUN13(VAR13);
    return;
  }

  VAR14.FUN14(VAR13);
  
  
  
  
  
  
  VAR18->FUN15(VAR28);
}