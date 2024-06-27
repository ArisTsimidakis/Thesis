void VAR1::FUN1(VAR2& VAR3) {
  VAR4 << "" << (void*)this << "";

  VAR5.FUN2(
      VAR6::FUN3(VAR7::VAR8, &FUN4()));
  VAR9.FUN2(
      VAR6::FUN3(VAR7::VAR8, &FUN4()));
  VAR10.FUN2(
      VAR6::FUN3(VAR7::VAR8, &FUN4()));
  VAR11.FUN2(
      VAR6::FUN3(VAR7::VAR8, &FUN4()));
  VAR12.FUN2(
      VAR6::FUN3(VAR7::VAR8, &FUN4()));
  VAR13.FUN2(
      VAR6::FUN3(VAR7::VAR8, &FUN4()));

  VAR14->FUN1(VAR3);
  
  
  bool VAR15 =
      FUN5(VAR3);
  bool VAR16 =
      FUN5(FUN4());
  if (VAR16 && !VAR15)
    VAR17 = true;

  if (VAR18) {
    FUN4().FUN6();
    
    
    
  } else {
    
    
    VAR3.FUN6();
  }

  if (FUN7(FUN4()) && !FUN7(VAR3))
    VAR19 = true;

  FUN8(this, &VAR3);
  FUN9(this, &FUN4());

  
  
  
  
  
  
  VAR20 = false;
  FUN10();

  
  
  
  VAR3.FUN11();

  VAR21::FUN12(&FUN4());
  VAR22::FUN1(VAR3);
}