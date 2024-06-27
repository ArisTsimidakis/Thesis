bool FUN1(const VAR1::VAR2& VAR3,
                const VAR1::VAR2& VAR4,
                bool *VAR5,
                VAR1::VAR2* VAR6) {
  if (!FUN2(VAR3)) {
    
    if (FUN3(VAR3)) {
      *VAR6 = VAR3;
    } else {
      VAR1::wstring VAR7;
      if (!VAR4.FUN4() &&
          VAR8::FUN5(VAR3, VAR4.FUN6(),
                               VAR8::VAR9::VAR10,
                               &VAR7)) {
        *VAR6 = FUN7(VAR7);
      } else {
        *VAR6 = FUN7(VAR8::FUN8(VAR3));
      }
    }
    *VAR5 = false;
    return true;
  }

  
  
  
  
  
  VAR1::string VAR11;
  *VAR5 = true;
  int VAR12 = 0;
  VAR1::string VAR13;
  VAR14 FUN9(VAR3, "");
  RFC2047EncodingType VAR15 = VAR16;
  while (*VAR5 && VAR17.FUN10()) {
    VAR1::string VAR18 = VAR17.FUN11();
    switch (VAR12) {
      case 0:
        if (VAR18 != "") {
          *VAR5 = false;
          break;
        }
        ++VAR12;
        break;
      case 1:
        
        VAR13 = VAR18;
        ++VAR12;
        break;
      case 2:
        if (VAR18.FUN12() > 1 ||
            VAR18.FUN13("") == VAR1::VAR2::VAR19) {
          *VAR5 = false;
          break;
        }
        if (VAR18[0] == '' || VAR18[0] == '') {
          VAR15 = VAR20;
        }
        ++VAR12;
        break;
      case 3:
        *VAR5 = FUN14(VAR18, VAR15, VAR13, &VAR11);
        if (!*VAR5) {
          
          
          return false;
        }
        ++VAR12;
        break;
      case 4:
        if (VAR18 != "") {
          
          
          
          
          
          *VAR5 = false;
          return false;
        }
        ++VAR12;
        break;
      default:
        *VAR5 = false;
        return false;
    }
  }

  if (*VAR5) {
    if (*(VAR3.FUN15() - 1) == '') {
      VAR6->FUN16(VAR11);
      return true;
    }
    
    *VAR5 = false;
    return false;
  }

  
  
  

  
  
  
  VAR11 = FUN17(VAR3, VAR21::VAR22);
  if (FUN3(VAR11)) {
    VAR6->FUN16(VAR11);
    return true;
    
    
    
    
    
  }
  return false;
}