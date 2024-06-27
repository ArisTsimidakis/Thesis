static void FUN1(const VAR1::VAR2<VAR1::VAR3>& VAR4) {
  VAR5 FUN2(VAR4.FUN3(), VAR5::VAR6, "", "");

  VAR7* VAR8 = VAR9::FUN4(VAR4.FUN5());

  bool VAR10;
  if (!VAR4[0]->FUN6()) {
    VAR10 = VAR11<VAR12>::FUN7(VAR4.FUN3(), VAR4[0], VAR13);
    if (VAR13.FUN8())
      return;
  } else {
    VAR10 = true;
  }

  VAR8->FUN9(VAR10);
}