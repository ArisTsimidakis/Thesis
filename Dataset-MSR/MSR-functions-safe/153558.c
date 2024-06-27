void VAR1::FUN1(GLuint VAR2,
                                             GLuint VAR3,
                                             const char* VAR4) {
  FUN2();
  FUN3("" << FUN4() << "" << VAR2
                     << "" << VAR3 << "" << VAR4 << "");
  FUN5(VAR5, VAR4);
  VAR6->FUN6(VAR2, VAR3, VAR5);
  VAR6->FUN7(VAR5, 0);
  FUN8();
}