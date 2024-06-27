SplashError VAR1::FUN1(SplashImageSource VAR2, void *VAR3,
			      SplashColorMode VAR4, GBool VAR5,
			      int VAR6, int VAR7, VAR8 *VAR9) {
  SplashPipe VAR10;
  GBool VAR11, VAR12;
  SplashCoord VAR13, VAR14, VAR15, VAR16, VAR17;
  int VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25;
  int VAR26, VAR27, VAR28, VAR29, VAR30, VAR31, VAR32, VAR33;
  int VAR34, VAR35, VAR36, VAR37, VAR38, VAR39, VAR40, VAR41;
  int VAR42, VAR43, VAR44, VAR45;
  SplashClipResult VAR46, VAR47;
  int VAR48, VAR49, VAR50, VAR51, VAR52;
  int VAR53, VAR54, VAR55, VAR56, VAR57;
  int VAR58, VAR59, VAR60, VAR61;
  SplashColorPtr VAR62, VAR63;
  SplashColor VAR64;
  VAR65 *VAR66, *VAR67;
#if VAR68
  int VAR69, VAR70, VAR71, VAR72;
#else
  int VAR69, VAR70, VAR71;
#endif
  int VAR73;
  SplashCoord VAR74, VAR75, VAR76;
  int VAR77, VAR78, VAR79, VAR80, VAR81;
  SplashCoord VAR82;
  int VAR83, VAR84, VAR85, VAR86, VAR87;

  if (VAR88) {
    printf("",
	   VAR4, VAR5, VAR6, VAR7, (double)VAR9[0], (double)VAR9[1], (double)VAR9[2],
	   (double)VAR9[3], (double)VAR9[4], (double)VAR9[5]);
  }

  
  VAR11 = VAR89; 
  VAR83 = 0; 
  switch (VAR90->VAR91) {
  case VAR92:
  case VAR93:
    VAR11 = VAR4 == VAR93;
    VAR83 = 1;
    break;
  case VAR94:
    VAR11 = VAR4 == VAR94;
    VAR83 = 3;
    break;
  case VAR95:
    VAR11 = VAR4 == VAR95;
    VAR83 = 4;
    break;
  case VAR96:
    VAR11 = VAR4 == VAR96;
    VAR83 = 3;
    break;
#if VAR68
  case VAR97:
    VAR11 = VAR4 == VAR97;
    VAR83 = 4;
    break;
#endif
  }
  if (!VAR11) {
    return VAR98;
  }

  
  if (FUN2(VAR9[0] * VAR9[3] - VAR9[1] * VAR9[2]) < 0.000001) {
    return VAR99;
  }

  
  VAR12 = FUN2(VAR9[1]) > FUN2(VAR9[0]);
  if (VAR12) {
    VAR13 = -VAR9[1];
    VAR14 = VAR9[2] - (VAR9[0] * VAR9[3]) / VAR9[1];
    VAR15 = -VAR9[3] / VAR14;
    VAR16 = -VAR9[0] / VAR9[1];
  } else {
    VAR13 = VAR9[0];
    VAR14 = VAR9[3] - (VAR9[1] * VAR9[2]) / VAR9[0];
    VAR15 = VAR9[2] / VAR14;
    VAR16 = VAR9[1] / VAR9[0];
  }
  
  
  
  
  
  
  
  
  
  if (VAR13 >= 0) {
    VAR18 = FUN3(VAR9[4] - 0.01);
    VAR19 = FUN3(VAR9[4] + VAR13 + 0.01);
  } else {
    VAR18 = FUN3(VAR9[4] + 0.01);
    VAR19 = FUN3(VAR9[4] + VAR13 - 0.01);
  }
  VAR22 = FUN4(VAR19 - VAR18) + 1;
  if (VAR14 >= 0) {
    VAR20 = FUN3(VAR9[5] - 0.01);
    VAR21 = FUN3(VAR9[5] + VAR14 + 0.01);
  } else {
    VAR20 = FUN3(VAR9[5] + 0.01);
    VAR21 = FUN3(VAR9[5] + VAR14 - 0.01);
  }
  VAR23 = FUN4(VAR21 - VAR20) + 1;
  VAR24 = (VAR13 < 0) ? -1 : 1;
  VAR25 = (VAR14 < 0) ? -1 : 1;
  VAR17 = (VAR8)VAR24 * VAR16;

  
  VAR34 = 0;
  VAR35 = 0;
  VAR38 = VAR24 * (VAR22 - 1);
  VAR39 = (int)(VAR16 * VAR38);
  VAR36 = FUN5(VAR15 * VAR25 * (VAR23 - 1));
  VAR37 = VAR25 * (VAR23 - 1) + (int)(VAR16 * VAR36);
  VAR40 = VAR24 * (VAR22 - 1) +
           FUN5(VAR15 * VAR25 * (VAR23 - 1));
  VAR41 = VAR25 * (VAR23 - 1) + (int)(VAR16 * VAR40);
  if (VAR12) {
    VAR26 = VAR18 + VAR35;    VAR27 = VAR20 - VAR34;
    VAR30 = VAR18 + VAR39;    VAR31 = VAR20 - VAR38;
    VAR28 = VAR18 + VAR37;    VAR29 = VAR20 - VAR36;
    VAR32 = VAR18 + VAR41;    VAR33 = VAR20 - VAR40;
  } else {
    VAR26 = VAR18 + VAR34;    VAR27 = VAR20 + VAR35;
    VAR30 = VAR18 + VAR38;    VAR31 = VAR20 + VAR39;
    VAR28 = VAR18 + VAR36;    VAR29 = VAR20 + VAR37;
    VAR32 = VAR18 + VAR40;    VAR33 = VAR20 + VAR41;
  }
  VAR42 = (VAR26 < VAR30) ? (VAR26 < VAR28) ? (VAR26 < VAR32) ? VAR26 : VAR32
                                   : (VAR28 < VAR32) ? VAR28 : VAR32
		     : (VAR30 < VAR28) ? (VAR30 < VAR32) ? VAR30 : VAR32
                                   : (VAR28 < VAR32) ? VAR28 : VAR32;
  VAR43 = (VAR26 > VAR30) ? (VAR26 > VAR28) ? (VAR26 > VAR32) ? VAR26 : VAR32
                                   : (VAR28 > VAR32) ? VAR28 : VAR32
		     : (VAR30 > VAR28) ? (VAR30 > VAR32) ? VAR30 : VAR32
                                   : (VAR28 > VAR32) ? VAR28 : VAR32;
  VAR44 = (VAR27 < VAR31) ? (VAR27 < VAR29) ? (VAR27 < VAR33) ? VAR27 : VAR33
                                   : (VAR29 < VAR33) ? VAR29 : VAR33
		     : (VAR31 < VAR29) ? (VAR31 < VAR33) ? VAR31 : VAR33
                                   : (VAR29 < VAR33) ? VAR29 : VAR33;
  VAR45 = (VAR27 > VAR31) ? (VAR27 > VAR29) ? (VAR27 > VAR33) ? VAR27 : VAR33
                                   : (VAR29 > VAR33) ? VAR29 : VAR33
		     : (VAR31 > VAR29) ? (VAR31 > VAR33) ? VAR31 : VAR33
                                   : (VAR29 > VAR33) ? VAR29 : VAR33;
  VAR46 = VAR100->VAR101->FUN6(VAR42, VAR44, VAR43, VAR45);
  VAR102 = VAR46;
  if (VAR46 == VAR103) {
    return VAR104;
  }

  
  VAR48 = VAR7 / VAR23;
  VAR49 = VAR7 % VAR23;
  VAR53 = VAR6 / VAR22;
   VAR54 = VAR6 % VAR22;
 
   

  VAR62 = (VAR105)FUN7((VAR48 + 1) * VAR6 * VAR83);


   if (VAR5) {

    VAR66 = (VAR65 *)FUN7((VAR48 + 1) * VAR6);


   } else {
     VAR66 = NULL;
   }

  VAR69 = VAR70 = VAR71 = 0; 
#if VAR68
  VAR72 = 0; 
#endif

  
  FUN8(&VAR10, 0, 0, NULL, VAR64, VAR100->VAR106,
	   VAR5 || (VAR107 && VAR46 != VAR108),
	   VAR89);
  if (VAR107) {
    FUN9();
  }

  if (VAR5) {

    
    VAR50 = 0;
    VAR52 = 1;

    for (VAR78 = 0; VAR78 < VAR23; ++VAR78) {

      
      VAR51 = VAR48;
      VAR50 += VAR49;
      if (VAR50 >= VAR23) {
	VAR50 -= VAR23;
	++VAR51;
      }

      
      VAR84 = (VAR48 > 0) ? VAR51 : VAR52;
      if (VAR84 > 0) {
	VAR63 = VAR62;
	VAR67 = VAR66;
	for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	  (*VAR2)(VAR3, VAR63, VAR67);
	  VAR63 += VAR6 * VAR83;
	  VAR67 += VAR6;
	}
      }
      VAR52 = VAR51;

      
      VAR58 = FUN5(VAR15 * VAR25 * VAR78);
  
      
      if (VAR46 != VAR108 &&
	  !VAR12 &&
	  (int)(VAR16 * VAR58) ==
	    (int)(VAR16 * (VAR24 * (VAR22 - 1) + VAR58))) {
	if (VAR24 > 0) {
	  VAR59 = VAR18 + VAR58;
	  VAR60 = VAR59 + (VAR22 - 1);
	} else {
	  VAR60 = VAR18 + VAR58;
	  VAR59 = VAR60 - (VAR22 - 1);
	}
	VAR61 = VAR20 + VAR25 * VAR78 + (int)(VAR16 * VAR58);
	VAR47 = VAR100->VAR101->FUN10(VAR59, VAR60, VAR61);
	if (VAR47 == VAR103) {
	  continue;
	}
      } else {
	VAR47 = VAR46;
      }

      
      VAR55 = 0;
      VAR57 = 0;

      
      VAR79 = VAR58;

      
      VAR82 = (VAR8)VAR25 * VAR78 + VAR16 * VAR79;
      
      
      
      if (VAR17 < 0) {
	VAR82 += 0.999;
      }

      
      VAR84 = VAR51 > 0 ? VAR51 : 1;

      switch (VAR4) {

      case VAR92:
      case VAR93:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR73 = 0;
	  VAR63 = VAR62 + VAR57;
	  VAR67 = VAR66 + VAR57;
	  VAR69 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR73 += *VAR67++;
	    }
	    VAR63 += VAR6 - VAR85;
	    VAR67 += VAR6 - VAR85;
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);
	  VAR75 = VAR74 * (1.0 / 255.0);
	  VAR76 = (VAR8)VAR73 * VAR75;

	  if (VAR76 > 0) {
	    VAR64[0] = (int)((VAR8)VAR69 * VAR74);

	    
	    VAR10.VAR109 = VAR76;
	    if (VAR107 && VAR46 != VAR108) {
	      FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	    } else {
	      FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
			VAR47 == VAR108);
	    }
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;

      case VAR94:
      case VAR96:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR73 = 0;
	  VAR63 = VAR62 + VAR57 * 3;
	  VAR67 = VAR66 + VAR57;
	  VAR69 = VAR70 = VAR71 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR70 += *VAR63++;
	      VAR71 += *VAR63++;
	      VAR73 += *VAR67++;
	    }
	    VAR63 += 3 * (VAR6 - VAR85);
	    VAR67 += VAR6 - VAR85;
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);
	  VAR75 = VAR74 * (1.0 / 255.0);
	  VAR76 = (VAR8)VAR73 * VAR75;

	  if (VAR76 > 0) {
	    VAR64[0] = (int)((VAR8)VAR69 * VAR74);
	    VAR64[1] = (int)((VAR8)VAR70 * VAR74);
	    VAR64[2] = (int)((VAR8)VAR71 * VAR74);

	    
	    VAR10.VAR109 = VAR76;
	    if (VAR107 && VAR46 != VAR108) {
	      FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	    } else {
	      FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
			VAR47 == VAR108);
	    }
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;

      case VAR95:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {
	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR73 = 0;
	  VAR63 = VAR62 + VAR57 * 4;
	  VAR67 = VAR66 + VAR57;
	  VAR69 = VAR70 = VAR71 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR70 += *VAR63++;
	      VAR71 += *VAR63++;
	      *VAR63++;
	      VAR73 += *VAR67++;
	    }
	    VAR63 += 4 * (VAR6 - VAR85);
	    VAR67 += VAR6 - VAR85;
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);
	  VAR75 = VAR74 * (1.0 / 255.0);
	  VAR76 = (VAR8)VAR73 * VAR75;

	  if (VAR76 > 0) {
	    VAR64[0] = (int)((VAR8)VAR69 * VAR74);
	    VAR64[1] = (int)((VAR8)VAR70 * VAR74);
	    VAR64[2] = (int)((VAR8)VAR71 * VAR74);
	    VAR64[3] = 255;

	    
	    VAR10.VAR109 = VAR76;
	    if (VAR107 && VAR46 != VAR108) {
	      FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	    } else {
	      FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
			VAR47 == VAR108);
	    }
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;


