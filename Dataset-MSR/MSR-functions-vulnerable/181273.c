FUN1 (void *VAR1, VAR2 *VAR3)
{

int VAR4;




FUN2 (static YYSTYPE VAR5;)
YYSTYPE yylval FUN2 (= VAR5);

    
    int VAR6;

    int VAR7;
    
    int VAR8;

    

    
    yytype_int16 VAR9[VAR10];
    VAR11 *VAR12;
    VAR11 *VAR13;

    
    YYSTYPE VAR14[VAR10];
    VAR15 *VAR16;
    VAR15 *VAR17;

    YYSIZE_T VAR18;

  int VAR19;
  int VAR20;
  
  int VAR21 = 0;
  
  YYSTYPE VAR22;

#if VAR23
  
  char VAR24[128];
  char *VAR25 = VAR24;
  YYSIZE_T VAR26 = sizeof VAR24;
#endif

#VAR27 FUN3(VAR28)   (VAR17 -= (VAR28), VAR13 -= (VAR28))

  
  int VAR29 = 0;

  VAR13 = VAR12 = VAR9;
  VAR17 = VAR16 = VAR14;
  VAR18 = VAR10;

  FUN4 ((VAR30, ""));

  VAR7 = 0;
  VAR8 = 0;
  VAR6 = 0;
  VAR4 = VAR31; 
  goto VAR32;


 VAR33:
  
  VAR13++;

 VAR32:
  *VAR13 = VAR7;

  if (VAR12 + VAR18 - 1 <= VAR13)
    {
      
      YYSIZE_T VAR34 = VAR13 - VAR12 + 1;

#ifdef VAR35
      {
        
        VAR15 *VAR36 = VAR16;
        VAR11 *VAR37 = VAR12;

        
        FUN5 (FUN6(""),
                    &VAR37, VAR34 * sizeof (*VAR13),
                    &VAR36, VAR34 * sizeof (*VAR17),
                    &VAR18);

        VAR12 = VAR37;
        VAR16 = VAR36;
      }
#else 
# ifndef VAR38
      goto VAR39;
# else
      
      if (VAR40 <= VAR18)
        goto VAR39;
      VAR18 *= 2;
      if (VAR40 < VAR18)
        VAR18 = VAR40;

      {
        VAR11 *VAR37 = VAR12;
        union VAR41 *VAR42 =
          (union VAR41 *) FUN7 (FUN8 (VAR18));
        if (! VAR42)
          goto VAR39;
        FUN9 (VAR43, VAR12);
        FUN9 (VAR44, VAR16);
#  undef VAR38
        if (VAR37 != VAR9)
          FUN10 (VAR37);
      }
# endif
#endif 

      VAR13 = VAR12 + VAR34 - 1;
      VAR17 = VAR16 + VAR34 - 1;

      FUN4 ((VAR30, "",
                  (unsigned long int) VAR18));

      if (VAR12 + VAR18 - 1 <= VAR13)
        VAR45;
    }

  FUN4 ((VAR30, "", VAR7));

  if (VAR7 == VAR46)
    VAR47;

  goto VAR48;


VAR48:

  

  
  VAR19 = VAR49[VAR7];
  if (FUN11 (VAR19))
    goto VAR50;

  

  
  if (VAR4 == VAR31)
    {
      FUN4 ((VAR30, ""));
      VAR4 = FUN12 (&VAR51, VAR1, VAR3);
    }

  if (VAR4 <= VAR52)
    {
      VAR4 = VAR21 = VAR52;
      FUN4 ((VAR30, ""));
    }
  else
    {
      VAR21 = FUN13 (VAR4);
      FUN14 ("", VAR21, &VAR51, &VAR53);
    }

  
  VAR19 += VAR21;
  if (VAR19 < 0 || VAR54 < VAR19 || VAR55[VAR19] != VAR21)
    goto VAR50;
  VAR19 = VAR56[VAR19];
  if (VAR19 <= 0)
    {
      if (FUN15 (VAR19))
        goto VAR57;
      VAR19 = -VAR19;
      goto VAR58;
    }

  
  if (VAR8)
    VAR8--;

  
  FUN14 ("", VAR21, &VAR51, &VAR53);

  
  VAR4 = VAR31;

  VAR7 = VAR19;
  VAR59
  *++VAR17 = VAR51;
  VAR60

  goto VAR33;



VAR50:
  VAR19 = VAR61[VAR7];
  if (VAR19 == 0)
    goto VAR57;
  goto VAR58;



VAR58:
  
  VAR29 = VAR62[VAR19];

  
  VAR22 = VAR17[1-VAR29];


  FUN16 (VAR19);
   switch (VAR19)
     {
         case 2:

#line 106 "" 


     {
         VAR63* VAR64 = FUN17(VAR1);
         VAR64->VAR65 = (VAR17[-1].VAR66);
       }

#line 1330 "" 


     break;
 
   case 3:

#line 115 "" 


     {
         (VAR22.VAR66) = (VAR17[0].VAR66);
       }

#line 1338 "" 


     break;
 
   case 4:

#line 119 "" 


     {




         (VAR22.VAR66) = FUN18(VAR67, (VAR17[-1].VAR66), (VAR17[0].VAR66));
 
         FUN19((VAR22.VAR66) == NULL, (VAR17[-1].VAR66));
         FUN19((VAR22.VAR66) == NULL, (VAR17[0].VAR66));
 
         FUN20((VAR22.VAR66) == NULL, VAR68);
       }

#line 1351 "" 


     break;
 
   case 5:

#line 128 "" 


     {
         VAR69* VAR70;
         VAR69* VAR71 = NULL;
         VAR69* VAR72 = (VAR17[-1].VAR66);
 




         (VAR22.VAR66) = NULL;
 
         

        while (VAR72->VAR73 == VAR67)
        {
          VAR71 = VAR72;
          VAR72 = VAR72->VAR74;
        }

        VAR70 = FUN18(
            VAR67, (VAR17[-2].VAR66), VAR72);

        if (VAR70 != NULL)
        {
          if (VAR71 != NULL)
          {
            VAR71->VAR74 = VAR70;
            (VAR22.VAR66) = FUN18(VAR67, (VAR17[-1].VAR66), (VAR17[0].VAR66));
          }
          else
          {
            (VAR22.VAR66) = FUN18(VAR67, VAR70, (VAR17[0].VAR66));
          }
        }

        FUN19((VAR22.VAR66) == NULL, (VAR17[-2].VAR66));
        FUN19((VAR22.VAR66) == NULL, (VAR17[-1].VAR66));
        FUN19((VAR22.VAR66) == NULL, (VAR17[0].VAR66));
 
         FUN20((VAR22.VAR66) == NULL, VAR68);
       }

#line 1413 "" 


     break;
 
   case 6:

#line 190 "" 


     {
         (VAR22.VAR66) = (VAR17[0].VAR66);
       }

#line 1421 "" 


     break;
 
   case 7:

#line 194 "" 


     {




         (VAR22.VAR66) = FUN18(VAR67, (VAR17[-1].VAR66), (VAR17[0].VAR66));
 
         FUN19((VAR22.VAR66) == NULL, (VAR17[-1].VAR66));
         FUN19((VAR22.VAR66) == NULL, (VAR17[0].VAR66));
 
         FUN20((VAR22.VAR66) == NULL, VAR68);
       }

#line 1434 "" 


     break;
 
   case 8:

#line 207 "" 


     {
         (VAR22.VAR66) = (VAR17[0].VAR66);
       }

#line 1442 "" 


     break;
 
   case 9:

#line 211 "" 


     {
         (VAR22.VAR66) = (VAR17[0].VAR66);
         (VAR22.VAR66)->VAR75 = VAR76;
       }

#line 1451 "" 


     break;
 
   case 10:

#line 220 "" 


     {
         VAR3->VAR77++;
 
        if (VAR3->VAR77 > VAR78)
        {
          FUN21((VAR17[0].VAR66));
          FUN22(VAR1, VAR3, "");
          VAR45;
        }
 
         (VAR22.VAR66) = (VAR17[0].VAR66);
       }

#line 1468 "" 


     break;
 
   case 11:

#line 233 "" 


     {
         VAR3->VAR79++;
       }

#line 1476 "" 


     break;
 
   case 12:

#line 237 "" 


     {
         (VAR22.VAR66) = (VAR17[-1].VAR66);
         VAR3->VAR79--;
       }

#line 1485 "" 


     break;
 
   case 13:

#line 246 "" 


     {
         if ((VAR17[-1].VAR80) <= 0)
         {
          FUN22(VAR1, VAR3, "");
          VAR45;
        }

        if (VAR3->VAR79 && (VAR17[-1].VAR80) > VAR81)
        {
          FUN22(VAR1, VAR3, ""
              FUN23(VAR81)
              "");
          VAR45;
        }

        (VAR22.VAR66) = FUN18(VAR82, NULL, NULL);

        FUN20((VAR22.VAR66) == NULL, VAR68);

         (VAR22.VAR66)->VAR83 = (int) (VAR17[-1].VAR80);
         (VAR22.VAR66)->VAR84 = (int) (VAR17[-1].VAR80);
       }

#line 1512 "" 


     break;
 
   case 14:

#line 269 "" 


     {
         if (VAR3->VAR79 &&
             ((VAR17[-3].VAR80) > VAR81 ||
             (VAR17[-1].VAR80) > VAR81) )
        {
          FUN22(VAR1, VAR3, ""
              FUN23(VAR81)
              "");

          VAR45;
        }

        if ((VAR17[-3].VAR80) < 0 || (VAR17[-1].VAR80) < 0)
        {
          FUN22(VAR1, VAR3, "");
          VAR45;
        }

        if ((VAR17[-3].VAR80) > (VAR17[-1].VAR80))
        {
          FUN22(VAR1, VAR3, "");
          VAR45;
        }

        (VAR22.VAR66) = FUN18(VAR82, NULL, NULL);

        FUN20((VAR22.VAR66) == NULL, VAR68);

         (VAR22.VAR66)->VAR83 = (int) (VAR17[-3].VAR80);
         (VAR22.VAR66)->VAR84 = (int) (VAR17[-1].VAR80);
       }

#line 1548 "" 


     break;
 
   case 15:

#line 301 "" 


     {
         if (VAR3->VAR79)
         {
          FUN22(VAR1, VAR3,
              "");
          VAR45;
        }

        if ((VAR17[-2].VAR80) < 0)
        {
          FUN22(VAR1, VAR3, "");
          VAR45;
        }

        (VAR22.VAR66) = FUN18(VAR82, NULL, NULL);

        FUN20((VAR22.VAR66) == NULL, VAR68);

         (VAR22.VAR66)->VAR83 = (int) (VAR17[-2].VAR80);
         (VAR22.VAR66)->VAR84 = VAR85;
       }

#line 1574 "" 


     break;
 
   case 16:

#line 323 "" 


     {
         if (VAR3->VAR79)
         {
          FUN22(VAR1, VAR3,
              "");
          VAR45;
        }

        (VAR22.VAR66) = FUN18(VAR82, NULL, NULL);

        FUN20((VAR22.VAR66) == NULL, VAR68);

         (VAR22.VAR66)->VAR83 = 0;
         (VAR22.VAR66)->VAR84 = VAR85;
       }

#line 1594 "" 


     break;
 
   case 17:

#line 343 "" 


     {
           (VAR22.VAR66) = (VAR17[0].VAR66);
       }

#line 1602 "" 


     break;
 
   case 18:

#line 347 "" 


     {
         FUN24();


 
         (VAR22.VAR66) = FUN18(VAR86, (VAR17[-2].VAR66), (VAR17[0].VAR66));
 
        FUN19((VAR22.VAR66) == NULL, (VAR17[-2].VAR66));
        FUN19((VAR22.VAR66) == NULL, (VAR17[0].VAR66));
 
         FUN20((VAR22.VAR66) == NULL, VAR68);
       }

#line 1617 "" 


     break;
 
   case 19:

#line 361 "" 


     {
         (VAR22.VAR66) = FUN18(VAR87, NULL, NULL);
 
         FUN20((VAR22.VAR66) == NULL, VAR68);
 
         (VAR22.VAR66)->VAR88 = (int) (VAR17[0].VAR80);
       }

#line 1629 "" 


     break;
 
   case 20:

#line 369 "" 


     {
         uint8_t VAR89 = (VAR90) ((VAR17[0].VAR80) >> 8);
 
        if (VAR89 == 0x00)
        {
          (VAR22.VAR66) = FUN18(VAR91, NULL, NULL);

          FUN20((VAR22.VAR66) == NULL, VAR68);
        }
        else
        {
          (VAR22.VAR66) = FUN18(VAR92, NULL, NULL);

          FUN20((VAR22.VAR66) == NULL, VAR68);

          (VAR22.VAR66)->VAR88 = (VAR17[0].VAR80) & 0xFF;
           (VAR22.VAR66)->VAR89 = VAR89;
         }
       }

#line 1653 "" 


     break;
 
 

#line 1657 "" 


       default: break;
     }
   
  FUN14 ("", VAR93[VAR19], &VAR22, &VAR94);

  FUN3 (VAR29);
  VAR29 = 0;
  FUN25 (VAR12, VAR13);

  *++VAR17 = VAR22;

  

  VAR19 = VAR93[VAR19];

  VAR7 = VAR95[VAR19 - VAR96] + *VAR13;
  if (0 <= VAR7 && VAR7 <= VAR54 && VAR55[VAR7] == *VAR13)
    VAR7 = VAR56[VAR7];
  else
    VAR7 = VAR97[VAR19 - VAR96];

  goto VAR33;



VAR57:
  
  VAR21 = VAR4 == VAR31 ? VAR31 : FUN13 (VAR4);

  
  if (!VAR8)
    {
      ++VAR6;
#if ! VAR23
      FUN22 (VAR1, VAR3, FUN6(""));
#else
# define YYSYNTAX_ERROR FUN26 (&VAR26, &VAR25, \
                                        VAR13, VAR21)
      {
        char const *VAR98 = FUN6("");
        int VAR99;
        VAR99 = VAR100;
        if (VAR99 == 0)
          VAR98 = VAR25;
        else if (VAR99 == 1)
          {
            if (VAR25 != VAR24)
              FUN10 (VAR25);
            VAR25 = (char *) FUN7 (VAR26);
            if (!VAR25)
              {
                VAR25 = VAR24;
                VAR26 = sizeof VAR24;
                VAR99 = 2;
              }
            else
              {
                VAR99 = VAR100;
                VAR98 = VAR25;
              }
          }
        FUN22 (VAR1, VAR3, VAR98);
        if (VAR99 == 2)
          goto VAR39;
      }
# undef VAR100
#endif
    }



  if (VAR8 == 3)
    {
      

      if (VAR4 <= VAR52)
        {
          
          if (VAR4 == VAR52)
            VAR45;
        }
      else
        {
          FUN27 ("",
                      VAR21, &VAR51, VAR1, VAR3);
          VAR4 = VAR31;
        }
    }

  
  goto VAR101;



