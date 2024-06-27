bool VAR1::FUN1(
    const VAR1::VAR2& VAR3,
    VAR4::VAR5* VAR6,
    VAR4::VAR5* VAR7) {
  if (VAR8 != VAR9) {
    
    if (VAR9 == VAR10::VAR11) {
      *VAR6 = FUN2();
      return true;
    }
    if (VAR8 == VAR10::VAR11 &&
        FUN3(VAR6, VAR7)) {
      return true;
    }

    
    if (VAR9 == VAR10::VAR12) {
      *VAR6 = FUN4();
      return true;
    }
    if (VAR8 == VAR10::VAR12) {
      *VAR6 = FUN5();
      return true;
    }

    if (VAR9 == VAR10::VAR13 ||
        VAR8 == VAR10::VAR13) {
      
      
      return false;
    }
  }

  
  if (VAR14.FUN6() < VAR3.FUN6()) {
    
    for (const auto& VAR15 : VAR3) {
      if (VAR14.FUN7(VAR15.VAR16))
        continue;

      *VAR6 =
          FUN8(VAR15.VAR17, VAR7);
      return true;
    }
  } else if (VAR14.FUN6() > VAR3.FUN6()) {
    
    for (const auto& VAR15 : VAR14) {
      if (VAR3.FUN7(VAR15.VAR16))
        continue;

      *VAR6 = FUN9(VAR15.VAR16, VAR7);
      return true;
    }
  }

  for (const auto& VAR15 : VAR14) {
    VAR2::const_iterator VAR18 = VAR3.FUN10(VAR15.VAR16);
    if (VAR18 == VAR3.FUN11()) {
      
      
      
      FUN12() << ""
                      "";
      return false;
    }

    if (VAR15.VAR17.FUN13() !=
        VAR18->VAR17.FUN13()) {
      *VAR7 = VAR19::FUN14(
          VAR20,
           FUN15(VAR15.VAR16), FUN16(VAR15.VAR16));
       return true;
     }

    if (VAR15.VAR17.FUN17() !=

        VAR18->VAR17.FUN17()) {












       int VAR21 = 0;
       switch (VAR15.VAR17.FUN17()) {
         case VAR22::VAR23::VAR24:
          VAR21 = VAR25;
          break;
        case VAR22::VAR23::VAR26:
          VAR21 = VAR27;
          break;
        case VAR22::VAR23::VAR28:
          VAR21 = VAR29;
          break;
        case VAR22::VAR23::VAR30:
          VAR21 = VAR31;
          break;
      }
      *VAR7 = VAR19::FUN14(
          VAR32, FUN15(VAR15.VAR16),
          VAR19::FUN18(VAR21));
      return true;
    }
  }

  
  return false;
}