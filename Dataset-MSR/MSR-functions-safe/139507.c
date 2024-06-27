static bool FUN1(VAR1& VAR2,
                                VAR3*,
                                VAR4,
                                const VAR5&) {
  const EphemeralRange VAR6 =
      VAR2.FUN2().FUN3().FUN4();
  EphemeralRange VAR7 = VAR2.FUN2().FUN5();
  if (VAR6.FUN6() || VAR7.FUN6())
    return false;
  VAR2.FUN7().FUN8(
      VAR8::FUN9()
          .FUN10(FUN11(VAR6, VAR7))
          .FUN12(),
      VAR9::VAR10);
  return true;
}