void VAR1::FUN1(VAR2::VAR3* VAR4) {
  if (!VAR5)
    return;

  VAR4->FUN2(FUN3()->FUN4(
      VAR6::VAR7::VAR8));
  FUN5(VAR4);

  FUN6(VAR5->FUN7(), FUN8());
  for (int VAR9 = 0; VAR9 < VAR5->FUN7(); ++VAR9) {
    VAR2::Rect VAR10 = VAR5->FUN9().FUN10(VAR9);

    if (VAR5->FUN11(VAR9).VAR11 ==
        VAR12) {
      VAR4->FUN12(VAR10,
                       FUN3()->FUN4(
                           VAR6::VAR7::VAR13));
    } else {
      FUN13(VAR4, VAR9, VAR10);
    }
  }
}