void VAR1::FUN1(
    const char* VAR2, GLenum VAR3, GLenum VAR4, GLenum VAR5,
    GLuint VAR6, GLint VAR7, GLsizei VAR8) {
  if (VAR8 > FUN2()->FUN3()) {
    FUN4(
        VAR9,
        "", "");
    return;
  }
  VAR10* VAR11 = FUN5(VAR3);
  if (!VAR11) {
    FUN4(
        VAR12,
        VAR2, "");
    return;
  }
  GLuint VAR13 = 0;
  VAR14* VAR15 = NULL;
  if (VAR6) {
    VAR15 = FUN6(VAR6);
    if (!VAR15) {
      FUN4(
          VAR12,
          VAR2, "");
      return;
    }
    VAR13 = VAR15->FUN7();
  }

  if (!FUN8()->FUN9(VAR5, VAR7, 0, 0, 1)) {
    FUN4(
        VAR9,
        VAR2, "");
    return;
  }

  if (VAR15)
    FUN10(VAR15->FUN11(), VAR5);

  FUN12(VAR2);
  if (0 == VAR8) {
    FUN13(VAR3, VAR4, VAR5, VAR13, VAR7);
  } else {
    if (FUN14().VAR16) {
      FUN15(VAR3, VAR4, VAR5,
          VAR13, VAR7, VAR8);
    } else {
      FUN16(VAR3, VAR4, VAR5,
          VAR13, VAR7, VAR8);
    }
  }
  GLenum VAR17 = FUN17(VAR2);
  if (VAR17 == VAR18) {
    VAR11->FUN18(VAR4, VAR15, VAR5, VAR7,
         VAR8);
  }
  if (VAR11 == VAR19.VAR20.FUN19()) {
    VAR19.VAR21 = true;
  }

  if (VAR15)
    FUN20(VAR15->FUN11(), VAR5);

  FUN21();
}