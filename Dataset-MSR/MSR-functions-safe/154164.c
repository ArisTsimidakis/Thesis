VAR1* FUN1(GLenum VAR2) const {
    VAR1* VAR3 = nullptr;
    switch (VAR2) {
      case VAR4:
      case VAR5:
        VAR3 = VAR6.VAR7.FUN2();
        break;
      case VAR8:
        VAR3 = VAR6.VAR9.FUN2();
        break;
      default:
        FUN3();
        break;
    }
    return VAR3;
  }