VAR1::Error VAR2::FUN1(
    uint32 VAR3, const VAR4::VAR5& VAR6) {
  GLuint VAR7 = VAR6.VAR7;
  uint32 VAR8 = static_cast<VAR9>(VAR6.VAR8);
  VAR10* VAR11 = FUN2(VAR8);
  VAR12::VAR13* VAR14 = FUN3(
      VAR7, "");
  if (!VAR14 || !VAR14->FUN4()) {
    VAR11->FUN5("");
    return VAR1::VAR15;
  }
  VAR11->FUN5(VAR14->FUN4()->FUN6());
  return VAR1::VAR15;
}