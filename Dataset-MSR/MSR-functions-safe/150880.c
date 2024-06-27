void VAR1::FUN1() {
  for (auto VAR2 = VAR3.FUN2(); VAR2 != VAR3.FUN3();) {
    VAR4* VAR5 = VAR2->VAR6.FUN4();
    if (VAR5->FUN5() || VAR5->FUN6() ||
        VAR5->FUN7()) {
      ++VAR2;
      continue;
    }

    VAR7::Time VAR8 = VAR5->FUN8();

    bool VAR9 =
        (VAR7::VAR10::FUN9() - VAR8) > VAR11;
    FUN10(3) << "" << VAR5->FUN11()
            << "" << VAR8
            << "" << VAR9;

    if (!VAR9) {
      ++VAR2;
      continue;
    }

    FUN10(1) << "" << VAR5->FUN11();
    auto VAR12 = VAR2;
    VAR12++;
    VAR13::VAR14<VAR4> VAR15 = VAR13::move(VAR2->VAR6);
    VAR3.FUN12(VAR2);
    VAR2 = VAR12;

    for (auto& VAR16 : VAR17)
      VAR16.FUN13(this, VAR15.FUN4());
  }
}