bool VAR1::FUN1(GLsizei VAR2, const VAR3* VAR4) {
  for (GLsizei VAR5 = 0; VAR5 < VAR2; ++VAR5) {
    if (FUN2(VAR4[VAR5])) {
      return false;
    }
  }
  VAR6<VAR3[]> FUN3(new VAR3[VAR2]);
  FUN4(VAR2, VAR7.FUN5());
  for (GLsizei VAR5 = 0; VAR5 < VAR2; ++VAR5) {
    FUN6(VAR4[VAR5], VAR7[VAR5]);
  }
  return true;
}