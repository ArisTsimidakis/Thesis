void VAR1::FUN1(const VAR2* VAR3) {
  FUN2(!VAR3 || VAR4::FUN3(VAR3).FUN4());
  if (VAR5 == VAR3)
    return;

  VAR5 = VAR3;

  if (VAR5) {
    VAR6.FUN5(
        VAR7::FUN6(FUN7()->FUN8()));
  } else {
    VAR6.FUN9();
  }

  FUN10(VAR5);

  VAR8::VAR9::FUN11()->FUN12(
      VAR10::VAR11,
      VAR8::VAR12<VAR1>(this),
      VAR8::VAR9::FUN13());
}