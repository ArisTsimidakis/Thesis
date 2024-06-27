void VAR1::FUN1(


     const VAR2::VAR3& VAR4,
     const VAR2::VAR3& VAR5,
     TokenType VAR6) {
#if FUN2(VAR7)
  if (VAR8.FUN3()) {
    VAR8->FUN4(VAR4);
    switch (VAR6) {
      case VAR9:
        VAR8->FUN5(VAR5);
        break;
      case VAR10:
        VAR8->FUN6(VAR5);
        break;
      default:
        FUN7() << "" << VAR6;
    }
  }
#endif
}