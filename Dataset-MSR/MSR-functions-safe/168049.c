PopupType VAR1::FUN1(const VAR2& VAR3,
                                        const VAR4& VAR5) {
  const VAR6* VAR7 = FUN2(VAR3, VAR5);
  if (!VAR7)
    return VAR8::VAR9;

  switch (VAR7->FUN3().FUN4()) {
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
      return VAR8::VAR9;

    case VAR15:
      return VAR8::VAR16;

    case VAR17:
    case VAR18:
      return VAR8::VAR19;

    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
      return FUN5(VAR3) ? VAR8::VAR19
                                       : VAR8::VAR26;

    default:
      FUN6();
  }
}