void VAR1::FUN1(GLuint VAR2,
                                        GLint VAR3,
                                        VAR4* VAR5) {
  FUN2();
  FUN3("" << FUN4() << "" << VAR2
                     << "" << VAR3 << ""
                     << static_cast<const void*>(VAR5) << "");
  FUN5("", "");
  typedef VAR6::VAR7::Result VAR8;
  auto VAR9 = VAR10<VAR8>();
  if (!VAR9) {
    return;
  }
  VAR9->FUN6(0);
  VAR11->FUN1(VAR2, VAR3, FUN7(), VAR9.FUN8());
  FUN9();
  VAR9->FUN10(VAR5);
  FUN11({
    for (int32_t VAR12 = 0; VAR12 < VAR9->FUN12(); ++VAR12) {
      FUN3("" << VAR12 << "" << VAR9->FUN13()[VAR12]);
    }
  });
  FUN14();
}