#if VAR68
      case VAR97:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR73 = 0;
	  VAR63 = VAR62 + VAR57 * 4;
	  VAR67 = VAR66 + VAR57;
	  VAR69 = VAR70 = VAR71 = VAR72 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR70 += *VAR63++;
	      VAR71 += *VAR63++;
	      VAR72 += *VAR63++;
	      VAR73 += *VAR67++;
	    }
	    VAR63 += 4 * (VAR6 - VAR85);
	    VAR67 += VAR6 - VAR85;
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);
	  VAR75 = VAR74 * (1.0 / 255.0);
	  VAR76 = (VAR8)VAR73 * VAR75;

	  if (VAR76 > 0) {
	    VAR64[0] = (int)((VAR8)VAR69 * VAR74);
	    VAR64[1] = (int)((VAR8)VAR70 * VAR74);
	    VAR64[2] = (int)((VAR8)VAR71 * VAR74);
	    VAR64[3] = (int)((VAR8)VAR72 * VAR74);

	    
	    VAR10.VAR109 = VAR76;
	    if (VAR107 && VAR46 != VAR108) {
	      FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	    } else {
	      FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
			VAR47 == VAR108);
	    }
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;
#endif 
      }
    }

  } else {

    
    VAR50 = 0;
    VAR52 = 1;

    for (VAR78 = 0; VAR78 < VAR23; ++VAR78) {

      
      VAR51 = VAR48;
      VAR50 += VAR49;
      if (VAR50 >= VAR23) {
	VAR50 -= VAR23;
	++VAR51;
      }

      
      VAR84 = (VAR48 > 0) ? VAR51 : VAR52;
      if (VAR84 > 0) {
	VAR63 = VAR62;
	for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	  (*VAR2)(VAR3, VAR63, NULL);
	  VAR63 += VAR6 * VAR83;
	}
      }
      VAR52 = VAR51;

      
      VAR58 = FUN5(VAR15 * VAR25 * VAR78);

      
      if (VAR46 != VAR108 &&
	  !VAR12 &&
	  (int)(VAR16 * VAR58) ==
	    (int)(VAR16 * (VAR24 * (VAR22 - 1) + VAR58))) {
	if (VAR24 > 0) {
	  VAR59 = VAR18 + VAR58;
	  VAR60 = VAR59 + (VAR22 - 1);
	} else {
	  VAR60 = VAR18 + VAR58;
	  VAR59 = VAR60 - (VAR22 - 1);
	}
	VAR61 = VAR20 + VAR25 * VAR78 + (int)(VAR16 * VAR58);
	VAR47 = VAR100->VAR101->FUN10(VAR59, VAR60, VAR61);
	if (VAR47 == VAR103) {
	  continue;
	}
      } else {
	VAR47 = VAR46;
      }

      
      VAR55 = 0;
      VAR57 = 0;

      
      VAR79 = VAR58;

      
      VAR82 = (VAR8)VAR25 * VAR78 + VAR16 * VAR79;
      
      
      
      if (VAR17 < 0) {
	VAR82 += 0.999;
      }

      
      VAR84 = VAR51 > 0 ? VAR51 : 1;

      switch (VAR4) {

      case VAR92:
      case VAR93:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR63 = VAR62 + VAR57;
	  VAR69 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	    }
	    VAR63 += VAR6 - VAR85;
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);

	  VAR64[0] = (int)((VAR8)VAR69 * VAR74);

	  
	  if (VAR107 && VAR46 != VAR108) {
	    VAR10.VAR109 = (VAR8)1;
	    FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	  } else {
	    FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
		      VAR47 == VAR108);
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;

      case VAR94:
      case VAR96:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR63 = VAR62 + VAR57 * 3;
	  VAR69 = VAR70 = VAR71 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR70 += *VAR63++;
	      VAR71 += *VAR63++;
	    }
	    VAR63 += 3 * (VAR6 - VAR85);
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);

	  VAR64[0] = (int)((VAR8)VAR69 * VAR74);
	  VAR64[1] = (int)((VAR8)VAR70 * VAR74);
	  VAR64[2] = (int)((VAR8)VAR71 * VAR74);

	  
	  if (VAR107 && VAR46 != VAR108) {
	    VAR10.VAR109 = (VAR8)1;
	    FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	  } else {
	    FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
		      VAR47 == VAR108);
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;

      case VAR95:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR63 = VAR62 + VAR57 * 4;
	  VAR69 = VAR70 = VAR71 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR70 += *VAR63++;
	      VAR71 += *VAR63++;
	      *VAR63++;
	    }
	    VAR63 += 4 * (VAR6 - VAR85);
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);

	  VAR64[0] = (int)((VAR8)VAR69 * VAR74);
	  VAR64[1] = (int)((VAR8)VAR70 * VAR74);
	  VAR64[2] = (int)((VAR8)VAR71 * VAR74);
	  VAR64[3] = 255;

	  
	  if (VAR107 && VAR46 != VAR108) {
	    VAR10.VAR109 = (VAR8)1;
	    FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	  } else {
	    FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
		      VAR47 == VAR108);
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;

