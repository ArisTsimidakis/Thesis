HRESULT VAR1::FUN1(
    const VAR2::VAR3* VAR4,
    VAR5* VAR6,
    VAR5* VAR7,
    VAR5* VAR8,
    VAR5* VAR9) {
  FUN2(VAR10);
  FUN3(VAR6);
  FUN3(VAR7);
  FUN3(VAR8);
  FUN3(VAR9);
  FUN3(VAR8);

  *VAR9 = nullptr;
  VAR2::string16 VAR11 = FUN4(VAR4, VAR12);

   wchar_t VAR13[VAR14];
   wchar_t VAR15[VAR16];
   wchar_t VAR17[VAR18];


   VAR2::string16 VAR19;

  FUN5(

      VAR4, &VAR19, VAR13, VAR2::FUN6(VAR13),

      VAR15, VAR2::FUN6(VAR15), VAR17, VAR2::FUN6(VAR17));




































 
   
   
  if (VAR17[0]) {
    HRESULT VAR20 = FUN7(VAR13, VAR15, VAR17,
                                      VAR9);

    if (FUN8(VAR20)) {
      FUN2(VAR21) << "" << FUN9(VAR20);
      return VAR20;
    }

    *VAR7 = ::FUN10(VAR13);
    *VAR6 = ::FUN10(VAR15);
    *VAR8 = ::FUN10(VAR17);

    return VAR22;
  }

  DWORD VAR23 = 0;
  FUN11()->FUN12(&VAR23);

  
  
  
  
  if (VAR23 == VAR24) {
    *VAR9 = FUN13(VAR25);
    return FUN14(VAR26);
    
    
    
  } else if (!VAR27::FUN15(
                 static_cast<VAR28>(VAR23))) {
    *VAR9 = FUN13(VAR29);
    return FUN14(VAR26);
  }

  VAR2::string16 VAR30 = FUN4(VAR4, VAR31);
  VAR2::VAR32 FUN16(FUN17(VAR33));
  HRESULT VAR20 = FUN18(
      VAR34::FUN19(), VAR13, VAR11.FUN20(),
      VAR30.FUN20(), VAR35.FUN20(),
      true, VAR36, VAR7, VAR8);

  
  
  if (VAR20 == FUN14(VAR37)) {
    FUN2(VAR21) << ""
                 << VAR15 << "" << VAR13
                 << "";
    *VAR9 = FUN13(VAR38);
    return VAR20;
  }

  *VAR6 = ::FUN10(VAR15);

  return VAR20;
}