bool VAR1::FUN1(
    const VAR2& VAR3,
    int VAR4,
    VAR5* VAR6) {

  
  if (FUN2()) {
    VAR6->VAR7 = FUN2()->FUN3();
    VAR6->VAR8 = FUN4();
  } else {
    VAR6->VAR7 = FUN5();
    VAR6->VAR8 = -1;
  }

  
  
  
  
  if (VAR9 >= 0 && !VAR10->FUN6()) {
    FUN7(VAR10->FUN8() != VAR11::VAR12);
    VAR10->FUN9(VAR13->FUN10());
    VAR10->FUN11(VAR11::VAR12);
  }

  
  VAR6->VAR14 = FUN12(VAR3.VAR15);

  
  VAR6->VAR16 = FUN13(VAR3);

  switch (VAR6->VAR16) {
    case VAR17::VAR18:
      FUN14(VAR3, &(VAR6->VAR19));
      break;
    case VAR17::VAR20:
      FUN15(VAR3);
      break;
    case VAR17::VAR21:
      FUN16(VAR3);
      break;
    case VAR17::VAR22:
      FUN17(VAR3, &(VAR6->VAR19));
      break;
    case VAR17::VAR23:
      FUN18(VAR3);
      break;
    case VAR17::VAR24:
      if (!FUN19(VAR3))
         return false;
       break;
     case VAR17::VAR25:

      






       










       return false;
     default:
       FUN20();
  }

  
  
  FUN7(!VAR3.VAR26.FUN21());
  VAR11* VAR27 = FUN22();
  VAR27->FUN23(VAR3.VAR26);

  
  FUN7(VAR27->FUN6() == VAR13->FUN10());

  
  
  
  
  
  
  
  
  
  
  
  VAR6->VAR28 = (VAR29::FUN24(VAR3.VAR30) &&
                      !FUN25()) ||
      VAR3.VAR31 == VAR32;

  
  VAR6->VAR33 = VAR27;
  VAR6->VAR34 = VAR29::FUN26(VAR3.VAR30);
  VAR6->VAR35 = VAR3.VAR36;
  VAR6->VAR37 = VAR3.VAR37;
  FUN27(VAR6, VAR4);

  return true;
}