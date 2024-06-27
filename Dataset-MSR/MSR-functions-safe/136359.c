void VAR1::FUN1(
    const VAR2& VAR3,
    const VAR4* VAR5,
    PaintInvalidationReason VAR6,
    const VAR7* VAR8) {
  FUN2(VAR3);
  if (VAR9) {
    VAR9->VAR10.FUN3(
        VAR5, VAR8 ? *VAR8 : VAR5->FUN4(), VAR3, VAR6);
  }
}