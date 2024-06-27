bool VAR1::VAR2::FUN1(
    const VAR3& VAR4,
    const VAR5& VAR6,
    bool* VAR7,
    VAR3* VAR8) {
  if (!VAR9)
    return false;

  WebURLResponse VAR10;
  VAR10.FUN2();
  FUN3(VAR11.FUN4(), VAR6, &VAR10);

  
  
  VAR12 FUN5(VAR4);
  VAR13.FUN6(VAR11.FUN7());
  VAR13.FUN8(VAR11.FUN9());

  WebString VAR14 = VAR15::FUN10("");
  WebString VAR16 = VAR17::FUN11(
      VAR18,
      VAR4,
      VAR11.FUN12(VAR14));
  if (!VAR16.FUN13())
    VAR13.FUN14(VAR14, VAR16);

  if (VAR10.FUN15() == 307)
    VAR13.FUN16(VAR11.FUN17());

  VAR9->FUN18(VAR19, VAR13, VAR10);
  VAR11 = VAR13;
  *VAR7 = true;
  *VAR8 = VAR11.FUN7();

  
  if (VAR4 == FUN19(VAR13.FUN4()))
    return true;

  
  
  FUN20(!VAR13.FUN4().FUN21());
  return false;
}