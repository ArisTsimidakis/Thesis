static VAR1 FUN1(const VAR2 *VAR3,VAR4 *VAR5,
  VAR6 *VAR7)
{
  char
    VAR8[VAR9],
    VAR10,
    VAR11[VAR9];

  const char
    *VAR12;

  VAR1
    VAR13;

  VAR14
    VAR15;

  VAR16
    VAR17;

  VAR18
    VAR19;

  VAR20
    *VAR21;

  VAR22
    VAR23;

  register unsigned char
    *VAR24;

  VAR25
    VAR26,
    VAR27,
    VAR28;

  VAR29
    VAR30,
    VAR31;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR32 == VAR33);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR32 == VAR33);
  if (VAR5->VAR34 != VAR35)
    (void) FUN2(VAR36,FUN3(),"",VAR5->VAR37);
  assert(VAR7 != (VAR6 *) NULL);
  assert(VAR7->VAR32 == VAR33);
  VAR13=FUN4(VAR3,VAR5,VAR38,VAR7);
  if (VAR13 == VAR35)
    return(VAR13);
  VAR15=0;
  VAR27=FUN5(VAR5);
  do
  {
    VAR18
      VAR39;

    
    VAR28=3;
    VAR23=VAR40;
    (void) FUN6(VAR11,VAR3->VAR11,VAR9);
    VAR39=FUN7(VAR5->VAR41);
    switch (VAR11[1])
    {
      case '':
      case '':
      {
        VAR10='';
        break;
      }
      case '':
      case '':
      {
        VAR10='';
        if (VAR3->VAR42 == VAR43)
          VAR10='';
        break;
      }
      case '':
      case '':
      {
        VAR10='';
        if (FUN8(VAR5,VAR7) != VAR35)
          VAR10='';
        break;
      }
      case '':
      case '':
      {
        VAR10='';
        if (VAR3->VAR42 == VAR43)
          VAR10='';
        break;
      }
      case '':
      case '':
      {
        if ((VAR3->VAR44 != VAR45) &&
            (FUN8(VAR5,VAR7) != VAR35))
          {
            VAR10='';
            if (VAR3->VAR42 == VAR43)
              VAR10='';
            if (FUN9(VAR5,VAR7) != VAR35)
              {
                VAR10='';
                if (VAR3->VAR42 == VAR43)
                  VAR10='';
              }
            break;
          }
      }
      default:
      {
        VAR10='';
        if (VAR3->VAR42 == VAR43)
          VAR10='';
        break;
      }
    }
    (void) FUN10(VAR8,VAR9,"",VAR10);
    (void) FUN11(VAR5,VAR8);
    VAR12=FUN12(VAR5,"",VAR7);
    if (VAR12 != (const char *) NULL)
      {
        register const char
          *VAR46;

        
        (void) FUN13(VAR5,'');
        for (VAR46=VAR12; *VAR46 != ''; VAR46++)
        {
          (void) FUN13(VAR5,(unsigned char) *VAR46);
          if ((*VAR46 == '') || (*VAR46 == ''))
            (void) FUN13(VAR5,'');
        }
        (void) FUN13(VAR5,'');
      }
    if (VAR10 != '')
      {
        (void) FUN10(VAR8,VAR9,"",
          (double) VAR5->VAR47,(double) VAR5->VAR48);
        (void) FUN11(VAR5,VAR8);
      }
    else
      {
        char
          VAR44[VAR9];

        
        (void) FUN10(VAR8,VAR9,
          "",(double) VAR5->VAR47,(double)
          VAR5->VAR48);
        (void) FUN11(VAR5,VAR8);
        VAR23=FUN14(VAR5,VAR7);
        switch (VAR23)
        {
          case VAR49:
          case VAR50:
          {
            VAR28=4;
            (void) FUN6(VAR44,"",VAR9);
            break;
          }
          case VAR51:
          case VAR52:
          {
            VAR28=1;
            (void) FUN6(VAR44,"",VAR9);
            if (FUN15(VAR5,VAR7) != VAR35)
              (void) FUN6(VAR44,"",VAR9);
            break;
          }
          default:
          {
            VAR23=VAR40;
            if (VAR5->VAR53 != VAR54)
              VAR23=VAR55;
            VAR28=3;
            (void) FUN6(VAR44,"",VAR9);
            break;
          }
        }
        if (VAR5->VAR53 != VAR54)
          {
            VAR28++;
            (void) FUN16(VAR44,"",VAR9);
          }
        if (VAR5->VAR41 > 32)
          VAR5->VAR41=32;
        (void) FUN10(VAR8,VAR9,
          "",(double) VAR28,(double)
          ((VAR14) FUN7(VAR5->VAR41)));
        (void) FUN11(VAR5,VAR8);
        (void) FUN10(VAR8,VAR9,
          "",VAR44);
        (void) FUN11(VAR5,VAR8);
      }
    
    switch (VAR10)
    {
      case '':
      {
        unsigned char
          VAR56[2048];

        
        (void) FUN17(VAR5,VAR57,VAR7);
        VAR24=VAR56;
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          register VAR29
            VAR58;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
          {
            *VAR24++=(unsigned char) (FUN19(VAR5,VAR46) >= (VAR59/2.0) ?
              '' : '');
            *VAR24++='';
            if ((VAR24-VAR56+1) >= (VAR29) sizeof(VAR56))
              {
                *VAR24++='';
                (void) FUN20(VAR5,VAR24-VAR56,VAR56);
                VAR24=VAR56;
              }
            VAR46+=FUN21(VAR5);
          }
          *VAR24++='';
          (void) FUN20(VAR5,VAR24-VAR56,VAR56);
          VAR24=VAR56;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        if (VAR24 != VAR56)
          {
            *VAR24++='';
            (void) FUN20(VAR5,VAR24-VAR56,VAR56);
          }
        break;
      }
      case '':
      {
        unsigned char
          VAR56[2048];

        
        if (VAR5->VAR41 <= 8)
          (void) FUN11(VAR5,"");
        else
          if (VAR5->VAR41 <= 16)
            (void) FUN11(VAR5,"");
          else
            (void) FUN11(VAR5,"");
        VAR24=VAR56;
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          register VAR29
            VAR58;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
          {
            VAR17=FUN23(FUN19(VAR5,VAR46));
            if (VAR5->VAR41 <= 8)
              VAR30=(VAR29) FUN10(VAR8,VAR9,"",
                FUN24(VAR17));
            else
              if (VAR5->VAR41 <= 16)
                VAR30=(VAR29) FUN10(VAR8,VAR9,
                  "",FUN25(VAR17));
              else
                 VAR30=(VAR29) FUN10(VAR8,VAR9,
                   "",FUN26(VAR17));
             VAR26=(VAR25) VAR30;

            (void) strncpy((char *) VAR24,VAR8,VAR26);

            VAR24+=VAR26;

            if ((VAR24-VAR56+VAR26+2) >= sizeof(VAR56))


               {
                 *VAR24++='';
                 (void) FUN20(VAR5,VAR24-VAR56,VAR56);
                 VAR24=VAR56;
               }




             VAR46+=FUN21(VAR5);
           }
           *VAR24++='';
          (void) FUN20(VAR5,VAR24-VAR56,VAR56);
          VAR24=VAR56;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        if (VAR24 != VAR56)
          {
            *VAR24++='';
            (void) FUN20(VAR5,VAR24-VAR56,VAR56);
          }
        break;
      }
      case '':
      {
        unsigned char
          VAR56[2048];

        
        (void) FUN27(VAR5,VAR62,VAR7);
        if (VAR5->VAR41 <= 8)
          (void) FUN11(VAR5,"");
        else
          if (VAR5->VAR41 <= 16)
            (void) FUN11(VAR5,"");
          else
            (void) FUN11(VAR5,"");
        VAR24=VAR56;
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          register VAR29
            VAR58;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
          {
            if (VAR5->VAR41 <= 8)
              VAR30=(VAR29) FUN10(VAR8,VAR9,
                "",FUN24(FUN28(VAR5,VAR46)),
                FUN24(FUN29(VAR5,VAR46)),
                FUN24(FUN30(VAR5,VAR46)));
            else
              if (VAR5->VAR41 <= 16)
                VAR30=(VAR29) FUN10(VAR8,VAR9,
                  "",FUN25(FUN28(VAR5,VAR46)),
                  FUN25(FUN29(VAR5,VAR46)),
                  FUN25(FUN30(VAR5,VAR46)));
              else
                VAR30=(VAR29) FUN10(VAR8,VAR9,
                  "",FUN26(FUN28(VAR5,VAR46)),
                   FUN26(FUN29(VAR5,VAR46)),
                   FUN26(FUN30(VAR5,VAR46)));
             VAR26=(VAR25) VAR30;

            (void) strncpy((char *) VAR24,VAR8,VAR26);

            VAR24+=VAR26;
             if ((VAR24-VAR56+VAR26+2) >= sizeof(VAR56))
               {
                 *VAR24++='';
                 (void) FUN20(VAR5,VAR24-VAR56,VAR56);
                 VAR24=VAR56;
               }




             VAR46+=FUN21(VAR5);
           }
           *VAR24++='';
          (void) FUN20(VAR5,VAR24-VAR56,VAR56);
          VAR24=VAR56;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        if (VAR24 != VAR56)
          {
            *VAR24++='';
            (void) FUN20(VAR5,VAR24-VAR56,VAR56);
          }
        break;
      }
      case '':
      {
        register unsigned char
          *VAR56;

        
        (void) FUN17(VAR5,VAR57,VAR7);
        VAR5->VAR41=1;
        VAR21=FUN31(VAR3,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          FUN32(VAR63,"");
        (void) FUN33(VAR5,VAR21,VAR64);
        VAR21->VAR65=VAR66;
        VAR56=FUN34(VAR21);
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          VAR26=FUN35(VAR5,(VAR67 *) NULL,VAR21,
            VAR51,VAR56,VAR7);
          VAR30=FUN20(VAR5,VAR26,VAR56);
          if (VAR30 != (VAR29) VAR26)
            break;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        VAR21=FUN36(VAR21);
        break;
      }
      case '':
      {
        register unsigned char
          *VAR56;

        
        if (VAR5->VAR41 > 32)
          VAR5->VAR41=32;
        (void) FUN10(VAR8,VAR9,"",(double)
          ((VAR14) FUN7(VAR5->VAR41)));
        (void) FUN11(VAR5,VAR8);
        VAR21=FUN31(VAR3,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          FUN32(VAR63,"");
        (void) FUN33(VAR5,VAR21,VAR64);
        VAR21->VAR65=VAR66;
        VAR56=FUN34(VAR21);
        VAR26=FUN37(VAR5,VAR21,VAR51);
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          register VAR29
            VAR58;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          VAR24=VAR56;
          switch (VAR5->VAR41)
          {
            case 8:
            case 16:
            case 32:
            {
              VAR26=FUN35(VAR5,(VAR67 *) NULL,VAR21,
                VAR51,VAR56,VAR7);
              break;
            }
            default:
            {
              if (VAR5->VAR41 <= 8)
                {
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    if (FUN38(VAR5,VAR46) == VAR35)
                      VAR19=FUN39(FUN23(FUN19(
                        VAR5,VAR46)),VAR39);
                    else
                      {
                        if (VAR5->VAR41 == 8)
                          VAR19=FUN24(FUN28(VAR5,VAR46));
                        else
                          VAR19=FUN39(FUN28(VAR5,VAR46),
                            VAR39);
                      }
                    VAR24=FUN40((unsigned char) VAR19,VAR24);
                    VAR46+=FUN21(VAR5);
                  }
                  VAR26=(VAR25) (VAR24-VAR56);
                  break;
                }
              if (VAR5->VAR41 <= 16)
                {
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    if (FUN38(VAR5,VAR46) == VAR35)
                      VAR19=FUN39(FUN23(FUN19(VAR5,
                        VAR46)),VAR39);
                    else
                      {
                        if (VAR5->VAR41 == 16)
                          VAR19=FUN25(FUN28(VAR5,VAR46));
                        else
                          VAR19=FUN39(FUN28(VAR5,VAR46),
                            VAR39);
                      }
                    VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                    VAR46+=FUN21(VAR5);
                  }
                  VAR26=(VAR25) (VAR24-VAR56);
                  break;
                }
              for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
              {
                if (FUN38(VAR5,VAR46) == VAR35)
                  VAR19=FUN39(FUN23(FUN19(VAR5,VAR46)),
                    VAR39);
                else
                  {
                    if (VAR5->VAR41 == 16)
                      VAR19=FUN26(FUN28(VAR5,VAR46));
                    else
                      VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                  }
                VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                VAR46+=FUN21(VAR5);
              }
              VAR26=(VAR25) (VAR24-VAR56);
              break;
            }
          }
          VAR30=FUN20(VAR5,VAR26,VAR56);
          if (VAR30 != (VAR29) VAR26)
            break;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        VAR21=FUN36(VAR21);
        break;
      }
      case '':
      {
        register unsigned char
          *VAR56;

        
        (void) FUN27(VAR5,VAR62,VAR7);
        if (VAR5->VAR41 > 32)
          VAR5->VAR41=32;
        (void) FUN10(VAR8,VAR9,"",(double)
          ((VAR14) FUN7(VAR5->VAR41)));
        (void) FUN11(VAR5,VAR8);
        VAR21=FUN31(VAR3,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          FUN32(VAR63,"");
        (void) FUN33(VAR5,VAR21,VAR64);
        VAR56=FUN34(VAR21);
        VAR26=FUN37(VAR5,VAR21,VAR23);
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          register VAR29
            VAR58;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          VAR24=VAR56;
          switch (VAR5->VAR41)
          {
            case 8:
            case 16:
            case 32:
            {
              VAR26=FUN35(VAR5,(VAR67 *) NULL,VAR21,
                VAR23,VAR56,VAR7);
              break;
            }
            default:
            {
              if (VAR5->VAR41 <= 8)
                {
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                    VAR24=FUN40((unsigned char) VAR19,VAR24);
                    VAR19=FUN39(FUN29(VAR5,VAR46),VAR39);
                    VAR24=FUN40((unsigned char) VAR19,VAR24);
                    VAR19=FUN39(FUN30(VAR5,VAR46),VAR39);
                    VAR24=FUN40((unsigned char) VAR19,VAR24);
                    VAR46+=FUN21(VAR5);
                  }
                  VAR26=(VAR25) (VAR24-VAR56);
                  break;
                }
              if (VAR5->VAR41 <= 16)
                {
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                    VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                    VAR19=FUN39(FUN29(VAR5,VAR46),VAR39);
                    VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                    VAR19=FUN39(FUN30(VAR5,VAR46),VAR39);
                    VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                    VAR46+=FUN21(VAR5);
                  }
                  VAR26=(VAR25) (VAR24-VAR56);
                  break;
                }
              for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
              {
                VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                VAR19=FUN39(FUN29(VAR5,VAR46),VAR39);
                VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                VAR19=FUN39(FUN30(VAR5,VAR46),VAR39);
                VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                VAR46+=FUN21(VAR5);
              }
              VAR26=(VAR25) (VAR24-VAR56);
              break;
            }
          }
          VAR30=FUN20(VAR5,VAR26,VAR56);
          if (VAR30 != (VAR29) VAR26)
            break;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        VAR21=FUN36(VAR21);
        break;
      }
      case '':
      {
        register unsigned char
          *VAR56;

        
        if (VAR5->VAR41 > 32)
          VAR5->VAR41=32;
        VAR21=FUN31(VAR3,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          FUN32(VAR63,"");
        (void) FUN33(VAR5,VAR21,VAR64);
        VAR56=FUN34(VAR21);
        for (VAR31=0; VAR31 < (VAR29) VAR5->VAR48; VAR31++)
        {
          register const VAR16
            *magick_restrict VAR46;

          register VAR29
            VAR58;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          VAR24=VAR56;
          switch (VAR5->VAR41)
          {
            case 8:
            case 16:
            case 32:
            {
              VAR26=FUN35(VAR5,(VAR67 *) NULL,VAR21,
                VAR23,VAR56,VAR7);
              break;
            }
            default:
            {
              switch (VAR23)
              {
                case VAR51:
                case VAR52:
                {
                  if (VAR5->VAR41 <= 8)
                    {
                      for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                      {
                        VAR19=FUN39(FUN23(FUN19(
                          VAR5,VAR46)),VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        if (VAR5->VAR53 != VAR54)
                          {
                            VAR19=(unsigned char) FUN39(
                              FUN43(VAR5,VAR46),VAR39);
                            VAR24=FUN40((unsigned char) VAR19,VAR24);
                          }
                        VAR46+=FUN21(VAR5);
                      }
                      break;
                    }
                  if (VAR5->VAR41 <= 16)
                    {
                      for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                      {
                        VAR19=FUN39(FUN23(FUN19(
                          VAR5,VAR46)),VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        if (VAR5->VAR53 != VAR54)
                          {
                            VAR19=(unsigned char) FUN39(
                              FUN43(VAR5,VAR46),VAR39);
                            VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                          }
                        VAR46+=FUN21(VAR5);
                      }
                      break;
                    }
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    VAR19=FUN39(FUN23(FUN19(VAR5,
                      VAR46)),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    if (VAR5->VAR53 != VAR54)
                      {
                        VAR19=(unsigned char) FUN39(
                          FUN43(VAR5,VAR46),VAR39);
                        VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                      }
                    VAR46+=FUN21(VAR5);
                  }
                  break;
                }
                case VAR49:
                case VAR50:
                {
                  if (VAR5->VAR41 <= 8)
                    {
                      for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                      {
                        VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        VAR19=FUN39(FUN29(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        VAR19=FUN39(FUN30(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        VAR19=FUN39(FUN44(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        if (VAR5->VAR53 != VAR54)
                          {
                            VAR19=FUN39(FUN43(VAR5,VAR46),
                              VAR39);
                            VAR24=FUN40((unsigned char) VAR19,VAR24);
                          }
                        VAR46+=FUN21(VAR5);
                      }
                      break;
                    }
                  if (VAR5->VAR41 <= 16)
                    {
                      for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                      {
                        VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        VAR19=FUN39(FUN29(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        VAR19=FUN39(FUN30(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        VAR19=FUN39(FUN44(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        if (VAR5->VAR53 != VAR54)
                          {
                            VAR19=FUN39(FUN43(VAR5,VAR46),
                              VAR39);
                            VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                          }
                        VAR46+=FUN21(VAR5);
                      }
                      break;
                    }
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    VAR19=FUN39(FUN29(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    VAR19=FUN39(FUN30(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    VAR19=FUN39(FUN44(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    if (VAR5->VAR53 != VAR54)
                      {
                        VAR19=FUN39(FUN43(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                      }
                    VAR46+=FUN21(VAR5);
                  }
                  break;
                }
                default:
                {
                  if (VAR5->VAR41 <= 8)
                    {
                      for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                      {
                        VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        VAR19=FUN39(FUN29(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        VAR19=FUN39(FUN30(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN40((unsigned char) VAR19,VAR24);
                        if (VAR5->VAR53 != VAR54)
                          {
                            VAR19=FUN39(FUN43(VAR5,VAR46),
                              VAR39);
                            VAR24=FUN40((unsigned char) VAR19,VAR24);
                          }
                        VAR46+=FUN21(VAR5);
                      }
                      break;
                    }
                  if (VAR5->VAR41 <= 16)
                    {
                      for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                      {
                        VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        VAR19=FUN39(FUN29(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        VAR19=FUN39(FUN30(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                        if (VAR5->VAR53 != VAR54)
                          {
                            VAR19=FUN39(FUN43(VAR5,VAR46),
                              VAR39);
                            VAR24=FUN41(VAR64,(unsigned short) VAR19,VAR24);
                          }
                        VAR46+=FUN21(VAR5);
                      }
                      break;
                    }
                  for (VAR58=0; VAR58 < (VAR29) VAR5->VAR47; VAR58++)
                  {
                    VAR19=FUN39(FUN28(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    VAR19=FUN39(FUN29(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    VAR19=FUN39(FUN30(VAR5,VAR46),VAR39);
                    VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                    if (VAR5->VAR53 != VAR54)
                      {
                        VAR19=FUN39(FUN43(VAR5,VAR46),
                          VAR39);
                        VAR24=FUN42(VAR64,(unsigned int) VAR19,VAR24);
                      }
                    VAR46+=FUN21(VAR5);
                  }
                  break;
                }
              }
              VAR26=(VAR25) (VAR24-VAR56);
              break;
            }
          }
          VAR30=FUN20(VAR5,VAR26,VAR56);
          if (VAR30 != (VAR29) VAR26)
            break;
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        VAR21=FUN36(VAR21);
        break;
      }
      case '':
      case '':
      {
        register unsigned char
          *VAR56;

        (void) FUN11(VAR5,VAR5->VAR68 == VAR69 ? "" :
          "");
        VAR5->VAR41=32;
        VAR23=VAR10 == '' ? VAR51 : VAR40;
        VAR21=FUN31(VAR3,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          FUN32(VAR63,"");
        VAR13=FUN45(VAR5,VAR21,VAR70);
        if (VAR13 == VAR35)
          FUN32(VAR63,"");
        VAR56=FUN34(VAR21);
        for (VAR31=(VAR29) VAR5->VAR48-1; VAR31 >= 0; VAR31--)
        {
          register const VAR16
            *magick_restrict VAR46;

          VAR46=FUN18(VAR5,0,VAR31,VAR5->VAR47,1,VAR7);
          if (VAR46 == (const VAR16 *) NULL)
            break;
          VAR26=FUN35(VAR5,(VAR67 *) NULL,VAR21,
            VAR23,VAR56,VAR7);
          (void) FUN20(VAR5,VAR26,VAR56);
          if (VAR5->VAR60 == (VAR4 *) NULL)
            {
              VAR13=FUN22(VAR5,VAR61,(VAR14) VAR31,
                VAR5->VAR48);
              if (VAR13 == VAR35)
                break;
            }
        }
        VAR21=FUN36(VAR21);
        break;
      }
    }
    if (FUN46(VAR5) == (VAR4 *) NULL)
      break;
    VAR5=FUN47(VAR5);
    VAR13=FUN22(VAR5,VAR71,VAR15++,VAR27);
    if (VAR13 == VAR35)
      break;
  } while (VAR3->VAR72 != VAR35);
  (void) FUN48(VAR5);
  return(VAR66);
}