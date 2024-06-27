void VAR1::FUN1(
    const VAR2& VAR3) {
  VAR4::string VAR5 = VAR6.VAR7;

  VAR6 = VAR3;

  FUN2();
  FUN3();
  VAR8::FUN4(VAR3.VAR9);

#if FUN5(VAR10)
  if (VAR3.VAR11) {
    VAR8::FUN6(VAR3.VAR12);

    if (FUN7()) {
      FUN7()->FUN8(VAR3.VAR13,
                                    VAR3.VAR14,
                                    VAR3.VAR15,
                                    VAR3.VAR16);
      FUN7()->FUN9();
    }
  }
#endif  

  if (FUN7() &&
      VAR5 != VAR6.VAR7) {
    FUN7()->FUN10();
  }
}