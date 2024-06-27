VAR1::Error VAR2::FUN1(
    uint32 VAR3, const VAR4::VAR5& VAR6) {
  GLenum VAR7 = static_cast<VAR8>(VAR6.VAR7);
  GLint VAR9 = static_cast<VAR10>(VAR6.VAR9);
  GLsizei VAR11 = static_cast<VAR12>(VAR6.VAR11);
  if (!VAR13->VAR14.FUN2(VAR7)) {
    FUN3(VAR15, "");
    return VAR1::VAR16;
  }
  if (VAR11 < 0) {
    FUN3(VAR17, "");
    return VAR1::VAR16;
  }
  if (!FUN4("")) {
    return VAR1::VAR16;
  }
  
  
  if (VAR9 < 0) {
    FUN3(VAR17, "");
    return VAR1::VAR16;
  }

  if (VAR11 == 0) {
    return VAR1::VAR16;
  }
 
   GLuint VAR18 = VAR9 + VAR11 - 1;
   if (FUN5(VAR18)) {

    bool VAR19 = FUN6(VAR18);








     bool VAR20 = false;
     if (FUN7(VAR18, &VAR20)) {
       bool VAR21 = FUN8();
      FUN9();
      FUN10(VAR7, VAR9, VAR11);
      if (VAR21) {
        FUN11();
      }
      if (VAR20) {
        FUN12();
      }
    }
    if (VAR19) {
      FUN13();
    }
    if (FUN14()) {
      FUN15(VAR22) << "";
      return VAR1::VAR23;
    }
  }
  return VAR1::VAR16;
}