NO_INLINE VAR1 *FUN1(VAR1 *VAR2, VAR1 *VAR3) {
  assert(!VAR3 || FUN2(VAR3));
  FUN3(VAR4);
  VAR2 = FUN4(VAR2, VAR3);

  bool VAR5 = VAR6->VAR7!='';
  FUN5(VAR2, VAR5);
  if (VAR8.VAR9) {
    FUN6(VAR2, VAR10, VAR8.VAR9);
  }
  return VAR2;
}


NO_INLINE VAR1 *FUN7() {
  VAR1 *VAR3 = 0;
  VAR1 *VAR2 = 0;
  bool VAR11 = true;
  while (VAR6->VAR7!='' && !VAR12) {
    if (VAR11 && VAR3) {
      
      VAR2 = FUN4(VAR2, VAR3);
    }
    FUN8(VAR3);
    VAR3 = FUN9();
    if (!(FUN2(VAR3) && FUN10(VAR3))) VAR11 = false;
    if (VAR6->VAR7!='') FUN11('', FUN12(VAR3,VAR2), 0);
  }
  FUN11('', FUN12(VAR3,VAR2), 0);
  
  if (VAR11 && VAR6->VAR7==VAR4) {
    VAR2 = FUN1(VAR2, VAR3);
    FUN8(VAR3);
    return VAR2;
  } else {
    FUN8(VAR2);
    return VAR3;
  }
}


NO_INLINE VAR1 *FUN13(bool VAR13) {
  VAR1 *VAR14 = 0;
  VAR1 *VAR15 = 0;
  VAR1 *VAR16 = 0;

  bool VAR17 = VAR18;
  if (VAR17)
    VAR14 = FUN14(VAR19);

  if (VAR13 && VAR6->VAR7==VAR20) {
    if (VAR14)
      VAR16 = FUN15(VAR6);
    FUN3(VAR20);
  }
  if (VAR14) {
    VAR1 *VAR21 = FUN16(VAR14, VAR22, true);
    FUN17(VAR14, VAR21); 
    VAR15 = FUN18(VAR21);
    FUN8(VAR21);
  }
  if (VAR6->VAR7==VAR23) {
    FUN3(VAR23);
    VAR1 *VAR24 = VAR17 ? FUN19(FUN20(FUN21(VAR6))) : 0;
    FUN11(VAR20,FUN22(VAR24,VAR14,VAR16,VAR15),0);
    if (VAR15) {
      if (FUN23(VAR24)) {
        FUN6(VAR15, VAR25, VAR24);
        
        FUN24(VAR14, VAR26, FUN25(""));
      } else
        FUN26(VAR27, "", VAR24);
    }
    FUN8(VAR24);
  }
  FUN11('',FUN27(VAR14,VAR16,VAR15),0);

  while ((VAR6->VAR7==VAR20 || VAR6->VAR7==VAR28) && !FUN28()) {
    bool VAR29 = VAR6->VAR7==VAR28;
    if (VAR29) FUN3(VAR28);

    VAR1 *VAR30 = FUN15(VAR6);
    FUN11(VAR20,FUN27(VAR14,VAR16,VAR15),0);
    VAR1 *VAR31 = FUN29(false);
    if (VAR14 && VAR15) {
      if (FUN30(VAR30, "") || FUN30(VAR30, "")) {
        FUN26(VAR27, "");
      } else if (FUN30(VAR30, "")) {
        FUN31(VAR14, VAR31);
      } else {
        VAR30 = FUN32(VAR30, 0);
        FUN33(VAR30, VAR31);
        FUN34(VAR29 ? VAR14 : VAR15, VAR30);
      }
    }
    FUN12(VAR31,VAR30);
  }
  FUN8(VAR15);
  
  if (VAR16)
    FUN24(VAR14, VAR32, VAR16);

  FUN11('',FUN8(VAR14),0);
  return VAR14;
}

#endif

