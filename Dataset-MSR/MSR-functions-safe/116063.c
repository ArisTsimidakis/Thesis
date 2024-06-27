void VAR1::FUN1(
    const VAR2* VAR3) {
  FUN2(2U, VAR3->FUN3());
  VAR4::string VAR5, VAR6;
  FUN4(VAR3->FUN5(0, &VAR5));
  FUN4(VAR3->FUN5(1, &VAR6));
  const VAR7* VAR8 =
      VAR9->FUN6(VAR5, true);
  FUN7(VAR8);

  
  
  
  
  
  
  
  
  
  
  
  VAR10<bool> FUN8(&VAR11, true);
  VAR9->FUN9(VAR8->FUN10(),
                                            VAR6 == "");
}