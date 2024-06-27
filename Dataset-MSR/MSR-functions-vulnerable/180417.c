MagickExport VAR1 FUN1(VAR2 *VAR3,const VAR4 *VAR5,
  VAR6 *VAR7)
{
#define VAR8  ""

  VAR9
    VAR10,
    VAR11;

  char
    VAR12[VAR13],
    VAR14[VAR13],
    VAR15[VAR13],
    *VAR16,
    *VAR17;

  const char
    *VAR18;

  VAR4
    **VAR19;

  VAR1
    VAR20;

  VAR21
    VAR22;

  double
    VAR23,
    VAR24,
    VAR25;

  VAR26
    VAR27;

  VAR28
    *VAR29;

  VAR30
    VAR31;

  register const char
    *VAR32;

  register VAR33
    VAR34,
    VAR35;

  VAR36
    VAR37;

  VAR38
    VAR39,
    VAR40,
    VAR41,
    VAR42;

  VAR33
    VAR43,
    VAR44,
    VAR45;

  VAR46
    *VAR47;

  
  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR48 == VAR49);
  if (VAR3->VAR50 != VAR51)
    (void) FUN2(VAR52,FUN3(),"",VAR3->VAR53);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR48 == VAR49);
  if (VAR3->VAR50 != VAR51)
    (void) FUN2(VAR52,FUN3(),"");
  if ((VAR5->VAR16 == (char *) NULL) ||
      (*VAR5->VAR16 == ''))
    return(VAR51);
  if (VAR3->VAR50 != VAR51)
    (void) FUN2(VAR54,FUN3(),"");
  if (*VAR5->VAR16 != '')
    VAR16=FUN4(VAR5->VAR16);
  else
    VAR16=FUN5(VAR5->VAR16+1,~0UL,VAR7);
  if (VAR16 == (char *) NULL)
    return(VAR51);
  VAR25=(double) strlen(VAR16);
  (void) FUN6(VAR3,"",VAR16);
  VAR45=0;
  VAR42=0;
  VAR47=(VAR46 *) NULL;
  
  VAR19=(VAR4 **) FUN7(
    sizeof(*VAR19));
  if (VAR19 == (VAR4 **) NULL)
    {
      VAR16=FUN8(VAR16);
      FUN9(VAR55,"",
        VAR3->VAR53);
    }
  VAR41=6553;
  VAR29=(VAR28 *) FUN10((VAR38) VAR41,
    sizeof(*VAR29));
  if (VAR29 == (VAR28 *) NULL)
    {
      VAR16=FUN8(VAR16);
      for ( ; VAR45 >= 0; VAR45--)
        VAR19[VAR45]=FUN11(VAR19[VAR45]);
      VAR19=(VAR4 **) FUN12(VAR19);
      FUN9(VAR55,"",
        VAR3->VAR53);
    }
  VAR19[VAR45]=FUN13((VAR56 *) NULL,VAR5);
  VAR19[VAR45]->VAR57=VAR3->VAR58;
  if ((VAR3->VAR58.VAR59 == 0) || (VAR3->VAR58.VAR60 == 0))
    {
      VAR19[VAR45]->VAR57.VAR59=VAR3->VAR61;
      VAR19[VAR45]->VAR57.VAR60=VAR3->VAR62;
    }
  VAR17=FUN4(VAR16);
  VAR39=strlen(VAR17)+VAR13;
  if (FUN14(VAR3,VAR63,VAR7) == VAR51)
    return(VAR51);
  VAR22=VAR64;
  for (VAR18=VAR16; *VAR18 != ''; )
  {
     

    FUN15(VAR18,&VAR18,VAR39,VAR12);


     if (*VAR12 == '')
       break;
     if (*VAR12 == '')
      {
        
        while ((*VAR18 != '') && (*VAR18 != ''))
          VAR18++;
        continue;
      }
    VAR32=VAR18-strlen(VAR12)-1;
    VAR31=VAR65;
    VAR11=VAR19[VAR45]->VAR10;
    FUN16(&VAR10);
    switch (*VAR12)
    {
      case '':
        break;
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR66=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR67=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR68=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR69=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR70=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR71=FUN18(VAR17,(char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR72;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR73;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR74;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN19(VAR17,VAR75,
              &VAR19[VAR45]->VAR76,VAR7);
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN20(&VAR19[VAR45]->VAR77,VAR17);
            (void) FUN21(VAR3,VAR19[VAR45],
              VAR19[VAR45]->VAR77,VAR7);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR78;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR78=FUN22(VAR79,VAR51,
              VAR17);
            if (VAR78 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR78=(VAR80) VAR78;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR81;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR81=FUN22(VAR82,VAR51,
              VAR17);
            if (VAR81 == -1)
              {
                VAR22=VAR51;
                break;
              }
            VAR19[VAR45]->VAR81=(VAR83) VAR81;
            if (VAR81 == VAR84)
              {
                FUN16(&VAR11);
                VAR10.VAR66=VAR5->VAR37.VAR85;
                VAR10.VAR69=VAR5->VAR37.VAR86;
                VAR10.VAR70=VAR5->VAR37.VAR87;
                VAR10.VAR71=VAR5->VAR37.VAR88;
                break;
              }
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR89;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR90;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR91;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR91=FUN22(VAR92,VAR51,
              VAR17);
            if (VAR91 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR91=(VAR93) VAR91;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN20(&VAR19[VAR45]->VAR94,VAR17);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR95;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR95=FUN22(VAR96,VAR51,
              VAR17);
            if (VAR95 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR95=(VAR97) VAR95;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR98;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN20(&VAR19[VAR45]->VAR99,VAR17);
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN23(VAR15,VAR13,"",VAR17);
            if (FUN24(VAR3,VAR15) != (const char *) NULL)
              (void) FUN25(VAR3,VAR5,VAR17,
                &VAR19[VAR45]->VAR100,VAR7);
            else
              {
                VAR22&=FUN19(VAR17,VAR75,
                  &VAR19[VAR45]->VAR101,VAR7);
                if (VAR22 == VAR51)
                  {
                    VAR56
                      *VAR102;

                    VAR102=FUN26();
                    (void) FUN27(VAR102->VAR53,VAR17,
                      VAR13);
                    VAR19[VAR45]->VAR100=FUN28(VAR102,
                      VAR7);
                    FUN29(VAR7);
                    VAR102=FUN30(VAR102);
                  }
              }
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR24=strchr(VAR17,'') != (char *) NULL ? 0.01 : 1.0;
            VAR19[VAR45]->VAR101.VAR103=(double) VAR104*
              VAR24*FUN18(VAR17,(char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR78;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR78=FUN22(VAR79,VAR51,
              VAR17);
            if (VAR78 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR78=(VAR80) VAR78;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN20(&VAR19[VAR45]->VAR105,VAR17);
            if (FUN17("",VAR17) == 0)
              VAR19[VAR45]->VAR105=(char *)
                FUN12(VAR19[VAR45]->VAR105);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN20(&VAR19[VAR45]->VAR106,VAR17);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR107=FUN18(VAR17,(char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR108;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR108=FUN22(VAR109,VAR51,VAR17);
            if (VAR108 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR108=(VAR110) VAR108;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR111;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR111=FUN22(VAR112,VAR51,VAR17);
            if (VAR111 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR111=(VAR113) VAR111;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR114;

             FUN15(VAR18,&VAR18,VAR39,VAR17);
             VAR114=FUN22(VAR115,VAR51,VAR17);
             if (VAR114 == -1)

              VAR114=FUN31(VAR17);


             VAR19[VAR45]->VAR114=(VAR38) VAR114;
             break;
           }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR116;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR116=FUN22(VAR117,VAR51,VAR17);
            if (VAR116 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR116=(VAR118) VAR116;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR119;

            VAR31=VAR120;
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR119=FUN22(VAR121,VAR51,VAR17);
            if (VAR119 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR119=(VAR122) VAR119;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR123=FUN18(VAR17,
              (char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR124=FUN18(VAR17,
              (char **) NULL);
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR125=FUN18(VAR17,(char **) NULL);
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          VAR31=VAR126;
        else
          VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR24=strchr(VAR17,'') != (char *) NULL ? 0.01 : 1.0;
            VAR19[VAR45]->VAR103=FUN32(VAR104*(1.0-((1.0-
              VAR127*VAR19[VAR45]->VAR103)*VAR24*
              FUN18(VAR17,(char **) NULL))));
            VAR19[VAR45]->VAR101.VAR103=(double) VAR19[VAR45]->VAR103;
            VAR19[VAR45]->VAR128.VAR103=(double) VAR19[VAR45]->VAR103;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR129;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR130;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR131;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR132;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (FUN17("",VAR17) == 0)
              break;
            if (FUN17("",VAR17) == 0)
              break;
            if (FUN17("",VAR17) == 0)
              break;
            if (FUN17("",VAR17) == 0)
              {
                if (VAR45 <= 0)
                  {
                    (void) FUN33(VAR7,FUN3(),
                      VAR133,"","",VAR17);
                    VAR45=0;
                    break;
                  }
                if (VAR19[VAR45]->VAR77 != (char *) NULL)
                  if (FUN17(VAR19[VAR45]->VAR77,
                      VAR19[VAR45-1]->VAR77) != 0)
                    (void) FUN34(VAR3,VAR134,(VAR2 *) NULL,
                      VAR7);
                VAR19[VAR45]=FUN11(VAR19[VAR45]);
                VAR45--;
                break;
              }
            if (FUN17("",VAR17) == 0)
              break;
            VAR22=VAR51;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (FUN17("",VAR17) == 0)
              {
                char
                  VAR135[VAR13];

                FUN15(VAR18,&VAR18,VAR39,VAR17);
                (void) FUN23(VAR135,VAR13,"",VAR17);
                for (VAR32=VAR18; *VAR18 != ''; )
                {
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                  if (FUN17(VAR17,"") != 0)
                    continue;
                  FUN15(VAR18,(const char **) NULL,VAR39,VAR17);
                  if (FUN17(VAR17,"") != 0)
                    continue;
                  break;
                }
                (void) FUN27(VAR17,VAR32,(VAR38) (VAR18-VAR32-4+1));
                (void) FUN6(VAR3,VAR135,VAR17);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                break;
              }
            if (FUN17("",VAR17) == 0)
              {
                char
                  VAR136[2*VAR13],
                  VAR135[VAR13],
                  VAR137[VAR13];

                VAR36
                  VAR138;

                FUN15(VAR18,&VAR18,VAR39,VAR17);
                (void) FUN27(VAR135,VAR17,VAR13);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                (void) FUN27(VAR137,VAR17,VAR13);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR138.VAR87=FUN18(VAR17,(char **) NULL);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR138.VAR88=FUN18(VAR17,(char **) NULL);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR138.VAR85=FUN18(VAR17,(char **) NULL);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR138.VAR86=FUN18(VAR17,(char **) NULL);
                if (FUN17(VAR137,"") == 0)
                  {
                    FUN15(VAR18,&VAR18,VAR39,VAR17);
                    if (*VAR17 == '')
                      FUN15(VAR18,&VAR18,VAR39,VAR17);
                  }
                for (VAR32=VAR18; *VAR18 != ''; )
                {
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                  if (FUN17(VAR17,"") != 0)
                    continue;
                  FUN15(VAR18,(const char **) NULL,VAR39,VAR17);
                  if (FUN17(VAR17,"") != 0)
                    continue;
                  break;
                }
                (void) FUN27(VAR17,VAR32,(VAR38) (VAR18-VAR32-4+1));
                VAR37.VAR87=VAR19[VAR45]->VAR10.VAR66*VAR138.VAR87+
                  VAR19[VAR45]->VAR10.VAR68*VAR138.VAR88+
                  VAR19[VAR45]->VAR10.VAR70;
                VAR37.VAR88=VAR19[VAR45]->VAR10.VAR67*VAR138.VAR87+
                  VAR19[VAR45]->VAR10.VAR69*VAR138.VAR88+
                  VAR19[VAR45]->VAR10.VAR71;
                VAR37.VAR85=VAR19[VAR45]->VAR10.VAR66*VAR138.VAR85+
                  VAR19[VAR45]->VAR10.VAR68*VAR138.VAR86+
                  VAR19[VAR45]->VAR10.VAR70;
                VAR37.VAR86=VAR19[VAR45]->VAR10.VAR67*VAR138.VAR85+
                  VAR19[VAR45]->VAR10.VAR69*VAR138.VAR86+
                  VAR19[VAR45]->VAR10.VAR71;
                (void) FUN23(VAR136,VAR13,"",VAR135);
                 (void) FUN6(VAR3,VAR136,VAR17);
                 (void) FUN23(VAR136,VAR13,"",VAR135);
                 (void) FUN6(VAR3,VAR136,VAR137);

                (void) FUN23(VAR136,VAR13,"",VAR135);




                 (void) FUN23(VAR14,VAR13,
                   "",
                   FUN35(FUN36(VAR37.VAR85-VAR37.VAR87+1.0),1.0),
                  FUN35(FUN36(VAR37.VAR86-VAR37.VAR88+1.0),1.0),
                  VAR37.VAR87,VAR37.VAR88);
                (void) FUN6(VAR3,VAR136,VAR14);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                break;
              }
            if (FUN17("",VAR17) == 0)
              {
                char
                  VAR136[2*VAR13],
                  VAR135[VAR13];

                VAR139
                  VAR140;

                FUN15(VAR18,&VAR18,VAR39,VAR17);
                (void) FUN27(VAR135,VAR17,VAR13);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR140.VAR35=(VAR33) FUN37(FUN18(VAR17,
                  (char **) NULL)-0.5);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR140.VAR141=(VAR33) FUN37(FUN18(VAR17,
                  (char **) NULL)-0.5);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR140.VAR59=(VAR38) FUN38(FUN18(VAR17,
                  (char **) NULL)+0.5);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                VAR140.VAR60=(VAR38) FUN38(FUN18(VAR17,
                  (char **) NULL)+0.5);
                for (VAR32=VAR18; *VAR18 != ''; )
                {
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                  if (FUN17(VAR17,"") != 0)
                    continue;
                  FUN15(VAR18,(const char **) NULL,VAR39,VAR17);
                  if (FUN17(VAR17,"") != 0)
                    continue;
                  break;
                }
                (void) FUN27(VAR17,VAR32,(VAR38) (VAR18-VAR32-4+1));
                (void) FUN23(VAR136,VAR13,"",VAR135);
                (void) FUN6(VAR3,VAR136,VAR17);
                (void) FUN23(VAR136,VAR13,"",
                  VAR135);
                (void) FUN23(VAR14,VAR13,
                  "",(double)VAR140.VAR59,
                  (double)VAR140.VAR60,(double)VAR140.VAR35,
                  (double)VAR140.VAR141);
                (void) FUN6(VAR3,VAR136,VAR14);
                FUN15(VAR18,&VAR18,VAR39,VAR17);
                break;
              }
            if (FUN17("",VAR17) == 0)
              {
                VAR45++;
                VAR19=(VAR4 **) FUN39(
                  VAR19,(VAR38) (VAR45+1),sizeof(*VAR19));
                if (VAR19 == (VAR4 **) NULL)
                  {
                    (void) FUN33(VAR7,FUN3(),
                      VAR55,"","",
                      VAR3->VAR53);
                    break;
                  }
                VAR19[VAR45]=FUN13((VAR56 *) NULL,
                  VAR19[VAR45-1]);
                break;
              }
            if (FUN17("",VAR17) == 0)
              break;
            VAR22=VAR51;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR142;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR23=FUN18(VAR17,(char **) NULL);
            VAR10.VAR66=FUN40(FUN41(FUN42((double) VAR23,360.0)));
            VAR10.VAR67=FUN43(FUN41(FUN42((double) VAR23,360.0)));
            VAR10.VAR68=(-FUN43(FUN41(FUN42((double) VAR23,360.0))));
            VAR10.VAR69=FUN40(FUN41(FUN42((double) VAR23,360.0)));
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR143;
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR66=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR69=FUN18(VAR17,(char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR23=FUN18(VAR17,(char **) NULL);
            VAR10.VAR68=FUN43(FUN41(VAR23));
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR23=FUN18(VAR17,(char **) NULL);
            VAR10.VAR67=(-FUN44(FUN41(VAR23)/2.0));
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR144
              VAR145;

            VAR42++;
            if (VAR42 == 1)
              VAR47=(VAR46 *) FUN10(2,sizeof(*VAR47));
            else if (VAR42 > 2)
              VAR47=(VAR46 *) FUN39(VAR47,VAR42,
                sizeof(*VAR47));
            if (VAR47 == (VAR46 *) NULL)
              {
                (void) FUN33(VAR7,FUN3(),
                  VAR55,"","",
                  VAR3->VAR53);
                break;
              }
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN19(VAR17,VAR75,&VAR145,
              VAR7);
            VAR47[VAR42-1].VAR146=VAR145;
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR47[VAR42-1].VAR147=FUN18(VAR17,(char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN23(VAR15,VAR13,"",VAR17);
            if (FUN24(VAR3,VAR15) != (const char *) NULL)
              (void) FUN25(VAR3,VAR5,VAR17,
                &VAR19[VAR45]->VAR148,VAR7);
            else
              {
                VAR22&=FUN19(VAR17,VAR75,
                  &VAR19[VAR45]->VAR128,VAR7);
                if (VAR22 == VAR51)
                  {
                    VAR56
                      *VAR102;

                    VAR102=FUN26();
                    (void) FUN27(VAR102->VAR53,VAR17,
                      VAR13);
                    VAR19[VAR45]->VAR148=FUN28(VAR102,
                      VAR7);
                    FUN29(VAR7);
                    VAR102=FUN30(VAR102);
                  }
              }
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR149=
              FUN45(VAR17) != 0 ? VAR64 : VAR51;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            if (VAR19[VAR45]->VAR150 != (double *) NULL)
              VAR19[VAR45]->VAR150=(double *)
                FUN12(VAR19[VAR45]->VAR150);
            if (FUN46(VAR18) != VAR51)
              {
                const char
                  *VAR151;

                VAR151=VAR18;
                FUN15(VAR151,&VAR151,VAR39,VAR17);
                if (*VAR17 == '')
                  FUN15(VAR151,&VAR151,VAR39,VAR17);
                for (VAR35=0; FUN46(VAR17) != VAR51; VAR35++)
                {
                  FUN15(VAR151,&VAR151,VAR39,VAR17);
                  if (*VAR17 == '')
                    FUN15(VAR151,&VAR151,VAR39,VAR17);
                }
                VAR19[VAR45]->VAR150=(double *)
                  FUN10((VAR38) (2UL*VAR35+1UL),
                  sizeof(*VAR19[VAR45]->VAR150));
                if (VAR19[VAR45]->VAR150 == (double *) NULL)
                  {
                    (void) FUN33(VAR7,FUN3(),
                      VAR55,"","",
                      VAR3->VAR53);
                    break;
                  }
                for (VAR43=0; VAR43 < VAR35; VAR43++)
                {
                  FUN15(VAR18,&VAR18,VAR39,VAR17);
                  if (*VAR17 == '')
                    FUN15(VAR18,&VAR18,VAR39,VAR17);
                  VAR19[VAR45]->VAR150[VAR43]=FUN18(VAR17,
                    (char **) NULL);
                  if (VAR19[VAR45]->VAR150[VAR43] < 0.0)
                    VAR22=VAR51;
                }
                if ((VAR35 & 0x01) != 0)
                  for ( ; VAR43 < (2*VAR35); VAR43++)
                    VAR19[VAR45]->VAR150[VAR43]=
                      VAR19[VAR45]->VAR150[VAR43-VAR35];
                VAR19[VAR45]->VAR150[VAR43]=0.0;
                break;
              }
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR152=FUN18(VAR17,
              (char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR153;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR153=FUN22(VAR154,VAR51,VAR17);
            if (VAR153 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR153=(VAR155) VAR153;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR156;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR156=FUN22(VAR157,VAR51,
              VAR17);
            if (VAR156 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR156=(VAR158) VAR156;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR159=FUN31(VAR17);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR24=strchr(VAR17,'') != (char *) NULL ? 0.01 : 1.0;
            VAR19[VAR45]->VAR128.VAR103=(double) VAR104*
              VAR24*FUN18(VAR17,(char **) NULL);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR160=FUN18(VAR17,
              (char **) NULL);
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            VAR31=VAR161;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR162;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR162=FUN22(VAR163,VAR51,VAR17);
            if (VAR162 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR162=(VAR164) VAR162;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            VAR33
              VAR162;

            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR162=FUN22(VAR163,VAR51,VAR17);
            if (VAR162 == -1)
              VAR22=VAR51;
            else
              VAR19[VAR45]->VAR162=(VAR164) VAR162;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR165=
              FUN45(VAR17) != 0 ? VAR64 : VAR51;
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            (void) FUN19(VAR17,VAR75,
              &VAR19[VAR45]->VAR166,VAR7);
            break;
          }
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR70=FUN18(VAR17,(char **) NULL);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR10.VAR71=FUN18(VAR17,(char **) NULL);
            break;
          }
        VAR22=VAR51;
        break;
      }
      case '':
      case '':
      {
        if (FUN17("",VAR12) == 0)
          {
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR57.VAR35=(VAR33) FUN37(FUN18(VAR17,
              (char **) NULL)-0.5);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR57.VAR141=(VAR33) FUN37(FUN18(VAR17,
              (char **) NULL)-0.5);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR57.VAR59=(VAR38) FUN38(FUN18(
              VAR17,(char **) NULL)+0.5);
            FUN15(VAR18,&VAR18,VAR39,VAR17);
            if (*VAR17 == '')
              FUN15(VAR18,&VAR18,VAR39,VAR17);
            VAR19[VAR45]->VAR57.VAR60=(VAR38) FUN38(FUN18(
              VAR17,(char **) NULL)+0.5);
            break;
          }
        VAR22=VAR51;
        break;
      }
      default:
      {
        VAR22=VAR51;
        break;
      }
    }
    if (VAR22 == VAR51)
      break;
    if ((VAR10.VAR66 != 1.0) || (VAR10.VAR67 != 0.0) || (VAR10.VAR68 != 0.0) ||
        (VAR10.VAR69 != 1.0) || (VAR10.VAR70 != 0.0) || (VAR10.VAR71 != 0.0))
      {
        VAR19[VAR45]->VAR10.VAR66=VAR11.VAR66*VAR10.VAR66+VAR11.VAR68*VAR10.VAR67;
        VAR19[VAR45]->VAR10.VAR67=VAR11.VAR67*VAR10.VAR66+VAR11.VAR69*VAR10.VAR67;
        VAR19[VAR45]->VAR10.VAR68=VAR11.VAR66*VAR10.VAR68+VAR11.VAR68*VAR10.VAR69;
        VAR19[VAR45]->VAR10.VAR69=VAR11.VAR67*VAR10.VAR68+VAR11.VAR69*VAR10.VAR69;
        VAR19[VAR45]->VAR10.VAR70=VAR11.VAR66*VAR10.VAR70+VAR11.VAR68*VAR10.VAR71+
          VAR11.VAR70;
        VAR19[VAR45]->VAR10.VAR71=VAR11.VAR67*VAR10.VAR70+VAR11.VAR69*VAR10.VAR71+
          VAR11.VAR71;
      }
    if (VAR31 == VAR65)
      {
        if (*VAR18 == '')
          {
            if (VAR42 > 1)
              {
                VAR167
                  VAR137;

              VAR137=VAR168;
              if (VAR5->VAR169.VAR137 == VAR170)
                VAR137=VAR170;
              (void) FUN47(VAR3,VAR137,VAR171,VAR47,VAR42,
                 VAR7);
             }
           if (VAR42 > 0)
             VAR47=(VAR46 *) FUN12(VAR47);
          }
        if (VAR3->VAR50 != VAR51)
          (void) FUN2(VAR54,FUN3(),"",
            (int) (VAR18-VAR32),VAR32);
        continue;
      }
    
    VAR34=0;
    VAR43=0;
    VAR29[0].VAR27.VAR35=0.0;
    VAR29[0].VAR27.VAR141=0.0;
    for (VAR35=0; *VAR18 != ''; VAR35++)
    {
      
      if (FUN46(VAR18) == VAR51)
        break;
      FUN15(VAR18,&VAR18,VAR39,VAR17);
      VAR27.VAR35=FUN18(VAR17,(char **) NULL);
      FUN15(VAR18,&VAR18,VAR39,VAR17);
      if (*VAR17 == '')
        FUN15(VAR18,&VAR18,VAR39,VAR17);
      VAR27.VAR141=FUN18(VAR17,(char **) NULL);
      FUN15(VAR18,(const char **) NULL,VAR39,VAR17);
      if (*VAR17 == '')
        FUN15(VAR18,&VAR18,VAR39,VAR17);
      VAR29[VAR34].VAR16=VAR31;
      VAR29[VAR34].VAR27=VAR27;
      VAR29[VAR34].VAR172=0;
      VAR29[VAR34].VAR173=VAR174;
      VAR34++;
      if (VAR34 < (VAR33) VAR41)
        continue;
      VAR41<<=1;
      VAR29=(VAR28 *) FUN39(VAR29,
        (VAR38) VAR41,sizeof(*VAR29));
      if (VAR29 == (VAR28 *) NULL)
        {
          (void) FUN33(VAR7,FUN3(),
            VAR55,"","",VAR3->VAR53);
          break;
        }
    }
    VAR29[VAR43].VAR16=VAR31;
    VAR29[VAR43].VAR172=(VAR38) VAR35;
    VAR29[VAR43].VAR173=VAR174;
    VAR29[VAR43].VAR175=(char *) NULL;
    
    VAR37.VAR87=VAR29[VAR43].VAR27.VAR35;
    VAR37.VAR88=VAR29[VAR43].VAR27.VAR141;
    VAR37.VAR85=VAR29[VAR43].VAR27.VAR35;
    VAR37.VAR86=VAR29[VAR43].VAR27.VAR141;
    for (VAR44=1; VAR44 < (VAR33) VAR29[VAR43].VAR172; VAR44++)
    {
      VAR27=VAR29[VAR43+VAR44].VAR27;
      if (VAR27.VAR35 < VAR37.VAR87)
        VAR37.VAR87=VAR27.VAR35;
      if (VAR27.VAR141 < VAR37.VAR88)
        VAR37.VAR88=VAR27.VAR141;
      if (VAR27.VAR35 > VAR37.VAR85)
        VAR37.VAR85=VAR27.VAR35;
      if (VAR27.VAR141 > VAR37.VAR86)
        VAR37.VAR86=VAR27.VAR141;
    }
    
    VAR40=VAR29[VAR43].VAR172;
    switch (VAR31)
    {
      case VAR142:
      {
        VAR40*=5;
        break;
      }
      case VAR143:
      {
        double
          VAR103,
          VAR176,
          VAR177;

        VAR103=VAR37.VAR85-VAR37.VAR87;
        VAR176=VAR37.VAR86-VAR37.VAR88;
        VAR177=FUN48((double) VAR103,(double) VAR176);
        VAR40*=5;
        VAR40+=2*((VAR38) FUN37((double) VAR178*VAR177))+6*VAR179+360;
        break;
      }
      case VAR74:
      {
        if (VAR29[VAR43].VAR172 > 107)
          (void) FUN33(VAR7,FUN3(),VAR133,
            "","",VAR17);
        VAR40=VAR179*VAR29[VAR43].VAR172;
        break;
      }
      case VAR129:
      {
        char
          *VAR180,
          *VAR181;

        FUN15(VAR18,&VAR18,VAR39,VAR17);
        VAR40=1;
        VAR181=VAR17;
        for (VAR180=VAR17; *VAR180 != ''; VAR180=VAR181)
        {
          double
            VAR182;

          VAR182=FUN18(VAR180,&VAR181);
          (void) VAR182;
          if (VAR180 == VAR181)
            {
              VAR181++;
              continue;
            }
          VAR40++;
        }
        VAR40=VAR40*VAR179/2;
        break;
      }
      case VAR89:
      case VAR73:
      case VAR98:
      {
        double
          VAR103,
          VAR176,
          VAR177;

        VAR103=VAR37.VAR85-VAR37.VAR87;
        VAR176=VAR37.VAR86-VAR37.VAR88;
        VAR177=FUN48((double) VAR103,(double) VAR176);
        VAR40=2*((VAR38) FUN37((double) VAR178*VAR177))+6*VAR179+360;
        break;
      }
      default:
        break;
    }
    if ((VAR38) (VAR34+VAR40) >= VAR41)
      {
        
        VAR41+=VAR40+1;
        VAR29=(VAR28 *) FUN39(VAR29,
          (VAR38) VAR41,sizeof(*VAR29));
        if (VAR29 == (VAR28 *) NULL)
          {
            (void) FUN33(VAR7,FUN3(),
              VAR55,"","",
              VAR3->VAR53);
            break;
          }
      }
    switch (VAR31)
    {
      case VAR130:
      default:
      {
        if (VAR29[VAR43].VAR172 != 1)
          {
            VAR22=VAR51;
            break;
          }
        FUN49(VAR29+VAR43,VAR29[VAR43].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR126:
      {
        if (VAR29[VAR43].VAR172 != 2)
          {
            VAR22=VAR51;
            break;
          }
        FUN50(VAR29+VAR43,VAR29[VAR43].VAR27,
          VAR29[VAR43+1].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR142:
      {
        if (VAR29[VAR43].VAR172 != 2)
          {
            VAR22=VAR51;
            break;
          }
        FUN51(VAR29+VAR43,VAR29[VAR43].VAR27,
          VAR29[VAR43+1].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR143:
      {
        if (VAR29[VAR43].VAR172 != 3)
          {
            VAR22=VAR51;
            break;
          }
        FUN52(VAR29+VAR43,VAR29[VAR43].VAR27,
          VAR29[VAR43+1].VAR27,VAR29[VAR43+2].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR73:
      {
        if (VAR29[VAR43].VAR172 != 3)
          {
            VAR31=VAR65;
            break;
          }
        FUN53(VAR29+VAR43,VAR29[VAR43].VAR27,
          VAR29[VAR43+1].VAR27,VAR29[VAR43+2].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR98:
      {
        if (VAR29[VAR43].VAR172 != 3)
          {
            VAR22=VAR51;
            break;
          }
        FUN54(VAR29+VAR43,VAR29[VAR43].VAR27,
          VAR29[VAR43+1].VAR27,VAR29[VAR43+2].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR89:
      {
        if (VAR29[VAR43].VAR172 != 2)
          {
            VAR22=VAR51;
            break;
          }
        FUN55(VAR29+VAR43,VAR29[VAR43].VAR27,
          VAR29[VAR43+1].VAR27);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR131:
        break;
      case VAR132:
      {
        VAR29[VAR34]=VAR29[VAR43];
        VAR29[VAR34].VAR172=0;
        VAR29[VAR43].VAR172++;
        VAR34++;
        break;
      }
      case VAR74:
      {
        if (VAR29[VAR43].VAR172 < 3)
          {
            VAR22=VAR51;
            break;
          }
        FUN56(VAR29+VAR43,VAR29[VAR43].VAR172);
        VAR34=(VAR33) (VAR43+VAR29[VAR43].VAR172);
        break;
      }
      case VAR129:
      {
        VAR34=(VAR33) (VAR43+FUN57(VAR29+VAR43,VAR17));
        break;
      }
      case VAR72:
      case VAR90:
      {
        VAR33
          VAR173;

        if (VAR29[VAR43].VAR172 != 1)
          {
            VAR22=VAR51;
            break;
          }
        FUN15(VAR18,&VAR18,VAR39,VAR17);
        VAR173=FUN22(VAR183,VAR51,VAR17);
        if (VAR173 == -1)
          VAR22=VAR51;
        else
          VAR29[VAR43].VAR173=(VAR184) VAR173;
        break;
      }
      case VAR161:
      {
        if (VAR29[VAR43].VAR172 != 1)
          {
            VAR22=VAR51;
            break;
          }
        if (*VAR17 != '')
          FUN15(VAR18,&VAR18,VAR39,VAR17);
        VAR29[VAR43].VAR175=FUN4(VAR17);
        break;
      }
      case VAR120:
      {
        if (VAR29[VAR43].VAR172 != 2)
          {
            VAR22=VAR51;
            break;
          }
        FUN15(VAR18,&VAR18,VAR39,VAR17);
        VAR29[VAR43].VAR175=FUN4(VAR17);
        break;
      }
    }
    if (VAR29 == (VAR28 *) NULL)
      break;
    if (VAR3->VAR50 != VAR51)
      (void) FUN2(VAR54,FUN3(),"",(int) (VAR18-VAR32),VAR32);
    if (VAR22 == VAR51)
      break;
    VAR29[VAR34].VAR16=VAR65;
    if (VAR34 == 0)
      continue;
    
    for (VAR34=0; VAR29[VAR34].VAR16 != VAR65; VAR34++)
    {
      VAR27=VAR29[VAR34].VAR27;
      VAR29[VAR34].VAR27.VAR35=VAR19[VAR45]->VAR10.VAR66*VAR27.VAR35+
        VAR19[VAR45]->VAR10.VAR68*VAR27.VAR141+VAR19[VAR45]->VAR10.VAR70;
      VAR29[VAR34].VAR27.VAR141=VAR19[VAR45]->VAR10.VAR67*VAR27.VAR35+
        VAR19[VAR45]->VAR10.VAR69*VAR27.VAR141+VAR19[VAR45]->VAR10.VAR71;
      VAR27=VAR29[VAR34].VAR27;
      if (VAR27.VAR35 < VAR19[VAR45]->VAR37.VAR87)
        VAR19[VAR45]->VAR37.VAR87=VAR27.VAR35;
      if (VAR27.VAR141 < VAR19[VAR45]->VAR37.VAR88)
        VAR19[VAR45]->VAR37.VAR88=VAR27.VAR141;
      if (VAR27.VAR35 > VAR19[VAR45]->VAR37.VAR85)
        VAR19[VAR45]->VAR37.VAR85=VAR27.VAR35;
      if (VAR27.VAR141 > VAR19[VAR45]->VAR37.VAR86)
        VAR19[VAR45]->VAR37.VAR86=VAR27.VAR141;
      if (VAR29[VAR34].VAR16 == VAR120)
        break;
      if (VAR34 >= (VAR33) VAR41)
        FUN58(VAR185,"");
    }
    if (VAR19[VAR45]->VAR186 != VAR51)
      {
        if ((VAR45 != 0) && (VAR19[VAR45]->VAR77 != (char *) NULL) &&
            (FUN17(VAR19[VAR45]->VAR77,
             VAR19[VAR45-1]->VAR77) != 0))
          VAR22&=FUN21(VAR3,VAR19[VAR45],
            VAR19[VAR45]->VAR77,VAR7);
        VAR22&=FUN59(VAR3,VAR19[VAR45],VAR29,
          VAR7);
      }
    if (VAR29->VAR175 != (char *) NULL)
      VAR29->VAR175=(char *) FUN12(
        VAR29->VAR175);
    VAR20=FUN60(VAR3,VAR8,VAR18-VAR16,(VAR187)
      VAR25);
    if (VAR20 == VAR51)
      break;
    if (VAR22 == 0)
      break;
  }
  if (VAR3->VAR50 != VAR51)
    (void) FUN2(VAR54,FUN3(),"");
  
  VAR17=FUN8(VAR17);
  if (VAR29 != (VAR28 *) NULL)
    VAR29=(VAR28 *) FUN12(VAR29);
  VAR16=FUN8(VAR16);
  for ( ; VAR45 >= 0; VAR45--)
    VAR19[VAR45]=FUN11(VAR19[VAR45]);
  VAR19=(VAR4 **) FUN12(VAR19);
  if (VAR22 == VAR51)
    FUN9(VAR133,"",
      VAR12);
  return(VAR22 != 0 ? VAR64 : VAR51);
}