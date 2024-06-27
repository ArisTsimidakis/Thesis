void VAR1::FUN1(
    const VAR2& VAR3) {
  FUN2("",
               "",
               "", VAR3.VAR4, "", VAR3.VAR5);
  if (VAR6 || VAR7->FUN3())
    return;

  if (VAR8::FUN4()->FUN5(
          VAR9::VAR10)) {
    FUN6(VAR3);
    return;
  }

  
  
  
  
  if (VAR3.VAR11 == VAR12::VAR13) {
    if (VAR14) {
      if (!VAR15.FUN7()) {
        VAR15.FUN8(new FUN9(VAR3));
      } else {
        
        int VAR4 = VAR15->VAR16;
        int VAR5 = VAR15->VAR17;
        *VAR15 = VAR3;
        VAR15->VAR16 += VAR4;
        VAR15->VAR17 += VAR5;
      }
      return;
    }
    VAR14 = true;
  } else if (VAR3.VAR11 == VAR12::VAR18) {
    FUN10();
  }

  FUN11(VAR3, sizeof(VAR2), false);
}