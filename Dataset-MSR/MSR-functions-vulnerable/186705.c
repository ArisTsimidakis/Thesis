bool FUN1(const VAR1::VAR2* VAR3,
                               size_t VAR4,

                              bool VAR5,


                               bool VAR6,
                               VAR1::VAR7* VAR8,
                               bool* VAR9) {
  FUN2(VAR8);
  FUN2(VAR9);
  *VAR9 = false;
  if (VAR4 == 0)
    return false;

  
  static const VAR1::char16 VAR10[] = {'', '', '', ''};
  if (VAR4 <= VAR1::FUN3(VAR10) ||
      memcmp(VAR3, VAR10, sizeof(VAR10)) != 0) {
    VAR8->FUN4(VAR3, VAR4);
    return false;
  }

  VAR11* VAR12 = VAR13.FUN5().VAR14;
  FUN2(VAR12 != nullptr);
  size_t VAR15 = VAR8->FUN6();
  int32_t VAR16 = 64;
  UIDNAInfo VAR17 = VAR18;
  UErrorCode VAR19;
  do {
    VAR8->FUN7(VAR15 + VAR16);
    VAR19 = VAR20;
    
    
    
    VAR16 = FUN8(
        VAR12, VAR3, static_cast<VAR21>(VAR4), &(*VAR8)[VAR15],
        VAR16, &VAR17, &VAR19);
  } while ((VAR19 == VAR22 && VAR17.VAR23 == 0));

  if (FUN9(VAR19) && VAR17.VAR23 == 0) {
    *VAR9 = true;
    
    
    VAR8->FUN7(VAR15 + VAR16);
    if (!VAR6) {
      return true;
    }
     if (FUN10(
             VAR1::FUN11(VAR8->FUN12() + VAR15,
                                 VAR1::VAR24<VAR25>(VAR16)),

            VAR5)) {


       return true;
     }
   }

  
  
  VAR8->FUN7(VAR15);
  VAR8->FUN4(VAR3, VAR4);
  return false;
}