static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
#define VFF_CM_genericRGB  15
#define VFF_CM_ntscRGB  1
#define VFF_CM_NONE  0
#define VFF_DEP_DECORDER  0x4
#define VFF_DEP_NSORDER  0x8
#define VFF_DES_RAW  0
#define VFF_LOC_IMPLICIT  1
#define VFF_MAPTYP_NONE  0
#define VFF_MAPTYP_1_BYTE  1
#define VFF_MAPTYP_2_BYTE  2
#define VFF_MAPTYP_4_BYTE  4
#define VFF_MAPTYP_FLOAT  5
#define VFF_MAPTYP_DOUBLE  7
#define VFF_MS_NONE  0
#define VFF_MS_ONEPERBAND  1
#define VFF_MS_SHARED  3
#define VFF_TYP_BIT  0
#define VFF_TYP_1_BYTE  1
#define VFF_TYP_2_BYTE  2
#define VFF_TYP_4_BYTE  4
#define VFF_TYP_FLOAT  5
#define VFF_TYP_DOUBLE  9

  typedef struct VAR6
  {
    unsigned char
      VAR7,
      VAR8,
      VAR9,
      VAR10,
      VAR11,
      VAR12[3];

    char
      VAR13[512];

    unsigned int
      VAR14,
      VAR15,
      VAR16;

    int
      VAR17,
      VAR18;

    float
      VAR19,
      VAR20;

    unsigned int
      VAR21,
      VAR22,
      VAR23,
      VAR24,
      VAR25,
      VAR26,
      VAR27,
      VAR28,
      VAR29,
      VAR30,
      VAR31,
      VAR32,
      VAR33,
      VAR34;
  } VAR35;

  double
    VAR36,
    VAR37,
    VAR38;

  VAR1
    *VAR39;

  int
    VAR40;

  VAR41
    VAR42;

  VAR43
    VAR44;

  register VAR45
    *VAR46;

  register VAR47
    VAR48;

  register VAR49
    *VAR50;

  register VAR47
    VAR51;

  register unsigned char
    *VAR52;

  VAR53
    VAR54,
    VAR55,
    VAR56,
    VAR57;

  VAR47
    VAR58,
    VAR59;

  unsigned char
    *VAR60;

  VAR35
    VAR61;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR62 == VAR63);
  if (VAR3->VAR64 != VAR65)
    (void) FUN2(VAR66,FUN3(),"",
      VAR3->VAR67);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR62 == VAR63);
  VAR39=FUN4(VAR3);
  VAR42=FUN5(VAR3,VAR39,VAR68,VAR5);
  if (VAR42 == VAR65)
    {
      VAR39=FUN6(VAR39);
      return((VAR1 *) NULL);
    }
  
  VAR58=FUN7(VAR39,1,&VAR61.VAR7);
  do
  {
    
    if ((VAR58 == 0) || ((unsigned char) VAR61.VAR7 != 0xab))
      FUN8(VAR69,"");
    
    (void) FUN7(VAR39,sizeof(VAR61.VAR8),&VAR61.VAR8);
    (void) FUN7(VAR39,sizeof(VAR61.VAR9),&VAR61.VAR9);
    (void) FUN7(VAR39,sizeof(VAR61.VAR10),&VAR61.VAR10);
    (void) FUN7(VAR39,sizeof(VAR61.VAR11),
      &VAR61.VAR11);
    (void) FUN7(VAR39,sizeof(VAR61.VAR12),VAR61.VAR12);
    VAR58=FUN7(VAR39,512,(unsigned char *) VAR61.VAR13);
    VAR61.VAR13[511]='';
    if (strlen(VAR61.VAR13) > 4)
      (void) FUN9(VAR39,"",VAR61.VAR13);
    if ((VAR61.VAR11 == VAR70) ||
        (VAR61.VAR11 == VAR71))
      VAR39->VAR72=VAR73;
    else
      VAR39->VAR72=VAR74;
    VAR61.VAR14=FUN10(VAR39);
    VAR61.VAR15=FUN10(VAR39);
    VAR61.VAR16=FUN10(VAR39);
    VAR61.VAR17=(int) FUN10(VAR39);
    VAR61.VAR18=(int) FUN10(VAR39);
    VAR61.VAR19=(float) FUN10(VAR39);
    VAR61.VAR20=(float) FUN10(VAR39);
    VAR61.VAR21=FUN10(VAR39);
    VAR61.VAR22=FUN10(VAR39);
    VAR61.VAR23=FUN10(VAR39);
    VAR61.VAR24=FUN10(VAR39);
    VAR61.VAR25=FUN10(VAR39);
    VAR61.VAR26=FUN10(VAR39);
    VAR61.VAR27=FUN10(VAR39);
    VAR61.VAR28=FUN10(VAR39);
    VAR61.VAR29=FUN10(VAR39);
    VAR61.VAR30=FUN10(VAR39);
    VAR61.VAR31=FUN10(VAR39);
    VAR61.VAR32=FUN10(VAR39);
    VAR61.VAR33=FUN10(VAR39);
    VAR61.VAR34=FUN10(VAR39);
    for (VAR51=0; VAR51 < 420; VAR51++)
      (void) FUN11(VAR39);
    VAR39->VAR15=VAR61.VAR14;
    VAR39->VAR14=VAR61.VAR15;
    VAR39->VAR75=VAR61.VAR19 <= 8 ? 8UL :
      VAR76;
    
    VAR44=(VAR43) VAR61.VAR15*VAR61.VAR14;
    if (VAR44 != (VAR53) VAR44)
      FUN8(VAR77,"");
    if (VAR44 == 0)
      FUN8(VAR78,"");
    if ((VAR61.VAR24 < 1) || (VAR61.VAR24 > 4))
      FUN8(VAR69,"");
    if ((VAR61.VAR25 != VAR79) &&
        (VAR61.VAR25 != VAR80) &&
        (VAR61.VAR25 != VAR81) &&
        (VAR61.VAR25 != VAR82) &&
        (VAR61.VAR25 != VAR83) &&
        (VAR61.VAR25 != VAR84))
      FUN8(VAR78,"");
    if (VAR61.VAR26 != VAR85)
      FUN8(VAR78,"");
    if ((VAR61.VAR28 != VAR86) &&
        (VAR61.VAR28 != VAR87) &&
        (VAR61.VAR28 != VAR88) &&
        (VAR61.VAR28 != VAR89) &&
        (VAR61.VAR28 != VAR90) &&
        (VAR61.VAR28 != VAR91))
      FUN8(VAR78,"");
    if ((VAR61.VAR34 != VAR92) &&
        (VAR61.VAR34 != VAR93) &&
        (VAR61.VAR34 != VAR94))
      FUN8(VAR78,"");
    if (VAR61.VAR21 != VAR95)
      FUN8(VAR78,"");
    if (VAR61.VAR23 != 1)
      FUN8(VAR78,"");
    if (VAR61.VAR29 == 0)
      VAR61.VAR27=VAR96;
    switch ((int) VAR61.VAR27)
    {
      case VAR96:
      {
        if (VAR61.VAR24 < 3)
          {
            
            if (VAR61.VAR25 == VAR79)
              VAR39->VAR97=2;
            else
              if (VAR61.VAR25 == VAR87)
                VAR39->VAR97=256UL;
              else
                VAR39->VAR97=VAR39->VAR75 <= 8 ? 256UL : 65536UL;
            if (FUN12(VAR39,VAR39->VAR97) == VAR65)
              FUN8(VAR77,"");
          }
        break;
      }
      case VAR98:
      case VAR99:
      {
        unsigned char
          *VAR100;

        
        switch ((int) VAR61.VAR28)
        {
          case VAR87: VAR54=1; break;
          case VAR88: VAR54=2; break;
          case VAR89: VAR54=4; break;
          case VAR90: VAR54=4; break;
          case VAR91: VAR54=8; break;
          default: VAR54=1; break;
        }
        VAR39->VAR97=VAR61.VAR30;
        if (FUN12(VAR39,VAR39->VAR97) == VAR65)
          FUN8(VAR77,"");
        VAR100=(unsigned char *) FUN13(VAR39->VAR97,
          VAR61.VAR29*VAR54*sizeof(*VAR100));
        if (VAR100 == (unsigned char *) NULL)
          FUN8(VAR77,"");
        
        VAR58=FUN7(VAR39,VAR54*VAR39->VAR97*VAR61.VAR29,
          VAR100);
        VAR55=1;
        if (*(char *) &VAR55 &&
            ((VAR61.VAR11 != VAR70) &&
             (VAR61.VAR11 != VAR71)))
          switch ((int) VAR61.VAR28)
          {
            case VAR88:
            {
              FUN14(VAR100,(VAR54*VAR39->VAR97*
                VAR61.VAR29));
              break;
            }
            case VAR89:
            case VAR90:
            {
              FUN15(VAR100,(VAR54*VAR39->VAR97*
                VAR61.VAR29));
              break;
            }
            default: break;
          }
        for (VAR51=0; VAR51 < (VAR47) (VAR61.VAR29*VAR39->VAR97); VAR51++)
        {
          switch ((int) VAR61.VAR28)
          {
            case VAR88: VAR38=1.0*((short *) VAR100)[VAR51]; break;
            case VAR89: VAR38=1.0*((int *) VAR100)[VAR51]; break;
            case VAR90: VAR38=((float *) VAR100)[VAR51]; break;
            case VAR91: VAR38=((double *) VAR100)[VAR51]; break;
            default: VAR38=1.0*VAR100[VAR51]; break;
          }
          if (VAR51 < (VAR47) VAR39->VAR97)
            {
              VAR39->VAR101[VAR51].VAR102=FUN16((unsigned char) VAR38);
              VAR39->VAR101[VAR51].VAR103=FUN16((unsigned char)
                VAR38);
              VAR39->VAR101[VAR51].VAR104=FUN16((unsigned char) VAR38);
            }
          else
            if (VAR51 < (VAR47) (2*VAR39->VAR97))
              VAR39->VAR101[VAR51 % VAR39->VAR97].VAR103=FUN16(
                (unsigned char) VAR38);
            else
              if (VAR51 < (VAR47) (3*VAR39->VAR97))
                VAR39->VAR101[VAR51 % VAR39->VAR97].VAR104=FUN16(
                  (unsigned char) VAR38);
        }
        VAR100=(unsigned char *) FUN17(VAR100);
        break;
      }
      default:
        FUN8(VAR78,"");
    }
    
    VAR39->VAR105=VAR61.VAR24 == 4 ? VAR106 : VAR65;
    VAR39->VAR107=
      (VAR61.VAR24 < 3 ? VAR108 : VAR109);
    VAR39->VAR15=VAR61.VAR14;
    VAR39->VAR14=VAR61.VAR15;
     if ((VAR3->VAR110 != VAR65) && (VAR3->VAR111 != 0))
       if (VAR39->VAR112 >= (VAR3->VAR112+VAR3->VAR111-1))
         break;












     
    switch ((int) VAR61.VAR25)
    {
      case VAR81: VAR54=2; break;
      case VAR82: VAR54=4; break;
      case VAR83: VAR54=4; break;
      case VAR84: VAR54=8; break;
      default: VAR54=1; break;
    }
    if (VAR61.VAR25 == VAR79)
      VAR56=((VAR39->VAR15+7UL) >> 3UL)*VAR39->VAR14;
    else
      VAR56=(VAR53) (VAR44*VAR61.VAR24);
    VAR60=(unsigned char *) FUN13(VAR56,
      VAR54*sizeof(*VAR60));
    if (VAR60 == (unsigned char *) NULL)
      FUN8(VAR77,"");
    VAR58=FUN7(VAR39,VAR54*VAR56,VAR60);
    VAR55=1;
    if (*(char *) &VAR55 &&
        ((VAR61.VAR11 != VAR70) &&
         (VAR61.VAR11 != VAR71)))
      switch ((int) VAR61.VAR25)
      {
        case VAR81:
        {
          FUN14(VAR60,VAR54*VAR56);
          break;
        }
        case VAR82:
        case VAR83:
        {
          FUN15(VAR60,VAR54*VAR56);
          break;
        }
        default: break;
      }
    VAR36=0.0;
    VAR37=1.0;
    if ((VAR61.VAR25 != VAR80) &&
        (VAR61.VAR27 == VAR96))
      {
        double
          VAR113;

        
        switch ((int) VAR61.VAR25)
        {
          case VAR81: VAR38=1.0*((short *) VAR60)[0]; break;
          case VAR82: VAR38=1.0*((int *) VAR60)[0]; break;
          case VAR83: VAR38=((float *) VAR60)[0]; break;
          case VAR84: VAR38=((double *) VAR60)[0]; break;
          default: VAR38=1.0*VAR60[0]; break;
        }
        VAR113=VAR38;
        VAR36=VAR38;
        for (VAR51=0; VAR51 < (VAR47) VAR56; VAR51++)
        {
          switch ((int) VAR61.VAR25)
          {
            case VAR81: VAR38=1.0*((short *) VAR60)[VAR51]; break;
            case VAR82: VAR38=1.0*((int *) VAR60)[VAR51]; break;
            case VAR83: VAR38=((float *) VAR60)[VAR51]; break;
            case VAR84: VAR38=((double *) VAR60)[VAR51]; break;
            default: VAR38=1.0*VAR60[VAR51]; break;
          }
          if (VAR38 > VAR113)
            VAR113=VAR38;
          else
            if (VAR38 < VAR36)
              VAR36=VAR38;
        }
        if ((VAR36 == 0) && (VAR113 == 0))
          VAR37=0;
        else
          if (VAR36 == VAR113)
            {
              VAR37=(VAR114) VAR115/VAR36;
              VAR36=0;
            }
          else
            VAR37=(VAR114) VAR115/(VAR113-VAR36);
      }
    
    VAR52=(unsigned char *) VAR60;
    for (VAR51=0; VAR51 < (VAR47) VAR56; VAR51++)
    {
      switch ((int) VAR61.VAR25)
      {
        case VAR81: VAR38=1.0*((short *) VAR60)[VAR51]; break;
        case VAR82: VAR38=1.0*((int *) VAR60)[VAR51]; break;
        case VAR83: VAR38=((float *) VAR60)[VAR51]; break;
        case VAR84: VAR38=((double *) VAR60)[VAR51]; break;
        default: VAR38=1.0*VAR60[VAR51]; break;
      }
      if (VAR61.VAR27 == VAR96)
        {
          VAR38=(VAR38-VAR36)*VAR37;
          if (VAR38 > VAR115)
            VAR38=VAR115;
          else
            if (VAR38 < 0)
              VAR38=0;
        }
      *VAR52=(unsigned char) VAR38;
      VAR52++;
    }
    
    VAR52=(unsigned char *) VAR60;
    if (VAR61.VAR25 == VAR79)
      {
        
        for (VAR59=0; VAR59 < (VAR47) VAR39->VAR14; VAR59++)
        {
          VAR50=FUN18(VAR39,0,VAR59,VAR39->VAR15,1,VAR5);
          if (VAR50 == (VAR49 *) NULL)
            break;
          VAR46=FUN19(VAR39);
          for (VAR48=0; VAR48 < (VAR47) (VAR39->VAR15-7); VAR48+=8)
          {
            for (VAR40=0; VAR40 < 8; VAR40++)
            {
              VAR57=(VAR53) ((*VAR52) & (0x01 << VAR40) ? 0 : 1);
              FUN20(VAR46+VAR48+VAR40,VAR57);
             }
            VAR52++;
          }
          if ((VAR39->VAR15 % 8) != 0)
            {
              for (VAR40=0; VAR40 < (int) (VAR39->VAR15 % 8); VAR40++)
              {
                VAR57=(VAR53) ((*VAR52) & (0x01 << VAR40) ? 0 : 1);
                FUN20(VAR46+VAR48+VAR40,VAR57);
              }
              VAR52++;
            }
          if (FUN21(VAR39,VAR5) == VAR65)
            break;
          if (VAR39->VAR116 == (VAR1 *) NULL)
            {
              VAR42=FUN22(VAR39,VAR117,(VAR118) VAR59,
                VAR39->VAR14);
              if (VAR42 == VAR65)
                break;
            }
        }
      }
    else
      if (VAR39->VAR107 == VAR108)
        for (VAR59=0; VAR59 < (VAR47) VAR39->VAR14; VAR59++)
        {
          VAR50=FUN18(VAR39,0,VAR59,VAR39->VAR15,1,VAR5);
          if (VAR50 == (VAR49 *) NULL)
            break;
          VAR46=FUN19(VAR39);
          for (VAR48=0; VAR48 < (VAR47) VAR39->VAR15; VAR48++)
            FUN20(VAR46+VAR48,*VAR52++);
          if (FUN21(VAR39,VAR5) == VAR65)
            break;
          if (VAR39->VAR116 == (VAR1 *) NULL)
            {
              VAR42=FUN22(VAR39,VAR117,(VAR118) VAR59,
                VAR39->VAR14);
              if (VAR42 == VAR65)
                break;
            }
        }
      else
        {
          
          VAR44=(VAR43) VAR39->VAR15*VAR39->VAR14;
          for (VAR59=0; VAR59 < (VAR47) VAR39->VAR14; VAR59++)
          {
            VAR50=FUN18(VAR39,0,VAR59,VAR39->VAR15,1,VAR5);
            if (VAR50 == (VAR49 *) NULL)
              break;
            for (VAR48=0; VAR48 < (VAR47) VAR39->VAR15; VAR48++)
            {
              FUN23(VAR50,FUN16(*VAR52));
              FUN24(VAR50,FUN16(*(VAR52+VAR44)));
              FUN25(VAR50,FUN16(*(VAR52+2*VAR44)));
              if (VAR39->VAR97 != 0)
                {
                  VAR47
                    VAR119;

                  VAR119=(VAR47) FUN26(VAR50);
                  FUN23(VAR50,VAR39->VAR101[(VAR47)
                    FUN27(VAR39,VAR119)].VAR102);
                  VAR119=(VAR47) FUN28(VAR50);
                  FUN24(VAR50,VAR39->VAR101[(VAR47)
                    FUN27(VAR39,VAR119)].VAR103);
                  VAR119=(VAR47) FUN26(VAR50);
                  FUN25(VAR50,VAR39->VAR101[(VAR47)
                    FUN27(VAR39,VAR119)].VAR104);
                }
              FUN29(VAR50,VAR39->VAR105 != VAR65 ? VAR115-
                FUN16(*(VAR52+VAR44*3)) : VAR120);
              VAR52++;
              VAR50++;
            }
            if (FUN21(VAR39,VAR5) == VAR65)
              break;
            if (VAR39->VAR116 == (VAR1 *) NULL)
              {
                VAR42=FUN22(VAR39,VAR117,(VAR118) VAR59,
                VAR39->VAR14);
                if (VAR42 == VAR65)
                  break;
              }
          }
        }
    VAR60=(unsigned char *) FUN17(VAR60);
    if (VAR39->VAR107 == VAR108)
      (void) FUN30(VAR39);
    if (FUN31(VAR39) != VAR65)
      {
        FUN32(VAR5,VAR69,"",
          VAR39->VAR67);
        break;
      }
    
    if (VAR3->VAR111 != 0)
      if (VAR39->VAR112 >= (VAR3->VAR112+VAR3->VAR111-1))
        break;
    VAR58=FUN7(VAR39,1,&VAR61.VAR7);
    if ((VAR58 != 0) && (VAR61.VAR7 == 0xab))
      {
        
        FUN33(VAR3,VAR39);
        if (FUN34(VAR39) == (VAR1 *) NULL)
          {
            VAR39=FUN6(VAR39);
            return((VAR1 *) NULL);
          }
        VAR39=FUN35(VAR39);
        VAR42=FUN22(VAR39,VAR121,FUN36(VAR39),
          FUN37(VAR39));
        if (VAR42 == VAR65)
          break;
      }
  } while ((VAR58 != 0) && (VAR61.VAR7 == 0xab));
  (void) FUN38(VAR39);
  return(FUN39(VAR39));
}