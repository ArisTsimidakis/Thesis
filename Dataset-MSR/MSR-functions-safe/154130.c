bool VAR1::FUN1(
    GLsizei VAR2, const VAR3* VAR4) {
  for (GLsizei VAR5 = 0; VAR5 < VAR2; ++VAR5) {
    if (FUN2(VAR4[VAR5])) {
      return false;
    }
  }

  if (!FUN3().VAR6) {
    
    for (GLsizei VAR5 = 0; VAR5 < VAR2; ++VAR5) {
      FUN4(VAR4[VAR5], 0, true);
    }
  } else {
    VAR7::VAR8<VAR3[]> FUN5(new VAR3[VAR2]);

    FUN6()->FUN7(VAR2, VAR9.FUN8());
    for (GLsizei VAR5 = 0; VAR5 < VAR2; ++VAR5) {
      FUN4(VAR4[VAR5], VAR9[VAR5], true);
    }
  }

  return true;
}