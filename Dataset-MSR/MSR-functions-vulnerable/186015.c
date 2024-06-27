VAR1 FUN1(
    VAR2::VAR3* VAR4,
    VAR5::VAR6* VAR7,
    VAR8* VAR9,
    VAR10* VAR11) {
  FUN2(VAR12);
  FUN3(VAR4);
  FUN3(VAR7);
  FUN3(VAR9);
  FUN3(VAR11);

  
  const int VAR13 = 4096;
  VAR5::VAR14<char> FUN4(VAR13, '');
  VAR15::VAR16 FUN5(
      VAR15::FUN6(VAR15::FUN7(&VAR17),
                     &VAR18[0], VAR13));

  HRESULT VAR19 = FUN8(VAR4->VAR20.FUN9(),
                              VAR4->VAR21, VAR9,
                               &VAR18[0], VAR13);
   
   

  FUN2(VAR12) << "" << VAR9;


 
   if (*VAR9 == VAR22) {
     FUN2(VAR23) << "" << FUN10(VAR19);
    return VAR24;
  } else if (*VAR9 != VAR25) {
    FUN2(VAR23) << "" << FUN10(VAR19);
    *VAR11 =
        VAR2::FUN11(VAR26);
    return VAR27;
  }

  *VAR7 = VAR5::FUN12(&VAR18[0]);
  return VAR28;
}