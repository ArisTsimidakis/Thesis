static void FUN1(const VAR1::VAR2<VAR1::VAR3>& VAR4) {
  VAR5::VAR6::FUN2()->FUN3();

  VAR7::FUN4(FUN5(VAR4.FUN6()), VAR8::VAR9);

  bool VAR10 = false;

  switch (VAR11::FUN7(1, VAR4.FUN8())) {
    case 0:
      if (true) {
        VAR12* VAR13 = FUN5(VAR4.FUN6());
        VAR14::FUN9(VAR13, VAR8::VAR15);
        FUN10(VAR4);
        return;
      }
      break;
    case 1:
      if (true) {
        VAR12* VAR13 = FUN5(VAR4.FUN6());
        VAR14::FUN9(VAR13, VAR8::VAR15);
        FUN11(VAR4);
        return;
      }
      break;
    default:
      VAR10 = true;
  }

  VAR16 FUN12(VAR4.FUN6(), VAR16::VAR17, "", "");
  if (VAR10) {
  }
  VAR18.FUN13("");
}