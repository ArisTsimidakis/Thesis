bool FUN1(const VAR1& VAR2,
                    bool VAR3) {
  
  
  bool VAR4 = false;
  const char VAR5[] = "";
  const char VAR6[] = "";
  VAR2::Origin VAR7 = VAR2::VAR8::FUN2(VAR2);
  if (VAR7.FUN3(VAR5)) {
    VAR9::StringPiece VAR10 = VAR2.FUN4();
    while (VAR10.FUN5(""))
      VAR10.FUN6(1u);
    
    
    
    
    
    
    
    
    if (VAR3) {
      VAR9::VAR11::size_type VAR12 = VAR10.FUN7(VAR6);
      if (VAR12 != VAR9::VAR11::VAR13) {
        bool VAR14 = true;
        if (VAR12 > 0 && VAR10[VAR12 - 1] != '') {
          VAR14 = false;
        } else {
          for (VAR9::VAR11::VAR15
                   VAR16 = VAR10.FUN8() + VAR12 + strlen(VAR6),
                   VAR17 = VAR10.FUN9() - (strlen(VAR5) + 1);
               VAR16 != VAR17; ++VAR16) {
            if (!FUN10(*VAR16)) {
              VAR14 = false;
              break;
            }
          }
        }
        VAR4 = VAR4 || VAR14;
      }
    }

    
    
    VAR4 = VAR4 ||
                           (VAR2.FUN3("") &&
                             VAR9::FUN11(VAR2.FUN12(), "",
                                              VAR9::VAR18::VAR19));
   }
















   return VAR4 || VAR20::FUN13(VAR2) ||
          VAR20::FUN14(VAR2) ||
          VAR20::FUN15(VAR7, VAR2.FUN12());
}