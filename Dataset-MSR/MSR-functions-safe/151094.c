void VAR1::FUN1(
    VAR2* VAR3,
    const VAR4<VAR5>& VAR6) {
  VAR1* VAR7 = FUN2(VAR6.FUN3());
  if (!VAR7) {
    VAR7 = VAR1::FUN4(VAR3);
    if (!VAR7)
      return;
    VAR7->VAR8->FUN5(VAR6);
  }
  VAR7->FUN6(VAR9::FUN7());
}