#if VAR68
      case VAR97:
	for (VAR77 = 0; VAR77 < VAR22; ++VAR77) {

	  
	  VAR56 = VAR53;
	  VAR55 += VAR54;
	  if (VAR55 >= VAR22) {
	    VAR55 -= VAR22;
	    ++VAR56;
	  }

	  
	  if (VAR12) {
	    VAR80 = (int)VAR82;
	    VAR81 = -VAR79;
	  } else {
	    VAR80 = VAR79;
	    VAR81 = (int)VAR82;
	  }

	  
	  
	  VAR85 = VAR56 > 0 ? VAR56 : 1;
	  VAR63 = VAR62 + VAR57 * 4;
	  VAR69 = VAR70 = VAR71 = VAR72 = 0;
	  for (VAR86 = 0; VAR86 < VAR84; ++VAR86) {
	    for (VAR87 = 0; VAR87 < VAR85; ++VAR87) {
	      VAR69 += *VAR63++;
	      VAR70 += *VAR63++;
	      VAR71 += *VAR63++;
	      VAR72 += *VAR63++;
	    }
	    VAR63 += 4 * (VAR6 - VAR85);
	  }
	  VAR74 = (VAR8)1 / (VAR8)(VAR84 * VAR85);

	  VAR64[0] = (int)((VAR8)VAR69 * VAR74);
	  VAR64[1] = (int)((VAR8)VAR70 * VAR74);
	  VAR64[2] = (int)((VAR8)VAR71 * VAR74);
	  VAR64[3] = (int)((VAR8)VAR72 * VAR74);

	  
	  if (VAR107 && VAR46 != VAR108) {
	    VAR10.VAR109 = (VAR8)1;
	    FUN11(&VAR10, VAR18 + VAR80, VAR20 + VAR81);
	  } else {
	    FUN12(&VAR10, VAR18 + VAR80, VAR20 + VAR81,
		      VAR47 == VAR108);
	  }

	  
	  VAR57 += VAR56;

	  
	  VAR79 += VAR24;

	  
	  VAR82 += VAR17;
	}
	break;
#endif 
      }
    }

  }

  FUN13(VAR62);
  FUN13(VAR66);

  return VAR104;
}