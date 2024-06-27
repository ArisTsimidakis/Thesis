void VAR1::FUN1(GLenum VAR2,
                                      GLsizei VAR3,
                                      GLenum VAR4,
                                      GLsizei VAR5,
                                      GLsizei VAR6,
                                      GLsizei VAR7,
                                      VAR8::Dimension VAR9,
                                      const char* VAR10) {
  if (VAR3 == 0) {
    FUN2(VAR11, VAR10, "");
    return;
  }
  bool VAR12 = FUN3(VAR4);
  if (VAR12 && VAR2 == VAR13) {
    FUN2(
        VAR14, VAR10, "");
    return;
  }
  
  
  
  bool VAR15 = VAR5 < 1 || VAR6 < 1 || VAR7 < 1;
  if (!FUN4()->FUN5(VAR2, 0, VAR5, VAR6, VAR7) ||
      VAR15 ||
      VAR16::FUN6(VAR2, VAR5, VAR6, VAR7) <
          VAR3) {
    FUN2(
        VAR11, VAR10, "");
    return;
  }
  VAR17* VAR18 = FUN4()->FUN7(
      &VAR19, VAR2);
  if (!VAR18) {
    FUN2(
        VAR14, VAR10, "");
    return;
  }
  VAR20* VAR21 = VAR18->FUN8();
  if (VAR21->FUN9()) {
    VAR22.VAR23 = true;
  }
  if (VAR21->FUN10()) {
    FUN2(
        VAR14, VAR10, "");
    return;
  }

  GLenum VAR24 = VAR16::FUN11(
      VAR4);
  GLenum VAR25 = VAR16::FUN12(VAR4);

  {
    GLsizei VAR26 = VAR5;
    GLsizei VAR27 = VAR6;
    GLsizei VAR28 = VAR7;
    VAR29::VAR30<VAR31> FUN13(0);
    PixelStoreParams VAR32;
    VAR32.VAR33 = 1;
    for (int VAR34 = 0; VAR34 < VAR3; ++VAR34) {
      uint32_t VAR35;
      if (VAR12) {
        GLsizei VAR36;
        if (!FUN14(
                VAR10, VAR26, VAR27, VAR28,
                VAR4, &VAR36, VAR19.FUN15())) {
          
          return;
        }
        VAR35 = static_cast<VAR31>(VAR36);
      } else {
        if (!VAR37::FUN16(VAR26,
                                                 VAR27,
                                                 VAR28,
                                                 VAR24, VAR25,
                                                 VAR32,
                                                 &VAR35,
                                                 nullptr, nullptr,
                                                 nullptr, nullptr)) {
          FUN2(
              VAR38, VAR10, "");
          return;
        }
      }
      VAR39 += VAR35;
      VAR26 = VAR40::FUN17(1, VAR26 >> 1);
      VAR27 = VAR40::FUN17(1, VAR27 >> 1);
      if (VAR2 == VAR13)
        VAR28 = VAR40::FUN17(1, VAR28 >> 1);
    }
    if (!VAR39.FUN18()) {
      FUN2(VAR38, VAR10, "");
      return;
    }
  }

  
  
  GLenum VAR41 =
      FUN4()->FUN19(VAR42.FUN20(),
                                                VAR4);

  
  const VAR43* VAR44 =
      FUN21(VAR4);
  if (VAR44 != nullptr && !VAR44->FUN22(*VAR42)) {
     VAR41 = VAR44->VAR45;
   }
 

  if (FUN23().VAR46 &&

      VAR21->FUN24() > 0)

    FUN25()->FUN26(VAR2, VAR47, 0);



  

  

  

  if (VAR9 == VAR8::VAR48) {

    FUN25()->FUN27(VAR2, VAR3, VAR41,

                               VAR5, VAR6);

  } else {

    FUN25()->FUN28(VAR2, VAR3, VAR41,

                            VAR5, VAR6, VAR7);

  }

  if (FUN23().VAR46 &&

      VAR21->FUN24() > 0)

    FUN25()->FUN26(VAR2, VAR47,

                             VAR21->FUN24());


   {
     GLsizei VAR26 = VAR5;
     GLsizei VAR27 = VAR6;
    GLsizei VAR28 = VAR7;

    GLenum VAR49 =
        VAR42->FUN29() ? VAR24 : VAR4;
    for (int VAR34 = 0; VAR34 < VAR3; ++VAR34) {
      if (VAR2 == VAR50) {
        for (int VAR51 = 0; VAR51 < 6; ++VAR51) {
          GLenum VAR52 = VAR53 + VAR51;
          FUN4()->FUN30(
              VAR18, VAR52, VAR34, VAR49, VAR26,
              VAR27, 1, 0, VAR24, VAR25, VAR54::FUN31());
        }
      } else {
        FUN4()->FUN30(
            VAR18, VAR2, VAR34, VAR49, VAR26,
            VAR27, VAR28, 0, VAR24, VAR25, VAR54::FUN31());
      }
      VAR26 = VAR40::FUN17(1, VAR26 >> 1);
      VAR27 = VAR40::FUN17(1, VAR27 >> 1);
      if (VAR2 == VAR13)
        VAR28 = VAR40::FUN17(1, VAR28 >> 1);
    }
     VAR21->FUN32(VAR42.FUN20());
     VAR21->FUN33(true);
   }














































 }