VAR102:

  
  if ( 0)
     goto VAR102;

  
  FUN3 (VAR29);
  VAR29 = 0;
  FUN25 (VAR12, VAR13);
  VAR7 = *VAR13;
  goto VAR101;



VAR101:
  VAR8 = 3;      

  for (;;)
    {
      VAR19 = VAR49[VAR7];
      if (!FUN11 (VAR19))
        {
          VAR19 += VAR103;
          if (0 <= VAR19 && VAR19 <= VAR54 && VAR55[VAR19] == VAR103)
            {
              VAR19 = VAR56[VAR19];
              if (0 < VAR19)
                break;
            }
        }

      
      if (VAR13 == VAR12)
        VAR45;


      FUN27 ("",
                  VAR104[VAR7], VAR17, VAR1, VAR3);
      FUN3 (1);
      VAR7 = *VAR13;
      FUN25 (VAR12, VAR13);
    }

  VAR59
  *++VAR17 = VAR51;
  VAR60


  
  FUN14 ("", VAR104[VAR19], VAR17, VAR105);

  VAR7 = VAR19;
  goto VAR33;



VAR106:
  VAR20 = 0;
  goto VAR107;


VAR108:
  VAR20 = 1;
  goto VAR107;

#if !defined VAR35 || VAR23

VAR39:
  FUN22 (VAR1, VAR3, FUN6(""));
  VAR20 = 2;
  
#endif

VAR107:
  if (VAR4 != VAR31)
    {
      
      VAR21 = FUN13 (VAR4);
      FUN27 ("",
                  VAR21, &VAR51, VAR1, VAR3);
    }
  
  FUN3 (VAR29);
  FUN25 (VAR12, VAR13);
  while (VAR13 != VAR12)
    {
      FUN27 ("",
                  VAR104[*VAR13], VAR17, VAR1, VAR3);
      FUN3 (1);
    }
#ifndef VAR35
  if (VAR12 != VAR9)
    FUN10 (VAR12);
#endif
#if VAR23
  if (VAR25 != VAR24)
    FUN10 (VAR25);
 #endif
   return VAR20;
 }