FUN1(XML_Parser VAR1, const VAR2 *VAR3, const char *VAR4, const char *VAR5,

         int VAR6, const char *VAR7, const char **VAR8, XML_Bool VAR9) {




 #ifdef VAR10
   static const XML_Char VAR11[] = {VAR12, ''};
 #endif 
  static const XML_Char VAR13[]
      = {VAR14, VAR15, VAR16, VAR17, VAR16, ''};
  static const XML_Char VAR18[] = {VAR19, VAR15, ''};
  static const XML_Char VAR20[]
      = {VAR19, VAR15, VAR21, VAR22, VAR23, ''};
  static const XML_Char VAR24[]
      = {VAR19, VAR15, VAR21, VAR22, VAR23, VAR25, ''};
  static const XML_Char VAR26[]
      = {VAR22, VAR27, VAR17, VAR19, VAR17, VAR28, ''};
  static const XML_Char VAR29[]
      = {VAR22, VAR27, VAR17, VAR19, VAR17,
         VAR19, VAR22, VAR25, ''};
  static const XML_Char VAR30[]
      = {VAR27, VAR31, VAR17, VAR32, VAR33, VAR22, VAR27, ''};
  static const XML_Char VAR34[]
      = {VAR27, VAR31, VAR17, VAR32, VAR33,
         VAR22, VAR27, VAR25, ''};
  static const XML_Char VAR35[]
      = {VAR27, VAR32, VAR17, VAR16,      VAR17,
         VAR19, VAR32, VAR27, VAR36, ''};
  static const XML_Char VAR37[] = {VAR38, ''};
  static const XML_Char VAR39[] = {VAR36, ''};

  
  VAR40 *const VAR41 = VAR1->VAR42;

  const char **VAR43;
  const char **VAR44;
  enum XML_Content_Quant VAR45;

  if (VAR3 == VAR1->VAR46) {
    VAR43 = &VAR1->VAR47;
    VAR44 = &VAR1->VAR48;
  } else {
    VAR43 = &(VAR1->VAR49->VAR50);
    VAR44 = &(VAR1->VAR49->VAR51);
  }

  for (;;) {
    int VAR52;
    XML_Bool VAR53 = VAR54;
    *VAR43 = VAR4;
    *VAR44 = VAR7;
    if (VAR6 <= 0) {
      if (VAR9 && VAR6 != VAR55) {
        *VAR8 = VAR4;
        return VAR56;
      }
      switch (VAR6) {
      case VAR55:
        *VAR43 = VAR7;
        return VAR57;
      case VAR58:
        return VAR59;
      case VAR60:
        return VAR61;
      case -VAR62:
        VAR6 = -VAR6;
        break;
      case VAR63:
#ifdef VAR10
        
        if (VAR3 != VAR1->VAR46
            && ! VAR1->VAR49->VAR64) {
          *VAR8 = VAR4;
          return VAR56;
        }
        
        if (VAR1->VAR65 || VAR3 != VAR1->VAR46) {
          if (FUN2(&VAR1->VAR66, VAR63, VAR5, VAR5, VAR3)
              == VAR67)
            return VAR68;
          *VAR8 = VAR4;
          return VAR56;
        }
#endif 
        return VAR69;
      default:
        VAR6 = -VAR6;
        VAR7 = VAR5;
        break;
      }
    }
    VAR52 = FUN2(&VAR1->VAR66, VAR6, VAR4, VAR7, VAR3);
    switch (VAR52) {
    case VAR70: {
      enum XML_Error VAR71 = FUN3(VAR1, 0, VAR4, VAR7);
      if (VAR71 != VAR56)
        return VAR71;
      VAR3 = VAR1->VAR46;
      VAR53 = VAR72;
    } break;
    case VAR73:
      if (VAR1->VAR74) {
        VAR1->VAR75
            = FUN4(&VAR1->VAR76, VAR3, VAR4, VAR7);
        if (! VAR1->VAR75)
          return VAR77;
        FUN5(&VAR1->VAR76);
        VAR1->VAR78 = NULL;
        VAR53 = VAR72;
      }
      VAR1->VAR79 = NULL; 
      break;
    case VAR80:
      if (VAR1->VAR74) {
        VAR1->FUN6(
            VAR1->VAR81, VAR1->VAR75, VAR1->VAR79,
            VAR1->VAR78, 1);
        VAR1->VAR75 = NULL;
        FUN7(&VAR1->VAR76);
        VAR53 = VAR72;
      }
      break;
#ifdef VAR10
    case VAR82: {
      enum XML_Error VAR71 = FUN3(VAR1, 1, VAR4, VAR7);
      if (VAR71 != VAR56)
        return VAR71;
      VAR3 = VAR1->VAR46;
      VAR53 = VAR72;
    } break;
#endif 
    case VAR83:
#ifdef VAR10
      VAR1->VAR84 = VAR72;
      VAR1->VAR85 = (VAR86 *)FUN8(
          VAR1, &VAR41->VAR87, VAR11, sizeof(VAR86));
      if (! VAR1->VAR85)
        return VAR77;
#endif 
      VAR41->VAR88 = VAR54;
      if (VAR1->VAR74) {
        VAR89 *VAR90;
        if (! FUN9(VAR3, VAR4, VAR7, VAR43))
          return VAR91;
        VAR90 = FUN4(&VAR1->VAR76, VAR3,
                                VAR4 + VAR3->VAR92,
                                VAR7 - VAR3->VAR92);
        if (! VAR90)
          return VAR77;
        FUN10(VAR90);
        FUN5(&VAR1->VAR76);
        VAR1->VAR78 = VAR90;
        VAR53 = VAR72;
        goto VAR93;
      }
      
    case VAR94:
      if (! FUN9(VAR3, VAR4, VAR7, VAR43))
        return VAR91;
    VAR93:
      if (VAR41->VAR95 && VAR1->VAR85) {
        VAR89 *VAR96
            = FUN4(&VAR41->VAR97, VAR3, VAR4 + VAR3->VAR92,
                              VAR7 - VAR3->VAR92);
        if (! VAR96)
          return VAR77;
        FUN10(VAR96);
        VAR1->VAR85->VAR98 = VAR96;
        FUN5(&VAR41->VAR97);
        
        if (VAR1->VAR99 && VAR52 == VAR94)
          VAR53 = VAR72;
       }
       break;
     case VAR100:










       if (VAR1->VAR75) {
         VAR1->FUN6(
             VAR1->VAR81, VAR1->VAR75, VAR1->VAR79,
            VAR1->VAR78, 0);
        FUN7(&VAR1->VAR76);
        VAR53 = VAR72;
      }
      
#ifdef VAR10
      if (VAR1->VAR79 || VAR1->VAR84) {
        XML_Bool VAR101 = VAR41->VAR88;
        VAR41->VAR88 = VAR54;
        if (VAR1->VAR102
            && VAR1->VAR103) {
          VAR86 *VAR104 = (VAR86 *)FUN8(VAR1, &VAR41->VAR87,
                                            VAR11, sizeof(VAR86));
          if (! VAR104) {
            
            return VAR77; 
          }
          if (VAR1->VAR84)
            VAR104->VAR105 = VAR1->VAR106;
          VAR41->VAR107 = VAR72;
          if (! VAR1->FUN11(
                  VAR1->VAR108, 0, VAR104->VAR105,
                  VAR104->VAR109, VAR104->VAR98))
            return VAR110;
          if (VAR41->VAR107) {
            if (! VAR41->VAR111 && VAR1->VAR112
                && ! VAR1->FUN12(VAR1->VAR81))
              return VAR113;
          }
          
          else if (! VAR1->VAR79)
            VAR41->VAR88 = VAR101;
          
        }
        VAR1->VAR84 = VAR72;
      }
#endif 
      if (VAR1->VAR114) {
        VAR1->FUN13(VAR1->VAR81);
        VAR53 = VAR72;
      }
      break;
    case VAR115:
#ifdef VAR10
      
      if (VAR1->VAR84) {
        XML_Bool VAR101 = VAR41->VAR88;
        VAR41->VAR88 = VAR54;
        if (VAR1->VAR102
            && VAR1->VAR103) {
          VAR86 *VAR104 = (VAR86 *)FUN8(VAR1, &VAR41->VAR87,
                                            VAR11, sizeof(VAR86));
          if (! VAR104)
            return VAR77;
          VAR104->VAR105 = VAR1->VAR106;
          VAR41->VAR107 = VAR72;
          if (! VAR1->FUN11(
                  VAR1->VAR108, 0, VAR104->VAR105,
                  VAR104->VAR109, VAR104->VAR98))
            return VAR110;
          if (VAR41->VAR107) {
            if (! VAR41->VAR111 && VAR1->VAR112
                && ! VAR1->FUN12(VAR1->VAR81))
              return VAR113;
          }
          
          else
            VAR41->VAR88 = VAR101;
          
        }
      }
#endif 
      VAR1->VAR116 = VAR117;
      return FUN14(VAR1, VAR4, VAR5, VAR8);
    case VAR118:
      VAR1->VAR119 = FUN15(VAR1, VAR3, VAR4, VAR7);
      if (! VAR1->VAR119)
        return VAR77;
      goto VAR120;
    case VAR121:
      VAR1->VAR122 = FUN16(VAR1, VAR3, VAR4, VAR7);
      if (! VAR1->VAR122)
        return VAR77;
      VAR1->VAR123 = VAR72;
      VAR1->VAR124 = NULL;
      VAR1->VAR125 = VAR72;
      goto VAR120;
    case VAR126:
      VAR1->VAR123 = VAR54;
      VAR1->VAR124 = VAR13;
      goto VAR120;
    case VAR127:
      VAR1->VAR125 = VAR54;
      VAR1->VAR124 = VAR18;
      goto VAR120;
    case VAR128:
      VAR1->VAR124 = VAR20;
      goto VAR120;
    case VAR129:
      VAR1->VAR124 = VAR24;
      goto VAR120;
    case VAR130:
      VAR1->VAR124 = VAR26;
      goto VAR120;
    case VAR131:
      VAR1->VAR124 = VAR29;
      goto VAR120;
    case VAR132:
      VAR1->VAR124 = VAR30;
      goto VAR120;
    case VAR133:
      VAR1->VAR124 = VAR34;
    VAR120:
      if (VAR41->VAR95 && VAR1->VAR134)
        VAR53 = VAR72;
      break;
    case VAR135:
    case VAR136:
      if (VAR41->VAR95 && VAR1->VAR134) {
        const VAR89 *VAR137;
        if (VAR1->VAR124) {
          VAR137 = VAR37;
        } else {
          VAR137 = (VAR52 == VAR136 ? VAR35
                                                              : VAR39);
        }
        if (! FUN17(&VAR1->VAR76, VAR137))
          return VAR77;
        if (! FUN18(&VAR1->VAR76, VAR3, VAR4, VAR7))
          return VAR77;
        VAR1->VAR124 = VAR1->VAR76.VAR138;
        VAR53 = VAR72;
      }
      break;
    case VAR139:
    case VAR140:
      if (VAR41->VAR95) {
        if (! FUN19(VAR1->VAR119,
                              VAR1->VAR122,
                              VAR1->VAR123,
                              VAR1->VAR125, 0, VAR1))
          return VAR77;
        if (VAR1->VAR134 && VAR1->VAR124) {
          if (*VAR1->VAR124 == FUN20(VAR36)
              || (*VAR1->VAR124 == FUN20(VAR27)
                  && VAR1->VAR124[1] == FUN20(VAR32))) {
            
            if (! FUN21(&VAR1->VAR76, FUN20(VAR141))
                || ! FUN21(&VAR1->VAR76, FUN20('')))
              return VAR77;
            VAR1->VAR124 = VAR1->VAR76.VAR138;
            FUN5(&VAR1->VAR76);
          }
          *VAR44 = VAR4;
          VAR1->FUN22(
              VAR1->VAR81, VAR1->VAR119->VAR142,
              VAR1->VAR122->VAR142, VAR1->VAR124, 0,
              VAR52 == VAR140);
          FUN7(&VAR1->VAR76);
          VAR53 = VAR72;
        }
      }
      break;
    case VAR143:
    case VAR144:
      if (VAR41->VAR95) {
        const VAR89 *VAR145;
        enum XML_Error VAR71 = FUN23(
            VAR1, VAR3, VAR1->VAR123,
            VAR4 + VAR3->VAR92, VAR7 - VAR3->VAR92, &VAR41->VAR97);
        if (VAR71)
          return VAR71;
        VAR145 = FUN24(&VAR41->VAR97);
        FUN5(&VAR41->VAR97);
        
        if (! FUN19(
                VAR1->VAR119, VAR1->VAR122,
                VAR1->VAR123, VAR72, VAR145, VAR1))
          return VAR77;
        if (VAR1->VAR134 && VAR1->VAR124) {
          if (*VAR1->VAR124 == FUN20(VAR36)
              || (*VAR1->VAR124 == FUN20(VAR27)
                  && VAR1->VAR124[1] == FUN20(VAR32))) {
            
            if (! FUN21(&VAR1->VAR76, FUN20(VAR141))
                || ! FUN21(&VAR1->VAR76, FUN20('')))
              return VAR77;
            VAR1->VAR124 = VAR1->VAR76.VAR138;
            FUN5(&VAR1->VAR76);
          }
          *VAR44 = VAR4;
          VAR1->FUN22(
              VAR1->VAR81, VAR1->VAR119->VAR142,
              VAR1->VAR122->VAR142, VAR1->VAR124,
              VAR145, VAR52 == VAR144);
          FUN7(&VAR1->VAR76);
          VAR53 = VAR72;
        }
      }
      break;
    case VAR146:
      if (VAR41->VAR95) {
        enum XML_Error VAR71 = FUN25(
            VAR1, VAR3, VAR4 + VAR3->VAR92, VAR7 - VAR3->VAR92);
        if (VAR1->VAR85) {
          VAR1->VAR85->VAR147 = FUN24(&VAR41->VAR148);
          VAR1->VAR85->VAR149
              = (int)(FUN26(&VAR41->VAR148));
          FUN5(&VAR41->VAR148);
          if (VAR1->VAR99) {
            *VAR44 = VAR4;
            VAR1->FUN27(
                VAR1->VAR81, VAR1->VAR85->VAR142,
                VAR1->VAR85->VAR150, VAR1->VAR85->VAR147,
                VAR1->VAR85->VAR149, VAR1->VAR106, 0, 0, 0);
            VAR53 = VAR72;
          }
        } else
          FUN28(&VAR41->VAR148);
        if (VAR71 != VAR56)
          return VAR71;
      }
      break;
    case VAR151:
#ifdef VAR10
      VAR1->VAR84 = VAR72;
#endif 
      VAR41->VAR88 = VAR54;
      if (VAR1->VAR74) {
        VAR1->VAR79 = FUN4(&VAR1->VAR76, VAR3,
                                                 VAR4 + VAR3->VAR92,
                                                 VAR7 - VAR3->VAR92);
        if (VAR1->VAR79 == NULL)
          return VAR77;
        FUN5(&VAR1->VAR76);
        VAR53 = VAR72;
      }
#ifdef VAR10
      else
        
        VAR1->VAR79 = VAR11;
#endif 
      if (! VAR41->VAR111
#ifdef VAR10
          && ! VAR1->VAR102
#endif 
          && VAR1->VAR112
          && ! VAR1->FUN12(VAR1->VAR81))
        return VAR113;
#ifndef VAR10
      break;
#else  
      if (! VAR1->VAR85) {
        VAR1->VAR85 = (VAR86 *)FUN8(
            VAR1, &VAR41->VAR87, VAR11, sizeof(VAR86));
        if (! VAR1->VAR85)
          return VAR77;
        VAR1->VAR85->VAR98 = NULL;
      }
#endif 
      
    case VAR152:
      if (VAR41->VAR95 && VAR1->VAR85) {
        VAR1->VAR85->VAR109
            = FUN4(&VAR41->VAR97, VAR3, VAR4 + VAR3->VAR92,
                              VAR7 - VAR3->VAR92);
        if (! VAR1->VAR85->VAR109)
          return VAR77;
        VAR1->VAR85->VAR105 = VAR1->VAR106;
        FUN5(&VAR41->VAR97);
        
        if (VAR1->VAR99 && VAR52 == VAR152)
          VAR53 = VAR72;
      }
      break;
    case VAR153:
      if (VAR41->VAR95 && VAR1->VAR85
          && VAR1->VAR99) {
        *VAR44 = VAR4;
        VAR1->FUN27(
            VAR1->VAR81, VAR1->VAR85->VAR142,
            VAR1->VAR85->VAR150, 0, 0, VAR1->VAR85->VAR105,
            VAR1->VAR85->VAR109, VAR1->VAR85->VAR98, 0);
        VAR53 = VAR72;
      }
      break;
    case VAR154:
      if (VAR41->VAR95 && VAR1->VAR85) {
        VAR1->VAR85->VAR155
            = FUN4(&VAR41->VAR97, VAR3, VAR4, VAR7);
        if (! VAR1->VAR85->VAR155)
          return VAR77;
        FUN5(&VAR41->VAR97);
        if (VAR1->VAR156) {
          *VAR44 = VAR4;
          VAR1->FUN29(
              VAR1->VAR81, VAR1->VAR85->VAR142,
              VAR1->VAR85->VAR105, VAR1->VAR85->VAR109,
              VAR1->VAR85->VAR98, VAR1->VAR85->VAR155);
          VAR53 = VAR72;
        } else if (VAR1->VAR99) {
          *VAR44 = VAR4;
          VAR1->FUN27(
              VAR1->VAR81, VAR1->VAR85->VAR142, 0, 0, 0,
              VAR1->VAR85->VAR105, VAR1->VAR85->VAR109,
              VAR1->VAR85->VAR98, VAR1->VAR85->VAR155);
          VAR53 = VAR72;
        }
      }
      break;
    case VAR157: {
      if (FUN30(VAR3, VAR4, VAR7)) {
        VAR1->VAR85 = NULL;
        break;
      }
      if (VAR41->VAR95) {
        const VAR89 *VAR142 = FUN4(&VAR41->VAR97, VAR3, VAR4, VAR7);
        if (! VAR142)
          return VAR77;
        VAR1->VAR85 = (VAR86 *)FUN8(VAR1, &VAR41->VAR158,
                                                VAR142, sizeof(VAR86));
        if (! VAR1->VAR85)
          return VAR77;
        if (VAR1->VAR85->VAR142 != VAR142) {
          FUN28(&VAR41->VAR97);
          VAR1->VAR85 = NULL;
        } else {
          FUN5(&VAR41->VAR97);
          VAR1->VAR85->VAR98 = NULL;
          VAR1->VAR85->VAR150 = VAR72;
          
          VAR1->VAR85->VAR159
              = ! (VAR1->VAR160 || VAR1->VAR49);
          if (VAR1->VAR99)
            VAR53 = VAR72;
        }
      } else {
        FUN28(&VAR41->VAR97);
        VAR1->VAR85 = NULL;
      }
    } break;
    case VAR161:
#ifdef VAR10
      if (VAR41->VAR95) {
        const VAR89 *VAR142 = FUN4(&VAR41->VAR97, VAR3, VAR4, VAR7);
        if (! VAR142)
          return VAR77;
        VAR1->VAR85 = (VAR86 *)FUN8(VAR1, &VAR41->VAR87,
                                                VAR142, sizeof(VAR86));
        if (! VAR1->VAR85)
          return VAR77;
        if (VAR1->VAR85->VAR142 != VAR142) {
          FUN28(&VAR41->VAR97);
          VAR1->VAR85 = NULL;
        } else {
          FUN5(&VAR41->VAR97);
          VAR1->VAR85->VAR98 = NULL;
          VAR1->VAR85->VAR150 = VAR54;
          
          VAR1->VAR85->VAR159
              = ! (VAR1->VAR160 || VAR1->VAR49);
          if (VAR1->VAR99)
            VAR53 = VAR72;
        }
      } else {
        FUN28(&VAR41->VAR97);
        VAR1->VAR85 = NULL;
      }
#else  
      VAR1->VAR85 = NULL;
#endif 
      break;
    case VAR162:
      VAR1->VAR163 = NULL;
      VAR1->VAR164 = NULL;
      if (VAR1->VAR165) {
        VAR1->VAR164
            = FUN4(&VAR1->VAR76, VAR3, VAR4, VAR7);
        if (! VAR1->VAR164)
          return VAR77;
        FUN5(&VAR1->VAR76);
        VAR53 = VAR72;
      }
      break;
    case VAR166:
      if (! FUN9(VAR3, VAR4, VAR7, VAR43))
        return VAR91;
      if (VAR1
              ->VAR164) { 
        VAR89 *VAR96 = FUN4(&VAR1->VAR76, VAR3,
                                        VAR4 + VAR3->VAR92,
                                        VAR7 - VAR3->VAR92);
        if (! VAR96)
          return VAR77;
        FUN10(VAR96);
        VAR1->VAR163 = VAR96;
        FUN5(&VAR1->VAR76);
        VAR53 = VAR72;
      }
      break;
    case VAR167:
      if (VAR1->VAR164 && VAR1->VAR165) {
        const VAR89 *VAR109 = FUN4(&VAR1->VAR76, VAR3,
                                                   VAR4 + VAR3->VAR92,
                                                   VAR7 - VAR3->VAR92);
        if (! VAR109)
          return VAR77;
        *VAR44 = VAR4;
        VAR1->FUN31(
            VAR1->VAR81, VAR1->VAR164, VAR1->VAR106,
            VAR109, VAR1->VAR163);
        VAR53 = VAR72;
      }
      FUN7(&VAR1->VAR76);
      break;
    case VAR168:
      if (VAR1->VAR163 && VAR1->VAR165) {
        *VAR44 = VAR4;
        VAR1->FUN31(
            VAR1->VAR81, VAR1->VAR164, VAR1->VAR106,
            0, VAR1->VAR163);
        VAR53 = VAR72;
      }
      FUN7(&VAR1->VAR76);
      break;
    case VAR67:
      switch (VAR6) {
      case VAR169:
        
        return VAR170;
      case VAR171:
        return VAR172;
      default:
        return VAR173;
      }
#ifdef VAR10
    case VAR174: {
      enum XML_Error VAR71;
      if (VAR1->VAR175)
        FUN32(VAR1, VAR3, VAR4, VAR7);
      VAR53 = VAR72;
      VAR71 = FUN33(VAR1, VAR3, &VAR7, VAR5, VAR8, VAR9);
      if (VAR71 != VAR56)
        return VAR71;
      else if (! VAR7) {
        VAR1->VAR116 = VAR176;
        return VAR71;
      }
    } break;
#endif 
    case VAR177:
      if (VAR1->VAR66.VAR178 >= VAR1->VAR179) {
        if (VAR1->VAR179) {
          {
            char *const VAR180 = (char *)FUN34(
                VAR1, VAR1->VAR181, VAR1->VAR179 *= 2);
            if (VAR180 == NULL) {
              VAR1->VAR179 /= 2;
              return VAR77;
            }
            VAR1->VAR181 = VAR180;
          }

          if (VAR41->VAR182) {
            int *const VAR183 = (int *)FUN34(
                VAR1, VAR41->VAR182, VAR1->VAR179 * sizeof(int));
            if (VAR183 == NULL)
              return VAR77;
            VAR41->VAR182 = VAR183;
          }
        } else {
          VAR1->VAR181
              = (char *)FUN35(VAR1, VAR1->VAR179 = 32);
          if (! VAR1->VAR181) {
            VAR1->VAR179 = 0;
            return VAR77;
          }
        }
      }
      VAR1->VAR181[VAR1->VAR66.VAR178] = 0;
      if (VAR41->VAR184) {
        int VAR185 = FUN36(VAR1);
        if (VAR185 < 0)
          return VAR77;
        assert(VAR41->VAR182 != NULL);
        VAR41->VAR182[VAR41->VAR186] = VAR185;
        VAR41->VAR186++;
        VAR41->VAR187[VAR185].VAR188 = VAR189;
        if (VAR1->VAR190)
          VAR53 = VAR72;
      }
      break;
    case VAR191:
      if (VAR1->VAR181[VAR1->VAR66.VAR178] == VAR38)
        return VAR173;
      VAR1->VAR181[VAR1->VAR66.VAR178] = VAR192;
      if (VAR41->VAR184 && VAR1->VAR190)
        VAR53 = VAR72;
      break;
    case VAR193:
      if (VAR1->VAR181[VAR1->VAR66.VAR178] == VAR192)
        return VAR173;
      if (VAR41->VAR184
          && ! VAR1->VAR181[VAR1->VAR66.VAR178]
          && (VAR41->VAR187[VAR41->VAR182[VAR41->VAR186 - 1]].VAR188
              != VAR194)) {
        VAR41->VAR187[VAR41->VAR182[VAR41->VAR186 - 1]].VAR188
            = VAR195;
        if (VAR1->VAR190)
          VAR53 = VAR72;
      }
      VAR1->VAR181[VAR1->VAR66.VAR178] = VAR38;
      break;
    case VAR196:
#ifdef VAR10
    case VAR197:
      VAR41->VAR88 = VAR54;
      if (! VAR1->VAR102)
        VAR41->VAR95 = VAR41->VAR111;
      else {
        const VAR89 *VAR142;
        VAR86 *VAR104;
        VAR142 = FUN4(&VAR41->VAR97, VAR3, VAR4 + VAR3->VAR92,
                               VAR7 - VAR3->VAR92);
        if (! VAR142)
          return VAR77;
        VAR104 = (VAR86 *)FUN8(VAR1, &VAR41->VAR87, VAR142, 0);
        FUN28(&VAR41->VAR97);
        
        if (VAR1->VAR66.VAR198
            && (VAR41->VAR111 ? ! VAR1->VAR49
                                : ! VAR41->VAR88)) {
          if (! VAR104)
            return VAR199;
          else if (! VAR104->VAR159) {
            
            return VAR200; 
          }
        } else if (! VAR104) {
          VAR41->VAR95 = VAR41->VAR111;
          
          if ((VAR52 == VAR196)
              && VAR1->VAR201) {
            VAR1->FUN37(VAR1->VAR81, VAR142, 1);
            VAR53 = VAR72;
          }
          break;
        }
        if (VAR104->open)
          return VAR202;
        if (VAR104->VAR147) {
          enum XML_Error VAR71;
          XML_Bool VAR64
              = (VAR52 == VAR196 ? VAR54 : VAR72);
          VAR71 = FUN38(VAR1, VAR104, VAR64);
          if (VAR71 != VAR56)
            return VAR71;
          VAR53 = VAR72;
          break;
        }
        if (VAR1->VAR103) {
          VAR41->VAR107 = VAR72;
          VAR104->open = VAR54;
          if (! VAR1->FUN11(
                  VAR1->VAR108, 0, VAR104->VAR105,
                  VAR104->VAR109, VAR104->VAR98)) {
            VAR104->open = VAR72;
            return VAR110;
          }
          VAR104->open = VAR72;
          VAR53 = VAR72;
          if (! VAR41->VAR107) {
            VAR41->VAR95 = VAR41->VAR111;
            break;
          }
        } else {
          VAR41->VAR95 = VAR41->VAR111;
          break;
        }
      }
#endif 
      if (! VAR41->VAR111 && VAR1->VAR112
          && ! VAR1->FUN12(VAR1->VAR81))
        return VAR113;
      break;

      

    case VAR203:
      if (VAR1->VAR190) {
        VAR1->VAR119 = FUN15(VAR1, VAR3, VAR4, VAR7);
        if (! VAR1->VAR119)
          return VAR77;
        VAR41->VAR186 = 0;
        VAR41->VAR204 = 0;
        VAR41->VAR184 = VAR54;
        VAR53 = VAR72;
      }
      break;

    case VAR205:
    case VAR206:
      if (VAR41->VAR184) {
        if (VAR1->VAR190) {
          VAR207 *VAR208
              = (VAR207 *)FUN35(VAR1, sizeof(VAR207));
          if (! VAR208)
            return VAR77;
          VAR208->VAR45 = VAR209;
          VAR208->VAR142 = NULL;
          VAR208->VAR210 = 0;
          VAR208->VAR211 = NULL;
          VAR208->VAR188 = ((VAR52 == VAR205) ? VAR212
                                                          : VAR213);
          *VAR44 = VAR4;
          VAR1->FUN39(
              VAR1->VAR81, VAR1->VAR119->VAR142, VAR208);
          VAR53 = VAR72;
        }
        VAR41->VAR184 = VAR72;
      }
      break;

    case VAR214:
      if (VAR41->VAR184) {
        VAR41->VAR187[VAR41->VAR182[VAR41->VAR186 - 1]].VAR188
            = VAR194;
        if (VAR1->VAR190)
          VAR53 = VAR72;
      }
      break;

    case VAR215:
      VAR45 = VAR209;
      goto VAR216;
    case VAR217:
      VAR45 = VAR218;
      goto VAR216;
    case VAR219:
      VAR45 = VAR220;
      goto VAR216;
    case VAR221:
      VAR45 = VAR222;
    VAR216:
      if (VAR41->VAR184) {
        VAR223 *VAR224;
        const VAR89 *VAR142;
        int VAR225;
        const char *VAR226
            = (VAR45 == VAR209 ? VAR7 : VAR7 - VAR3->VAR92);
        int VAR185 = FUN36(VAR1);
        if (VAR185 < 0)
          return VAR77;
        VAR41->VAR187[VAR185].VAR188 = VAR227;
        VAR41->VAR187[VAR185].VAR45 = VAR45;
        VAR224 = FUN15(VAR1, VAR3, VAR4, VAR226);
        if (! VAR224)
          return VAR77;
        VAR142 = VAR224->VAR142;
        VAR41->VAR187[VAR185].VAR142 = VAR142;
        VAR225 = 0;
        for (; VAR142[VAR225++];)
          ;
        VAR41->VAR228 += VAR225;
        if (VAR1->VAR190)
          VAR53 = VAR72;
      }
      break;

    case VAR229:
      VAR45 = VAR209;
      goto VAR230;
    case VAR231:
      VAR45 = VAR218;
      goto VAR230;
    case VAR232:
      VAR45 = VAR220;
      goto VAR230;
    case VAR233:
      VAR45 = VAR222;
    VAR230:
      if (VAR41->VAR184) {
        if (VAR1->VAR190)
          VAR53 = VAR72;
        VAR41->VAR186--;
        VAR41->VAR187[VAR41->VAR182[VAR41->VAR186]].VAR45 = VAR45;
        if (VAR41->VAR186 == 0) {
          if (! VAR53) {
            VAR207 *VAR234 = FUN40(VAR1);
            if (! VAR234)
              return VAR77;
            *VAR44 = VAR4;
            VAR1->FUN39(
                VAR1->VAR81, VAR1->VAR119->VAR142, VAR234);
          }
          VAR41->VAR184 = VAR72;
          VAR41->VAR228 = 0;
        }
      }
      break;
      

    case VAR235:
      if (! FUN41(VAR1, VAR3, VAR4, VAR7))
        return VAR77;
      VAR53 = VAR72;
      break;
    case VAR236:
      if (! FUN42(VAR1, VAR3, VAR4, VAR7))
        return VAR77;
      VAR53 = VAR72;
      break;
    case VAR237:
      switch (VAR6) {
      case VAR238:
        VAR53 = VAR72;
        break;
      }
      break;
    case VAR239:
      if (VAR1->VAR74)
        VAR53 = VAR72;
      break;
    case VAR240:
      if (VAR41->VAR95 && VAR1->VAR99)
        VAR53 = VAR72;
      break;
    case VAR241:
      if (VAR1->VAR165)
        VAR53 = VAR72;
      break;
    case VAR242:
      if (VAR41->VAR95 && VAR1->VAR134)
        VAR53 = VAR72;
      break;
    case VAR243:
      if (VAR1->VAR190)
        VAR53 = VAR72;
      break;
    } 

    if (VAR53 && VAR1->VAR175)
      FUN32(VAR1, VAR3, VAR4, VAR7);

    switch (VAR1->VAR244.VAR245) {
    case VAR246:
      *VAR8 = VAR7;
      return VAR56;
    case VAR247:
      return VAR248;
    default:
      VAR4 = VAR7;
      VAR6 = FUN43(VAR3, VAR4, VAR5, &VAR7);
    }
  }
  
}