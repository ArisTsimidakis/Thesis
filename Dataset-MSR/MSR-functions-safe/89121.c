FUN1(VAR1* VAR2, VAR3* VAR4, VAR5* VAR6)
{
  int VAR7, VAR8;
  enum OpCode VAR9;

  switch (VAR2->VAR10) {
  case VAR11:      VAR7 = FUN2(VAR4, VAR12);      break;
  case VAR13:        VAR7 = FUN2(VAR4, VAR14);        break;
  case VAR15:     VAR7 = FUN2(VAR4, VAR16);     break;
  case VAR17:       VAR7 = FUN2(VAR4, VAR18);       break;
  case VAR19:   VAR7 = FUN2(VAR4, VAR20);   break;
  case VAR21: VAR7 = FUN2(VAR4, VAR22); break;

  case VAR23:
    VAR9 = VAR24;
  VAR25:
    VAR7 = FUN2(VAR4, VAR9);
    if (VAR7 != 0) return VAR7;
    FUN3(VAR4)->VAR26.VAR27 = (VAR28 )VAR2->VAR29;
    break;

  case VAR30:
    VAR9 = VAR31; goto VAR25;
    break;
#ifdef VAR32
  case VAR33:
    VAR9 = VAR34; goto VAR25;
    break;
  case VAR35:
    VAR9 = VAR36; goto VAR25;
    break;
#endif

  case VAR37:
  case VAR38:
    {
      enum TextSegmentBoundaryType VAR10;

      VAR7 = FUN2(VAR4, VAR39);
      if (VAR7 != 0) return VAR7;

      VAR10 = VAR40;
#ifdef VAR41
      if (FUN4(VAR4->VAR42, VAR43))
        VAR10 = VAR44;
#endif

      FUN3(VAR4)->VAR45.VAR10 = VAR10;
      FUN3(VAR4)->VAR45.not =
        (VAR2->VAR10 == VAR38 ? 1 : 0);
    }
    break;

  case VAR46:
    VAR7 = FUN2(VAR4, VAR47);
    if (VAR7 != 0) return VAR7;
    VAR7 = FUN5(FUN6(VAR2), VAR4, VAR6);
    if (VAR7 != 0) return VAR7;
    VAR7 = FUN2(VAR4, VAR48);
    break;

  case VAR49:
    VAR8 = FUN7(FUN6(VAR2), VAR4);
    if (VAR8 < 0) return VAR8;

    VAR7 = FUN2(VAR4, VAR50);
    if (VAR7 != 0) return VAR7;
    FUN3(VAR4)->VAR51.VAR52 = VAR53 + VAR8 + VAR54;
    VAR7 = FUN5(FUN6(VAR2), VAR4, VAR6);
    if (VAR7 != 0) return VAR7;
    VAR7 = FUN2(VAR4, VAR55);
    break;

  case VAR56:
    {
      int VAR57;
      VAR7 = FUN2(VAR4, VAR58);
      if (VAR7 != 0) return VAR7;
      if (VAR2->VAR59 < 0) {
        VAR7 = FUN8(FUN6(VAR2), VAR4, &VAR57);
        if (VAR7 != 0) return VAR60;
      }
      else
        VAR57 = VAR2->VAR59;

      FUN3(VAR4)->VAR61.VAR8 = VAR57;
      VAR7 = FUN5(FUN6(VAR2), VAR4, VAR6);
    }
    break;

  case VAR62:
    {
      int VAR57;

      VAR8 = FUN7(FUN6(VAR2), VAR4);
      VAR7 = FUN2(VAR4, VAR63);
      if (VAR7 != 0) return VAR7;
      FUN3(VAR4)->VAR64.VAR52 = VAR53 + VAR8 + VAR65;

      if (VAR2->VAR59 < 0) {
        VAR7 = FUN8(FUN6(VAR2), VAR4, &VAR57);
        if (VAR7 != 0) return VAR60;
      }
      else
        VAR57 = VAR2->VAR59;

      FUN3(VAR4)->VAR64.VAR8 = VAR57;

      VAR7 = FUN5(FUN6(VAR2), VAR4, VAR6);
      if (VAR7 != 0) return VAR7;
      VAR7 = FUN2(VAR4, VAR66);
    }
    break;

  default:
    return VAR67;
    break;
  }

  return VAR7;
}