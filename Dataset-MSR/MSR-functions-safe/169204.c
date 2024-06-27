FUN1(const VAR1::VAR2* VAR3,
                                 const VAR1::VAR3::VAR4& VAR5) {
  VAR1::HttpStatusCode VAR6;

  
  size_t VAR7;
  VAR8::VAR9 FUN2("");
  VAR8::VAR9 FUN3("");
  if (VAR10::FUN4(VAR5.VAR11, VAR12,
                       VAR10::VAR13::VAR14)) {
    VAR6 = VAR1::VAR15;
    VAR7 = VAR12.FUN5();
  } else if (VAR10::FUN4(VAR5.VAR11, VAR16,
                              VAR10::VAR13::VAR14)) {
    VAR6 = VAR1::VAR17;
    VAR7 = VAR16.FUN5();
  } else {
    
    return VAR8::VAR18<VAR1::VAR3::VAR19>();
  }
  VAR8::string VAR20 = VAR5.VAR11.FUN6(VAR7);

  
  
  size_t VAR21 = VAR20.FUN7('');
  if (VAR21 == VAR8::VAR9::VAR22)
    return VAR8::VAR18<VAR1::VAR3::VAR19>();

  
  VAR23::Replacements VAR24;
  VAR24.FUN8(VAR10::FUN9(VAR20).FUN6(0, VAR21));
  GURL VAR25 =
      VAR3->FUN10().FUN11(VAR24);

  
  VAR8::string VAR26 = VAR20.FUN6(VAR21 + 1);
  VAR23 FUN12(VAR25.FUN13(VAR26));
  FUN14(VAR27.FUN15());

  VAR8::VAR18<VAR1::VAR3::VAR28> FUN16(
      new VAR1::VAR3::VAR28);
  VAR29->FUN17(VAR6);
  VAR29->FUN18("", VAR27.FUN19());
  return VAR8::move(VAR29);
}