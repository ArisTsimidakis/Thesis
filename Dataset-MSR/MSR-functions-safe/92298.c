FUN1(XML_Parser VAR1, VAR2 *VAR3, const VAR4 *VAR5,
           const VAR6 *VAR7, VAR8 **VAR9)
{
  static const XML_Char VAR10[] = {
    VAR11, VAR12, VAR12, VAR13, VAR14, VAR15, VAR15,
    VAR16, VAR16, VAR16, VAR17, VAR16, VAR18, VAR17,
    VAR19, VAR20, VAR21, VAR15, VAR22, VAR23, VAR24,
    VAR15, VAR25, VAR26, VAR26, VAR27, VAR15,
    VAR28, VAR29, VAR30, VAR31, VAR32, VAR13, VAR29, VAR33,
    VAR31, ''
  };
  static const int VAR34 =
    (int)sizeof(VAR10)/sizeof(VAR6) - 1;
  static const XML_Char VAR35[] = {
    VAR11, VAR12, VAR12, VAR13, VAR14, VAR15, VAR15,
    VAR16, VAR16, VAR16, VAR17, VAR16, VAR18, VAR17,
    VAR19, VAR20, VAR21, VAR15, VAR36, VAR37, VAR37,
    VAR37, VAR15, VAR38, VAR30, VAR39, VAR28, VAR32,
    VAR15, ''
  };
  static const int VAR40 =
    (int)sizeof(VAR35)/sizeof(VAR6) - 1;

  XML_Bool VAR41 = VAR42;
  XML_Bool VAR43 = VAR44;
  XML_Bool VAR45 = VAR44;

  VAR8 *VAR46;
  int VAR47;

  
  if (*VAR7 == FUN2('') && VAR3->VAR48)
    return VAR49;

  if (VAR3->VAR48
      && VAR3->VAR48[0] == FUN2(VAR38)
      && VAR3->VAR48[1] == FUN2(VAR30)
      && VAR3->VAR48[2] == FUN2(VAR39)) {

    
    if (VAR3->VAR48[3] == FUN2(VAR28)
        && VAR3->VAR48[4] == FUN2(VAR32)
        && VAR3->VAR48[5] == FUN2(''))
      return VAR50;

    if (VAR3->VAR48[3] == FUN2(''))
      VAR41 = VAR44;
  }

  for (VAR47 = 0; VAR7[VAR47]; VAR47++) {
    if (VAR43 && (VAR47 > VAR34 || VAR7[VAR47] != VAR10[VAR47]))
      VAR43 = VAR42;

    if (!VAR41 && VAR45
        && (VAR47 > VAR40 || VAR7[VAR47] != VAR35[VAR47]))
      VAR45 = VAR42;
  }
  VAR43 = VAR43 && VAR47 == VAR34;
  VAR45 = VAR45 && VAR47 == VAR40;

  if (VAR41 != VAR43)
    return VAR41 ? VAR51
                     : VAR52;

  if (VAR45)
    return VAR52;

  if (VAR1->VAR53)
    VAR47++;
  if (VAR1->VAR54) {
    VAR46 = VAR1->VAR54;
    if (VAR47 > VAR46->VAR55) {
      VAR6 *VAR56 = (VAR6 *)FUN3(VAR1, VAR46->VAR7,
                          sizeof(VAR6) * (VAR47 + VAR57));
      if (VAR56 == NULL)
        return VAR58;
      VAR46->VAR7 = VAR56;
      VAR46->VAR55 = VAR47 + VAR57;
    }
    VAR1->VAR54 = VAR46->VAR59;
  }
  else {
    VAR46 = (VAR8 *)FUN4(VAR1, sizeof(VAR8));
    if (!VAR46)
      return VAR58;
    VAR46->VAR7 = (VAR6 *)FUN4(VAR1, sizeof(VAR6) * (VAR47 + VAR57));
    if (!VAR46->VAR7) {
      FUN5(VAR1, VAR46);
      return VAR58;
    }
    VAR46->VAR55 = VAR47 + VAR57;
  }
  VAR46->VAR60 = VAR47;
  memcpy(VAR46->VAR7, VAR7, VAR47 * sizeof(VAR6));
  if (VAR1->VAR53)
    VAR46->VAR7[VAR47 - 1] = VAR1->VAR53;
  VAR46->VAR3 = VAR3;
  VAR46->VAR5 = VAR5;
  VAR46->VAR61 = VAR3->VAR62;
  
  if (*VAR7 == FUN2('') && VAR3 == &VAR1->VAR63->VAR64)
    VAR3->VAR62 = NULL;
  else
    VAR3->VAR62 = VAR46;
  VAR46->VAR59 = *VAR9;
  *VAR9 = VAR46;
  
  if (VAR5 && VAR1->VAR65)
    VAR1->FUN6(VAR1->VAR66, VAR3->VAR48,
                              VAR3->VAR62 ? VAR7 : 0);
  return VAR67;
}