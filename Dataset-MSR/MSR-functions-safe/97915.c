void VAR1::FUN1(const VAR2::VAR3& VAR4,
                           const VAR2::VAR5& VAR6,
                           const VAR2::VAR5& VAR7) {
  VAR8* VAR9 = FUN2(VAR4);
  if (!VAR9)
    return;

  VAR9->FUN3(VAR10::FUN4(VAR6), VAR10::FUN4(VAR7));
}