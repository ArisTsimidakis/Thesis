void VAR1::FUN1(
    TexImageFunctionID VAR2,
    GLenum VAR3,
    GLint VAR4,
    GLint VAR5,
    GLint VAR6,
    GLenum VAR7,
    GLenum VAR8,
    GLsizei VAR9,
    GLint VAR10,
    GLint VAR11,
    GLint VAR12,
    VAR13* VAR14,
    const VAR15& VAR16,
    GLint VAR17) {
  const char* VAR18 = FUN2(VAR2);
  if (FUN3())
    return;
  FUN4(VAR14);
  if (VAR14->FUN5()->FUN6()->FUN7()) {
    FUN8(VAR19, VAR18,
                      "");
    return;
  }
  if (!FUN9(VAR18, VAR2, VAR3))
    return;
  TexImageFunctionType VAR20;
  if (VAR2 == VAR21 || VAR2 == VAR22)
    VAR20 = VAR23;
  else
    VAR20 = VAR24;
  if (!FUN10(VAR18, VAR20, VAR25, VAR3,
                       VAR4, VAR5, VAR14->FUN11(), VAR14->FUN12(),
                       VAR9, VAR6, VAR7, VAR8, VAR10, VAR11, VAR12))
    return;

  bool VAR26 = false;
  if (!FUN13(
          VAR18, VAR2, VAR14, VAR16, VAR9,
          VAR17, &VAR26)) {
    return;
  }
  
  IntRect VAR27 = VAR16;
  if (VAR28) {
    VAR27.FUN14(VAR14->FUN12() -
                                    VAR27.FUN15());
  }

  VAR29<VAR30> VAR31;
  bool VAR32 = true;
  
  
  
  if (!VAR28 && !VAR33 && VAR7 == VAR34 &&
      VAR8 == VAR35 && !VAR26 && VAR9 == 1) {
    VAR32 = false;
  } else {
    if (VAR8 == VAR36) {
      
      VAR8 = VAR37;
    }
    if (!VAR38::FUN16(
            VAR14->FUN5()->FUN17(),
            VAR38::VAR39::VAR40, VAR14->FUN18(),
            VAR27, VAR9, VAR17, VAR7,
            VAR8, VAR28, VAR33, VAR31)) {
      FUN8(VAR19, VAR18, "");
      return;
    }
  }
  VAR41 FUN19(this);
  const VAR30* VAR42 = VAR32 ? VAR31.FUN5() : VAR14->FUN5()->FUN17();
  if (VAR2 == VAR21) {
    FUN20(VAR17, 0);
    FUN21(
        VAR3, VAR4, VAR5, VAR27.FUN22(),
        VAR27.FUN23(), VAR6, VAR7, VAR8, VAR42);
  } else if (VAR2 == VAR43) {
    FUN20(VAR17, 0);
    FUN24()->FUN25(
        VAR3, VAR4, VAR10, VAR11, VAR27.FUN22(),
         VAR27.FUN23(), VAR7, VAR8, VAR42);
   } else {
     GLint VAR44 = VAR27.FUN23();

    if (VAR17) {

      

      VAR44 = VAR17;

    }
     if (VAR2 == VAR22) {
       FUN24()->FUN26(VAR3, VAR4, VAR5,
                               VAR27.FUN22(), VAR44,
                              VAR9, VAR6, VAR7, VAR8, VAR42);
    } else {
      FUN20(VAR2, VAR45);
      FUN24()->FUN27(VAR3, VAR4, VAR10, VAR11, VAR12,
                                 VAR27.FUN22(),
                                 VAR44, VAR9, VAR7, VAR8, VAR42);
    }
  }
}