void VAR1::FUN1(const VAR2::VAR3& VAR4) {
  FUN2("",
                  static_cast<VAR5>(VAR4.FUN3() / 1024));
  VAR2::string VAR6;
  VAR2::string VAR7;
  bool VAR8;
  ErrorInfo VAR9;
  if (!FUN4(VAR4, &VAR9)) {
    FUN5(VAR9);
    return;
  }

  if (VAR10->FUN6(&VAR6, &VAR7,
                               &VAR9, &VAR8)) {
    FUN7(VAR11);
    
    FUN8(VAR12);
    if (VAR8) {
      VAR13::CompletionCallback VAR14 =
          VAR15.FUN9(&VAR1::VAR16);
      
      VAR17.FUN10(
          VAR18::FUN11(this,
                                            VAR6,
                                            VAR7,
                                            VAR14));
      return;
    } else {
      VAR13::CompletionCallback VAR19 =
          VAR15.FUN9(&VAR1::VAR20);
      
      FUN12(
          VAR21.FUN13(VAR6,
                                VAR22,
                                VAR19,
                                &VAR23));
      return;
    }
  }
  
  FUN5(VAR9);
}