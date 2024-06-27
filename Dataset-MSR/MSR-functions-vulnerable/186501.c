VAR1::Error VAR2::FUN1(
    GLenum VAR3,
    GLuint VAR4,
    int32_t VAR5,
    uint32_t VAR6) {
  GLuint VAR7 = FUN2(VAR4, &VAR8);
  VAR9* VAR10 = &VAR11[VAR7];

  VAR12<VAR13::VAR14> VAR15 = FUN3(VAR5);
  if (!VAR15)
    return VAR1::VAR16;
  VAR17* VAR18 = static_cast<VAR17*>(
      VAR15->FUN4(VAR6, sizeof(VAR17)));
   if (!VAR18)
     return VAR1::VAR19;
 






   if (FUN5(VAR3)) {
     if (VAR20.FUN6(VAR3) != VAR20.FUN7()) {
       FUN8(VAR21, "");
      return VAR1::VAR22;
    }

    if (VAR4 == 0) {
      FUN8(VAR21, "");
      return VAR1::VAR22;
    }

    if (VAR10->VAR23 != VAR24 && VAR10->VAR23 != VAR3) {
      FUN8(VAR21,
                  "");
      return VAR1::VAR22;
    }
  } else {
    
    FUN9();

    FUN10()->FUN11(VAR3, VAR7);

    
    if (FUN9()) {
      return VAR1::VAR22;
    }
  }

  VAR10->VAR23 = VAR3;

  
  
  FUN12(VAR7);

  ActiveQuery VAR25;
  VAR25.VAR7 = VAR7;
  VAR25.VAR26 = VAR27::move(VAR15);
  VAR25.VAR18 = VAR18;
  VAR20[VAR3] = VAR27::move(VAR25);

  return VAR1::VAR22;
}