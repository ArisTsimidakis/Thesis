bool VAR1::FUN1(
    const VAR2& VAR3,
    VAR4* VAR5) {
  VAR6 = false;

  
  if (FUN2()) {
    VAR5->VAR7 = FUN2()->FUN3();
    VAR5->VAR8 = FUN4();
  } else {
    VAR5->VAR7 = FUN5();
    VAR5->VAR8 = -1;
  }

  
  
  
  FUN6(VAR9 == -1 || VAR10->FUN7());

  
  
  
  
  
  VAR5->VAR11 =
      VAR10 && VAR10->FUN8();

  
  VAR5->VAR12 = FUN9(VAR3);

  
  VAR5->VAR13 = FUN10(
      VAR3.VAR14, VAR3.VAR15, VAR5->VAR12);

  switch (VAR5->VAR12) {
    case VAR16:
      FUN11(VAR3, VAR5->VAR11);
      break;
    case VAR17:
      FUN12(VAR3);
      break;
    case VAR18:
      FUN13(VAR3);
      break;
    case VAR19:
      FUN14(VAR3, &VAR5->VAR11);
      break;
    case VAR20:
      FUN15(VAR3);
      break;
    case VAR21:
      if (!FUN16(VAR3))
        return false;
      break;
    case VAR22:
      
      
      
      
      if (VAR10) {
        FUN17();
        VAR23->FUN18(VAR24);
      }
      return false;
    default:
      FUN19();
  }

  
  
  
  
  
  VAR25::Time VAR26 =
      VAR27.FUN20(VAR28.FUN21());
  FUN22(1) << ""
           << VAR26.FUN23();

  
  
  FUN24();

  
  
  FUN6(VAR3.VAR29.FUN25());
  VAR30* VAR31 =
      VAR30::FUN26(FUN2());
  VAR31->FUN27(VAR26);
  VAR31->FUN28(VAR3.VAR32);
  VAR31->FUN29(VAR3.VAR29);
  
  VAR31->FUN30(NULL);

  
  
  VAR31->FUN31(false);

  
  
  VAR31->FUN32(false);

  
  FUN33(VAR31->FUN7() == VAR23->FUN34());

  
  
  VAR31->FUN35(
      VAR23->FUN36()->FUN37());

  
  VAR5->VAR33 = VAR31;
  VAR5->VAR34 =
      FUN38(VAR3.VAR35);
  VAR5->VAR36 = VAR3.VAR37;
  VAR5->VAR32 = VAR3.VAR32;
  FUN39(VAR5);

  return true;
}