void VAR1::FUN1(int VAR2,
                                   const VAR3::VAR4& VAR5) {












   VAR6->FUN2(VAR2, VAR7);
 
   if (VAR8::FUN3(VAR5.VAR9, "", VAR8::VAR10::VAR11)) {
    VAR12::FUN4(VAR12::VAR13, VAR14,
                            VAR8::FUN5(&VAR15::VAR16,
                                           VAR17, VAR2, VAR5));
    return;
  }

  if (VAR5.VAR9.FUN6() || VAR5.VAR9 == "") {
    
    VAR12::FUN4(
        VAR12::VAR13, VAR14,
        VAR8::FUN5(&VAR15::VAR18, VAR17,
                       VAR2));
    return;
  }

  if (!VAR8::FUN3(VAR5.VAR9, "",
                        VAR8::VAR10::VAR11)) {
    VAR6->FUN7(VAR2, VAR19);
    return;
  }

  VAR20::string VAR21 = FUN8(VAR5.VAR9.FUN9(10));
  VAR20::string VAR22 = FUN10(VAR21);

  if (!VAR23.FUN6()) {
    VAR8::FilePath VAR9 = VAR23.FUN11(VAR21);
    VAR20::string VAR24;
    VAR8::FUN12(VAR9, &VAR24);
    VAR6->FUN13(VAR2, VAR24, VAR22,
                     VAR19);
    return;
  }

  if (VAR25) {
    VAR12::FUN4(
        VAR12::VAR13, VAR14,
        VAR8::FUN5(&VAR15::VAR26,
                       VAR17, VAR2, VAR21));
    return;
  }
  VAR6->FUN7(VAR2, VAR19);
}