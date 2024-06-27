String VAR1::FUN1(VAR2& VAR3,
                                         bool VAR4) const {
  if (!FUN2() && VAR4)
    return FUN3();

  StringBuilder VAR5;
  VAR6* VAR7 = nullptr;

  AXObjectVector VAR8;

  VAR9<VAR10<VAR6>> VAR11;
  FUN4(VAR11);
  for (VAR6* VAR12 = FUN5(); VAR12; VAR12 = VAR12->FUN6()) {
    if (!FUN7().FUN8(VAR12))
      VAR8.FUN9(VAR12);
  }
  for (const auto& VAR13 : VAR11)
    VAR8.FUN9(VAR13);

  for (VAR6* VAR14 : VAR8) {
    
    
     
     
     

    if (FUN10(VAR14->FUN11(VAR15), ""))


       continue;
 
     
    
    
    
    
    
    if (VAR7 && VAR5.FUN12() &&
        !FUN13(VAR5[VAR5.FUN12() - 1])) {
      if (!FUN14(VAR14->FUN15(),
                                      VAR7->FUN15()))
        VAR5.FUN16('');
    }

    String VAR16;
    if (VAR14->FUN17())
      VAR16 = VAR14->FUN1(VAR3, true);
    else
      VAR16 = FUN18(*VAR14, false, VAR3);
    VAR5.FUN16(VAR16);
    VAR7 = VAR14;
  }

  return VAR5.FUN19();
}