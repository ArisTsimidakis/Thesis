VAR1::VAR2<VAR3> VAR4::FUN1(
    const VAR5& VAR6,
    const VAR7& VAR8,
    bool* VAR9) const {
  VAR10->FUN2(VAR6);

  
  
  VAR1::VAR2<VAR3> VAR11 =
      VAR12->FUN1(
          VAR8, FUN3(VAR6.VAR13),
          VAR14->FUN4());
  const VAR1::VAR2<VAR15*> VAR16 =
      VAR12->FUN5(
          VAR14->FUN4());
  for (const VAR15* VAR17 : VAR16) {
    if (!VAR17->FUN6().FUN7()) {
      VAR10->FUN8();
      break;
    }
  }

  
  *VAR9 = true;
  for (const VAR15* VAR17 : VAR16) {
    if (VAR17->FUN9() == VAR15::VAR18)
      *VAR9 = false;
  }

  for (size_t VAR19 = 0; VAR19 < VAR11.FUN10(); VAR19++) {
    VAR11[VAR19].VAR20 =
        FUN11(VAR11[VAR19].VAR21, VAR1::FUN12());
  }
  return VAR11;
}