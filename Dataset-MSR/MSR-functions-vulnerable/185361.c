bool VAR1::FUN1(
    VAR2* VAR3,
    GLenum VAR4, const char* VAR5) {
  if (!VAR3) {
    if (VAR6) {
      FUN2(0, 0, 0, (VAR7::FUN3(
          VAR8) & 0x0008) != 0 ? 0 : 1);
      VAR9.FUN4(VAR10, VAR10, VAR10, VAR10);
      FUN5(0);
      VAR9.FUN6(VAR11, -1);
      VAR9.FUN6(VAR12, -1);
       FUN7(1.0f);
       VAR9.FUN8(VAR10);
       VAR9.FUN9(VAR13, false);


















       FUN10(VAR6);








       VAR6 = 0;
       FUN11();
     }
    return true;
  }

  if (FUN12()->FUN13(VAR3)) {
    return true;
  }

  GLenum VAR14 = VAR3->FUN14();
  if (VAR14 != VAR15) {
    FUN15(
        VAR16, VAR5, "");
    return false;
  }

  
  if (FUN16()->FUN17() ||
      FUN18()->FUN19()) {
    if (!VAR3->FUN20()) {
      
      if (VAR3->FUN21(FUN18(), VAR4) !=
          VAR15) {
        FUN15(
            VAR16, VAR5,
            "");
        return false;
      }
      FUN22(VAR4, VAR3);
    }
  }

  if (!FUN12()->FUN13(VAR3)) {
    if (VAR3->FUN21(FUN18(), VAR4) !=
        VAR15) {
      FUN15(
          VAR16, VAR5,
          "");
      return false;
    }
    FUN12()->FUN23(VAR3);
  }

  
  
  return true;
}