NO_INLINE VAR1 *FUN35() {
  if (VAR6->VAR7==VAR20) {
    VAR1 *VAR3 = FUN20(FUN21(VAR6));
    FUN3(VAR20);
#ifndef VAR33
    if (VAR6->VAR7==VAR34)
      FUN26(VAR27, "");
    else if (VAR6->VAR7==VAR4 && FUN2(VAR3)) {
      VAR1 *VAR2 = FUN1(0,VAR3);
      FUN8(VAR3);
      VAR3=VAR2;
    }
#endif
    return VAR3;
  } else if (VAR6->VAR7==VAR35) {
    VAR1 *VAR36 = 0;
    if (VAR18) {
      VAR36 = FUN36(FUN37(FUN21(VAR6)));
    }
    FUN3(VAR35);
    return VAR36;
  } else if (VAR6->VAR7==VAR37) {
    VAR1 *VAR36 = 0;
    if (VAR18) {
      VAR36 = FUN38(FUN39(FUN21(VAR6)));
    }
    FUN3(VAR37);
    return VAR36;
  } else if (VAR6->VAR7=='') {
    FUN3('');
    if (!FUN40()) return 0;
#ifdef VAR33
    
    VAR1 *VAR3 = FUN41();
    if (!VAR12) FUN42('',VAR3);
    return VAR3;
#else
    return FUN7();
#endif

  } else if (VAR6->VAR7==VAR38) {
    FUN3(VAR38);
    return VAR18 ? FUN43(true) : 0;
  } else if (VAR6->VAR7==VAR39) {
    FUN3(VAR39);
    return VAR18 ? FUN43(false) : 0;
  } else if (VAR6->VAR7==VAR40) {
    FUN3(VAR40);
    return VAR18 ? FUN14(VAR41) : 0;
  } else if (VAR6->VAR7==VAR42) {
    FUN3(VAR42);
    return 0;
  } else if (VAR6->VAR7==VAR43) {
    VAR1 *VAR3 = 0;
    if (VAR18)
      VAR3 = FUN15(VAR6);
    FUN3(VAR43);
    return VAR3;
#ifndef VAR33
  } else if (VAR6->VAR7==VAR34) {
    return FUN44();
#endif
  } else if (VAR6->VAR7==VAR44) {
    VAR1 *VAR3 = 0;
#ifdef VAR33
    FUN26(VAR27, "");
#else
    VAR1 *VAR45 = FUN15(VAR6);
    size_t VAR46 = 0, VAR47 = 0;
    JsvStringIterator VAR48;
    FUN45(&VAR48, VAR45, 0);
    while (FUN46(&VAR48)) {
      VAR47++;
      if (FUN47(&VAR48)=='')
        VAR46 = VAR47;
      FUN48(&VAR48);
    }
    FUN49(&VAR48);
    VAR1 *VAR49 = 0;
    if (VAR46 < VAR47)
      VAR49 = FUN50(VAR45, VAR46, VAR50);
    VAR1 *VAR51 = FUN50(VAR45, 1, VAR46-2);
    VAR3 = FUN51(VAR51, VAR49);
    FUN27(VAR45, VAR49, VAR51);
#endif
    FUN3(VAR44);
    return VAR3;
  } else if (VAR6->VAR7=='') {
    if (!FUN40()) return 0;
    return FUN52();
  } else if (VAR6->VAR7=='') {
    if (!FUN40()) return 0;
    return FUN53();
  } else if (VAR6->VAR7==VAR52) {
    if (!FUN40()) return 0;
    FUN3(VAR52);
    return FUN29(true);
#ifndef VAR33
  } else if (VAR6->VAR7==VAR53) {
    if (!FUN40()) return 0;
    FUN3(VAR53);
    return FUN13(true);
  } else if (VAR6->VAR7==VAR54) {
    FUN3(VAR54);
    

    if (FUN54(VAR8.VAR9)) {
      
      VAR1 *VAR55 = FUN55(VAR8.VAR9, VAR25, 0); 
      VAR1 *VAR56 = FUN54(VAR55) ? FUN55(VAR55, VAR25, 0) : 0; 
      FUN8(VAR55);
      if (!VAR56) {
        FUN26(VAR27, "");
        return 0;
      }
      if (VAR6->VAR7=='') return VAR56; 
      
      VAR1 *VAR57 = FUN23(VAR56) ? FUN55(VAR56, VAR22, 0) : 0;
      FUN8(VAR56);
      return VAR57;
    } else if (FUN23(VAR8.VAR9)) {
      
      VAR1 *VAR55 = FUN55(VAR8.VAR9, VAR22, 0);
      VAR1 *VAR56 = FUN54(VAR55) ? FUN55(VAR55, VAR25, 0) : 0;
      FUN8(VAR55);
      if (!VAR56) {
        FUN26(VAR27, "");
        return 0;
      }
      return VAR56;
    }
    FUN26(VAR27, "");
    return 0;
#endif
  } else if (VAR6->VAR7==VAR58) {
    FUN3(VAR58);
    return FUN56( VAR8.VAR9 ? VAR8.VAR9 : VAR8.VAR59 );
  } else if (VAR6->VAR7==VAR60) {
    if (!FUN40()) return 0;
    return FUN57();
  } else if (VAR6->VAR7==VAR61) {
     if (!FUN40()) return 0;
     return FUN58();
   } else if (VAR6->VAR7==VAR62) {


     FUN3(VAR62);
     FUN8(FUN59());
     return 0;
  }
  FUN60(VAR63);
  FUN26(VAR27, "");
  return 0;
}

