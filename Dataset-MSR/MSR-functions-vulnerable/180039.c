static int FUN1 (VAR1 *VAR2, VAR3 *VAR4, uint32 VAR5, 
                                          uint32 VAR6, uint16 VAR7,
                                          struct VAR8 *VAR9)
   {

  int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15 = 1;




   int32  VAR16 = 0;

  uint16 VAR17, VAR18, VAR19, VAR20;






   uint32 VAR21, VAR22, VAR23, VAR24;
   uint32 VAR25 = 0;
   tsample_t VAR26;
  tstrip_t  VAR27;
  tsize_t VAR28 = FUN2(VAR2);
  tsize_t VAR29    = FUN3(VAR2);
  unsigned char *VAR30[VAR31];
  unsigned char *VAR32 = NULL;
  unsigned char *VAR33 = NULL;

  if (VAR4 == NULL)
    {
    FUN4("","");
    return (0);
    }

  memset (VAR30, '', sizeof(VAR30));
  FUN5(VAR2, VAR34, &VAR17);
  FUN6(VAR2, VAR35, &VAR19);
  FUN6(VAR2, VAR36, &VAR24);
  if (VAR24 > VAR5)
    VAR24 = VAR5;

  VAR12 = (VAR17 + 7) / 8; 
  VAR13  = ((VAR17 * VAR7) + 7) / 8;
  if (VAR13 < (VAR12 + 1))
    VAR14 = VAR13;
  else
    VAR14 = VAR12 + 1;

  VAR21 = ((VAR17 * VAR6) + 7) / 8;
  VAR22 = ((VAR17 * VAR6 * VAR7) + 7) / 8;
  VAR33 = VAR4;

  if ((VAR9->VAR37 != NULL) && (VAR9->VAR38 == 3))
    {
    FUN7  (VAR9->VAR37, VAR9->VAR39, "", 
                "",
                VAR6, VAR5,  VAR28);
    FUN7  (VAR9->VAR37, VAR9->VAR39, "", 
                "",
		VAR17, VAR7, VAR14);
    }

  
  VAR18 = FUN8(VAR2);
  VAR20 = VAR18 /VAR7;

  for (VAR26 = 0; (VAR26 < VAR7) && (VAR26 < VAR31); VAR26++)
    {
    VAR30[VAR26] = NULL;
    VAR32 = FUN9(VAR29);
    if (!VAR32)
      {
      FUN4 ("", 
                 "", VAR26);
      for (VAR10 = 0; VAR10 < VAR26; VAR10++)
        FUN10 (VAR30[VAR10]);
      return 0;
      }
    VAR30[VAR26] = VAR32;
    }

  VAR23 = 0;
  for (VAR11 = 0; (VAR11 < VAR20) && (VAR15 == 1); VAR11++)
    {
    for (VAR26 = 0; (VAR26 < VAR7) && (VAR26 < VAR31); VAR26++)
      {
      VAR32 = VAR30[VAR26];
      VAR27 = (VAR26 * VAR20) + VAR11; 
      VAR16 = FUN11 (VAR2, VAR27, VAR32, VAR29);
      VAR25 = VAR16 / VAR21;
      if (VAR16 < 0 && !VAR40)
        {
        FUN4(FUN12(VAR2),
	          "",
         	   (unsigned long) VAR27, VAR26 + 1);
        VAR15 = 0;
        break;
        }
#ifdef VAR41
      FUN4("", "", 
		VAR27, VAR16, VAR25, VAR14);
#endif
      }

    if (VAR24 > VAR25)
      VAR24 = VAR25;
    VAR33 = VAR4 + (VAR22 * VAR23);
    if ((VAR17 % 8) == 0)
      {
      if (FUN13 (VAR30, VAR33, VAR6, VAR24,
                                       VAR7, VAR17, VAR9->VAR37, 
                                       VAR9->VAR39, VAR9->VAR38))
        {
        VAR15 = 0;
        break;
	}
      }
    else
      {
      switch (VAR14)
        {
        case 1: if (FUN14 (VAR30, VAR33, VAR6, VAR24,
                                                 VAR7, VAR17, VAR9->VAR37,
                                                 VAR9->VAR39, VAR9->VAR38))
	          {
                  VAR15 = 0;
                  break;
      	          }
	        break;
        case 2: if (FUN15 (VAR30, VAR33, VAR6, VAR24,
                                                  VAR7, VAR17, VAR9->VAR37,
                                                  VAR9->VAR39, VAR9->VAR38))
	          {
                  VAR15 = 0;
                  break;
		  }
	        break;
        case 3: if (FUN16 (VAR30, VAR33, VAR6, VAR24,
                                                  VAR7, VAR17, VAR9->VAR37,
                                                  VAR9->VAR39, VAR9->VAR38))
	          {
                  VAR15 = 0;
                  break;
       	          }
                break;
        case 4: 
        case 5:
        case 6:
        case 7:
        case 8: if (FUN17 (VAR30, VAR33, VAR6, VAR24,
                                                  VAR7, VAR17, VAR9->VAR37,
                                                  VAR9->VAR39, VAR9->VAR38))
	          {
                  VAR15 = 0;
                  break;
		  }
	        break;
        default: FUN4 ("", "", VAR17);
                  VAR15 = 0;
                  break;
        }
      }
 
    if ((VAR23 + VAR24) > VAR5)
      {
      VAR23 = VAR5;
      VAR24 = VAR5 - VAR23;
      }
    else
      VAR23 += VAR24;
    }

  
  for (VAR26 = 0; (VAR26 < VAR7) && (VAR26 < VAR31); VAR26++)
    {
    VAR32 = VAR30[VAR26];
    if (VAR32 != NULL)
      FUN10(VAR32);
    }

  return (VAR15);
  }