WandPrivate VAR1 FUN1(VAR2 *VAR3,
  const char *VAR4,const char *VAR5,const char *VAR6)
{
  const char    
    *VAR7,
    *VAR8;

  VAR9
    *VAR10;

  VAR11
    VAR12;

  VAR13
    VAR14;

#define FUN2     (VAR3->VAR15.VAR16)
#define FUN3         (VAR3->VAR15.VAR17)
#define FUN4      (VAR3->VAR15.VAR18)
#define FUN5      (VAR3->VAR19)
#define FUN6  (VAR3->VAR20)
#define FUN7  (VAR3->VAR21)
#define FUN8    ((VAR22) VAR3->VAR23->VAR24)
#define FUN9      (*VAR4=='')
#define FUN10        (*VAR4!='')
#define IsNormalOp      VAR25 ? VAR26 : VAR27

  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR28 == VAR29);
  assert(VAR3->VAR15.VAR28 == VAR29);
  assert(VAR30 != (VAR9 *) NULL);             

  if (VAR3->VAR15.VAR31 != VAR27)
    (void) FUN11(VAR3,VAR32,FUN12(),
       ""%VAR33\""%VAR33\"", VAR4,
       VAR5 == (const char *) NULL ? "" : VAR5,
       VAR6 == (const char *) NULL ? "" : VAR6);

  VAR7 = VAR5;
  VAR8 = VAR6;

  
  if ( (((VAR34 & VAR35) != 0 )
        || ((VAR36 & VAR37) != 0)
       )  && ((VAR36 & VAR38) == 0) ) {
    
    if (VAR5 != (char *) NULL) {
      VAR7=FUN13(VAR39,VAR30,VAR5,VAR40);
      if (VAR7 == (char *) NULL) {
        FUN14(VAR41,"",VAR4);
        VAR7=VAR5;  
      }
    }
    if (VAR6 != (char *) NULL) {
      VAR8=FUN13(VAR39,VAR30,VAR6,VAR40);
      if (VAR8 == (char *) NULL) {
        FUN14(VAR41,"",VAR4);
        VAR8=VAR6;  
      }
    }
  }