NO_INLINE VAR1 *FUN61(VAR1 *VAR3) {
  while (VAR6->VAR7==VAR64 || VAR6->VAR7==VAR65) {
    int VAR66 = VAR6->VAR7;
    FUN3(VAR66);
    if (VAR18) {
      VAR1 *VAR67 = FUN62(1);
      VAR1 *VAR68 = FUN63(FUN18(VAR3)); 
      VAR1 *VAR69 = FUN64(VAR68, VAR67, VAR66==VAR64 ? '' : '');
      FUN8(VAR67);

      
      FUN65(VAR3, VAR69);
      FUN8(VAR69);
      
      FUN8(VAR3);
      VAR3 = VAR68;
    }
  }
  return VAR3;
}

NO_INLINE VAR1 *FUN66() {
  VAR1 *VAR3;
  
  if (VAR6->VAR7==VAR64 || VAR6->VAR7==VAR65) {
    int VAR66 = VAR6->VAR7;
    FUN3(VAR66);
    VAR3 = FUN66();
    if (VAR18) {
      VAR1 *VAR67 = FUN62(1);
      VAR1 *VAR69 = FUN64(VAR3, VAR67, VAR66==VAR64 ? '' : '');
      FUN8(VAR67);
      
      FUN65(VAR3, VAR69);
      FUN8(VAR69);
    }
  } else
    VAR3 = FUN67();
  return FUN61(VAR3);
}

NO_INLINE VAR1 *FUN59() {
  if (VAR6->VAR7=='' || VAR6->VAR7=='' || VAR6->VAR7=='' || VAR6->VAR7=='') {
    short VAR7 = VAR6->VAR7;
    FUN3(VAR7);
    if (!VAR18) {
      return FUN59();
    }
    if (VAR7=='') { 
      return FUN43(!FUN68(FUN19(FUN59())));
    } else if (VAR7=='') { 
      return FUN62(~FUN69(FUN19(FUN59())));
    } else if (VAR7=='') { 
      return FUN70(FUN59()); 
    }  else if (VAR7=='') { 
      VAR1 *VAR36 = FUN19(FUN59());
      VAR1 *VAR70 = FUN71(VAR36); 
      FUN8(VAR36);
      return VAR70;
    }
    assert(0);
    return 0;
  } else
    return FUN66();
}



unsigned int FUN72(int VAR66) {
  switch (VAR66) {
  case VAR71: return 1; break;
  case VAR72: return 2; break;
  case '' : return 3; break;
  case '' : return 4; break;
  case '' : return 5; break;
  case VAR73:
  case VAR74:
  case VAR75:
  case VAR76: return 6;
  case VAR77:
  case VAR78:
  case '':
  case '':
  case VAR79: return 7;
  case VAR80: return (VAR8.VAR81&VAR82)?0:7;
  case VAR83:
  case VAR84:
  case VAR85: return 8;
  case '':
  case '': return 9;
  case '':
  case '':
  case '': return 10;
  default: return 0;
  }
}

