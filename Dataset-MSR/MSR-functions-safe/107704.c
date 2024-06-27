void VAR1::FUN1(
    const VAR2::VAR3& VAR4, bool VAR5) {
  if (VAR5 && VAR6) {
    VAR6 = false;
    return;
  }

  VAR7 = VAR4;
  VAR8 = VAR5;

  if (!FUN2(VAR9.FUN3()))
    return;

  VAR10* VAR11 = FUN4(VAR9.FUN3());
  if (!VAR11 || !FUN2(VAR11))
    return;

  int VAR12 = VAR13;
  bool VAR14 = VAR15;

  if (VAR5) {
    FUN5(false);
    VAR13 = 0;
  } else {
    VAR10* VAR16 = FUN6(VAR9.FUN3());
    if (!VAR16 || !FUN2(VAR16))
      return;

    bool VAR17 = !VAR18::VAR19::FUN7();

    GtkRequisition VAR20;
    FUN8(VAR9.FUN3(), &VAR20);

    
    
    gint VAR21 = 0, VAR22 = 0;
    FUN9(VAR16->VAR23, &VAR21, &VAR22);
    VAR2::Rect VAR24 =
        VAR25::FUN10(VAR11);
    VAR2::VAR26 FUN11(
        VAR21 + VAR24.FUN12() +
            (VAR17 ? 0 : VAR11->VAR27.VAR28 - VAR20.VAR28),
        VAR22 + VAR24.FUN13() +
            VAR11->VAR27.VAR29 - VAR20.VAR29,
        VAR20.VAR28,
        VAR20.VAR29);

    int VAR30 =
        VAR31.FUN12() - VAR31.FUN14() - VAR32;
    int VAR33 =
        VAR31.FUN15() + VAR31.FUN14() + VAR32;
    int VAR34 = VAR31.FUN13() - VAR32;

    if (((VAR17 && VAR4.FUN12() < VAR33) ||
         (!VAR17 && VAR4.FUN12() > VAR30)) &&
        VAR4.FUN13() > VAR34) {
      if (VAR35) {
        FUN5(true);
        VAR13 = 0;
      } else {
        FUN5(false);
        int VAR36 = VAR37::FUN16(VAR17 ?
                                    VAR4.FUN12() - VAR33 :
                                    VAR30 - VAR4.FUN12(),
                                VAR34 - VAR4.FUN13());
        VAR13 = VAR37::FUN17(-1 * VAR36, VAR20.VAR29);
      }
    } else {
      FUN5(false);
      VAR13 = 0;
    }
  }

  if (VAR13 != VAR12 || VAR15 != VAR14)
    FUN18(VAR11);
}