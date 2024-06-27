int VAR1::FUN1() {
  FUN2(VAR2, VAR3);

  VAR4 = VAR5;

  if (!VAR6.FUN3()) {
    VAR7->FUN4(VAR8::VAR9);
    VAR6 = new FUN5();
    VAR10 = 0;
  }
  if (VAR6->VAR11.FUN6()) {
    HttpRequestHeaders VAR12;
    VAR12.FUN7("", FUN8(VAR13));
    VAR12.FUN7("", "");
    if (VAR14.FUN3() && VAR14->FUN9())
      VAR14->FUN10(&VAR12);
    VAR6->VAR11 = VAR15::FUN11(
        ""
        "",
        FUN12(VAR13).FUN13(),
        VAR12.FUN14().FUN13());
  }
  VAR6->FUN15(VAR10);
  int VAR16 = static_cast<int>(VAR6->VAR11.FUN16() -
                                 VAR10);
  FUN17(VAR16, 0);
  return VAR17->FUN18(VAR6.FUN3(), VAR16, VAR18);
}