NO_INLINE VAR1 *FUN73(VAR1 *VAR3, unsigned int VAR86) {
  
  unsigned int VAR87 = FUN72(VAR6->VAR7);
  while (VAR87 && VAR87>VAR86) {
    int VAR66 = VAR6->VAR7;
    FUN3(VAR66);

    
    
    
    if (VAR66==VAR72 || VAR66==VAR71) {
      bool VAR88 = FUN68(FUN18(VAR3));
      if ((!VAR88 && VAR66==VAR72) ||
          (VAR88 && VAR66==VAR71)) {
        
        FUN74();
        FUN75();
        FUN8(FUN73(FUN59(),VAR87));
        FUN76();
      } else {
        
        FUN8(VAR3);
        VAR3 = FUN73(FUN59(),VAR87);
      }
    } else { 
      VAR1 *VAR89 = FUN73(FUN59(),VAR87);
      if (VAR18) {
        if (VAR66==VAR80) {
          VAR1 *VAR90 = FUN18(VAR3); 
          VAR1 *VAR91 = FUN18(VAR89); 
          if (FUN77(VAR91) || FUN54(VAR91)) { 
            VAR90 = FUN78(VAR90);
            VAR1 *VAR92 = FUN79( VAR91, VAR90, true);
            FUN8(VAR3);
            VAR3 = FUN43(VAR92!=0);
            FUN8(VAR92);
          } else {
            FUN26(VAR93, "", VAR91);
            FUN8(VAR3);
            VAR3 = 0;
          }
          FUN12(VAR90, VAR91);
        } else if (VAR66==VAR79) {
          bool VAR94 = false;
          VAR1 *VAR90 = FUN18(VAR3);
          VAR1 *VAR91 = FUN18(VAR89);
          if (!FUN23(VAR91)) {
            FUN26(VAR93, "", VAR91);
          } else {
            if (FUN54(VAR90) || FUN23(VAR90)) {
              VAR1 *VAR95 = FUN80(VAR91, VAR22, false);
              VAR1 *VAR96 = FUN55(VAR90, VAR25, 0);
              while (VAR96) {
                if (VAR96 == VAR95) VAR94=true;
                
                VAR1 *VAR97 = FUN55(VAR96, VAR25, 0);
                FUN8(VAR96);
                VAR96 = VAR97;
              }
              if (FUN81(VAR91, "")) VAR94 = true;
              FUN8(VAR95);
            }
            if (!VAR94) {
              const char *VAR98 = FUN82(VAR90);
              if (VAR98) {
                VAR94 = FUN81(VAR91, VAR98);
              }
              
              if (!VAR94 && (FUN77(VAR90) || FUN83(VAR90)) &&
                  FUN81(VAR91, ""))
                VAR94 = true;
            }
          }
          FUN27(VAR90, VAR91, VAR3);
          VAR3 = FUN43(VAR94);
        } else {  
          VAR1 *VAR69 = FUN64(VAR3, VAR89, VAR66);
          FUN8(VAR3); VAR3 = VAR69;
        }
      }
      FUN8(VAR89);
    }
    VAR87 = FUN72(VAR6->VAR7);
  }
  return VAR3;
}

VAR1 *FUN84() {
  return FUN73(FUN59(),0);
}

NO_INLINE VAR1 *FUN85(VAR1 *VAR99) {
  if (VAR6->VAR7=='') {
    FUN3('');
    if (!VAR18) {
      
      FUN8(FUN9());
      FUN60('');
      FUN8(FUN9());
    } else {
      bool VAR100 = FUN68(FUN18(VAR99));
      FUN8(VAR99);
      if (VAR100) {
        VAR99 = FUN9();
        FUN60('');
        FUN74();
        FUN75();
        FUN8(FUN9());
        FUN76();
      } else {
        FUN74();
        FUN75();
        FUN8(FUN9());
        FUN76();
        FUN60('');
        VAR99 = FUN9();
      }
    }
  }

  return VAR99;
}

