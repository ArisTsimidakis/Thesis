void VAR1::FUN1(
    ShelfBackgroundType VAR2,
    VAR3* VAR4) const {
  
  auto VAR5 = [&](int VAR6) {
    if (!VAR7)
      return VAR8;
    SkColor VAR9 =
        VAR7->FUN2(FUN3());
    if (VAR9 == VAR10)
      return VAR8;
    return VAR11::FUN4(
        FUN5(VAR8, VAR6), VAR9);
  };

  SkColor VAR12 = VAR8;
  switch (VAR2) {
    case VAR13:
    case VAR14:
    case VAR15:
       VAR12 = FUN6(VAR16);
       break;
     case VAR17:

    case VAR18:
       VAR12 = FUN6(VAR19);
       break;
     case VAR20:
      VAR12 = VAR21;
      break;
    case VAR22:
      VAR12 = VAR21;
      break;
    case VAR23:
      VAR12 = VAR24::VAR25;
      break;
  }

  VAR4->FUN7(FUN5(
      VAR12, FUN8(VAR2)));
}