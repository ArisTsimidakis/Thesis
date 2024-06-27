bool VAR1::FUN1(
    const char* VAR2, GLuint VAR3, bool* VAR4) {
  FUN2(VAR4);
  *VAR4 = false;

  if (VAR5::FUN3() == VAR5::VAR6)
    return true;

  const VAR7::VAR8* VAR9 =
      VAR10->FUN4(0);
  
  bool VAR11 = VAR12->FUN5(0) != NULL;
  if (VAR9->FUN6() && VAR11) {
    return true;
  }

  
  
  
   typedef VAR7::VAR8::Vec4 VAR13;
 
   GLuint VAR14 = VAR3 + 1;

  GLuint VAR15 = 0;


 
   if (VAR14 == 0 ||

      !FUN7(VAR14, static_cast<VAR16>(sizeof(VAR13)),

                    &VAR15) ||


       VAR15 > 0x7FFFFFFFU) {
     FUN8(VAR17, VAR2, "");
     return false;
  }

  FUN9(
      "");

  FUN10();
  FUN11(VAR18, VAR19);

  bool VAR20 = static_cast<VAR21>(VAR15) > VAR22;
  if (VAR20) {
    FUN12(VAR18, VAR15, NULL, VAR23);
    GLenum VAR24 = FUN13();
    if (VAR24 != VAR25) {
      FUN8(VAR17, VAR2, "");
      return false;
    }
  }
  if (VAR20 ||
      (VAR11 &&
       (!VAR26 ||
        (VAR9->FUN14().VAR27[0] != VAR28.VAR27[0] ||
         VAR9->FUN14().VAR27[1] != VAR28.VAR27[1] ||
         VAR9->FUN14().VAR27[2] != VAR28.VAR27[2] ||
         VAR9->FUN14().VAR27[3] != VAR28.VAR27[3])))) {
    VAR29::VAR30<VAR13> FUN15(VAR14, VAR9->FUN14());
    FUN16(VAR18, 0, VAR15, &VAR31[0].VAR27[0]);
    VAR26 = true;
    VAR28 = VAR9->FUN14();
    VAR22 = VAR15;
  }

  FUN17(0, 4, VAR32, VAR33, 0, NULL);

  if (VAR9->FUN18())
    FUN19(0, 0);

  *VAR4 = true;
  return true;
}