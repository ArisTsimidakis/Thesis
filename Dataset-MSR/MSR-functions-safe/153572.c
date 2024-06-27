void VAR1::FUN1(GLenum VAR2, GLuint VAR3) {
  
  bool VAR4 = false;
  VAR5& VAR6 = VAR7[VAR8];
  switch (VAR2) {
    case VAR9:
      if (VAR6.VAR10 != VAR3) {
        VAR6.VAR10 = VAR3;
        VAR4 = true;
      }
      break;
    case VAR11:
      if (VAR6.VAR12 != VAR3) {
        VAR6.VAR12 = VAR3;
        VAR4 = true;
      }
      break;
    case VAR13:
      if (VAR6.VAR14 != VAR3) {
        VAR6.VAR14 = VAR3;
        VAR4 = true;
      }
      break;
    case VAR15:
      if (VAR6.VAR16 != VAR3) {
        VAR6.VAR16 = VAR3;
        VAR4 = true;
      }
      break;
    default:
      VAR4 = true;
      break;
  }
  
  if (VAR4) {
    FUN2(VAR17::VAR18)
        ->FUN3(this, VAR2, VAR3,
                            &VAR1::VAR19);
  }
}