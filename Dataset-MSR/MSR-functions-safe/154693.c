VAR1::Error VAR2::FUN1(
    GLuint VAR3,
    VAR4::VAR5<VAR6>* VAR7) {
  GLuint VAR8 = 0;
  if (!VAR9->VAR10.FUN2(VAR3, &VAR8)) {
    return VAR1::VAR11;
  }

  GLint VAR12 = 0;
  FUN3()->FUN4(VAR8, VAR13,
                          &VAR12);

  GLint VAR14 = 0;
  FUN3()->FUN4(VAR8, VAR15, &VAR14);

  const VAR16::VAR17<VAR18> FUN5(
      sizeof(VAR19));
  const VAR16::VAR17<VAR18> FUN6(sizeof(VAR20));
  const VAR16::VAR17<VAR18> VAR21 =
      VAR22 * VAR12;
  const VAR16::VAR17<VAR18> VAR23 =
      VAR22 * VAR14;
  VAR7->FUN7((VAR24 + VAR21 + VAR23)
                   .FUN8(),
               0);

  GLint VAR25 = 0;
  FUN3()->FUN4(VAR8, VAR26, &VAR25);

  ProgramInfoHeader VAR27;
  VAR27.VAR25 = VAR25;
  VAR27.VAR28 = VAR12;
  VAR27.VAR14 = VAR14;
  FUN9(VAR7, VAR27, 0);

  GLint VAR29 = 0;
  FUN3()->FUN4(VAR8, VAR30,
                          &VAR29);

  VAR4::VAR5<char> FUN10(VAR29, 0);
  for (GLint VAR31 = 0; VAR31 < VAR12; VAR31++) {
    GLsizei VAR32 = 0;
    GLint VAR33 = 0;
    GLenum VAR34 = VAR35;
    FUN3()->FUN11(VAR8, VAR31,
                               VAR36.FUN12(), &VAR32, &VAR33, &VAR34,
                               VAR36.FUN13());

    ProgramInput VAR37;
    VAR37.VAR33 = VAR33;
    VAR37.VAR34 = VAR34;

    int32_t VAR38 =
        FUN3()->FUN14(VAR8, VAR36.FUN13());
    VAR37.VAR39 = VAR7->FUN12();
    FUN15(VAR7, VAR38);

    VAR37.VAR40 = VAR7->FUN12();
    VAR37.VAR41 = VAR32;
    FUN16(VAR7, VAR36.FUN13(), VAR32);

    FUN9(
        VAR7, VAR37,
        (VAR24 + (VAR22 * VAR31)).FUN8());
  }

  GLint VAR42 = 0;
  FUN3()->FUN4(VAR8, VAR43,
                          &VAR42);

  VAR4::VAR5<char> FUN17(VAR42, 0);
  for (GLint VAR44 = 0; VAR44 < VAR14; VAR44++) {
    GLsizei VAR32 = 0;
    GLint VAR33 = 0;
    GLenum VAR34 = VAR35;
    FUN3()->FUN18(VAR8, VAR44,
                                VAR45.FUN12(), &VAR32, &VAR33, &VAR34,
                                VAR45.FUN13());

    ProgramInput VAR37;
    VAR37.VAR33 = VAR33;
    VAR37.VAR34 = VAR34;

    VAR37.VAR39 = VAR7->FUN12();
    int32_t VAR46 =
        FUN3()->FUN19(VAR8, VAR45.FUN13());
    FUN15(VAR7, VAR46);

    VAR47 FUN20(VAR45.FUN13());
    if (VAR33 > 1 || VAR48.FUN21()) {
      for (GLint VAR49 = 1; VAR49 < VAR33; VAR49++) {
        VAR4::string VAR50 = VAR48.FUN22() + "" +
                                         VAR16::FUN23(VAR49) +
                                         "";
        int32_t VAR51 = FUN3()->FUN19(
            VAR8, VAR50.FUN24());
        FUN15(VAR7, VAR51);
      }
    }

    VAR37.VAR40 = VAR7->FUN12();
    VAR37.VAR41 = VAR32;
    FUN16(VAR7, VAR45.FUN13(), VAR32);

    FUN9(VAR7, VAR37,
                          (VAR24 + VAR21 +
                           (VAR22 * VAR44))
                              .FUN8());
  }

  return VAR1::VAR11;
}