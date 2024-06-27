VAR1::Error VAR2::FUN1(
    uint32 VAR3, const VAR4::VAR5& VAR6) {
  GLuint VAR7 = VAR6.VAR8;
  if (VAR7) {
    VAR9::VAR10* VAR11 = FUN2(VAR7);
    if (VAR11) {
      if (!VAR11->FUN3()) {
        FUN4()->FUN5(FUN6(), VAR11);
      }
    } else {
      FUN7(VAR12, "");
    }
  }
  return VAR1::VAR13;
}