VAR1 *FUN86() {
  return FUN85(FUN84());
}

NO_INLINE VAR1 *FUN87(VAR1 *VAR99) {
  if (VAR6->VAR7=='' || VAR6->VAR7==VAR101 || VAR6->VAR7==VAR102 ||
      VAR6->VAR7==VAR103 || VAR6->VAR7==VAR104 || VAR6->VAR7==VAR105 ||
      VAR6->VAR7==VAR106 || VAR6->VAR7==VAR107 ||
      VAR6->VAR7==VAR108 || VAR6->VAR7==VAR109 ||
      VAR6->VAR7==VAR110 || VAR6->VAR7==VAR111) {
    VAR1 *VAR112;

    int VAR66 = VAR6->VAR7;
    FUN3(VAR66);
    VAR112 = FUN9();
    VAR112 = FUN19(VAR112); 

    if (VAR18 && VAR99) {
      if (VAR66=='') {
        
        if (!FUN88(VAR99) && FUN2(VAR99)) {
          if (!FUN89(VAR99) && !FUN90(VAR99))
            FUN34(VAR8.VAR59, VAR99);
        }
        FUN65(VAR99, VAR112);
      } else {
        if (VAR66==VAR101) VAR66='';
        else if (VAR66==VAR102) VAR66='';
        else if (VAR66==VAR103) VAR66='';
        else if (VAR66==VAR104) VAR66='';
        else if (VAR66==VAR105) VAR66='';
        else if (VAR66==VAR106) VAR66='';
        else if (VAR66==VAR107) VAR66='';
        else if (VAR66==VAR108) VAR66='';
        else if (VAR66==VAR109) VAR66=VAR84;
        else if (VAR66==VAR110) VAR66=VAR83;
        else if (VAR66==VAR111) VAR66=VAR85;
        if (VAR66=='' && FUN2(VAR99)) {
          VAR1 *VAR113 = FUN18(VAR99);
          if (FUN10(VAR113) && !FUN91(VAR113) && FUN88(VAR113)==1 && VAR112!=VAR113) {
            
            VAR1 *VAR114 = FUN92(VAR112, false);
            FUN93(VAR113, VAR114);
            FUN8(VAR114);
            VAR66 = 0;
          }
          FUN8(VAR113);
        }
        if (VAR66) {
          
          VAR1 *VAR69 = FUN64(VAR99,VAR112,VAR66);
          FUN65(VAR99, VAR69);
          FUN8(VAR69);
        }
      }
    }
    FUN8(VAR112);
  }
  return VAR99;
}


VAR1 *FUN9() {
  return FUN87(FUN86());
}


NO_INLINE VAR1 *FUN41() {
  while (!VAR12) {
    VAR1 *VAR3 = FUN9();
    if (VAR6->VAR7!='') return VAR3;
    
    FUN8(VAR3);
    FUN3('');
  }
  return 0;
}


NO_INLINE void FUN94() {
  if (VAR18) {
    while (VAR6->VAR7 && VAR6->VAR7!='') {
      FUN8(FUN95());
      if (VAR115) {
        if (VAR6 && !(VAR8.VAR81&VAR116)) {
          VAR8.VAR81 = (VAR117)(VAR8.VAR81 | VAR116);
          VAR1 *VAR118 = FUN55(VAR8.VAR119, VAR120, VAR121);
          if (VAR118) {
            FUN96(VAR118, "");
            FUN97(VAR118);
            FUN8(VAR118);
          }
        }
      }
      if (VAR12)
        return;
    }
  } else {
    
    int VAR122 = 0;
    while (VAR6->VAR7 && (VAR122 || VAR6->VAR7 != '')) {
      if (VAR6->VAR7 == '') VAR122++;
      if (VAR6->VAR7 == '') VAR122--;
      FUN3(VAR6->VAR7);
    }
  }
  return;
}