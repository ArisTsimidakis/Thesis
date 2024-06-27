void VAR1::FUN1(void* VAR2,
                             int VAR3,
                             const VAR4::VAR5& VAR6,
                             VAR7::VAR8<VAR4::VAR5>* VAR9) {
  if (!VAR2)
    return;

  VAR4::Rect VAR10 = VAR6;
  for (const auto& VAR11 : *VAR9)
    VAR10 = VAR10.FUN2(VAR11);
  if (VAR10.FUN3())
    return;

  VAR7::VAR8<VAR12> VAR13;
  for (size_t VAR14 = 0; VAR14 < VAR9->FUN4(); ++VAR14) {
    if (VAR10.FUN5((*VAR9)[VAR14]))
      VAR13.FUN6(VAR14);
  }

  VAR9->FUN6(VAR10);
  int VAR15 = VAR10.FUN7();
  int VAR16 = VAR10.FUN8();
  int VAR17 = VAR10.FUN9();
  int VAR18 = VAR10.FUN10();

  for (int VAR19 = VAR16; VAR19 < VAR16 + VAR18; ++VAR19) {
    for (int VAR20 = VAR15; VAR20 < VAR15 + VAR17; ++VAR20) {
      bool VAR21 = false;
      for (size_t VAR14 : VAR13) {
        const auto& VAR11 = (*VAR9)[VAR14];
        if (VAR11.FUN11(VAR20, VAR19)) {
          VAR21 = true;
          break;
        }
      }
      if (VAR21)
        continue;

      VAR22* VAR23 = static_cast<VAR22*>(VAR2) + VAR19 * VAR3 + VAR20 * 4;
      VAR23[0] = static_cast<VAR22>(VAR23[0] * (VAR24 / 255.0));
      VAR23[1] = static_cast<VAR22>(VAR23[1] * (VAR25 / 255.0));
      VAR23[2] = static_cast<VAR22>(VAR23[2] * (VAR26 / 255.0));
    }
  }
}