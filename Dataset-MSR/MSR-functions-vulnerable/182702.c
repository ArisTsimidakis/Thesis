FUN1(XML_Parser VAR1, const char *VAR2, const char *VAR3,
                        const char **VAR4) {
  const char *VAR5 = VAR2;
  int VAR6;

  VAR6 = FUN2(VAR1->VAR7, VAR2, VAR3, &VAR5);
  if (VAR6 <= 0) {
    if (! VAR1->VAR8.VAR9 && VAR6 != VAR10) {
      *VAR4 = VAR2;
      return VAR11;
    }
    switch (VAR6) {
    case VAR10:
      return VAR12;
    case VAR13:
      return VAR14;
    case VAR15:
      return VAR16;
    case VAR17: 
    default:
      break;
    }
  }
  
  else if (VAR6 == VAR18) {
    VAR2 = VAR5;
    VAR6 = FUN2(VAR1->VAR7, VAR2, VAR3, &VAR5);
  }
 
   VAR1->VAR19 = VAR20;
   return FUN3(VAR1, VAR1->VAR7, VAR2, VAR3, VAR6, VAR5, VAR4,

                  (VAR21)! VAR1->VAR8.VAR9);


 }