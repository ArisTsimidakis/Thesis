VAR1 FUN1(
    VAR2* VAR3,
    const VAR1& VAR4) {
  FUN2(!VAR4.FUN3());

  VAR5::VAR6<VAR7> VAR8;
  if (VAR4.FUN4().FUN3()) {
    VAR8 = VAR9::FUN5(
        VAR3->FUN6().FUN7(), nullptr);
  } else {
    VAR10<VAR7> VAR11;
    VAR4.FUN4().FUN8(VAR11);
    VAR8.FUN9(VAR11.FUN10(), VAR11.FUN11());
  }

  auto VAR12 = VAR5::FUN12(VAR8.FUN10(), VAR8.FUN11(), VAR4);
  if (VAR12 == VAR8.FUN11())
    return FUN13();

  for (auto VAR13 = VAR8.FUN10(); VAR12 != VAR13;) {
    --VAR12;
    const VAR1* VAR14 = FUN14(&*VAR12);
    if (VAR14 && VAR14->FUN15() && !VAR14->FUN16() &&
        FUN17(*VAR14) && VAR9::FUN18(*VAR14)) {
      return *VAR14;
    }
  }

  return FUN13();
}