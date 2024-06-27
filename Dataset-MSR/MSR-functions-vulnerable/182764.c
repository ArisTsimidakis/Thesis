WandExport VAR1 FUN1(VAR2 *VAR3,
  const int argc,const char **argv,VAR4 **VAR5,VAR6 *VAR7)
{
  VAR8
    VAR9;

  const char
    *VAR10;

  VAR2
    *VAR11;

  VAR12
    VAR13;

  VAR14
    *VAR15;

  register VAR16
    VAR17;

  VAR16
    VAR18,
    VAR19;

  
  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR20 == VAR21);
  assert(VAR5 != (VAR4 **) NULL);
  assert((*VAR5)->VAR22 == (VAR4 *) NULL);
  assert((*VAR5)->VAR20 == VAR21);
  if ((*VAR5)->VAR23 != VAR24)
    (void) FUN2(VAR25,FUN3(),"",
      (*VAR5)->VAR26);
  if ((argc <= 0) || (*argv == (char *) NULL))
    return(VAR27);
  VAR11=FUN4(VAR3);
  VAR15=FUN5(VAR11);
  VAR9=VAR11->VAR9;
  VAR13=VAR27;
  for (VAR17=0; VAR17 < (VAR16) argc; VAR17++)
  {
    if (*VAR5 == (VAR4 *) NULL)
      break;
    VAR10=argv[VAR17];
    if (FUN6(VAR10) == VAR24)
      continue;
    VAR18=FUN7(VAR28,VAR24,VAR10);
    VAR18=FUN8(VAR18,0L);
    if ((VAR17+VAR18) >= (VAR16) argc)
      break;
    VAR13=FUN9(VAR11,(int) VAR18+1,argv+VAR17,VAR7);
    switch (*(VAR10+1))
    {
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            (void) FUN11(VAR11,*VAR5);
            if (*VAR10 == '')
              {
                (void) FUN12(VAR15,*VAR5,(VAR4 *) NULL);
                FUN13(VAR7,&(*VAR5)->VAR7);
                break;
              }
            VAR17++;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR29;

            (void) FUN11(VAR11,*VAR5);
            VAR29=FUN14(*VAR5,*VAR10 == '' ? VAR27 :
              VAR24,VAR7);
            if (VAR29 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR29;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR30;

            
            (void) FUN11(VAR11,*VAR5);
            VAR30=FUN16(*VAR5,VAR31,
              VAR7);
            if (VAR30 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR30;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            if (*VAR10 == '')
              {
                VAR9=VAR32;
                break;
              }
            VAR9=(VAR8) FUN17(argv[VAR17+1]);
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR33,
              *VAR34;

            (void) FUN11(VAR11,*VAR5);
            VAR34=FUN18(VAR5);
            VAR33=FUN18(VAR5);
            if (VAR33 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            (void) FUN19(VAR34,VAR9,VAR33);
            VAR33=FUN20(VAR33);
            FUN13(VAR7,&VAR34->VAR7);
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR34;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR35;

            (void) FUN11(VAR11,*VAR5);
            VAR35=FUN21(*VAR5,VAR7);
            if (VAR35 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR35;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR36;

            (void) FUN11(VAR11,*VAR5);
            VAR36=FUN22(*VAR5,VAR9,VAR7);
            if (VAR36 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR36;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            const char
              *VAR10;

            double
              VAR37;

            VAR4
              *VAR38,
              *VAR34,
              *VAR39;

            VAR40
              VAR41;

            
            (void) FUN11(VAR11,*VAR5);
            VAR34=FUN18(VAR5);
            VAR39=FUN18(VAR5);
            if (VAR39 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            VAR41=VAR42;
            VAR10=FUN23(VAR3,"");
            if (VAR10 != (const char *) NULL)
              VAR41=(VAR40) FUN7(VAR43,
                VAR24,VAR10);
            VAR38=FUN24(VAR34,VAR39,
               VAR9,VAR41,&VAR37,VAR7);
             if (VAR38 == (VAR4 *) NULL)
               break;




             if (*VAR5 != (VAR4 *) NULL)
               *VAR5=FUN15(*VAR5);
             *VAR5=VAR38;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR44
              VAR45;

            VAR4
              *VAR46;

            (void) FUN25(VAR11,*VAR5);
            VAR45=(VAR44) FUN7(VAR47,
              VAR24,argv[VAR17+1]);
            VAR46=FUN26(*VAR5,VAR45,VAR7);
            if (VAR46 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR46;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR48,
              *VAR49,
              *VAR34;

            VAR50
              VAR51;

            (void) FUN11(VAR11,*VAR5);
            VAR34=FUN18(VAR5);
            VAR49=FUN18(VAR5);
            if (VAR49 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            (void) FUN27(&VAR49,(char *) NULL,
              VAR49->VAR51);
            FUN28(VAR49,&VAR51);
            (void) FUN29(VAR49->VAR51,&VAR51);
            FUN30(VAR34->VAR52,VAR34->VAR53,VAR34->VAR54,
              &VAR51);
            VAR48=FUN18(VAR5);
            if (VAR48 != (VAR4 *) NULL)
              {
                if ((VAR34->VAR55 == VAR56) ||
                    (VAR34->VAR55 == VAR57))
                  {
                    
                    (void) FUN31(VAR49,VAR58,
                      VAR48,0,0);
                    VAR48=FUN20(VAR48);
                  }
                else
                  {
                    
                    if (VAR34->VAR59 != (VAR4 *) NULL)
                      VAR34->VAR59=FUN20(VAR34->VAR59);
                    VAR34->VAR59=VAR48;
                    (void) FUN32(VAR34->VAR59,VAR24);
                  }
              }
            (void) FUN33(VAR34,VAR9,VAR34->VAR55,
              VAR49,VAR51.VAR60,VAR51.VAR61);
            if (VAR48 != (VAR4 *) NULL)
              {
                VAR34->VAR59=FUN20(VAR34->VAR59);
                VAR48=VAR34->VAR59;
              }
            VAR49=FUN20(VAR49);
            FUN13(VAR7,&VAR34->VAR7);
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR34;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR62;

            VAR63
              VAR64;

            VAR50
              VAR51;

            
            (void) FUN25(VAR11,*VAR5);
            (void) FUN34(*VAR5,argv[VAR17+2],&VAR51,VAR7);
            VAR64.VAR60=VAR51.VAR60;
            VAR64.VAR61=VAR51.VAR61;
            VAR62=(*VAR5);
            if (VAR62->VAR65 != (VAR4 *) NULL)
              VAR62=VAR62->VAR65;
            (void) FUN34(VAR62,argv[VAR17+1],&VAR51,
              VAR7);
            VAR13=FUN35(*VAR5,VAR62,&VAR51,&VAR64,
              VAR7);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR66;

            (void) FUN11(VAR11,*VAR5);
            VAR66=FUN36(*VAR5,VAR7);
            if (VAR66 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR66;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            if (*VAR10 == '')
              FUN37(VAR5,"",VAR7);
            else
              FUN37(VAR5,argv[VAR17+1],VAR7);
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            if (*VAR10 == '')
              {
                VAR15->VAR67=VAR24;
                break;
              }
            VAR15->VAR67=VAR27;
            VAR15->VAR68=(VAR69) FUN7(
              VAR70,VAR24,argv[VAR17+1]);
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR71;

            if (*VAR10 == '')
              VAR71=FUN38(*VAR5,1,"",VAR7);
            else
              {
                const char
                  *VAR72;

                VAR73
                  VAR74;

                VAR74=(VAR73) FUN39(argv[VAR17+1]);
                VAR72=strchr(argv[VAR17+1],'');
                if (VAR72 == (const char *) NULL)
                  VAR71=FUN38(*VAR5,VAR74,
                    "",VAR7);
                else
                  VAR71=FUN38(*VAR5,VAR74,VAR72,
                    VAR7);
              }
            FUN40(VAR5, VAR71);
            (void) FUN11(VAR11,*VAR5);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR75;

            VAR76
              VAR45;

            (void) FUN25(VAR11,*VAR5);
            VAR45=(VAR76) FUN7(
              VAR77,VAR24,argv[VAR17+1]);
            VAR75=FUN16(*VAR5,VAR45,VAR7);
            if (VAR75 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR75;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR78;

            
            (void) FUN25(VAR11,*VAR5);
            VAR78=FUN41(*VAR5,*VAR10 == '' ?
              VAR27 : VAR24,VAR7);
            if (VAR78 == (VAR4 *) NULL)
              break;
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR78;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR79;

            (void) FUN11(VAR11,*VAR5);
            VAR79=FUN42(*VAR5,VAR80,VAR7);
            if (VAR79 == (VAR4 *) NULL)
              break;
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR79;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR81;

            (void) FUN11(VAR11,*VAR5);
            VAR81=FUN43(*VAR5,VAR9,argv[VAR17+1],VAR7);
            if (VAR81 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR81;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR82,
              *VAR34;

            (void) FUN11(VAR11,*VAR5);
            VAR34=FUN18(VAR5);
            VAR82=FUN18(VAR5);
            if (VAR82 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            (void) FUN44(VAR34,VAR9,VAR82);
            VAR82=FUN20(VAR82);
            FUN13(VAR7,&VAR34->VAR7);
            if (*VAR5 != (VAR4 *) NULL)
              *VAR5=FUN15(*VAR5);
            *VAR5=VAR34;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR78,
              *VAR83,
              *VAR84;

            
            (void) FUN11(VAR11,*VAR5);
            VAR83=FUN18(VAR5);
            VAR84=FUN18(VAR5);
            if (VAR84 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            VAR78=FUN45(VAR83,
              VAR84,*VAR10 == '' ? VAR27 : VAR24,VAR7);
            if (VAR78 == (VAR4 *) NULL)
              break;
            if (*VAR5 != (VAR4 *) NULL)
              *VAR5=FUN15(*VAR5);
            *VAR5=VAR78;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR72,
              *VAR85;

            VAR19=0;
            if (*VAR10 != '')
              VAR19=(VAR16) FUN39(argv[VAR17+1]);
            VAR72=FUN46(VAR5);
            if (VAR72 == (VAR4 *) NULL)
              {
                (void) FUN47(VAR7,FUN3(),
                  VAR86,"","",argv[VAR17+1]);
                VAR13=VAR24;
                break;
              }
            VAR85=VAR72;
            if (VAR19 == 0)
              FUN48(VAR5,VAR85);
            else
              if (VAR19 == (VAR16) FUN49(*VAR5))
                FUN40(VAR5,VAR85);
              else
                {
                    VAR85=FUN50(*VAR5,VAR19-1);
                    if (VAR85 == (VAR4 *) NULL)
                      {


                        (void) FUN47(VAR7,FUN3(),
                          VAR86,"","",argv[VAR17+1]);
                        VAR13=VAR24;
                       break;
                     }
                  FUN51(&VAR85,VAR72);
                }
            *VAR5=FUN52(VAR85);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR87;

            VAR88
              VAR89;

            (void) FUN11(VAR11,*VAR5);
            VAR87=(VAR4 *) NULL;
            VAR89=(VAR88) FUN7(VAR90,
              VAR24,argv[VAR17+1]);
            switch (VAR89)
            {
              case VAR91:
              {
                VAR87=FUN21(*VAR5,VAR7);
                break;
              }
              case VAR92:
              case VAR93:
              case VAR94:
              default:
              {
                VAR87=FUN53(*VAR5,VAR89,VAR7);
                break;
              }
              case VAR95:
              case VAR80:
              case VAR96:
              case VAR97:
              {
                VAR87=FUN42(*VAR5,VAR89,VAR7);
                break;
              }
              case VAR98:
              {
                VAR87=FUN54(*VAR5,VAR7);
                break;
              }
              case VAR99:
              {
                VAR87=FUN55(*VAR5,VAR7);
                break;
              }
              case VAR100:
              {
                VAR87=FUN56(*VAR5,VAR7);
                break;
              }
              case VAR101:
              {
                FUN57(*VAR5,VAR7);
                break;
              }
              case VAR102:
              {
                FUN58(VAR5,VAR7);
                break;
              }
              case VAR103:
              {
                FUN59(VAR5,VAR7);
                break;
              }
              case VAR104:
              {
                
                VAR87=FUN21(*VAR5,VAR7);
                if (VAR87 == (VAR4 *) NULL)
                  {
                    VAR13=VAR24;
                    break;
                  }
                FUN13(VAR7,&VAR87->VAR7);
                *VAR5=FUN15(*VAR5);
                *VAR5=VAR87;
                VAR87=FUN55(*VAR5,VAR7);
                if (VAR87 == (VAR4 *) NULL)
                  {
                    VAR13=VAR24;
                    break;
                  }
                FUN13(VAR7,&VAR87->VAR7);
                *VAR5=FUN15(*VAR5);
                *VAR5=VAR87;
                VAR87=(VAR4 *) NULL;
                FUN57(*VAR5,VAR7);
                FUN13(VAR7,&(*VAR5)->VAR7);
                (void) FUN12(VAR15,*VAR5,(VAR4 *) NULL);
                break;
              }
              case VAR105:
              {
                VAR106
                  VAR55;

                VAR4
                  *VAR107;

                VAR50
                  VAR51;

                
                VAR107=(*VAR5);
                while (VAR107 != (VAR4 *) NULL)
                {
                  VAR107=FUN60(VAR107);
                  if ((VAR107 != (VAR4 *) NULL) &&
                      (FUN10(VAR107->VAR108,"") == 0))
                    break;
                }
                if (VAR107 != (VAR4 *) NULL)
                  {
                    if ((FUN61(VAR107) == (VAR4 *) NULL) ||
                        (FUN60(VAR107) == (VAR4 *) NULL))
                      VAR107=(VAR4 *) NULL;
                    else
                      {
                        
                        VAR107=FUN62(VAR107->VAR22);
                        FUN63(&VAR107);
                      }
                  }
                if (VAR107 == (VAR4 *) NULL)
                  {
                    (void) FUN47(VAR7,FUN3(),
                      VAR86,"","");
                    VAR13=VAR24;
                    break;
                  }
                
                FUN28(*VAR5,&VAR51);
                (void) FUN29((*VAR5)->VAR51,&VAR51);
                VAR51.VAR109=VAR107->VAR110.VAR109 != 0 ?
                  VAR107->VAR110.VAR109 : VAR107->VAR52;
                VAR51.VAR111=VAR107->VAR110.VAR111 != 0 ?
                 VAR107->VAR110.VAR111 : VAR107->VAR53;
                FUN30((*VAR5)->VAR110.VAR109 != 0 ?
                  (*VAR5)->VAR110.VAR109 : (*VAR5)->VAR52,
                  (*VAR5)->VAR110.VAR111 != 0 ? (*VAR5)->VAR110.VAR111 :
                  (*VAR5)->VAR53,(*VAR5)->VAR54,&VAR51);
                VAR55=VAR112;
                VAR10=FUN23(VAR11,"");
                if (VAR10 != (const char *) NULL)
                  VAR55=(VAR106) FUN7(
                    VAR113,VAR24,VAR10);
                FUN64(*VAR5,VAR55,VAR107,VAR51.VAR60,VAR51.VAR61,
                  VAR7);
                VAR107=FUN15(VAR107);
                break;
              }
            }
            if (VAR87 == (VAR4 *) NULL)
              break;
            FUN13(VAR7,&VAR87->VAR7);
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR87;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            (void) FUN11(VAR11,*VAR5);
            if (*VAR10 == '')
              {
                (void) FUN12(VAR15,*VAR5,(VAR4 *) NULL);
                FUN13(VAR7,&(*VAR5)->VAR7);
                break;
              }
            VAR17++;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR114;

            
            (void) FUN11(VAR11,*VAR5);
            VAR114=FUN16(*VAR5,VAR115,VAR7);
            if (VAR114 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR114;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR116;

            
            (void) FUN11(VAR11,*VAR5);
            VAR116=FUN16(*VAR5,VAR117,VAR7);
            if (VAR116 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR116;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR118;

            (void) FUN11(VAR11,*VAR5);
            VAR118=FUN65(*VAR5,FUN66(argv[VAR17+1]),
              VAR7);
            if (VAR118 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR118;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR119;

            (void) FUN11(VAR11,*VAR5);
            VAR119=FUN42(*VAR5,VAR96,VAR7);
            if (VAR119 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR119;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            char
              *VAR120,
              VAR121[VAR122];

            const char
              *VAR72;

            double
              *VAR123;

            VAR4
              *VAR124;

            register VAR16
              VAR60;

            VAR73
              VAR125;

            
            (void) FUN25(VAR11,*VAR5);
            VAR120=FUN67(VAR11,*VAR5,argv[VAR17+1]);
            FUN13(VAR7,&(*VAR5)->VAR7);
            if (VAR120 == (char *) NULL)
              break;
            VAR72=(char *) VAR120;
            for (VAR60=0; *VAR72 != ''; VAR60++)
            {
              FUN68(VAR72,&VAR72,VAR122,VAR121);
              if (*VAR121 == '')
                FUN68(VAR72,&VAR72,VAR122,VAR121);
            }
            VAR125=(VAR73) VAR60;
            VAR123=(double *) FUN69(VAR125,
              sizeof(*VAR123));
            if (VAR123 == (double *) NULL)
              FUN70(VAR126,
                "",(*VAR5)->VAR26);
            (void) memset(VAR123,0,VAR125*
              sizeof(*VAR123));
            VAR72=(char *) VAR120;
            for (VAR60=0; (VAR60 < (VAR16) VAR125) && (*VAR72 != ''); VAR60++)
            {
              FUN68(VAR72,&VAR72,VAR122,VAR121);
              if (*VAR121 == '')
                FUN68(VAR72,&VAR72,VAR122,VAR121);
              VAR123[VAR60]=FUN71(VAR121,(char **) NULL);
            }
            VAR120=FUN72(VAR120);
            VAR124=FUN73(*VAR5,VAR9,
              VAR125 >> 1,VAR123,VAR7);
            VAR123=(double *) FUN74(VAR123);
            if (VAR124 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR124;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            char
              *VAR127;

            (void) FUN11(VAR11,*VAR5);
            VAR127=FUN67(VAR11,*VAR5,argv[VAR17+1]);
            if (VAR127 == (char *) NULL)
              break;
            FUN13(VAR7,&(*VAR5)->VAR7);
            (void) FUN75(VAR128,"",VAR127);
            VAR127=FUN72(VAR127);
          }
        if (FUN10("",VAR10+1) == 0)
          {
            char
              **VAR123;

            int
              VAR129,
              VAR125;

            (void) FUN11(VAR11,*VAR5);
            VAR123=FUN76(argv[VAR17+1],&VAR125);
            if (VAR123 == (char **) NULL)
              break;
            if ((argc > 1) && (strchr(VAR123[1],'') != (char *) NULL))
              {
                char
                  VAR130,
                  VAR131,
                  *VAR121;

                const char
                  *VAR123;

                int
                  VAR65,
                  VAR13;

                VAR73
                  VAR132;

                VAR133
                  *VAR134;

                
                VAR132=strlen(argv[VAR17+1]);
                VAR121=(char *) NULL;
                if (~VAR132 >= (VAR122-1))
                  VAR121=(char *) FUN69(VAR132+VAR122,
                    sizeof(*VAR121));
                if (VAR121 == (char *) NULL)
                  break;
                VAR65=0;
                VAR123=argv[VAR17+1];
                VAR134=FUN77();
                VAR13=FUN78(VAR134,0,VAR121,VAR132,VAR123,"","",
                  """,'',&VAR130,&VAR65,&VAR131);
                VAR134=FUN79(VAR134);
                if (VAR13 == 0)
                  {
                    const char
                      *argv;

                    argv=(&(VAR123[VAR65]));
                    (void) FUN80(VAR121,&(*VAR5),1,&argv,
                      VAR7);
                  }
                VAR121=FUN72(VAR121);
                break;
              }
            (void) FUN81(&VAR123[1],"","");
            (void) FUN80(VAR123[1],&(*VAR5),
              VAR125-2,(const char **) VAR123+2,VAR7);
            for (VAR129=0; VAR129 < VAR125; VAR129++)
              VAR123[VAR129]=FUN72(VAR123[VAR129]);
            VAR123=(char **) FUN74(VAR123);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            FUN82(VAR5);
            FUN13(VAR7,&(*VAR5)->VAR7);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR135;

            VAR16
              VAR64;

            (void) FUN11(VAR11,*VAR5);
            VAR64=(VAR16) FUN39(argv[VAR17+1]);
            VAR135=FUN83(*VAR5,*VAR10 == '' ? VAR27 :
              VAR24,VAR64,VAR7);
            if (VAR135 == (VAR4 *) NULL)
              {
                VAR13=VAR24;
                break;
              }
            *VAR5=FUN15(*VAR5);
            *VAR5=VAR135;
            break;
          }
        if (FUN10("",VAR10+1) == 0)
          {
            VAR4
              *VAR72,
              *VAR85,
              *VAR136,
              *VAR137;

            VAR16
              VAR138;

            VAR19=(-1);
            VAR138=(-2);
            if (*VAR10 != '')
              {
                VAR139
                  VAR140;

                VAR12
                  VAR141;

                VAR138=(-1);
                VAR141=FUN84(argv[VAR17+1],&VAR140);
                VAR19=(VAR16) VAR140.VAR142;
                if ((VAR141 & VAR143) != 0)
                  VAR138=(VAR16) VAR140.VAR144;
              }
            VAR72=FUN50(*VAR5,VAR19);
            VAR85=FUN50(*VAR5,VAR138);
            if ((VAR72 == (VAR4 *) NULL) || (VAR85 == (VAR4 *) NULL))
              {
                (void) FUN47(VAR7,FUN3(),
                  VAR86,"","",(*VAR5)->VAR26);
                VAR13=VAR24;
                break;
              }
            if (VAR72 == VAR85)
              break;
            VAR136=FUN85(VAR72,0,0,VAR27,VAR7);
            if (VAR136 == (VAR4 *) NULL)
              break;
            VAR137=FUN85(VAR85,0,0,VAR27,VAR7);
            if (VAR137 == (VAR4 *) NULL)
              {
                VAR136=FUN20(VAR136);
                break;
              }
            FUN86(&VAR72,VAR137);
            FUN86(&VAR85,VAR136);
            *VAR5=FUN52(VAR85);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR10+1) == 0)
          {
            char
              VAR145[VAR122];

            VAR4
              *VAR146;

            VAR2
              *VAR147;

            (void) FUN11(VAR11,*VAR5);
            (void) FUN87(VAR145,VAR122,"",argv[VAR17+1]);
            (void) FUN88(VAR145);
            VAR146=(*VAR5);
            if (*VAR10 == '')
              VAR146=FUN89(*VAR5,VAR7);
            VAR147=FUN4(VAR11);
            VAR13&=FUN90(VAR147,VAR146,argv[VAR17+1],VAR7);
            VAR147=FUN91(VAR147);
            if (*VAR10 == '')
              VAR146=FUN15(VAR146);
            break;
          }
        break;
      }
      default:
        break;
    }
    VAR17+=VAR18;
  }
  VAR15=FUN92(VAR15);
  VAR11=FUN91(VAR11);
  VAR13&=FUN9(VAR3,argc,argv,VAR7);
  return(VAR13 != 0 ? VAR27 : VAR24);
}