VAR1::Error VAR2::FUN1(
    GLint VAR3,
    GLsizei VAR4,
    const volatile VAR5* VAR6) {
  FUN2()->FUN3(VAR3, VAR4, const_cast<const VAR5*>(VAR6));
  return VAR1::VAR7;
}