FUN1(VAR1  *VAR2,		
	VAR3 *VAR4,	
	VAR5     *VAR6)	
{
  http_status_t	VAR7;			
  VAR8 *VAR9,		
		*VAR10;		
  const char	*VAR11;		
  const char	*VAR12;			
  int		VAR13;		
  VAR14	*VAR15;			
  char		VAR16[VAR17];	
  int		VAR18;			
  int		VAR19;			
  int		VAR20;		
  int		VAR21;			
  VAR8 *VAR22,		
		*VAR23;		
  VAR24		*VAR25;		
  static const char * const VAR26[] =
  {
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    ""
  };


  FUN2(VAR27, "",
                  VAR2, VAR2->VAR28, VAR4, VAR4->VAR29,
		  VAR6, VAR6 ? VAR6->VAR30 : "",
		  VAR6 ? VAR6->VAR31 : "");

 

  if (!VAR4->VAR32 &&
      FUN3(VAR2->VAR33->VAR34, "") &&
      FUN3(VAR2->VAR33->VAR34, VAR35))
  {
    FUN4(VAR2, VAR36,
                    FUN5(""));
    return (NULL);
  }

 

  VAR10 = FUN6(VAR2->VAR37, "", VAR38);

  if ((VAR7 = FUN7(VAR4->VAR39, VAR2, NULL)) != VAR40)
  {
    FUN8(VAR2, VAR7, VAR4);
    return (NULL);
  }
  else if (VAR4->VAR41 == 1 &&
           !strcmp(VAR4->VAR42[0], "") &&
           !VAR2->VAR43[0])
  {
    FUN8(VAR2, VAR44, VAR4);
    return (NULL);
  }
#ifdef VAR45
  else if (VAR10 && !VAR2->VAR33->VAR46 &&
           !FUN9(VAR2->VAR33->VAR47))
  {
   

    FUN8(VAR2, VAR48, VAR4);
    return (NULL);
  }
#endif 

 

  if (!VAR4->VAR49)
  {
    FUN4(VAR2, VAR50,
                    FUN5(""%VAR51\""),
                    VAR4->VAR29);
    return (NULL);
  }

 

  for (VAR19 = 0; VAR19 < (int)(sizeof(VAR26) / sizeof(VAR26[0])); VAR19 ++)
  {
    if ((VAR9 = FUN6(VAR2->VAR37, VAR26[VAR19], VAR52)) != NULL)
    {
      FUN10(VAR2->VAR37, VAR9);

      if (VAR53)
      {
	FUN4(VAR2, VAR54, FUN5(""), VAR26[VAR19]);
	return (NULL);
      }

      FUN2(VAR55, "", VAR26[VAR19]);
    }
  }

  if (VAR4->VAR56)
  {
    for (VAR11 = (char *)FUN11(VAR4->VAR56->VAR11);
	 VAR11;
	 VAR11 = (char *)FUN12(VAR4->VAR56->VAR11))
    {
      if (!FUN6(VAR2->VAR37, VAR11, VAR52))
      {
       

	FUN4(VAR2, VAR57,
			FUN5(""%VAR51\""),
			VAR11);
	return (NULL);
      }
    }
  }

  if (VAR6 && VAR4->VAR58 &&
      !FUN13(VAR4->VAR58, VAR6))
  {
    char	VAR59[VAR60 + VAR61 + 2];
					


    snprintf(VAR59, sizeof(VAR59), "", VAR6->VAR30,
             VAR6->VAR31);

    FUN4(VAR2, VAR62,
                    FUN5(""%VAR51\""), VAR59);

    FUN14(VAR2->VAR63, VAR64, VAR65,
                 "", NULL, VAR59);

    return (NULL);
  }

  if ((VAR9 = FUN6(VAR2->VAR37, "",
                               VAR66)) != NULL)
  {
    if (VAR9->VAR67[0].VAR68 < 1 || VAR9->VAR67[0].VAR68 > VAR69)
    {
      FUN4(VAR2, VAR70, FUN5(""),
                      VAR9->VAR67[0].VAR68);
      FUN15(VAR2->VAR63, VAR64, VAR66,
	            "", VAR9->VAR67[0].VAR68);
      return (NULL);
    }
  }

  if ((VAR9 = FUN6(VAR2->VAR37, "",
                               VAR52)) != NULL)
  {
    if (VAR9->VAR71 != VAR72 &&
        VAR9->VAR71 != VAR73)
    {
      FUN4(VAR2, VAR54, FUN5(""));
      return (NULL);
    }

    if (VAR9->VAR74 > 2)
    {
      FUN4(VAR2, VAR54,
                      FUN5(""),
		      VAR9->VAR74);
      return (NULL);
    }

    for (VAR19 = 0; VAR19 < VAR9->VAR74; VAR19 ++)
      if (strcmp(VAR9->VAR67[VAR19].VAR75.VAR76, "") &&
          !FUN16(VAR9->VAR67[VAR19].VAR75.VAR76))
      {
	FUN4(VAR2, VAR54, FUN5(""%VAR51\""),
			VAR9->VAR67[VAR19].VAR75.VAR76);
	return (NULL);
      }
  }

  if ((VAR9 = FUN6(VAR2->VAR37, "",
                               VAR66)) != NULL)
  {
    if (VAR9->VAR67[0].VAR68 != 1 &&
        VAR9->VAR67[0].VAR68 != 2 &&
        VAR9->VAR67[0].VAR68 != 4 &&
        VAR9->VAR67[0].VAR68 != 6 &&
        VAR9->VAR67[0].VAR68 != 9 &&
        VAR9->VAR67[0].VAR68 != 16)
    {
      FUN4(VAR2, VAR70, FUN5(""),
                      VAR9->VAR67[0].VAR68);
      FUN15(VAR2->VAR63, VAR64, VAR66,
	            "", VAR9->VAR67[0].VAR68);
      return (NULL);
    }
  }

  if ((VAR9 = FUN6(VAR2->VAR37, "",
                               VAR77)) != NULL)
  {
    for (VAR19 = 0, VAR20 = 1; VAR19 < VAR9->VAR74; VAR19 ++)
    {
      if (VAR9->VAR67[VAR19].VAR78.VAR79 < VAR20 ||
	  VAR9->VAR67[VAR19].VAR78.VAR79 > VAR9->VAR67[VAR19].VAR78.VAR80)
      {
	FUN4(VAR2, VAR54,
	                FUN5(""),
	                VAR9->VAR67[VAR19].VAR78.VAR79,
			VAR9->VAR67[VAR19].VAR78.VAR80);
	return (NULL);
      }

      VAR20 = VAR9->VAR67[VAR19].VAR78.VAR80 + 1;
    }
  }

 

  if (!FUN6(VAR2->VAR37, "", VAR52) &&
      !FUN6(VAR2->VAR37, "", VAR52) &&
      FUN17(VAR4->VAR56, VAR2->VAR37, NULL, &VAR21))
  {
    if (!VAR21 &&
        (VAR22 = FUN6(VAR2->VAR37, "",
	                              VAR81)) != NULL)
    {
      FUN4(VAR2, VAR82, FUN5(""));

      VAR25 = FUN18();
      if ((VAR23 = FUN6(VAR22->VAR67[0].VAR83,
                                           "",
					   VAR66)) != NULL)
        FUN15(VAR25, VAR52, VAR66,
	              "", VAR23->VAR67[0].VAR68);

      if ((VAR23 = FUN6(VAR22->VAR67[0].VAR83,
                                           "",
					   VAR66)) != NULL)
        FUN15(VAR25, VAR52, VAR66,
	              "", VAR23->VAR67[0].VAR68);

      if ((VAR23 = FUN6(VAR22->VAR67[0].VAR83,
                                           "",
					   VAR66)) != NULL)
        FUN15(VAR25, VAR52, VAR66,
	              "", VAR23->VAR67[0].VAR68);

      if ((VAR23 = FUN6(VAR22->VAR67[0].VAR83,
                                           "",
					   VAR66)) != NULL)
        FUN15(VAR25, VAR52, VAR66,
	              "", VAR23->VAR67[0].VAR68);

      FUN19(VAR2->VAR63, VAR64, "",
                       VAR25);
      FUN20(VAR25);
    }
  }

 

  if (VAR84 && FUN21(VAR85) >= VAR84)
    FUN22();

  if (VAR84 && FUN21(VAR85) >= VAR84)
  {
    FUN4(VAR2, VAR86, FUN5(""));
    return (NULL);
  }

  if ((VAR19 = FUN23(VAR2, VAR4)) < 0)
  {
    FUN4(VAR2, VAR86, FUN5(""));
    return (NULL);
  }
  else if (VAR19 == 0)
  {
    FUN4(VAR2, VAR36, FUN5(""));
    return (NULL);
  }

 

  if ((VAR9 = FUN6(VAR2->VAR37, "",
                               VAR66)) != NULL)
    VAR13 = VAR9->VAR67[0].VAR68;
  else
  {
    if ((VAR12 = FUN24("", VAR4->VAR87,
                             VAR4->VAR88)) != NULL)
      VAR13 = FUN25(VAR12);
    else
      VAR13 = 50;

    FUN15(VAR2->VAR37, VAR89, VAR66, "",
                  VAR13);
  }

  if ((VAR9 = FUN6(VAR2->VAR37, "", VAR52)) == NULL)
    FUN14(VAR2->VAR37, VAR89, VAR73, "", NULL, "");
  else if ((VAR9->VAR71 != VAR73 &&
            VAR9->VAR71 != VAR90) ||
           VAR9->VAR74 != 1)
  {
    FUN4(VAR2, VAR70,
                    FUN5(""));
    if ((VAR9 = FUN26(VAR2->VAR63, VAR9, 0)) != NULL)
      VAR9->VAR91 = VAR64;
    return (NULL);
  }
  else if (!FUN27(VAR9))
  {
    FUN4(VAR2, VAR70, FUN5(""),
                    FUN28());
    if ((VAR9 = FUN26(VAR2->VAR63, VAR9, 0)) != NULL)
      VAR9->VAR91 = VAR64;
     return (NULL);
   }
 




















   if ((VAR15 = FUN29(VAR13, VAR4->VAR29)) == NULL)
   {
     FUN4(VAR2, VAR92,
                    FUN5(""%VAR51\""),
		    VAR4->VAR29);
    return (NULL);
  }

  VAR15->VAR93   = VAR4->VAR31 & (VAR94 | VAR95);
  VAR15->VAR96   = VAR2->VAR37;
  VAR15->VAR97   = 1;
  VAR2->VAR37 = FUN30(VAR15->VAR96->VAR37.VAR98.VAR99);

  FUN31(VAR100);

   FUN32(VAR15);
   FUN33(VAR4, VAR15);
 

  VAR9 = FUN6(VAR15->VAR96, "", VAR73);


   if (VAR2->VAR43[0])
   {
     FUN34(&VAR15->VAR43, VAR2->VAR43);

    if (VAR9)
      FUN35(VAR15->VAR96, &VAR9, 0, VAR2->VAR43);
  }
  else if (VAR9)
  {
    FUN2(VAR101,
                    ""%VAR51\"",
                    VAR9->VAR67[0].VAR75.VAR76);

    FUN34(&VAR15->VAR43, VAR9->VAR67[0].VAR75.VAR76);
  }
  else
    FUN34(&VAR15->VAR43, "");

  if (!VAR9)
    FUN14(VAR15->VAR96, VAR89, VAR73,
                 "", NULL, VAR15->VAR43);
  else
  {
    FUN36(VAR15->VAR96, &VAR9, VAR89);
    FUN37(VAR15->VAR96, &VAR9, "");
  }

  if (VAR2->VAR43[0] || VAR10)
  {
    FUN38(VAR2, VAR15, VAR10);

   

    if (VAR10)
      FUN10(VAR15->VAR96, VAR10);
  }

  if ((VAR9 = FUN6(VAR2->VAR37, "", VAR73)) != NULL)
    FUN34(&(VAR15->VAR29), VAR9->VAR67[0].VAR75.VAR76);

  if ((VAR9 = FUN6(VAR15->VAR96, "",
                               VAR52)) != NULL)
  {
   

    if (VAR9->VAR71 != VAR73 ||
        VAR9->VAR74 != 1 ||
        strcmp(VAR2->VAR33->VAR34, ""))
    {
     

      FUN10(VAR15->VAR96, VAR9);
      FUN14(VAR15->VAR96, VAR89, VAR73, "", NULL, VAR2->VAR33->VAR34);
    }
    else
      FUN36(VAR15->VAR96, &VAR9, VAR89);
  }
  else
  {
   

    FUN14(VAR15->VAR96, VAR89, VAR73,
        	 "", NULL, VAR2->VAR33->VAR34);
  }

  FUN39(VAR15->VAR96, VAR89, VAR102, "");
  FUN40(VAR15->VAR96, VAR89, "", FUN41(FUN42(NULL)));
  FUN39(VAR15->VAR96, VAR89, VAR102, "");
  FUN39(VAR15->VAR96, VAR89, VAR102, "");
  FUN15(VAR15->VAR96, VAR89, VAR66, "", FUN42(NULL));
  FUN39(VAR15->VAR96, VAR89, VAR102, "");

 

  FUN15(VAR15->VAR96, VAR89, VAR66, "", VAR15->VAR103);
  VAR15->VAR104 = FUN15(VAR15->VAR96, VAR89, VAR105,
                             "", VAR106);
  VAR15->VAR107 = (VAR108)VAR15->VAR104->VAR67[0].VAR68;
  VAR15->VAR109 = FUN14(VAR15->VAR96, VAR89, VAR72,
                              "", NULL, "");
  VAR15->VAR110 = FUN15(VAR15->VAR96, VAR89, VAR66, "", 0);
  VAR15->VAR111 = FUN15(VAR15->VAR96, VAR89, VAR66,
                              "", 0);
  FUN14(VAR15->VAR96, VAR89, VAR112, "", NULL,
               VAR4->VAR113);

  if ((VAR9 = FUN6(VAR15->VAR96, "", VAR66)) != NULL)
    VAR9->VAR67[0].VAR68 = 0;
  else
    FUN15(VAR15->VAR96, VAR89, VAR66, "", 0);

  if ((VAR9 = FUN6(VAR15->VAR96, "",
                               VAR72)) == NULL)
    VAR9 = FUN6(VAR15->VAR96, "", VAR73);
  if (!VAR9)
  {
    if ((VAR12 = FUN24("", VAR4->VAR87,
                             VAR4->VAR88)) == NULL)
      VAR12 = "";

    VAR9 = FUN14(VAR15->VAR96, VAR89, VAR72,
                        "", NULL, VAR12);
  }

  if (VAR4->VAR114)
  {
   

    if (VAR9 && strcmp(VAR9->VAR67[0].VAR75.VAR76, ""))
      FUN43(VAR15, FUN44(VAR9, 0, NULL), 0);
    else
      FUN43(VAR15, "", 0);

    VAR15->VAR104->VAR67[0].VAR68 = VAR115;
    VAR15->VAR107              = VAR115;

    FUN35(VAR15->VAR96, &VAR15->VAR109, 0, "");
  }
  else if (VAR9 && strcmp(VAR9->VAR67[0].VAR75.VAR76, ""))
  {
   

    FUN43(VAR15, VAR9->VAR67[0].VAR75.VAR76, 0);

    VAR15->VAR104->VAR67[0].VAR68 = VAR115;
    VAR15->VAR107              = VAR115;

    FUN35(VAR15->VAR96, &VAR15->VAR109, 0, "");
  }
  else if (VAR15->VAR96->VAR37.VAR98.VAR99 == VAR116)
  {
    VAR15->VAR117               = FUN42(NULL) + VAR118;
    VAR15->VAR104->VAR67[0].VAR68 = VAR115;
    VAR15->VAR107              = VAR115;
  }
  else
  {
    VAR15->VAR104->VAR67[0].VAR68 = VAR119;
    VAR15->VAR107              = VAR119;

    FUN35(VAR15->VAR96, &VAR15->VAR109, 0, "");
  }

  if (!(VAR4->VAR31 & VAR95) || VAR120)
  {
   

    if ((VAR9 = FUN6(VAR15->VAR96, "",
                                 VAR52)) == NULL)
    {
      FUN2(VAR101,
                      ""%VAR51,%VAR51\"",
                      VAR4->VAR121[0], VAR4->VAR121[1]);

      VAR9 = FUN45(VAR15->VAR96, VAR89, VAR73, "",
                           2, NULL, NULL);
      FUN35(VAR15->VAR96, &VAR9, 0, VAR4->VAR121[0]);
      FUN35(VAR15->VAR96, &VAR9, 1, VAR4->VAR121[1]);
    }

    VAR15->VAR121 = VAR9;

   

    if (VAR120)
    {
      FUN2(VAR55,
                      ""%VAR51\"",
                      VAR120 ? VAR120 : "",
		      VAR122);

      if (VAR122)
      {
        if (!strcmp(VAR9->VAR67[0].VAR75.VAR76, "") &&
	    (VAR9->VAR74 == 1 ||
	     !strcmp(VAR9->VAR67[1].VAR75.VAR76, "")))
        {
	 

          FUN35(VAR15->VAR96, &VAR9, 0, VAR120);

	  FUN46(VAR15, VAR123, ""
	                		     ""%VAR51,VAR124\""
					     ""%VAR51\"",
	              VAR120, VAR15->VAR43);
	}
	else if (VAR9->VAR74 == 2 &&
	         strcmp(VAR9->VAR67[0].VAR75.VAR76,
		        VAR9->VAR67[1].VAR75.VAR76) &&
		 strcmp(VAR9->VAR67[0].VAR75.VAR76, "") &&
		 strcmp(VAR9->VAR67[1].VAR75.VAR76, ""))
        {
	 

          FUN35(VAR15->VAR96, &VAR9, 1, VAR9->VAR67[0].VAR75.VAR76);

	  FUN46(VAR15, VAR123, ""
	                		     ""%VAR51,%VAR51\""
					     ""%VAR51\"",
		      VAR9->VAR67[0].VAR75.VAR76,
		      VAR9->VAR67[1].VAR75.VAR76, VAR15->VAR43);
	}
	else if (strcmp(VAR9->VAR67[0].VAR75.VAR76, VAR120) &&
	         strcmp(VAR9->VAR67[0].VAR75.VAR76, "") &&
		 (VAR9->VAR74 == 1 ||
	          (strcmp(VAR9->VAR67[1].VAR75.VAR76, VAR120) &&
	           strcmp(VAR9->VAR67[1].VAR75.VAR76, ""))))
        {
	  if (VAR9->VAR74 == 1)
            FUN46(VAR15, VAR123,
			""
			""%VAR51\""
			""%VAR51\"",
	                VAR9->VAR67[0].VAR75.VAR76, VAR15->VAR43);
          else
            FUN46(VAR15, VAR123,
			""
			""%VAR51,%VAR51\""
			""%VAR51\"",
			VAR9->VAR67[0].VAR75.VAR76,
			VAR9->VAR67[1].VAR75.VAR76, VAR15->VAR43);
        }
      }
      else if (strcmp(VAR9->VAR67[0].VAR75.VAR76, VAR120) &&
               (VAR9->VAR74 == 1 ||
	       strcmp(VAR9->VAR67[1].VAR75.VAR76, VAR120)))
      {
       

        if (VAR9->VAR74 > 1 &&
	    !strcmp(VAR9->VAR67[0].VAR75.VAR76, VAR9->VAR67[1].VAR75.VAR76))
	{
          FUN35(VAR15->VAR96, &VAR9, 0, VAR120);
          FUN35(VAR15->VAR96, &VAR9, 1, VAR120);
	}
        else
	{
          if (VAR9->VAR74 == 1 ||
	      strcmp(VAR9->VAR67[0].VAR75.VAR76, ""))
            FUN35(VAR15->VAR96, &VAR9, 0, VAR120);

          if (VAR9->VAR74 > 1 &&
	      strcmp(VAR9->VAR67[1].VAR75.VAR76, ""))
	    FUN35(VAR15->VAR96, &VAR9, 1, VAR120);
        }

        if (VAR9->VAR74 > 1)
	  FUN46(VAR15, VAR123,
		      ""
		      ""%VAR51,%VAR51\""
		      ""%VAR51\"",
		      VAR9->VAR67[0].VAR75.VAR76,
		      VAR9->VAR67[1].VAR75.VAR76, VAR15->VAR43);
        else
	  FUN46(VAR15, VAR123,
		      ""
		      ""%VAR51\""
		      ""%VAR51\"",
		      VAR120, VAR15->VAR43);
      }
    }

   

    if (!(VAR4->VAR31 & VAR95))
    {
      FUN46(VAR15, VAR55, ""%VAR51\"",
		  VAR9->VAR67[0].VAR75.VAR76);

      if ((VAR18 = FUN47(VAR2, VAR15, VAR9->VAR67[0].VAR75.VAR76)) < 0)
      {
        FUN48(VAR15, VAR125, VAR126,
	                 ""
			 "");
        return (NULL);
      }

      FUN49(VAR4, VAR15->VAR43, 0, VAR18);
    }
  }
  else if ((VAR9 = FUN6(VAR15->VAR96, "",
                                    VAR52)) != NULL)
    VAR15->VAR121 = VAR9;

 

  FUN50(VAR127, VAR16, sizeof(VAR16), "", NULL,
                   VAR2->VAR128, VAR2->VAR129, "", VAR15->VAR103);
  FUN14(VAR2->VAR63, VAR89, VAR112, "", NULL,
               VAR16);

  FUN15(VAR2->VAR63, VAR89, VAR66, "", VAR15->VAR103);

  FUN15(VAR2->VAR63, VAR89, VAR105, "",
                VAR15->VAR107);
  FUN14(VAR2->VAR63, VAR89, VAR38, "", NULL, "");
  FUN14(VAR2->VAR63, VAR89, VAR72, "",
               NULL, VAR15->VAR109->VAR67[0].VAR75.VAR76);

  VAR2->VAR63->VAR37.VAR7.VAR130 = VAR131;

 

  FUN51(VAR2, VAR15);

 

  for (VAR9 = VAR15->VAR96->VAR96->VAR132->VAR132; VAR9; VAR9 = VAR9->VAR132)
    VAR9->VAR91 = VAR89;

 

  FUN52(VAR133, VAR4, VAR15, "");

 

  return (VAR15);
}