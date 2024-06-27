bool VAR1::FUN1(
    GLuint VAR2, bool* VAR3) {
  FUN2(VAR3);
  *VAR3 = false;

  if (VAR4::FUN3() == VAR4::VAR5)
    return true;

  const VAR6::VAR7* VAR8 =
      VAR9->FUN4(0);
  
  bool VAR10 = VAR11->FUN5(0) != NULL;
  if (VAR8->FUN6() && VAR10) {
    return true;
  }

  
  
  
  typedef VAR6::VAR7::Vec4 VAR12;

  GLuint VAR13 = VAR2 + 1;
  GLuint VAR14 = 0;

  if (VAR13 == 0 ||
      !FUN7(VAR13, static_cast<VAR15>(sizeof(VAR12)),
                    &VAR14) ||
      VAR14 > 0x7FFFFFFFU) {
    FUN8(VAR16, "");
    return false;
  }

   FUN9();
   FUN10(VAR17, VAR18);
 

  if (static_cast<VAR19>(VAR14) > VAR20) {




     FUN11(VAR17, VAR14, NULL, VAR21);
     GLenum VAR22 = FUN12();
     if (VAR22 != VAR23) {
       FUN8(VAR16, "");
       return false;
     }

    VAR24 = false;

  }

  if (VAR10 &&

      (!VAR24 ||

       (VAR8->FUN13().VAR25[0] != VAR26.VAR25[0] ||

        VAR8->FUN13().VAR25[1] != VAR26.VAR25[1] ||

        VAR8->FUN13().VAR25[2] != VAR26.VAR25[2] ||

        VAR8->FUN13().VAR25[3] != VAR26.VAR25[3]))) {
















     VAR27::VAR28<VAR12> FUN14(VAR13, VAR8->FUN13());
     FUN15(VAR17, 0, VAR14, &VAR29[0].VAR25[0]);
     VAR24 = true;
    VAR26 = VAR8->FUN13();
    VAR20 = VAR14;
  }

  FUN16(0, 4, VAR30, VAR31, 0, NULL);

  if (VAR8->FUN17())
    FUN18(0, 0);

  *VAR3 = true;
  return true;
}