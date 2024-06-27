bool VAR1::FUN1(
    const char* VAR2,
    const VAR3* VAR4,
    GLboolean VAR5,
    VAR6* VAR7,
    GLsizei VAR8,
    GLuint VAR9,
    GLuint VAR10) {
  if (!VAR7) {
    FUN2(VAR11, VAR2, "");
    return false;
  }
  return FUN1(
      VAR2, VAR4, VAR5, VAR7->FUN3(), VAR7->FUN4(),
      VAR8, VAR9, VAR10);
}