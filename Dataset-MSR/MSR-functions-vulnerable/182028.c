static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  char
    VAR6[VAR7],
    VAR8[VAR7],
    VAR9[VAR7],
    VAR10[VAR7];

  double
    VAR11;

  VAR1
    *VAR12;

  int
    VAR13;

  VAR14
    VAR15,
    VAR16;

  register VAR17
    *VAR18;

  register VAR19
    VAR20,
    VAR21;

  register unsigned char
    *VAR22;

  VAR19
    VAR23,
    VAR24;

  unsigned char
    *VAR25,
    VAR26[4],
    *VAR27;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR28 == VAR29);
  if (VAR3->VAR30 != VAR31)
    (void) FUN2(VAR32,FUN3(),"",
      VAR3->VAR33);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR28 == VAR29);
  VAR12=FUN4(VAR3,VAR5);
  VAR15=FUN5(VAR3,VAR12,VAR34,VAR5);
  if (VAR15 == VAR31)
    {
      VAR12=FUN6(VAR12);
      return((VAR1 *) NULL);
    }
  
  VAR12->VAR35=0;
  VAR12->VAR36=0;
  *VAR6='';
  VAR13=FUN7(VAR12);
  if (VAR13 == VAR37)
    {
      VAR12=FUN8(VAR12);
      return((VAR1 *) NULL);
    }
  while (FUN9(VAR13) && (VAR12->VAR35 == 0) && (VAR12->VAR36 == 0))
  {
    if (VAR13 == (int) '')
      {
        char
          *VAR38;

        register char
          *VAR22;

        VAR39
          VAR40;

        
        VAR40=VAR7;
        VAR38=FUN10((char *) NULL);
        for (VAR22=VAR38; VAR38 != (char *) NULL; VAR22++)
        {
          VAR13=FUN7(VAR12);
          if ((VAR13 == VAR37) || (VAR13 == (int) ''))
            break;
          if ((VAR39) (VAR22-VAR38+1) >= VAR40)
            {
              *VAR22='';
              VAR40<<=1;
              VAR38=(char *) FUN11(VAR38,VAR40+
                VAR7,sizeof(*VAR38));
              if (VAR38 == (char *) NULL)
                break;
              VAR22=VAR38+strlen(VAR38);
            }
          *VAR22=(char) VAR13;
        }
        if (VAR38 == (char *) NULL)
          FUN12(VAR41,"");
        *VAR22='';
        (void) FUN13(VAR12,"",VAR38,VAR5);
        VAR38=FUN14(VAR38);
        VAR13=FUN7(VAR12);
      }
    else
      if (FUN15(VAR13) == VAR31)
        VAR13=FUN7(VAR12);
      else
        {
          register char
            *VAR22;

          
          VAR22=VAR8;
          do
          {
            if ((VAR39) (VAR22-VAR8) < (VAR7-1))
              *VAR22++=VAR13;
            VAR13=FUN7(VAR12);
          } while (FUN15(VAR13) || (VAR13 == ''));
          *VAR22='';
          VAR16=VAR31;
          while ((FUN16((int) ((unsigned char) VAR13)) != 0) || (VAR13 == ''))
          {
            if (VAR13 == '')
              VAR16=VAR42;
            VAR13=FUN7(VAR12);
          }
          if (FUN17(VAR8,"") == 0)
            VAR16=VAR42;
           if (VAR16 == VAR31)
             continue;
           VAR22=VAR10;

          while ((VAR13 != '') && (VAR13 != ''))


           {
             if ((VAR39) (VAR22-VAR10) < (VAR7-1))
               *VAR22++=VAR13;
            VAR13=FUN7(VAR12);
          }
          *VAR22='';
          
          switch (*VAR8)
          {
            case '':
            case '':
            {
              if (FUN17(VAR8,"") == 0)
                {
                  (void) FUN18(VAR6,VAR10,VAR7);
                  break;
                }
              (void) FUN19(VAR9,VAR7,"",VAR8);
              (void) FUN13(VAR12,VAR9,VAR10,VAR5);
              break;
            }
            case '':
            case '':
            {
              if (FUN17(VAR8,"") == 0)
                {
                  VAR12->VAR11=FUN20(VAR10,(char **) NULL);
                  break;
                }
              (void) FUN19(VAR9,VAR7,"",VAR8);
              (void) FUN13(VAR12,VAR9,VAR10,VAR5);
              break;
            }
            case '':
            case '':
            {
              if (FUN17(VAR8,"") == 0)
                {
                  float
                     VAR43[6],
                     VAR44[2];
 

                  (void) sscanf(VAR10,"",

                    &VAR43[0],&VAR43[1],&VAR43[2],

                    &VAR43[3],&VAR43[4],&VAR43[5],

                    &VAR44[0],&VAR44[1]);

                  VAR12->VAR43.VAR45.VAR21=VAR43[0];

                  VAR12->VAR43.VAR45.VAR24=VAR43[1];

                  VAR12->VAR43.VAR46.VAR21=VAR43[2];

                  VAR12->VAR43.VAR46.VAR24=VAR43[3];

                  VAR12->VAR43.VAR47.VAR21=VAR43[4];

                  VAR12->VAR43.VAR47.VAR24=VAR43[5];

                  VAR12->VAR43.VAR44.VAR21=VAR44[0],

                  VAR12->VAR43.VAR44.VAR24=VAR44[1];




























                   break;
                 }
               (void) FUN19(VAR9,VAR7,"",VAR8);
              (void) FUN13(VAR12,VAR9,VAR10,VAR5);
              break;
            }
            case '':
            case '':
            {
              char
                VAR48[] = "";

              if (strcmp(VAR8,VAR48) == 0)
                {
                  int
                     VAR49,
                     VAR50;
 

                  (void) sscanf(VAR10,"",&VAR49,&VAR50);

                  VAR12->VAR35=(VAR39) VAR50;

                  VAR12->VAR36=(VAR39) VAR49;










                   break;
                 }
               (void) FUN19(VAR9,VAR7,"",VAR8);
              (void) FUN13(VAR12,VAR9,VAR10,VAR5);
              break;
            }
            default:
            {
              (void) FUN19(VAR9,VAR7,"",VAR8);
              (void) FUN13(VAR12,VAR9,VAR10,VAR5);
              break;
            }
          }
        }
    if ((VAR12->VAR35 == 0) && (VAR12->VAR36 == 0))
      while (FUN16((int) ((unsigned char) VAR13)) != 0)
        VAR13=FUN7(VAR12);
  }
  if ((FUN17(VAR6,"") != 0) &&
      (FUN17(VAR6,"") != 0))
    FUN12(VAR51,"");
  if ((VAR12->VAR35 == 0) || (VAR12->VAR36 == 0))
    FUN12(VAR51,"");
  (void) FUN21(VAR12,VAR52,VAR5);
  if (FUN17(VAR6,"") == 0)
    (void) FUN21(VAR12,VAR53,VAR5);
  VAR12->VAR54=(VAR12->VAR35 < 8) || (VAR12->VAR35 > 0x7ffff) ?
    VAR55 : VAR56;
  if (VAR3->VAR57 != VAR31)
    {
      (void) FUN22(VAR12);
      return(FUN23(VAR12));
    }
  VAR15=FUN24(VAR12,VAR12->VAR35,VAR12->VAR36,VAR5);
  if (VAR15 == VAR31)
    return(FUN6(VAR12));
  
  VAR27=(unsigned char *) FUN25(VAR12->VAR35,4*
    sizeof(*VAR27));
  if (VAR27 == (unsigned char *) NULL)
    FUN12(VAR41,"");
  for (VAR24=0; VAR24 < (VAR19) VAR12->VAR36; VAR24++)
  {
    if (VAR12->VAR54 != VAR56)
      {
        VAR23=FUN26(VAR12,4*VAR12->VAR35*sizeof(*VAR27),VAR27);
        if (VAR23 != (VAR19) (4*VAR12->VAR35*sizeof(*VAR27)))
          break;
      }
    else
      {
        VAR23=FUN26(VAR12,4*sizeof(*VAR26),VAR26);
        if (VAR23 != 4)
          break;
        if ((VAR39) ((((VAR39) VAR26[2]) << 8) | VAR26[3]) != VAR12->VAR35)
          {
            (void) memcpy(VAR27,VAR26,4*sizeof(*VAR26));
            VAR23=FUN26(VAR12,4*(VAR12->VAR35-1)*sizeof(*VAR27),VAR27+4);
            VAR12->VAR54=VAR55;
          }
        else
          {
            VAR22=VAR27;
            for (VAR20=0; VAR20 < 4; VAR20++)
            {
              VAR25=&VAR27[(VAR20+1)*VAR12->VAR35];
              while (VAR22 < VAR25)
              {
                VAR23=FUN26(VAR12,2*sizeof(*VAR26),VAR26);
                if (VAR23 < 1)
                  break;
                if (VAR26[0] > 128)
                  {
                    VAR23=(VAR19) VAR26[0]-128;
                    if ((VAR23 == 0) || (VAR23 > (VAR19) (VAR25-VAR22)))
                      break;
                    while (VAR23-- > 0)
                      *VAR22++=VAR26[1];
                  }
                else
                  {
                    VAR23=(VAR19) VAR26[0];
                    if ((VAR23 == 0) || (VAR23 > (VAR19) (VAR25-VAR22)))
                      break;
                    *VAR22++=VAR26[1];
                    if (--VAR23 > 0)
                      {
                        VAR23=FUN26(VAR12,(VAR39) VAR23*sizeof(*VAR22),VAR22);
                        if (VAR23 < 1)
                          break;
                        VAR22+=VAR23;
                      }
                  }
              }
            }
          }
      }
    VAR18=FUN27(VAR12,0,VAR24,VAR12->VAR35,1,VAR5);
    if (VAR18 == (VAR17 *) NULL)
      break;
    VAR20=0;
    for (VAR21=0; VAR21 < (VAR19) VAR12->VAR35; VAR21++)
    {
      if (VAR12->VAR54 == VAR56)
        {
          VAR26[0]=VAR27[VAR21];
          VAR26[1]=VAR27[VAR21+VAR12->VAR35];
          VAR26[2]=VAR27[VAR21+2*VAR12->VAR35];
          VAR26[3]=VAR27[VAR21+3*VAR12->VAR35];
        }
      else
        {
          VAR26[0]=VAR27[VAR20++];
          VAR26[1]=VAR27[VAR20++];
          VAR26[2]=VAR27[VAR20++];
          VAR26[3]=VAR27[VAR20++];
        }
      FUN28(VAR12,0,VAR18);
      FUN29(VAR12,0,VAR18);
      FUN30(VAR12,0,VAR18);
      if (VAR26[3] != 0)
        {
          VAR11=FUN31(2.0,VAR26[3]-(128.0+8.0));
          FUN28(VAR12,FUN32(VAR58*VAR11*VAR26[0]),VAR18);
          FUN29(VAR12,FUN32(VAR58*VAR11*VAR26[1]),VAR18);
          FUN30(VAR12,FUN32(VAR58*VAR11*VAR26[2]),VAR18);
        }
      VAR18+=FUN33(VAR12);
    }
    if (FUN34(VAR12,VAR5) == VAR31)
      break;
    VAR15=FUN35(VAR12,VAR59,(VAR60) VAR24,
      VAR12->VAR36);
    if (VAR15 == VAR31)
      break;
  }
  VAR27=(unsigned char *) FUN36(VAR27);
  if (FUN37(VAR12) != VAR31)
    FUN38(VAR5,VAR51,"",
      VAR12->VAR33);
  (void) FUN22(VAR12);
  return(FUN23(VAR12));
}