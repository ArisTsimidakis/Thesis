WandExport VAR1 FUN1(VAR2 *VAR3,
  const int argc,const char **argv,VAR4 **VAR5,VAR6 *VAR7)
{
  const char
    *VAR8;

  VAR2
    *VAR9;

  VAR10
    VAR11;

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
  VAR13=VAR28;
  VAR9=FUN4(VAR3);
  VAR15=FUN5(VAR9);
  VAR11=VAR27;
  for (VAR17=0; VAR17 < (VAR16) argc; VAR17++)
  {
    if (*VAR5 == (VAR4 *) NULL)
      break;
    VAR8=argv[VAR17];
    if (FUN6(VAR8) == VAR24)
      continue;
    VAR18=FUN7(VAR29,VAR24,VAR8);
    VAR18=FUN8(VAR18,0L);
    if ((VAR17+VAR18) >= (VAR16) argc)
      break;
    VAR11=FUN9(VAR9,(int) VAR18+1,argv+VAR17,VAR7);
    switch (*(VAR8+1))
    {
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            (void) FUN11(VAR9,*VAR5,VAR7);
            if (*VAR8 == '')
              {
                (void) FUN12(VAR15,*VAR5,(VAR4 *) NULL,
                  VAR7);
                break;
              }
            VAR17++;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR30;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR30=FUN13(*VAR5,*VAR8 == '' ? VAR27 :
              VAR24,VAR7);
            if (VAR30 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR30;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR31;

            
            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR31=FUN15(*VAR5,VAR32,
              VAR7);
            if (VAR31 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR31;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR33;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR33=FUN16(*VAR5,argv[VAR17+1],VAR7);
            if (VAR33 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR33;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR34,
              *VAR35;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR35=FUN17(VAR5);
            VAR34=FUN17(VAR5);
            if (VAR34 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            (void) FUN18(VAR35,VAR34,VAR13,VAR7);
            VAR34=FUN19(VAR34);
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR35;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR36;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR36=FUN20(*VAR5,VAR7);
            if (VAR36 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR36;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR37
              VAR38;

            VAR4
              *VAR39;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR38=(*VAR5)->VAR38;
            if ((*VAR5)->VAR40 < FUN21(*VAR5))
              VAR38=VAR41;
            if (*VAR8 == '')
              VAR38=(VAR37) FUN7(
                VAR42,VAR24,argv[VAR17+1]);
            VAR39=FUN22(*VAR5,VAR38,VAR7);
            if (VAR39 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR39;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            double
              VAR43;

            VAR4
              *VAR44,
              *VAR35,
              *VAR45;

            VAR46
              VAR47;

            
            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR35=FUN17(VAR5);
            VAR45=FUN17(VAR5);
            if (VAR45 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            VAR47=VAR48;
            VAR8=FUN23(VAR9,"");
            if (VAR8 != (const char *) NULL)
              VAR47=(VAR46) FUN7(VAR49,
                VAR24,VAR8);
            VAR44=FUN24(VAR35,VAR45,VAR47,
               &VAR43,VAR7);
             if (VAR44 == (VAR4 *) NULL)
               break;




             if (*VAR5 != (VAR4 *) NULL)
               *VAR5=FUN14(*VAR5);
             *VAR5=VAR44;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR50
              VAR51;

            VAR4
              *VAR52;

            (void) FUN25(VAR9,*VAR5,VAR7);
            VAR51=(VAR50) FUN7(VAR53,
              VAR24,argv[VAR17+1]);
            VAR52=FUN26(*VAR5,VAR51,VAR7);
            if (VAR52 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR52;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR54
              VAR55;

            const char*
              VAR56;

            VAR1
              VAR57;

            VAR4
              *VAR58,
              *VAR59,
              *VAR60;

            VAR61
              VAR62;

            
            (void) FUN25(VAR9,*VAR5,VAR7);
            VAR56=FUN23(VAR9,"");
            if (VAR56 == (const char *) NULL)
              VAR55=VAR63;  
            else
              VAR55=(VAR54) FUN7(
                VAR64,VAR24,VAR56);

            
            VAR57=FUN27(VAR55);
            VAR56=FUN23(VAR9,"");
            if (VAR56 != (const char *) NULL)
              VAR57=FUN28(VAR56);
            VAR56=FUN23(VAR9,"");
            if (VAR56 != (const char *) NULL)
              VAR57=FUN29(VAR56);  

            VAR59=FUN17(VAR5);
            VAR60=FUN17(VAR5);
            if (VAR60 == (VAR4 *) NULL)
              break; 

            
            if (VAR60->VAR62 != (char *) NULL)
              {
                VAR61
                  VAR65;

                (void) FUN30(VAR60,VAR60->VAR62,
                  &VAR65,VAR7);
                if ((VAR60->VAR66 != VAR65.VAR67) ||
                    (VAR60->VAR68 != VAR65.VAR69))
                  {
                    VAR4
                      *VAR70;

                    VAR70=FUN31(VAR60,VAR65.VAR67,
                      VAR65.VAR69,VAR60->VAR71,VAR7);
                    if (VAR70 != (VAR4 *) NULL)
                      {
                        VAR60=FUN19(VAR60);
                        VAR60=VAR70;
                      }
                  }
              }
            FUN32(VAR60,&VAR62);
            (void) FUN33(VAR60->VAR62,&VAR62);
            FUN34(VAR59->VAR66,VAR59->VAR68,
              VAR59->VAR72,&VAR62);
            VAR58=FUN17(VAR5);
            if (VAR58 == (VAR4 *) NULL)
              VAR11&=FUN35(VAR59,VAR60,VAR55,
                VAR57,VAR62.VAR73,VAR62.VAR74,VAR7);
            else
              {
                if ((VAR55 == VAR75) ||
                    (VAR55 == VAR76))
                  {
                    VAR11&=FUN35(VAR60,VAR58,
                      VAR77,VAR27,0,0,VAR7);
                    VAR11&=FUN35(VAR59,VAR60,VAR55,
                      VAR57,VAR62.VAR73,VAR62.VAR74,VAR7);
                  }
                else
                  {
                    VAR4
                      *VAR78;

                    VAR78=FUN36(VAR59,0,0,VAR27,VAR7);
                    if (VAR78 == (VAR4 *) NULL)
                      break;
                    VAR11&=FUN35(VAR59,VAR60,VAR55,
                      VAR57,VAR62.VAR73,VAR62.VAR74,VAR7);
                    VAR11&=FUN35(VAR59,VAR58,
                      VAR79,VAR27,0,0,VAR7);
                    VAR11&=FUN35(VAR78,VAR59,
                      VAR63,VAR57,0,0,VAR7);
                    VAR59=FUN14(VAR59);
                    VAR59=VAR78;
                  }
                VAR58=FUN19(VAR58);
              }
            VAR60=FUN19(VAR60);
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR59;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR60;

            VAR80
              VAR81;

            VAR61
              VAR62;

            
            (void) FUN25(VAR9,*VAR5,VAR7);
            (void) FUN37(*VAR5,argv[VAR17+2],&VAR62,VAR7);
            VAR81.VAR73=VAR62.VAR73;
            VAR81.VAR74=VAR62.VAR74;
            VAR60=(*VAR5);
            if (VAR60->VAR82 != (VAR4 *) NULL)
              VAR60=VAR60->VAR82;
            (void) FUN37(VAR60,argv[VAR17+1],&VAR62,
              VAR7);
            VAR11=FUN38(*VAR5,VAR60,&VAR62,&VAR81,
              VAR7);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR83;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR83=FUN39(*VAR5,VAR84,
              VAR7);
            if (VAR83 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR83;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            if (*VAR8 == '')
              FUN40(VAR5,"",VAR7);
            else
              FUN40(VAR5,argv[VAR17+1],VAR7);
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            if (*VAR8 == '')
              {
                VAR15->VAR85=VAR86;
                break;
              }
            VAR15->VAR85=(VAR87) FUN7(
              VAR88,VAR24,argv[VAR17+1]);
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR89;

            if (*VAR8 == '')
              VAR89=FUN41(*VAR5,1,"",VAR7);
            else
              {
                const char
                  *VAR90;

                VAR91
                  VAR92;

                VAR92=(VAR91) FUN42(argv[VAR17+1]);
                VAR90=strchr(argv[VAR17+1],'');
                if (VAR90 == (const char *) NULL)
                  VAR89=FUN41(*VAR5,VAR92,
                    "",VAR7);
                else
                  VAR89=FUN41(*VAR5,VAR92,VAR90,
                    VAR7);
              }
            FUN43(VAR5, VAR89);
            (void) FUN11(VAR9,*VAR5,VAR7);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR93;

            VAR94
              VAR51;

            (void) FUN25(VAR9,*VAR5,VAR7);
            VAR51=(VAR94) FUN7(
              VAR95,VAR24,argv[VAR17+1]);
            VAR93=FUN15(*VAR5,VAR51,VAR7);
            if (VAR93 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR93;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR96;

            
            (void) FUN25(VAR9,*VAR5,VAR7);
            VAR96=FUN44(*VAR5,*VAR8 == '' ?
              VAR27 : VAR24,VAR7);
            if (VAR96 == (VAR4 *) NULL)
              break;
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR96;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR97;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR97=FUN45(*VAR5,VAR98,VAR7);
            if (VAR97 == (VAR4 *) NULL)
              break;
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR97;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR99;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR99=FUN46(*VAR5,argv[VAR17+1],VAR7);
            if (VAR99 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR99;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR100,
              *VAR35;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR35=FUN17(VAR5);
            VAR100=FUN17(VAR5);
            if (VAR100 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            (void) FUN47(VAR35,VAR100,VAR7);
            VAR100=FUN19(VAR100);
            if (*VAR5 != (VAR4 *) NULL)
              *VAR5=FUN14(*VAR5);
            *VAR5=VAR35;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR96,
              *VAR101,
              *VAR102;

            
            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR101=FUN17(VAR5);
            VAR102=FUN17(VAR5);
            if (VAR102 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            VAR96=FUN48(VAR101,
              VAR102,*VAR8 == '' ? VAR27 : VAR24,VAR7);
            if (VAR96 == (VAR4 *) NULL)
              break;
            if (*VAR5 != (VAR4 *) NULL)
              *VAR5=FUN14(*VAR5);
            *VAR5=VAR96;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR90,
              *VAR103;

            VAR19=0;
            if (*VAR8 != '')
              VAR19=(VAR16) FUN42(argv[VAR17+1]);
            VAR90=FUN49(VAR5);
            if (VAR90 == (VAR4 *) NULL)
              {
                (void) FUN50(VAR7,FUN3(),
                  VAR104,"","",argv[VAR17+1]);
                VAR11=VAR24;
                break;
              }
            VAR103=VAR90;
            if (VAR19 == 0)
              FUN51(VAR5,VAR103);
            else
              if (VAR19 == (VAR16) FUN21(*VAR5))
                FUN43(VAR5,VAR103);
              else
                {
                    VAR103=FUN52(*VAR5,VAR19-1);
                    if (VAR103 == (VAR4 *) NULL)
                      {


                        (void) FUN50(VAR7,FUN3(),
                          VAR104,"","",argv[VAR17+1]);
                        VAR11=VAR24;
                       break;
                     }
                  FUN53(&VAR103,VAR90);
                }
            *VAR5=FUN54(VAR103);
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR13=(VAR12) FUN7(
              VAR105,VAR24,argv[VAR17+1]);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR106;

            VAR107
              VAR108;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR106=(VAR4 *) NULL;
            VAR108=(VAR107) FUN7(VAR109,
              VAR24,argv[VAR17+1]);
            switch (VAR108)
            {
              case VAR110:
              {
                VAR106=FUN20(*VAR5,VAR7);
                break;
              }
              case VAR84:
              case VAR111:
              case VAR112:
              default:
              {
                VAR106=FUN39(*VAR5,VAR108,VAR7);
                break;
              }
              case VAR113:
              case VAR98:
              case VAR114:
              case VAR115:
              {
                VAR106=FUN45(*VAR5,VAR108,VAR7);
                break;
              }
              case VAR116:
              {
                VAR106=FUN55(*VAR5,VAR7);
                break;
              }
              case VAR117:
              {
                VAR106=FUN56(*VAR5,VAR7);
                break;
              }
              case VAR118:
              {
                VAR106=FUN57(*VAR5,VAR7);
                break;
              }
              case VAR119:
              {
                FUN58(*VAR5,VAR7);
                break;
              }
              case VAR120:
              {
                FUN59(VAR5,VAR7);
                break;
              }
              case VAR121:
              {
                FUN60(VAR5,VAR7);
                break;
              }
              case VAR122:
              {
                
                VAR106=FUN20(*VAR5,VAR7);
                if (VAR106 == (VAR4 *) NULL)
                  {
                    VAR11=VAR24;
                    break;
                  }
                *VAR5=FUN14(*VAR5);
                *VAR5=VAR106;
                VAR106=FUN56(*VAR5,VAR7);
                if (VAR106 == (VAR4 *) NULL)
                  {
                    VAR11=VAR24;
                    break;
                  }
                *VAR5=FUN14(*VAR5);
                *VAR5=VAR106;
                VAR106=(VAR4 *) NULL;
                FUN58(*VAR5,VAR7);
                (void) FUN12(VAR15,*VAR5,(VAR4 *) NULL,
                  VAR7);
                break;
              }
              case VAR123:
              {
                VAR54
                  VAR55;

                VAR4
                  *VAR124;

                VAR61
                  VAR62;

                
                VAR124=(*VAR5);
                while (VAR124 != (VAR4 *) NULL)
                {
                  VAR124=FUN61(VAR124);
                  if ((VAR124 != (VAR4 *) NULL) &&
                      (FUN10(VAR124->VAR125,"") == 0))
                    break;
                }
                if (VAR124 != (VAR4 *) NULL)
                  {
                    if ((FUN62(VAR124) == (VAR4 *) NULL) ||
                        (FUN61(VAR124) == (VAR4 *) NULL))
                      VAR124=(VAR4 *) NULL;
                    else
                      {
                        
                        VAR124=FUN63(VAR124->VAR22);
                        FUN64(&VAR124);
                      }
                  }
                if (VAR124 == (VAR4 *) NULL)
                  {
                    (void) FUN50(VAR7,FUN3(),
                      VAR104,"","");
                    VAR11=VAR24;
                    break;
                  }
                
                FUN32(*VAR5,&VAR62);
                (void) FUN33((*VAR5)->VAR62,&VAR62);
                VAR62.VAR67=VAR124->VAR126.VAR67 != 0 ?
                  VAR124->VAR126.VAR67 : VAR124->VAR66;
                VAR62.VAR69=VAR124->VAR126.VAR69 != 0 ?
                 VAR124->VAR126.VAR69 : VAR124->VAR68;
                FUN34((*VAR5)->VAR126.VAR67 != 0 ?
                  (*VAR5)->VAR126.VAR67 : (*VAR5)->VAR66,
                  (*VAR5)->VAR126.VAR69 != 0 ? (*VAR5)->VAR126.VAR69 :
                  (*VAR5)->VAR68,(*VAR5)->VAR72,&VAR62);
                VAR55=VAR63;
                VAR8=FUN23(VAR9,"");
                if (VAR8 != (const char *) NULL)
                  VAR55=(VAR54) FUN7(
                    VAR64,VAR24,VAR8);
                FUN65(*VAR5,VAR55,VAR124,VAR62.VAR73,VAR62.VAR74,
                  VAR7);
                VAR124=FUN14(VAR124);
                break;
              }
            }
            if (VAR106 == (VAR4 *) NULL)
              break;
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR106;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            (void) FUN11(VAR9,*VAR5,VAR7);
            if (*VAR8 == '')
              {
                (void) FUN12(VAR15,*VAR5,(VAR4 *) NULL,
                  VAR7);
                break;
              }
            VAR17++;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR127;

            
            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR127=FUN15(*VAR5,VAR128,VAR7);
            if (VAR127 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR127;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR129;

            
            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR129=FUN15(*VAR5,VAR130,VAR7);
            if (VAR129 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR129;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR131;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR131=FUN66(*VAR5,FUN67(argv[VAR17+1]),
              VAR7);
            if (VAR131 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR131;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR132;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR132=FUN45(*VAR5,VAR114,VAR7);
            if (VAR132 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR132;
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            char
              *VAR133,
              VAR134[VAR135];

            const char
              *VAR90;

            double
              *VAR136;

            VAR4
              *VAR137;

            register VAR16
              VAR73;

            VAR91
              VAR138;

            
            (void) FUN25(VAR9,*VAR5,VAR7);
            VAR133=FUN68(VAR9,*VAR5,argv[VAR17+1],
              VAR7);
            if (VAR133 == (char *) NULL)
              break;
            VAR90=(char *) VAR133;
            for (VAR73=0; *VAR90 != ''; VAR73++)
            {
              FUN69(VAR90,&VAR90,VAR135,VAR134);
              if (*VAR134 == '')
                FUN69(VAR90,&VAR90,VAR135,VAR134);
            }
            VAR138=(VAR91) VAR73;
            VAR136=(double *) FUN70(VAR138,
              sizeof(*VAR136));
            if (VAR136 == (double *) NULL)
              FUN71(VAR139,
                "",(*VAR5)->VAR26);
            (void) memset(VAR136,0,VAR138*
              sizeof(*VAR136));
            VAR90=(char *) VAR133;
            for (VAR73=0; (VAR73 < (VAR16) VAR138) && (*VAR90 != ''); VAR73++)
            {
              FUN69(VAR90,&VAR90,VAR135,VAR134);
              if (*VAR134 == '')
                FUN69(VAR90,&VAR90,VAR135,VAR134);
              VAR136[VAR73]=FUN72(VAR134,(char **) NULL);
            }
            VAR133=FUN73(VAR133);
            VAR137=FUN74(*VAR5,VAR138 >> 1,
              VAR136,VAR7);
            VAR136=(double *) FUN75(VAR136);
            if (VAR137 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR137;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            char
              *VAR140;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR140=FUN68(VAR9,*VAR5,argv[VAR17+1],
              VAR7);
            if (VAR140 == (char *) NULL)
              break;
            (void) FUN76(VAR141,"",VAR140);
            VAR140=FUN73(VAR140);
          }
        if (FUN10("",VAR8+1) == 0)
          {
            char
              **VAR136;

            int
              VAR142,
              VAR138;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR136=FUN77(argv[VAR17+1],&VAR138);
            if (VAR136 == (char **) NULL)
              break;
            if ((argc > 1) && (strchr(VAR136[1],'') != (char *) NULL))
              {
                char
                  VAR143,
                  VAR144,
                  *VAR134;

                const char
                  *VAR145;

                int
                  VAR82,
                  VAR146;

                VAR91
                  VAR147;

                VAR148
                  *VAR149;

                
                VAR147=strlen(argv[VAR17+1]);
                VAR134=(char *) NULL;
                if (~VAR147 >= (VAR135-1))
                  VAR134=(char *) FUN70(VAR147+VAR135,
                    sizeof(*VAR134));
                if (VAR134 == (char *) NULL)
                  break;
                VAR82=0;
                VAR145=argv[VAR17+1];
                VAR149=FUN78();
                VAR146=FUN79(VAR149,0,VAR134,VAR147,VAR145,"",
                  "",""",'',&VAR143,&VAR82,&VAR144);
                VAR149=FUN80(VAR149);
                if (VAR146 == 0)
                  {
                    const char
                      *VAR150;

                    VAR150=(&(VAR145[VAR82]));
                    (void) FUN81(VAR134,&(*VAR5),1,&VAR150,
                      VAR7);
                  }
                VAR134=FUN73(VAR134);
                break;
              }
            (void) FUN82(&VAR136[1],"","");
            (void) FUN81(VAR136[1],&(*VAR5),
              VAR138-2,(const char **) VAR136+2,VAR7);
            for (VAR142=0; VAR142 < VAR138; VAR142++)
              VAR136[VAR142]=FUN73(VAR136[VAR142]);
            VAR136=(char **) FUN75(VAR136);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            FUN83(VAR5);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR151;

            VAR16
              VAR81;

            (void) FUN11(VAR9,*VAR5,VAR7);
            VAR81=(VAR16) FUN42(argv[VAR17+1]);
            VAR151=FUN84(*VAR5,*VAR8 == '' ? VAR27 :
              VAR24,VAR81,VAR7);
            if (VAR151 == (VAR4 *) NULL)
              {
                VAR11=VAR24;
                break;
              }
            *VAR5=FUN14(*VAR5);
            *VAR5=VAR151;
            break;
          }
        if (FUN10("",VAR8+1) == 0)
          {
            VAR4
              *VAR90,
              *VAR103,
              *VAR152,
              *VAR153;

            VAR16
              VAR154;

            VAR19=(-1);
            VAR154=(-2);
            if (*VAR8 != '')
              {
                VAR155
                  VAR156;

                VAR10
                  VAR157;

                VAR154=(-1);
                VAR157=FUN85(argv[VAR17+1],&VAR156);
                VAR19=(VAR16) VAR156.VAR158;
                if ((VAR157 & VAR159) != 0)
                  VAR154=(VAR16) VAR156.VAR160;
              }
            VAR90=FUN52(*VAR5,VAR19);
            VAR103=FUN52(*VAR5,VAR154);
            if ((VAR90 == (VAR4 *) NULL) || (VAR103 == (VAR4 *) NULL))
              {
                (void) FUN50(VAR7,FUN3(),
                  VAR104,"","",(*VAR5)->VAR26);
                VAR11=VAR24;
                break;
              }
            if (VAR90 == VAR103)
              break;
            VAR152=FUN36(VAR90,0,0,VAR27,VAR7);
            if (VAR152 == (VAR4 *) NULL)
              break;
            VAR153=FUN36(VAR103,0,0,VAR27,VAR7);
            if (VAR153 == (VAR4 *) NULL)
              {
                VAR152=FUN19(VAR152);
                break;
              }
            FUN86(&VAR90,VAR153);
            FUN86(&VAR103,VAR152);
            *VAR5=FUN54(VAR103);
            break;
          }
        break;
      }
      case '':
      {
        if (FUN10("",VAR8+1) == 0)
          {
            char
              VAR161[VAR135];

            VAR4
              *VAR162;

            VAR2
              *VAR163;

            (void) FUN11(VAR9,*VAR5,VAR7);
            (void) FUN87(VAR161,VAR135,"",
              argv[VAR17+1]);
            (void) FUN88(VAR161);
            VAR162=(*VAR5);
            if (*VAR8 == '')
              VAR162=FUN89(*VAR5,VAR7);
            VAR163=FUN4(VAR9);
            VAR11&=FUN90(VAR163,VAR162,argv[VAR17+1],VAR7);
            VAR163=FUN91(VAR163);
            if (*VAR8 == '')
              VAR162=FUN14(VAR162);
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
  VAR9=FUN91(VAR9);
  VAR11&=FUN9(VAR3,argc,argv,VAR7);
  return(VAR11 != 0 ? VAR27 : VAR24);
}