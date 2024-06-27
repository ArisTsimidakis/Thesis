VAR1::VAR2* FUN1(
    const VAR3::VAR4& VAR5,
    const VAR6::VAR7& VAR8) {
  VAR1::VAR2* VAR9 =
      VAR1::VAR2::FUN2(VAR10::VAR11);
  VAR9->FUN3(VAR5);
  VAR9->FUN4(VAR12);

  if (VAR8 == VAR13::VAR14) {
    VAR9->FUN5(VAR15);
    VAR9->FUN6(VAR16, VAR17);
    VAR9->FUN6(VAR18,
                            VAR19);
    VAR9->FUN6(VAR20, VAR21);
  } else {
    VAR9->FUN5(VAR22);
    VAR9->FUN6(VAR23, VAR24);
    VAR9->FUN6(VAR18,
                            VAR25);
     VAR9->FUN6(VAR20,
                             VAR26);
   }

  VAR9->FUN6(VAR27, VAR28);
   VAR9->FUN6(VAR29, VAR30);
   VAR9->FUN7(
       VAR3::FUN8(
          "",
          VAR31::VAR32));
  VAR9->FUN9("");
  bool VAR33 = VAR34::FUN10();
  VAR9->FUN6("", VAR33 ?
      VAR35 : VAR36);

  
  VAR9->FUN6(VAR37,
                          VAR33
                              ? VAR38
                              : VAR39);
  VAR9->FUN6(VAR40,
                          VAR33
                              ? VAR41
                              : VAR42);
  VAR9->FUN6(VAR43,
                          VAR33
                              ? VAR44
                              : VAR45);

  if (VAR8 == VAR13::VAR14) {
    VAR9->FUN6("", VAR46);
    VAR9->FUN6("", VAR47);
    VAR9->FUN6("", VAR48);
    VAR9->FUN6("", VAR49);
    VAR9->FUN6("", VAR50);
  }

  return VAR9;
}