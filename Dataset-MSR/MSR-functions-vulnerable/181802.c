static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  const char
    *VAR6;

  float
    *VAR7,
    VAR8,
    VAR9,
    VAR10,
    VAR11;

  VAR1
    *VAR12;

  int
    VAR13;

  VAR14
    VAR15;

  VAR16
    VAR17;

  VAR18
    *VAR19;

  VAR20
    VAR21;

  register VAR22
    VAR23;

  VAR24
    VAR25;

  VAR22
    VAR26;

  VAR27
    *VAR28;

  VAR29
    VAR30;

  VAR31
    VAR32,
    VAR33,
    VAR34,
    VAR35,
    VAR36,
    VAR37,
    VAR38,
    VAR39,
    VAR40,
    VAR41,
    *VAR42,
    VAR43,
    VAR44,
    VAR45,
    VAR46;

  VAR47
    VAR48,
    VAR49,
    VAR50;

  unsigned char
    *VAR51;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR52 == VAR53);
  if (VAR3->VAR54 != VAR55)
    (void) FUN2(VAR56,FUN3(),"",
      VAR3->VAR57);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR52 == VAR53);
  VAR12=FUN4(VAR3);
  VAR15=FUN5(VAR3,VAR12,VAR58,VAR5);
  if (VAR15 == VAR55)
    {
      VAR12=FUN6(VAR12);
      return((VAR1 *) NULL);
    }
  (void) FUN7(VAR59,VAR5);
  VAR28=FUN8(VAR12->VAR57,"",(VAR60) VAR12,VAR61,
    VAR62,VAR63,VAR64,VAR65,VAR66,
    VAR67);
  if (VAR28 == (VAR27 *) NULL)
    {
      VAR12=FUN6(VAR12);
      return((VAR1 *) NULL);
    }
  if (VAR3->VAR68 != 0)
    {
      
      if (VAR3->VAR69 < (VAR24)FUN9(VAR28))
        {
          for (VAR23=0; VAR23 < (VAR22) VAR3->VAR69; VAR23++)
          {
            VAR15=FUN10(VAR28) != 0 ? VAR70 : VAR55;
            if (VAR15 == VAR55)
              {
                FUN11(VAR28);
                VAR12=FUN6(VAR12);
                return((VAR1 *) NULL);
              }
            FUN12(VAR3,VAR12);
            if (FUN13(VAR12) == (VAR1 *) NULL)
              {
                FUN11(VAR28);
                VAR12=FUN6(VAR12);
                return((VAR1 *) NULL);
              }
            VAR12=FUN14(VAR12);
          }
        }
    }
  do
  {
FUN15(4127)
    if (0 && (VAR3->VAR71 != VAR55))
      FUN16(VAR28,VAR72,VAR55);
VAR73
    if ((FUN17(VAR28,VAR74,&VAR50) != 1) ||
        (FUN17(VAR28,VAR75,&VAR48) != 1) ||
        (FUN18(VAR28,VAR76,&VAR32) != 1) ||
        (FUN18(VAR28,VAR77,&VAR34) != 1) ||
        (FUN18(VAR28,VAR78,&VAR36) != 1) ||
        (FUN18(VAR28,VAR79,&VAR44) != 1) ||
        (FUN18(VAR28,VAR80,&VAR33) != 1) ||
        (FUN18(VAR28,VAR81,&VAR43) != 1) ||
        (FUN18(VAR28,VAR82,&VAR38) != 1) ||
        (FUN18(VAR28,VAR83,&VAR37) != 1) ||
        (FUN18(VAR28,VAR84,&VAR41) != 1))
      {
        FUN11(VAR28);
        FUN19(VAR85,"");
      }
    if (VAR43 == VAR86)
      (void) FUN20(VAR12,"","");
    switch (VAR41)
    {
      case VAR87:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR88:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR89:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR90:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR91:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR92:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR93:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
#if FUN21(VAR94)
      case VAR94:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
#endif
      case VAR95:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      case VAR96:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
      default:
      {
        (void) FUN20(VAR12,"","");
        break;
      }
    }
    if (VAR12->VAR54 != VAR55)
      {
        (void) FUN2(VAR97,FUN3(),"",
          (unsigned int) VAR50,(unsigned int) VAR48);
        (void) FUN2(VAR97,FUN3(),"",
          VAR36);
        (void) FUN2(VAR97,FUN3(),
          "",VAR33);
        (void) FUN2(VAR97,FUN3(),
          "",VAR38);
        (void) FUN2(VAR97,FUN3(),
          "",VAR37);
        (void) FUN2(VAR97,FUN3(),""
          "",FUN22(VAR12,""));
      }
    VAR12->VAR98=(VAR24) VAR50;
    VAR12->VAR99=(VAR24) VAR48;
    VAR12->VAR100=(VAR24) VAR33;
    VAR15=FUN23(VAR12,VAR12->VAR98,VAR12->VAR99);
    if (VAR15 == VAR55)
      {
        FUN24(VAR5,&VAR12->VAR5);
        return(FUN6(VAR12));
      }
    if (VAR12->VAR54 != VAR55)
      (void) FUN2(VAR97,FUN3(),"",
        (double) VAR12->VAR100);
    VAR12->VAR34=VAR101;
    if (VAR34 == VAR102)
      VAR12->VAR34=VAR103;
#if FUN21(VAR104)
    if (FUN25(VAR28) == 0)
      {
        (void) FUN20(VAR12,"","");
        VAR12->VAR34=VAR103;
      }
    else
      {
        (void) FUN20(VAR12,"","");
        VAR12->VAR34=VAR101;
      }
#endif
    if ((VAR41 == VAR87) ||
        (VAR41 == VAR88))
      FUN26(VAR12,VAR105);
    if (VAR41 == VAR95)
      FUN26(VAR12,VAR106);
    if (VAR41 == VAR91)
      FUN26(VAR12,VAR107);
    FUN27(VAR28,VAR12,VAR3->VAR108);
    FUN28(VAR28,VAR12);
    VAR6=FUN29(VAR3,"");
    if ((VAR6 == (const char *) NULL) ||
        (FUN30(VAR6) != VAR55))
      FUN31(VAR28,VAR12);
    if ((FUN18(VAR28,VAR109,&VAR10) == 1) &&
        (FUN18(VAR28,VAR110,&VAR11) == 1))
      {
        VAR12->VAR10=VAR10;
        VAR12->VAR11=VAR11;
      }
    if (FUN18(VAR28,VAR111,&VAR45) == 1)
      {
        if (VAR45 == VAR112)
          VAR12->VAR45=VAR113;
        if (VAR45 == VAR114)
          VAR12->VAR45=VAR115;
      }
    if ((FUN18(VAR28,VAR116,&VAR8) == 1) &&
        (FUN18(VAR28,VAR117,&VAR9) == 1))
      {
        VAR12->VAR118.VAR119=(VAR22) FUN32(VAR8*VAR12->VAR10-0.5);
        VAR12->VAR118.VAR26=(VAR22) FUN32(VAR9*VAR12->VAR11-0.5);
      }
    if (FUN18(VAR28,VAR120,&VAR39) == 1)
      VAR12->VAR39=(VAR121) VAR39;
    if (FUN17(VAR28,VAR122,&VAR7) == 1)
      {
        if (VAR7 != (float *) NULL)
          {
            VAR12->VAR7.VAR123.VAR119=VAR7[0];
            VAR12->VAR7.VAR123.VAR26=VAR7[1];
          }
      }
    if (FUN17(VAR28,VAR124,&VAR7) == 1)
      {
        if (VAR7 != (float *) NULL)
          {
            VAR12->VAR7.VAR125.VAR119=VAR7[0];
            VAR12->VAR7.VAR125.VAR26=VAR7[1];
            VAR12->VAR7.VAR126.VAR119=VAR7[2];
            VAR12->VAR7.VAR126.VAR26=VAR7[3];
            VAR12->VAR7.VAR127.VAR119=VAR7[4];
            VAR12->VAR7.VAR127.VAR26=VAR7[5];
          }
      }
#if FUN21(VAR128) || (VAR129 > 20040919)
    if ((VAR32 != VAR130) &&
        (FUN33(VAR32) == 0))
      {
        FUN11(VAR28);
        FUN19(VAR131,"");
      }
#endif
    switch (VAR32)
    {
      case VAR130: VAR12->VAR132=VAR133; break;
      case VAR134: VAR12->VAR132=VAR135; break;
      case VAR136: VAR12->VAR132=VAR137; break;
      case VAR138:
      {
         VAR12->VAR132=VAR139;
#if FUN21(VAR140)
         {
           char
             VAR141[VAR142];

           int
             VAR13;

           VAR31
             VAR143,
             VAR144;

           VAR13=FUN18(VAR28,VAR145,
             &VAR143,&VAR144);
           if (VAR13 == 1)
             {
               (void) FUN34(VAR141,VAR142,"",
                 VAR143,VAR144);
               (void) FUN20(VAR12,"",
                 VAR141);
               (void) FUN2(VAR97,FUN3(),
                 "",VAR141);
             }
         }
#endif
        break;
      }
      case VAR146: VAR12->VAR132=VAR139; break;
#if FUN21(VAR147)
      case VAR147: VAR12->VAR132=VAR148; break;
#endif
      case VAR149: VAR12->VAR132=VAR150; break;
      case VAR151: VAR12->VAR132=VAR152; break;
      case VAR153: VAR12->VAR132=VAR152; break;
      default: VAR12->VAR132=VAR154; break;
    }
    
    VAR19=FUN35(VAR3,VAR12);
    if (VAR19 == (VAR18 *) NULL)
      {
        FUN11(VAR28);
        FUN19(VAR155,"");
      }
    if (VAR43 == VAR156)
      VAR15=FUN36(VAR12,VAR19,VAR157);
    if (VAR43 == VAR158)
      VAR15=FUN36(VAR12,VAR19,VAR159);
    if (VAR43 == VAR86)
      VAR15=FUN36(VAR12,VAR19,VAR160);
    if (VAR15 == VAR55)
      {
        FUN11(VAR28);
        VAR19=FUN37(VAR19);
        FUN19(VAR155,"");
      }
    VAR15=VAR70;
    switch (VAR41)
    {
      case VAR87:
      {
        VAR19->VAR161=VAR55;
        break;
      }
      case VAR88:
      {
        VAR19->VAR161=VAR70;
        break;
      }
      default:
        break;
    }
    VAR13=FUN18(VAR28,VAR162,&VAR35,
      &VAR42);
    if (VAR13 == 1)
      {
        (void) FUN20(VAR12,"","");
        if (VAR35 == 0)
          {
            if ((VAR44 == 4) && (VAR41 == VAR90))
              VAR12->VAR163=VAR70;
          }
        else
          for (VAR23=0; VAR23 < VAR35; VAR23++)
          {
            VAR12->VAR163=VAR70;
            if (VAR42[VAR23] == VAR164)
              {
                FUN38(VAR19,VAR165);
                (void) FUN20(VAR12,"","");
              }
            else
              if (VAR42[VAR23] == VAR166)
               (void) FUN20(VAR12,"","");
          }
      }
    if ((VAR41 == VAR89) &&
        (FUN39(2.0,1.0*VAR33) <= VAR167))
      {
        VAR24
          VAR168;

        VAR168=(VAR24) FUN40(VAR33)+1;
        if (FUN41(VAR12,VAR168) == VAR55)
          {
            FUN11(VAR28);
            FUN19(VAR155,"");
          }
      }
    if (FUN18(VAR28,VAR169,&VAR46,&VAR40) == 1)
      VAR12->VAR69=VAR46;
    if (VAR12->VAR170 == VAR171)
      {
        int
          VAR13;

        VAR24
          VAR172;

        VAR31
          *VAR173,
          *VAR174,
          *VAR175;

        
        VAR13=FUN17(VAR28,VAR176,&VAR175,
          &VAR174,&VAR173);
        if (VAR13 == 1)
          {
            if ((VAR175 != (VAR31 *) NULL) &&
                (VAR174 != (VAR31 *) NULL) &&
                (VAR173 != (VAR31 *) NULL))
              {
                VAR172=255;  
                for (VAR23=0; VAR23 < (VAR22) VAR12->VAR168; VAR23++)
                  if ((VAR175[VAR23] >= 256) || (VAR174[VAR23] >= 256) ||
                      (VAR173[VAR23] >= 256))
                    {
                      VAR172=65535;
                      break;
                    }
                for (VAR23=0; VAR23 < (VAR22) VAR12->VAR168; VAR23++)
                {
                  VAR12->VAR177[VAR23].VAR178=FUN42(((double)
                    VAR179*VAR175[VAR23])/VAR172);
                  VAR12->VAR177[VAR23].VAR180=FUN42(((double)
                    VAR179*VAR174[VAR23])/VAR172);
                  VAR12->VAR177[VAR23].VAR181=FUN42(((double)
                    VAR179*VAR173[VAR23])/VAR172);
                }
              }
          }
        if (VAR12->VAR163 == VAR55)
          VAR12->VAR100=FUN43(VAR12,VAR5);
      }
    if (VAR3->VAR108 != VAR55)
      {
        if (VAR3->VAR68 != 0)
          if (VAR12->VAR69 >= (VAR3->VAR69+VAR3->VAR68-1))
            {
              VAR19=FUN37(VAR19);
              break;
            }
        goto VAR182;
      }
    VAR30=VAR183;
    if (FUN17(VAR28,VAR184,&VAR49) == 1)
      {
        char
          VAR46[VAR142];

        VAR30=VAR185;
        (void) FUN34(VAR46,VAR142,"",(unsigned int)
          VAR49);
        (void) FUN20(VAR12,"",VAR46);
      }
    if ((VAR44 >= 2) && (VAR36 == VAR186))
      VAR30=VAR187;
    if ((VAR44 >= 2) && (VAR36 == VAR188))
      VAR30=VAR189;
    if ((VAR41 != VAR90) &&
        (VAR41 != VAR91) &&
        (VAR41 != VAR95))
      VAR30=VAR183;
    if (VAR12->VAR170 == VAR171)
      VAR30=VAR190;
    if ((VAR41 == VAR87) ||
        (VAR41 == VAR88))
      VAR30=VAR190;
    if ((VAR41 != VAR95) &&
        (VAR36 == VAR188) && (VAR33 < 64))
      VAR30=VAR183;
    if (VAR12->VAR132 == VAR139)
      VAR30=FUN44(VAR12,VAR28,VAR41,VAR33,
        VAR44);
    if (VAR32 == VAR191)
      VAR30=VAR185;
    if (FUN45(VAR28) != VAR55)
      VAR30=VAR192;
    VAR19->VAR34=VAR103;
    VAR21=VAR193;
    VAR51=FUN46(VAR19);
    switch (VAR30)
    {
      case VAR190:
      {
        
        VAR21=VAR194;
        VAR25=(VAR24) FUN47((VAR24) VAR44-1,0);
        if (VAR12->VAR163 != VAR55)
          {
            if (VAR12->VAR170 != VAR171)
              {
                VAR21=VAR44 == 1 ? VAR195 :
                  VAR196;
                VAR25=(VAR24) FUN47((VAR24) VAR44-2,0);
              }
            else
              {
                VAR21=VAR197;
                VAR25=(VAR24) FUN47((VAR24) VAR44-2,0);
              }
          }
        else
          if (VAR12->VAR170 != VAR171)
            {
              VAR21=VAR198;
              VAR25=(VAR24) FUN47((VAR24) VAR44-1,0);
            }
        VAR15=FUN48(VAR12,VAR19,VAR25*((VAR33+7) >> 3));
        if (VAR15 == VAR55)
          {
            FUN11(VAR28);
            FUN19(VAR155,"");
          }
        VAR51=FUN46(VAR19);
        for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26++)
        {
          int
            VAR15;

          register VAR199
            *magick_restrict VAR200;

          VAR15=FUN49(VAR28,VAR33,0,VAR26,(char *) VAR51);
          if (VAR15 == -1)
            break;
          VAR200=FUN50(VAR12,0,VAR26,VAR12->VAR98,1,VAR5);
          if (VAR200 == (VAR199 *) NULL)
            break;
          (void) FUN51(VAR12,(VAR201 *) NULL,VAR19,
            VAR21,VAR51,VAR5);
          if (FUN52(VAR12,VAR5) == VAR55)
            break;
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        break;
      }
      case VAR187:
      {
        
        VAR25=(VAR24) FUN47((VAR24) VAR44-3,0);
        VAR21=VAR193;
        if (VAR12->VAR163 != VAR55)
          {
            VAR21=VAR205;
            VAR25=(VAR24) FUN47((VAR24) VAR44-4,0);
          }
        if (VAR12->VAR206 == VAR106)
          {
            VAR25=(VAR24) FUN47((VAR24) VAR44-4,0);
            VAR21=VAR207;
            if (VAR12->VAR163 != VAR55)
              {
                VAR21=VAR208;
                VAR25=(VAR24) FUN47((VAR24) VAR44-5,0);
              }
          }
        VAR15=FUN48(VAR12,VAR19,VAR25*((VAR33+7) >> 3));
        if (VAR15 == VAR55)
          {
            FUN11(VAR28);
            FUN19(VAR155,"");
          }
        VAR51=FUN46(VAR19);
        for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26++)
        {
          int
            VAR15;

          register VAR199
            *magick_restrict VAR200;

          VAR15=FUN49(VAR28,VAR33,0,VAR26,(char *) VAR51);
          if (VAR15 == -1)
            break;
          VAR200=FUN50(VAR12,0,VAR26,VAR12->VAR98,1,VAR5);
          if (VAR200 == (VAR199 *) NULL)
            break;
          (void) FUN51(VAR12,(VAR201 *) NULL,VAR19,
            VAR21,VAR51,VAR5);
          if (FUN52(VAR12,VAR5) == VAR55)
            break;
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        break;
      }
      case VAR189:
      {
        
        for (VAR23=0; VAR23 < (VAR22) VAR44; VAR23++)
        {
          for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26++)
          {
            register VAR199
              *magick_restrict VAR200;

            int
              VAR15;

            VAR15=FUN49(VAR28,VAR33,(VAR209) VAR23,VAR26,(char *)
              VAR51);
            if (VAR15 == -1)
              break;
            VAR200=FUN54(VAR12,0,VAR26,VAR12->VAR98,1,VAR5);
            if (VAR200 == (VAR199 *) NULL)
              break;
            if (VAR12->VAR206 != VAR106)
              switch (VAR23)
              {
                case 0: VAR21=VAR210; break;
                case 1: VAR21=VAR211; break;
                case 2: VAR21=VAR212; break;
                case 3: VAR21=VAR195; break;
                default: VAR21=VAR213; break;
              }
            else
              switch (VAR23)
              {
                case 0: VAR21=VAR214; break;
                case 1: VAR21=VAR215; break;
                case 2: VAR21=VAR216; break;
                case 3: VAR21=VAR217; break;
                case 4: VAR21=VAR195; break;
                default: VAR21=VAR213; break;
              }
            (void) FUN51(VAR12,(VAR201 *) NULL,VAR19,
              VAR21,VAR51,VAR5);
            if (FUN52(VAR12,VAR5) == VAR55)
              break;
          }
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        break;
      }
      case VAR218:
      {
        VAR51=FUN46(VAR19);
        for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26++)
        {
          int
            VAR15;

          register VAR219
            *VAR220;

          register VAR199
            *magick_restrict VAR200;

          register VAR22
            VAR119;

          unsigned char
            *VAR221;

          VAR15=FUN49(VAR28,VAR33,0,VAR26,(char *) VAR51);
          if (VAR15 == -1)
            break;
          VAR200=FUN50(VAR12,0,VAR26,VAR12->VAR98,1,VAR5);
          if (VAR200 == (VAR199 *) NULL)
            break;
          VAR220=FUN55(VAR12);
          VAR221=VAR51;
          for (VAR119=0; VAR119 < (VAR22) VAR12->VAR98; VAR119++)
          {
            FUN56(VAR200,FUN57(FUN58((double) *VAR221+
              (1.402*(double) *(VAR221+2))-179.456)));
            FUN59(VAR200,FUN57(FUN58((double) *VAR221-
              (0.34414*(double) *(VAR221+1))-(0.71414*(double ) *(VAR221+2))+
              135.45984)));
            FUN60(VAR200,FUN57(FUN58((double) *VAR221+
              (1.772*(double) *(VAR221+1))-226.816)));
            FUN61(VAR220+VAR119,FUN57((unsigned char)*(VAR221+3)));
            VAR200++;
            VAR221+=4;
          }
          if (FUN52(VAR12,VAR5) == VAR55)
            break;
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        break;
      }
      case VAR185:
      {
        register VAR47
          *VAR221;

        
        VAR23=0;
        VAR221=(VAR47 *) NULL;
        for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26++)
        {
          register VAR22
            VAR119;

          register VAR199
            *magick_restrict VAR200;

          VAR200=FUN50(VAR12,0,VAR26,VAR12->VAR98,1,VAR5);
          if (VAR200 == (VAR199 *) NULL)
            break;
          if (VAR23 == 0)
            {
              if (FUN62(VAR28,(VAR222) VAR26,(VAR47 *) VAR51) == 0)
                break;
              VAR23=(VAR22) FUN63((VAR22) VAR49,(VAR22)
                VAR12->VAR99-VAR26);
            }
          VAR23--;
          VAR221=((VAR47 *) VAR51)+VAR12->VAR98*VAR23;
          for (VAR119=0; VAR119 < (VAR22) VAR12->VAR98; VAR119++)
          {
            FUN64(VAR200,FUN57((unsigned char)
              (FUN65(*VAR221))));
            FUN66(VAR200,FUN57((unsigned char)
              (FUN67(*VAR221))));
            FUN68(VAR200,FUN57((unsigned char)
              (FUN69(*VAR221))));
            if (VAR12->VAR163 != VAR55)
              FUN70(VAR200,FUN57((unsigned char)
                (FUN71(*VAR221))));
            VAR221++;
            VAR200++;
          }
          if (FUN52(VAR12,VAR5) == VAR55)
            break;
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        break;
      }
      case VAR192:
      {
        register VAR47
          *VAR221;

        VAR47
          *VAR223,
           VAR98,
           VAR99;
 

        VAR24

          VAR17;


         
        if ((FUN17(VAR28,VAR224,&VAR98) != 1) ||
            (FUN17(VAR28,VAR225,&VAR99) != 1))
          {
            FUN11(VAR28);
             FUN19(VAR131,"");
           }
         (void) FUN72(VAR12,VAR226);

        VAR17=VAR98*VAR99;














         VAR223=(VAR47 *) FUN73(VAR17,
           sizeof(*VAR223));
         if (VAR223 == (VAR47 *) NULL)
          {
            FUN11(VAR28);
            FUN19(VAR155,"");
          }
        for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26+=VAR99)
        {
          VAR199
            *VAR227;

          register VAR22
            VAR119;

          register VAR199
            *magick_restrict VAR200;

          VAR24
            VAR228,
            VAR229;

          VAR229=VAR12->VAR99-VAR26;
          if ((VAR22) (VAR26+VAR99) < (VAR22) VAR12->VAR99)
            VAR229=VAR99;
          VAR227=FUN50(VAR12,0,VAR26,VAR12->VAR98,VAR229,
            VAR5);
          if (VAR227 == (VAR199 *) NULL)
            break;
          for (VAR119=0; VAR119 < (VAR22) VAR12->VAR98; VAR119+=VAR98)
          {
            VAR24
              VAR230,
              VAR231;

            if (FUN74(VAR28,(VAR47) VAR119,(VAR47) VAR26,VAR223) == 0)
              break;
            VAR228=VAR12->VAR98-VAR119;
            if ((VAR22) (VAR119+VAR98) < (VAR22) VAR12->VAR98)
              VAR228=VAR98;
            VAR221=VAR223+(VAR99-VAR229)*VAR98;
            VAR200=VAR227+(VAR12->VAR98*(VAR229-1)+VAR119);
            for (VAR231=VAR229; VAR231 > 0; VAR231--)
            {
              if (VAR12->VAR163 != VAR55)
                for (VAR230=VAR228; VAR230 > 0; VAR230--)
                {
                  FUN64(VAR200,FUN57((unsigned char)
                    FUN65(*VAR221)));
                  FUN66(VAR200,FUN57((unsigned char)
                    FUN67(*VAR221)));
                  FUN68(VAR200,FUN57((unsigned char)
                    FUN69(*VAR221)));
                  FUN75(VAR200,FUN57((unsigned char)
                    FUN71(*VAR221)));
                  VAR200++;
                  VAR221++;
                }
              else
                for (VAR230=VAR228; VAR230 > 0; VAR230--)
                {
                  FUN64(VAR200,FUN57((unsigned char)
                    FUN65(*VAR221)));
                  FUN66(VAR200,FUN57((unsigned char)
                    FUN67(*VAR221)));
                  FUN68(VAR200,FUN57((unsigned char)
                    FUN69(*VAR221)));
                  VAR200++;
                  VAR221++;
                }
              VAR221+=VAR98-VAR228;
              VAR200-=(VAR12->VAR98+VAR228);
            }
          }
          if (FUN52(VAR12,VAR5) == VAR55)
            break;
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        VAR223=(VAR47 *) FUN76(VAR223);
        break;
      }
      case VAR183:
      default:
      {
        VAR232
          *VAR233;

        register VAR47
          *VAR221;

        VAR47
          *VAR51;

        
        VAR17=(VAR16) VAR12->VAR98*VAR12->VAR99;
        if ((VAR17*sizeof(VAR47)) != (VAR16) ((VAR24)
            (VAR17*sizeof(VAR47))))
          {
            FUN11(VAR28);
            FUN19(VAR155,"");
          }
        VAR233=FUN77(VAR12->VAR98,VAR12->VAR99*
          sizeof(VAR47));
        if (VAR233 == (VAR232 *) NULL)
          {
            FUN11(VAR28);
            FUN19(VAR155,"");
          }
        VAR51=(VAR47 *) FUN78(VAR233);
        (void) FUN79(VAR28,(VAR47) VAR12->VAR98,(VAR47)
          VAR12->VAR99,(VAR47 *) VAR51,0);
        
        VAR221=VAR51+VAR17-1;
        for (VAR26=0; VAR26 < (VAR22) VAR12->VAR99; VAR26++)
        {
          register VAR22
            VAR119;

          register VAR199
            *magick_restrict VAR200;

          VAR200=FUN50(VAR12,0,VAR26,VAR12->VAR98,1,VAR5);
          if (VAR200 == (VAR199 *) NULL)
            break;
          VAR200+=VAR12->VAR98-1;
          for (VAR119=0; VAR119 < (VAR22) VAR12->VAR98; VAR119++)
          {
            FUN64(VAR200,FUN57((unsigned char) FUN65(*VAR221)));
            FUN66(VAR200,FUN57((unsigned char) FUN67(*VAR221)));
            FUN68(VAR200,FUN57((unsigned char) FUN69(*VAR221)));
            if (VAR12->VAR163 != VAR55)
              FUN75(VAR200,FUN57((unsigned char) FUN71(*VAR221)));
            VAR221--;
            VAR200--;
          }
          if (FUN52(VAR12,VAR5) == VAR55)
            break;
          if (VAR12->VAR202 == (VAR1 *) NULL)
            {
              VAR15=FUN53(VAR12,VAR203,(VAR204) VAR26,
                VAR12->VAR99);
              if (VAR15 == VAR55)
                break;
            }
        }
        VAR233=FUN80(VAR233);
        break;
      }
    }
    FUN81(VAR12,VAR21);
  VAR182:
    VAR19=FUN37(VAR19);
    if (VAR41 == VAR91)
      FUN82(VAR12,VAR5);
    if ((VAR41 == VAR92) ||
        (VAR41 == VAR87) ||
        (VAR41 == VAR88))
      {
        VAR12->VAR234=VAR235;
        if (VAR33 == 1)
          VAR12->VAR234=VAR236;
      }
    
    if (VAR3->VAR68 != 0)
      if (VAR12->VAR69 >= (VAR3->VAR69+VAR3->VAR68-1))
        break;
    VAR15=FUN10(VAR28) != 0 ? VAR70 : VAR55;
    if (VAR15 != VAR55)
      {
        
        FUN12(VAR3,VAR12);
        if (FUN13(VAR12) == (VAR1 *) NULL)
          {
            VAR12=FUN6(VAR12);
            return((VAR1 *) NULL);
          }
        VAR12=FUN14(VAR12);
        VAR15=FUN53(VAR12,VAR237,VAR12->VAR69-1,
          VAR12->VAR69);
        if (VAR15 == VAR55)
          break;
      }
  } while (VAR15 != VAR55);
  FUN11(VAR28);
  FUN83(VAR12,VAR3,VAR5);
  if (VAR3->VAR68 != 0)
  {
    if (VAR3->VAR69 >= FUN84(VAR12))
    {
      
      VAR12 = FUN6(VAR12);
      return((VAR1 *)NULL);
    }
  }
  return(FUN85(VAR12));
}