#undef VAR34
#undef VAR36

  VAR12=VAR26;
  VAR10=FUN15();

  switch (*(VAR4+1))
  {
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          VAR10=FUN17(VAR30,VAR42,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          FUN18("");
          (void) FUN1(VAR3,"","",
            NULL);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          VAR10=FUN20(VAR30,VAR7,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR9
            *VAR44;

          
          VAR10=FUN21(&VAR30);
          VAR44=FUN22(&VAR30);
          
          if (VAR44 == (VAR9 *) NULL)
            break;
          (void) FUN23(VAR10,VAR44,VAR10->VAR45,
            VAR40);
          VAR44=FUN24(VAR44);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR10=FUN25(VAR30,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR14=(VAR13) VAR30->VAR46;
          if (VAR30->VAR47 < FUN26(VAR30))
            VAR14=VAR48;
          if ( VAR49 )
            VAR14=FUN27(VAR50,VAR27,VAR7);
          if (VAR14 < 0)
            FUN28(VAR43,"",VAR4,
              VAR7);
          VAR10=FUN29(VAR30,(VAR51) VAR14,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          double
            VAR52;

          VAR9
            *VAR53,
            *VAR54;

          VAR55
            VAR56;

          
          VAR53=FUN21(&VAR30);
          VAR54=FUN21(&VAR30);
          
          if (VAR54 == (VAR9 *) NULL)
            { 
              VAR53=FUN24(VAR53);
              break;
            }
          VAR56=VAR57;
          VAR4=FUN30(VAR39,"");
          if (VAR4 != (const char *) NULL)
            VAR56=(VAR55) FUN27(VAR58,
              VAR27,VAR4);
          VAR10=FUN31(VAR53,VAR54,VAR56,&VAR52,
            VAR40);
          (void) VAR52;
          VAR54=FUN24(VAR54);
          VAR53=FUN24(VAR53);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR14=FUN27(VAR59,VAR27,VAR7);
          if (VAR14 < 0)
            FUN28(VAR43,"",
              VAR4,VAR7);
          VAR10=FUN32(VAR30,(VAR60) VAR14,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR61
            VAR62;

          const char*
            VAR63;

          VAR1
            VAR64;

          VAR9
            *VAR65,
            *VAR66;

          VAR67
            VAR68;

          
          VAR63=FUN30(VAR39,"");
          if (VAR63 == (const char *) NULL)
            VAR62=VAR69;  
          else
            VAR62=(VAR61) FUN27(VAR70,
              VAR27,VAR63);

          
          VAR64=FUN33(VAR62);
          VAR63=FUN30(VAR39,"");
          if (VAR63 != (const char *) NULL)
            VAR64=FUN34(VAR63);
          VAR63=FUN30(VAR39,"");
          if (VAR63 != (const char *) NULL)
            VAR64=FUN35(VAR63);  

          VAR10=FUN21(&VAR30);
          VAR66=FUN21(&VAR30);
          if (VAR66 == (VAR9 *) NULL)
            break; 

          
          if (VAR66->VAR68 != (char *) NULL)
            {
              VAR67
                VAR71;

              (void) FUN36(VAR66,VAR66->VAR68,
                &VAR71,VAR40);
              if ((VAR66->VAR72 != VAR71.VAR73) ||
                  (VAR66->VAR74 != VAR71.VAR75))
                {
                  VAR9
                    *VAR76;

                  VAR76=FUN37(VAR66,VAR71.VAR73,
                    VAR71.VAR75,VAR66->VAR77,VAR40);
                  if (VAR76 != (VAR9 *) NULL)
                    {
                      VAR66=FUN24(VAR66);
                      VAR66=VAR76;
                    }
                }
            }
          FUN38(VAR66,&VAR68);
          (void) FUN39(VAR66->VAR68,&VAR68);
          FUN40(VAR10->VAR72,VAR10->VAR74,
            VAR10->VAR78, &VAR68);
          VAR65=FUN21(&VAR30);
          if (VAR65 == (VAR9 *) NULL)
            VAR12&=FUN41(VAR10,VAR66,VAR62,VAR64,
              VAR68.VAR79,VAR68.VAR80,VAR40);
          else
            {
              if ((VAR62 == VAR81) ||
                  (VAR62 == VAR82))
                {
                  VAR12&=FUN41(VAR66,VAR65,
                    VAR83,VAR26,0,0,VAR40);
                  VAR12&=FUN41(VAR10,VAR66,VAR62,
                    VAR64,VAR68.VAR79,VAR68.VAR80,VAR40);
                }
              else
                {
                  VAR9
                    *VAR84;

                  VAR84=FUN42(VAR10,0,0,VAR26,VAR40);
                  if (VAR84 == (VAR9 *) NULL)
                    break;
                  VAR12&=FUN41(VAR10,VAR66,VAR62,
                    VAR64,VAR68.VAR79,VAR68.VAR80,VAR40);
                  VAR12&=FUN41(VAR10,VAR65,
                    VAR85,VAR26,0,0,VAR40);
                  VAR12&=FUN41(VAR84,VAR10,VAR69,
                    VAR64,0,0,VAR40);
                  VAR10=FUN43(VAR10);
                  VAR10=VAR84;
                }
              VAR65=FUN24(VAR65);
            }
          VAR66=FUN24(VAR66);
          break;
        }
        if (FUN16("",VAR4+1) == 0)
          {
            VAR9
              *VAR66;

            VAR86
              VAR87;

            VAR67
              VAR68;

            
            if (FUN44(VAR7) == VAR27)
              FUN28(VAR43,"",VAR4,VAR7);
            if (FUN44(VAR8) == VAR27)
              FUN28(VAR43,"",VAR4,VAR7);
            (void) FUN45(VAR30,VAR8,&VAR68,VAR40);
            VAR87.VAR79=VAR68.VAR79;
            VAR87.VAR80=VAR68.VAR80;
            VAR66=VAR30;
            if (VAR66->VAR88 != (VAR9 *) NULL)
              VAR66=VAR66->VAR88;
            (void) FUN45(VAR66,VAR7,&VAR68,VAR40);
            (void) FUN46(VAR30,VAR66,&VAR68,&VAR87,
              VAR40);
            break;
          }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          FUN18("");
          (void) FUN1(VAR3,"","",NULL);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          if (VAR25)
            FUN47(&VAR30,VAR7,VAR40);
          else
            FUN47(&VAR30,"",VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          if (VAR25)
            {
              const char
                *VAR89;

              VAR90
                VAR91;

              if (FUN44(VAR7) == VAR27)
                FUN28(VAR43,"",VAR4,
                      VAR7);
              VAR91=(VAR90) FUN48(VAR7);
              VAR89=strchr(VAR7,'');
              if (VAR89 == (const char *) NULL)
                VAR10=FUN49(VAR30,VAR91,"",
                  VAR40);
              else
                VAR10=FUN49(VAR30,VAR91,VAR89,
                  VAR40);
            }
          else
            VAR10=FUN49(VAR30,1,"",VAR40);
          FUN50(&VAR30, VAR10);
          VAR10=(VAR9 *) NULL;
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          VAR14=FUN27(VAR92,VAR27,VAR7);
          if (VAR14 < 0)
            FUN28(VAR43,"",
              VAR4,VAR7);
          VAR10=FUN51(VAR30,(VAR93) VAR14,
            VAR40);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          VAR10=FUN52(VAR30,VAR42,
           VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          
          (void) FUN1(VAR3,"",VAR4+1,NULL);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR10=FUN53(VAR30,VAR7,VAR40);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          
          VAR9
            *VAR94;

          VAR10=FUN21(&VAR30);
          VAR94=FUN22(&VAR30);
          if (VAR94 == (VAR9 *) NULL)
            break;
          (void) FUN54(VAR10,VAR94,VAR40);
          VAR94=FUN24(VAR94);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          VAR9
            *VAR95,
            *VAR96;

           VAR95=FUN21(&VAR30);
           VAR96=FUN21(&VAR30);
          
           if (VAR96 == (VAR9 *) NULL)
             break;
           VAR10=FUN55(VAR95,VAR96,
             VAR42,VAR40);
           VAR95=FUN24(VAR95);
           VAR96=FUN24(VAR96);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR9
            *VAR97,
            *VAR98;

          VAR13
            VAR99;

          if (VAR25 && (FUN44(VAR7) == VAR27))
            FUN28(VAR43,"",VAR4,VAR7);
          VAR99=0;
          VAR97=FUN22(&VAR30);
          if (VAR25)
            VAR99=(VAR13) FUN48(VAR7);
          VAR98=VAR97;
          if (VAR99 == 0)
            FUN56(&VAR30,VAR97);
          else if (VAR99 == (VAR13) FUN26(VAR30))
            FUN50(&VAR30,VAR97);
          else
             {
                VAR98=FUN57(VAR30,VAR99-1);
                if (VAR98 == (VAR9 *) NULL)

                 FUN28(VAR43,"",VAR4,VAR7);








               FUN58(&VAR98,VAR97);
             }
           VAR30=FUN59(VAR98);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          VAR14=FUN27(VAR100,VAR27,VAR7);
          if ( VAR14 < 0 )
            FUN28(VAR43,"",
                 VAR4,VAR7);
          switch ((VAR101) VAR14)
          {
            case VAR102:
            {
              VAR10=FUN25(VAR30,VAR40);
              break;
            }
            case VAR103:
            case VAR104:
            case VAR105:
            default:
            {
              VAR10=FUN60(VAR30,(VAR101) VAR14,
                   VAR40);
              break;
            }
            case VAR106:
            case VAR107:
            case VAR108:
            case VAR109:
            {
              VAR10=FUN61(VAR30,(VAR101) VAR14,
                VAR40);
              break;
            }
            case VAR110:
            {
              VAR10=FUN62(VAR30,VAR40);
              break;
            }
            case VAR111:
            {
              VAR10=FUN63(VAR30,VAR40);
              break;
            }
            case VAR112:
            {
              VAR10=FUN64(VAR30,VAR40);
              break;
            }
            case VAR113:
            {
              FUN65(VAR30,VAR40);
              break;
            }
            case VAR114:
            {
              FUN66(&VAR30,VAR40);
              break;
            }
            case VAR115:
            {
              FUN67(&VAR30,VAR40);
              break;
            }
            case VAR116:
            { 
              VAR10=FUN25(VAR30,VAR40);
              if (VAR10 == (VAR9 *) NULL)
                break;
              VAR30=FUN43(VAR30);
              VAR30=FUN63(VAR10,VAR40);
              if (VAR30 == (VAR9 *) NULL)
                break;
              VAR10=FUN43(VAR10);
              FUN65(VAR30,VAR40);
              (void) FUN68(VAR117,VAR30,(VAR9 *) NULL,
                VAR40);
              break;
            }
            case VAR118:
            {
              VAR9
                *VAR119;

              VAR67
                VAR68;

              VAR61
                VAR62;

              const char*
                VAR63;

              VAR63=FUN30(VAR39,"");
              VAR62=VAR69;  
              if (VAR63 != (const char *) NULL)
                VAR62=(VAR61) FUN27(
                      VAR70,VAR27,VAR63);

              
              VAR119=VAR30;
              while (VAR119 != (VAR9 *) NULL)
              {
                VAR119=FUN69(VAR119);
                if ((VAR119 != (VAR9 *) NULL) &&
                    (FUN16(VAR119->VAR120,"") == 0))
                  break;
              }
              if (VAR119 != (VAR9 *) NULL)
                {
                  if ((FUN70(VAR119) == (VAR9 *) NULL) ||
                      (FUN69(VAR119) == (VAR9 *) NULL))
                    VAR119=(VAR9 *) NULL;
                  else
                    { 
                      VAR119=FUN71(VAR119->VAR121);
                      FUN72(&VAR119);
                    }
                }
              if (VAR119 == (VAR9 *) NULL)
                {
                  (void) FUN73(VAR40,FUN12(),
                    VAR43,"","");
                  break;
                }
              
              FUN38(VAR30,&VAR68);
              (void) FUN39(VAR30->VAR68,&VAR68);
              VAR68.VAR73=VAR119->VAR122.VAR73 != 0 ?
                VAR119->VAR122.VAR73 : VAR119->VAR72;
              VAR68.VAR75=VAR119->VAR122.VAR75 != 0 ?
               VAR119->VAR122.VAR75 : VAR119->VAR74;
              FUN40(VAR30->VAR122.VAR73 != 0 ?
                VAR30->VAR122.VAR73 : VAR30->VAR72,
                VAR30->VAR122.VAR75 != 0 ? VAR30->VAR122.VAR75 :
                VAR30->VAR74,VAR30->VAR78,&VAR68);

              
              FUN74(VAR30,VAR62,VAR119,VAR68.VAR79,VAR68.VAR80,
                VAR40);
              VAR119=FUN43(VAR119);
              break;
            }
          }
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          FUN18("");
          (void) FUN68(VAR117,VAR30,(VAR9 *) NULL,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          (void) FUN75(VAR39,VAR4+1,VAR7);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR9
            *VAR123;

          if (FUN44(VAR7) == VAR27)
            FUN28(VAR43,"",VAR4,VAR7);
          VAR123=FUN76(VAR30,FUN77(VAR7),
            VAR40);
          if (VAR123 == (VAR9 *) NULL)
            break;
          VAR30=FUN43(VAR30);
          VAR30=VAR123;
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          
          (void) FUN1(VAR3,"",VAR4+1,NULL);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          double
            *VAR124;

          VAR13
            VAR125;

          
          VAR124 = FUN78(VAR7,&VAR125,VAR40);
          if (VAR124 == (double *) NULL )
            FUN28(VAR43,"",VAR4,VAR7);
          VAR10=FUN79(VAR30,(VAR90) (VAR125 >> 1),VAR124,
           VAR40);
          VAR124=(double *) FUN80(VAR124);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          
          char
            **VAR126;

          int
            VAR127,
            VAR128;

          VAR126=FUN81(VAR7,&VAR128);
          if (VAR126 == (char **) NULL)
            break;
          if (strchr(VAR126[1],'') != (char *) NULL)
            {
              char
                VAR129,
                VAR130,
                *VAR131;

              const char
                *VAR126;

              int
                VAR88,
                VAR12;

              VAR90
                VAR132;

              VAR133
                *VAR134;

              
              assert(VAR7 != (const char *) NULL);
              VAR132=strlen(VAR7);
              VAR131=(char *) NULL;
              if (~VAR132 >= (VAR135-1))
                VAR131=(char *) FUN82(VAR132+VAR135,
                  sizeof(*VAR131));
              if (VAR131 == (char *) NULL)
                break;
              VAR88=0;
              VAR126=VAR7;
              VAR134=FUN83();
              VAR12=FUN84(VAR134,0,VAR131,VAR132,VAR126,"","",
                """,'',&VAR129,&VAR88,&VAR130);
              VAR134=FUN85(VAR134);
              if (VAR12 == 0)
                {
                  const char
                    *argv;

                  argv=(&(VAR126[VAR88]));
                  (void) FUN86(VAR131,&VAR30,1,&argv,
                    VAR40);
                }
              VAR131=FUN87(VAR131);
              break;
            }
          (void) FUN88(&VAR126[1],"","");
          (void) FUN86(VAR126[1],&VAR30,
            VAR128-2,(const char **) VAR126+2,VAR40);
          for (VAR127=0; VAR127 < VAR128; VAR127++)
            VAR126[VAR127]=FUN87(VAR126[VAR127]);
          VAR126=(char **) FUN80(VAR126);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          (void) FUN68(VAR117,VAR30,(VAR9 *) NULL,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          FUN89(&VAR30);
          break;
        }
      FUN19(VAR43,"",VAR4);
    }
    case '':
    {
      if (FUN16("",VAR4+1) == 0)
        {
          
          VAR13
            VAR87;

          if (FUN44(VAR7) == VAR27)
            FUN28(VAR43,"",VAR4,VAR7);
          VAR87=(VAR13) FUN48(VAR7);
          VAR10=FUN90(VAR30,VAR42,VAR87,VAR40);
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
          VAR9
            *VAR136,
            *VAR137;

          const char
            *VAR63;

          VAR55
            VAR56;

          double
            VAR138;

          VAR67
            VAR87;

          VAR136=FUN57(VAR30,0);
          VAR137=FUN57(VAR30,1);

          
          VAR56=VAR57;
          VAR63=FUN30(VAR39,"");
          if (VAR63 != (const char *) NULL)
            VAR56=(VAR55) FUN27(VAR58,
              VAR27,VAR63);

          VAR10=FUN91(VAR136,VAR137,VAR56,0.0,
            &VAR87,&VAR138,VAR40);

          if (VAR10 != (VAR9 *) NULL)
            {
              char
                VAR139[VAR135];

              (void) FUN92(VAR139,VAR135,"",
                VAR138);
              (void) FUN93(VAR10,"",VAR139,
                VAR40);
              (void) FUN92(VAR139,VAR135,"",(long)
                VAR87.VAR79);
              (void) FUN93(VAR10,"",VAR139,
                VAR40);
              (void) FUN92(VAR139,VAR135,"",(long)
                VAR87.VAR80);
              (void) FUN93(VAR10,"",VAR139,
                VAR40);
              (void) FUN92(VAR139,VAR135,
                "",(unsigned long) VAR87.VAR73,(unsigned long)
                VAR87.VAR75,(long) VAR87.VAR79,(long) VAR87.VAR80);
              (void) FUN93(VAR10,"",VAR139,
                VAR40);
            }
          break;
        }
      if (FUN16("",VAR4+1) == 0)
        {
        VAR9
          *VAR89,
          *VAR140,
          *VAR141;

        VAR13
          VAR99,
          VAR142;

        VAR99=(-1);
        VAR142=(-2);
        if (VAR25) {
          VAR143
            VAR144;

          VAR11
            VAR24;

          VAR142=(-1);
          VAR24=FUN94(VAR7,&VAR144);
          if ((VAR24 & VAR145) == 0)
            FUN28(VAR43,"",VAR4,VAR7);
          VAR99=(VAR13) VAR144.VAR146;
          if ((VAR24 & VAR147) != 0)
            VAR142=(VAR13) VAR144.VAR148;
        }
        VAR89=FUN57(VAR30,VAR99);
        VAR140=FUN57(VAR30,VAR142);
        if ((VAR89 == (VAR9 *) NULL) || (VAR140 == (VAR9 *) NULL)) {
          if (VAR25)
            FUN28(VAR43,"",VAR4,VAR7)
          else
            FUN19(VAR43,"",VAR4);
        }
        if (VAR89 == VAR140)
          FUN28(VAR43,"",VAR4,VAR7);
        VAR141=FUN42(VAR89,0,0,VAR26,VAR40);
        if (VAR141 == (VAR9 *) NULL)
          FUN28(VAR149,"",
            VAR4,FUN95(VAR150));
        FUN96(&VAR89,FUN42(VAR140,0,0,VAR26,VAR40));
        FUN96(&VAR140,VAR141);
        VAR30=FUN59(VAR140);
        break;
      }
      FUN19(VAR43,"",VAR4);
    }
    default:
      FUN19(VAR43,"",VAR4);
  }

  
  if (VAR7 != VAR5 )
    VAR7=FUN87((char *)VAR7);
  if (VAR8 != VAR6 )
    VAR8=FUN87((char *)VAR8);

  
  if (VAR10 == (VAR9 *) NULL)
    return(VAR12 == 0 ? VAR27 : VAR26);
  VAR30=FUN43(VAR30);
  VAR30=FUN59(VAR10);
  return(VAR12 == 0 ? VAR27 : VAR26);

#undef VAR39
#undef VAR30
#undef VAR40
#undef VAR151
#undef VAR117
#undef VAR25
#undef VAR49
#undef VAR42
}