bool VAR1::FUN1(
    const char* VAR2,
    GLuint VAR3, bool* VAR4, GLsizei VAR5) {
  FUN2(VAR4);
  *VAR4 = false;
  if (VAR6::FUN3() == VAR6::VAR7)
    return true;

  if (!VAR8->FUN4()) {
    return true;
  }

  FUN5(
      "");

  
  
  
  
  

  GLuint VAR9 = 0;
  const VAR10::VAR11& VAR12 =
      VAR8->FUN6();
  for (VAR10::VAR11::const_iterator VAR13 =
       VAR12.FUN7(); VAR13 != VAR12.FUN8(); ++VAR13) {
    const VAR10::VAR14* VAR15 = *VAR13;
    const VAR16::VAR17::VAR14* VAR18 =
        VAR19->FUN9(VAR15->FUN10());
    GLuint VAR20 = VAR15->FUN11(VAR5,
                                                  VAR3);
    GLuint VAR21 = VAR20 + 1;
    if (VAR21 == 0) {
      FUN12(VAR22, VAR2, "");
      return false;
    }
     if (VAR18 &&
         VAR15->FUN13(VAR20) &&
         VAR15->FUN14() == VAR23) {

      GLuint VAR24 = 0;

      if (!FUN15(VAR21,

                        static_cast<VAR25>(VAR15->FUN16()), &VAR24) ||

          !FUN17(VAR9, VAR24, &VAR9)) {






         FUN12(
             VAR22, VAR2, "");
         return false;
       }
     }
   }
 

  const GLuint VAR26 = sizeof(float);  

  GLuint VAR27 = 0;

  if (!FUN15(VAR9, VAR26, &VAR27) ||






       VAR27 > 0x7FFFFFFFU) {
     FUN12(VAR22, VAR2, "");
     return false;
  }

  FUN18();

  FUN19(VAR28, VAR29);
  if (static_cast<VAR30>(VAR27) > VAR31) {
    FUN20(VAR28, VAR27, NULL, VAR32);
    GLenum VAR33 = FUN21();
    if (VAR33 != VAR34) {
      FUN12(
          VAR22, VAR2, "");
      return false;
    }
  }

  
  GLintptr VAR35 = 0;
  for (VAR10::VAR11::const_iterator VAR13 =
           VAR12.FUN7(); VAR13 != VAR12.FUN8(); ++VAR13) {
    const VAR10::VAR14* VAR15 = *VAR13;
    const VAR16::VAR17::VAR14* VAR18 =
        VAR19->FUN9(VAR15->FUN10());
    GLuint VAR20 = VAR15->FUN11(VAR5,
                                                  VAR3);
    GLuint VAR21 = VAR20 + 1;
    if (VAR21 == 0) {
      FUN12(VAR22, VAR2, "");
      return false;
    }
    if (VAR18 &&
        VAR15->FUN13(VAR20) &&
        VAR15->FUN14() == VAR23) {
      int VAR36 = VAR15->FUN16() * VAR26;
      int VAR37 = VAR36 * VAR21;
      VAR38<float> FUN22(new float[VAR37]);
      const VAR39* VAR40 = reinterpret_cast<const VAR39 *>(
          VAR15->FUN23()->FUN24(VAR15->FUN25(), VAR37));
      const VAR39* VAR41 = VAR40 + VAR36;
      float* VAR42 = VAR43.FUN26();
      while (VAR40 != VAR41) {
        *VAR42++ = static_cast<float>(*VAR40++) / 65536.0f;
      }
      FUN27(VAR28, VAR35, VAR37, VAR43.FUN26());
      FUN28(
          VAR15->FUN10(), VAR15->FUN16(), VAR44, false, 0,
          reinterpret_cast<VAR45*>(VAR35));
      VAR35 += VAR37;
    }
  }
  *VAR4 = true;
  return true;
}