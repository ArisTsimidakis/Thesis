VAR1::Error VAR2::FUN1(
    GLint VAR3,
    GLsizei VAR4,
    GLboolean VAR5,
    const volatile VAR6* VAR7) {
  FUN2()->FUN3(VAR3, VAR4, VAR5,
                              const_cast<const VAR6*>(VAR7));
  return VAR1::VAR8;
}