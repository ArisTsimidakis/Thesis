bool VAR1::FUN1(
    VAR2* VAR3,
    GLenum VAR4, const char* VAR5) {
  if (!VAR3) {
    if (VAR6)
      return false;
    if (VAR7) {
      FUN2(0, 0, 0, (VAR8::FUN3(
          VAR9) & 0x0008) != 0 ? 0 : 1.VAR10);
      VAR11.FUN4(VAR12, VAR12, VAR12, VAR12);
      FUN5(0);
      VAR11.FUN6(VAR13, VAR14);
      VAR11.FUN6(VAR15, VAR14);
      FUN7(1.0f);
      VAR11.FUN8(VAR12);
      VAR11.FUN9(VAR16, false);
      bool VAR17 = false;
      if ((VAR7 & VAR18) != 0 &&
          VAR19->FUN10() == VAR20) {
        VAR17 = true;
        GLenum VAR21 = VAR15;
        if (FUN11() != 0)  
          VAR21 = VAR22;
        FUN12(1, &VAR21);
      }
      FUN13(VAR7);
      if (VAR17) {
        GLenum VAR21 = VAR20;
        FUN12(1, &VAR21);
      }
      VAR7 = 0;
      FUN14();
    }
    return true;
  }

  if (FUN15()->FUN16(VAR3)) {
    return true;
  }

  GLenum VAR23 = VAR3->FUN17();
  if (VAR23 != VAR24) {
    FUN18(
        VAR25, VAR5, "");
    return false;
  }

  
  if (FUN19()->FUN20() ||
      FUN21()->FUN22()) {
    if (!VAR3->FUN23()) {
      
      if (VAR3->FUN24(FUN21(), VAR4) !=
          VAR24) {
        FUN18(
            VAR25, VAR5,
            "");
        return false;
      }
      FUN25(VAR4, VAR3);
    }
  }

  if (!FUN15()->FUN16(VAR3)) {
    if (VAR3->FUN24(FUN21(), VAR4) !=
        VAR24) {
      FUN18(
          VAR25, VAR5,
          "");
      return false;
    }
    FUN15()->FUN26(VAR3);
  }

  
  
  return true;
}