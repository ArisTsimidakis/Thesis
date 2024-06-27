void VAR1::FUN1(
    TexImageFunctionID VAR2,
    GLenum VAR3,
    GLint VAR4,
    GLint VAR5,
    GLint VAR6,
    GLint VAR7,
    GLint VAR8,
    GLenum VAR9,
    GLenum VAR10,
    VAR11* VAR12,
    VAR13::ImageHtmlDomSource VAR14,
    bool VAR15,
    bool VAR16,
    const VAR17& VAR18,
    GLsizei VAR19,
    GLint VAR20) {
  const char* VAR21 = FUN2(VAR2);
  
  
  if (VAR10 == VAR22) {
    
    VAR10 = VAR23;
  }
   VAR24<VAR25> VAR26;
 
   IntRect VAR27 = VAR18;

  if (VAR27 == FUN3()) {


     
     VAR27 = FUN4(VAR12);
   }

  bool VAR28 = false;
  if (!FUN5(VAR21, VAR2, VAR12, VAR27,
                                    VAR19, VAR20,
                                    &VAR28)) {
    return;
  }

  
  IntRect VAR29 = VAR27;
  if (VAR15) {
    VAR29.FUN6(VAR12->FUN7() -
                                    VAR29.FUN8());
  }

  VAR13::VAR30 FUN9(
      VAR12, VAR14, VAR16,
      VAR31 == VAR32);
  if (!VAR33.FUN10()) {
    FUN11(VAR34, VAR21, "");
    return;
  }

  VAR13::DataFormat VAR35 =
      VAR33.FUN12();
  VAR13::AlphaOp VAR36 = VAR33.FUN13();
  const void* VAR37 = VAR33.FUN10();

  bool VAR38 = true;
  if (VAR10 == VAR39 &&
      VAR35 == VAR13::VAR40 &&
      VAR9 == VAR41 && VAR36 == VAR13::VAR42 &&
      !VAR15 && !VAR28 && VAR19 == 1) {
    VAR38 = false;
  } else {
    if (!VAR13::FUN14(
            VAR12, VAR37, VAR9, VAR10, VAR15, VAR36,
            VAR35, VAR33.FUN15(),
            VAR33.FUN16(), VAR29, VAR19,
            VAR33.FUN17(), VAR20,
            VAR26)) {
      FUN11(VAR34, VAR21, "");
      return;
    }
  }

  VAR43 FUN18(this);
  if (VAR2 == VAR44) {
    FUN19(VAR3, VAR4, VAR5,
                   VAR29.FUN20(),
                   VAR29.FUN21(), 0, VAR9, VAR10,
                   VAR38 ? VAR26.FUN22() : VAR37);
  } else if (VAR2 == VAR45) {
    FUN23()->FUN24(
        VAR3, VAR4, VAR6, VAR7, VAR29.FUN20(),
        VAR29.FUN21(), VAR9, VAR10,
        VAR38 ? VAR26.FUN22() : VAR37);
  } else {
    
    if (VAR2 == VAR46) {
      FUN23()->FUN25(
          VAR3, VAR4, VAR5, VAR29.FUN20(),
          VAR29.FUN21(), VAR19, 0, VAR9, VAR10,
          VAR38 ? VAR26.FUN22() : VAR37);
    } else {
      FUN26(VAR2, VAR47);
      FUN23()->FUN27(
          VAR3, VAR4, VAR6, VAR7, VAR8,
          VAR29.FUN20(),
          VAR29.FUN21(), VAR19, VAR9, VAR10,
          VAR38 ? VAR26.FUN22() : VAR37);
    }
  }
}