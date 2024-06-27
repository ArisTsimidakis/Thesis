GURL VAR1::FUN1(VAR2* VAR3,
                                 const VAR4& VAR5) {
  
  if (VAR5.FUN2(VAR6))
    return VAR5;

  GURL VAR7 = VAR8::FUN3(VAR3, VAR5);
  VAR7::Origin VAR9 = VAR7::VAR10::FUN4(VAR7);

  
  
  
  
  
  auto* VAR11 = VAR12::FUN5();
  VAR7::Origin VAR13;
  if (VAR11->FUN6(VAR9, &VAR13))
    return VAR13.FUN7();

  
  
  
  if (!VAR9.FUN8().FUN9() && VAR9.FUN10() != VAR7::VAR14) {
    
    VAR15::string VAR16 = VAR17::VAR18::FUN11(
        VAR9.FUN8(),
        VAR17::VAR18::VAR19);
    VAR15::string VAR20 = VAR9.FUN10();
    VAR20 += VAR7::VAR21;
    VAR20 += VAR16.FUN9() ? VAR9.FUN8() : VAR16;
    return FUN12(VAR20);
  }

  
   
   if (!VAR9.FUN13()) {
     

    




     FUN14(!VAR9.FUN10().FUN9());
     return FUN12(VAR9.FUN10() + "");
   } else if (VAR7.FUN15()) {






































     FUN14(!VAR7.FUN10().FUN9());
     return FUN12(VAR7.FUN10() + "");
   }

  
  FUN14(!VAR7.FUN16()) << VAR7;
  return FUN12();
}