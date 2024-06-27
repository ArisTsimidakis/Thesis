static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  typedef struct
  {
    size_t VAR6;
    MagickOffsetType VAR7;
    unsigned int VAR8;
    unsigned int VAR9;
    unsigned char VAR10;
    unsigned char VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
  } VAR14;

  typedef struct
  {
    unsigned char VAR15;
    size_t VAR16;
  } VAR17;

  typedef struct
  {
    unsigned char VAR18;
    unsigned char VAR15;
    size_t VAR19;
    size_t VAR16;
  } VAR20;

  typedef struct
  {
    unsigned  VAR21;
    unsigned  VAR22;
    unsigned char VAR23;
  } VAR24;

  typedef struct
  {
    unsigned int VAR25;
    unsigned int VAR26;
    unsigned int VAR27;
    unsigned int VAR28;
    unsigned int VAR29;
  } VAR30;

  typedef struct
  {
    unsigned int VAR25;
    unsigned int VAR26;
    unsigned char VAR27;
    unsigned char VAR31;
  } VAR32;

  typedef struct
  {
    unsigned int VAR33;
    unsigned int VAR34;
    unsigned int VAR35;
    unsigned int VAR36;
    unsigned int VAR37;
    unsigned int VAR25;
    unsigned int VAR26;
    unsigned int VAR27;
    unsigned int VAR28;
    unsigned int VAR29;
  } VAR38;

  typedef struct
  {
    unsigned int VAR39;
    unsigned int VAR40;
  } VAR41;

  

  VAR1
    *VAR42;

  unsigned int
    VAR43;

  VAR14
    VAR44;

  VAR17
    VAR45;

  VAR20
    VAR46;

  WPG2Start VAR47;

  VAR30
    VAR48;

  VAR32
    VAR49;

  VAR38
    VAR50;

  VAR41
    VAR51;

  int
    VAR52,
    VAR53,
    VAR54;

  VAR55
    VAR56;

  VAR57
    VAR58;

  unsigned char
    *VAR59;

  tCTM VAR60;         

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR61 == VAR62);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR61 == VAR62);
  VAR58=1;
  VAR42=FUN2(VAR3);
  VAR42->VAR63=8;
  VAR43=FUN3(VAR3,VAR42,VAR64,VAR5);
  if (VAR43 == VAR65)
    {
      VAR42=FUN4(VAR42);
      return((VAR1 *) NULL);
    }
  
  VAR44.VAR6=FUN5(VAR42);
  VAR44.VAR7=(VAR66) FUN5(VAR42);
  VAR44.VAR8=FUN6(VAR42);
  VAR44.VAR9=FUN6(VAR42);
  VAR44.VAR10=FUN7(VAR42);
  VAR44.VAR11=FUN7(VAR42);
  VAR44.VAR12=FUN6(VAR42);
  VAR44.VAR13=FUN6(VAR42);

  if (VAR44.VAR6!=0x435057FF || (VAR44.VAR8>>8)!=0x16)
    FUN8(VAR67,"");
  if (VAR44.VAR12!=0)
    FUN8(VAR68,"");

  VAR42->VAR69 = 1;
  VAR42->VAR70 = 1;
  VAR42->VAR71 = 0;
  VAR53=0;
  VAR50.VAR33=0;

  switch(VAR44.VAR9)
    {
    case 1:     
      while(!FUN9(VAR42)) 
        {
          (void) FUN10(VAR42,VAR44.VAR7,VAR72);
          if(FUN9(VAR42))
            break;

          VAR45.VAR15=(VAR52=FUN7(VAR42));
          if(VAR52==VAR73)
            break;
          FUN11(VAR42,&VAR45.VAR16);
          if(FUN9(VAR42))
            break;

          VAR44.VAR7=FUN12(VAR42)+VAR45.VAR16;

          switch(VAR45.VAR15)
            {
            case 0x0B: 
              VAR48.VAR25=FUN6(VAR42);
              VAR48.VAR26=FUN6(VAR42);
              if ((VAR48.VAR25 == 0) || (VAR48.VAR26 == 0))
                FUN8(VAR67,"");
              VAR48.VAR27=FUN6(VAR42);
              VAR48.VAR28=FUN6(VAR42);
              VAR48.VAR29=FUN6(VAR42);

              if(VAR48.VAR28 && VAR48.VAR29)
                {
                  VAR42->VAR74=VAR75;
                  VAR42->VAR76=VAR48.VAR28/470.0;
                  VAR42->VAR77=VAR48.VAR29/470.0;
                }
              VAR42->VAR69=VAR48.VAR25;
              VAR42->VAR70=VAR48.VAR26;
              VAR53=VAR48.VAR27;

              goto VAR78;

            case 0x0E:  
              VAR51.VAR39=FUN6(VAR42);
              VAR51.VAR40=FUN6(VAR42);

              VAR42->VAR71=VAR51.VAR40;
              if (!FUN13(VAR42,VAR42->VAR71))
                goto VAR79;
              for (VAR52=VAR51.VAR39;
                   VAR52 < (int)VAR51.VAR40; VAR52++)
                {
                  VAR42->VAR80[VAR52].VAR81=FUN14((unsigned char)
                    FUN7(VAR42));
                  VAR42->VAR80[VAR52].VAR82=FUN14((unsigned char)
                    FUN7(VAR42));
                  VAR42->VAR80[VAR52].VAR83=FUN14((unsigned char)
                    FUN7(VAR42));
                }
              break;

            case 0x11:  
              if(VAR45.VAR16 > 8)
                VAR42=FUN15(VAR42,VAR3,
                  FUN12(VAR42)+8,   
                  (VAR55) VAR45.VAR16-8,VAR5);
              break;

            case 0x14:  
              VAR50.VAR33=FUN6(VAR42);
              VAR50.VAR34=FUN6(VAR42);
              VAR50.VAR35=FUN6(VAR42);
              VAR50.VAR36=FUN6(VAR42);
              VAR50.VAR37=FUN6(VAR42);
              VAR50.VAR25=FUN6(VAR42);
              VAR50.VAR26=FUN6(VAR42);
              if ((VAR50.VAR25 == 0) || (VAR50.VAR26 == 0))
                FUN8(VAR67,"");
              VAR50.VAR27=FUN6(VAR42);
              VAR50.VAR28=FUN6(VAR42);
              VAR50.VAR29=FUN6(VAR42);

              VAR42->VAR74=VAR75;
              VAR42->VAR84.VAR85=(unsigned int)
                ((VAR50.VAR34-VAR50.VAR36)/470.0);
              VAR42->VAR84.VAR86=(unsigned int)
                ((VAR50.VAR34-VAR50.VAR37)/470.0);
              VAR42->VAR84.VAR87=(int) (VAR50.VAR34/470.0);
              VAR42->VAR84.VAR88=(int) (VAR50.VAR34/470.0);
              if(VAR50.VAR28 && VAR50.VAR29)
                {
                  VAR42->VAR76=VAR50.VAR28/470.0;
                  VAR42->VAR77=VAR50.VAR29/470.0;
                }
              VAR42->VAR69=VAR50.VAR25;
              VAR42->VAR70=VAR50.VAR26;
              VAR53=VAR50.VAR27;

            VAR78:
              if ((VAR42->VAR71 == 0) && (VAR53 != 24))
                {
                  VAR42->VAR71=VAR58 << VAR53;
                  if (!FUN13(VAR42,VAR42->VAR71))
                    {
                    VAR79:
                      FUN8(VAR89,
                        "");
                    }
                  
                  for (VAR52=0; (VAR52 < (int) VAR42->VAR71) && (VAR52 < 256); VAR52++)
                    {
                      VAR42->VAR80[VAR52].VAR81=FUN14(VAR90[VAR52].VAR91);
                      VAR42->VAR80[VAR52].VAR82=FUN14(VAR90[VAR52].VAR92);
                      VAR42->VAR80[VAR52].VAR83=FUN14(VAR90[VAR52].VAR93);
                    }
                }
              else
                {
                  if (VAR53 < 24)
                    if ( (VAR42->VAR71 < (VAR58 << VAR53)) && (VAR53 != 24) )
                      VAR42->VAR80=(VAR94 *) FUN16(
                        VAR42->VAR80,(VAR57) (VAR58 << VAR53),
                        sizeof(*VAR42->VAR80));
                }

              if (VAR53 == 1)
                {
                  if(VAR42->VAR80[0].VAR81==0 &&
                     VAR42->VAR80[0].VAR82==0 &&
                     VAR42->VAR80[0].VAR83==0 &&
                     VAR42->VAR80[1].VAR81==0 &&
                     VAR42->VAR80[1].VAR82==0 &&
                     VAR42->VAR80[1].VAR83==0)
                    {  
                      VAR42->VAR80[1].VAR81 =
                        VAR42->VAR80[1].VAR82 =
                        VAR42->VAR80[1].VAR83 = VAR95;
                    }
                }

              if(FUN17(VAR42,VAR53) < 0)
                
                {
                VAR96:
                  FUN8(VAR68,"");
                    }

              if(VAR45.VAR15==0x14 && VAR50.VAR33!=0 && !VAR3->VAR97)
                {
                  
                  if(VAR50.VAR33 & 0x8000)
                    {
                      VAR1
                        *VAR98;

                      VAR98 = FUN18(VAR42, VAR5);
                      if (VAR98 != (VAR1 *) NULL) {
                        FUN19(VAR98,VAR42);
                        (void) FUN20(&VAR42);
                        FUN21(&VAR42,VAR98);
                      }
                    }
                  
                  if(VAR50.VAR33 & 0x2000)
                    {
                      VAR1
                        *VAR99;

                      VAR99 = FUN22(VAR42, VAR5);
                      if (VAR99 != (VAR1 *) NULL) {
                        FUN19(VAR99,VAR42);
                        (void) FUN20(&VAR42);
                        FUN21(&VAR42,VAR99);
                      }
                    }

      
                  if(VAR50.VAR33 & 0x0FFF)
                    {
                      VAR1
                        *VAR100;

                      VAR100=FUN23(VAR42,(VAR50.VAR33 &
                        0x0FFF), VAR5);
                      if (VAR100 != (VAR1 *) NULL) {
                        FUN19(VAR100,VAR42);
                        (void) FUN20(&VAR42);
                        FUN21(&VAR42,VAR100);
                      }
                    }
                }

              
              FUN24(VAR3,VAR42);
              VAR42->VAR63=8;
              if (VAR42->VAR101 == (VAR1 *) NULL)
                goto VAR102;
              VAR42=FUN25(VAR42);
              VAR42->VAR69=VAR42->VAR70=0;
              VAR42->VAR71=0;
              break;

            case 0x1B:  
              if(VAR45.VAR16>0x3C)
                VAR42=FUN15(VAR42,VAR3,
                  FUN12(VAR42)+0x3C,   
                  (VAR55) VAR45.VAR16-0x3C,VAR5);
              break;
            }
        }
      break;

    case 2:  
      (void) memset(VAR60,0,sizeof(VAR60));
      VAR47.VAR23 = 0;
      while(!FUN9(VAR42)) 
        {
          (void) FUN10(VAR42,VAR44.VAR7,VAR72);
          if(FUN9(VAR42))
            break;

          VAR46.VAR18=(VAR52=FUN7(VAR42));
          if(VAR52==VAR73)
            break;
          VAR46.VAR15=(VAR52=FUN7(VAR42));
          if(VAR52==VAR73)
            break;
          FUN11(VAR42,&VAR46.VAR19);
          FUN11(VAR42,&VAR46.VAR16);
          if(FUN9(VAR42))
            break;

          VAR44.VAR7=FUN12(VAR42)+VAR46.VAR16;

          switch(VAR46.VAR15)
            {
      case 1:
              VAR47.VAR21=FUN6(VAR42);
              VAR47.VAR22=FUN6(VAR42);
              VAR47.VAR23=FUN7(VAR42);
              break;
            case 0x0C:    
              VAR51.VAR39=FUN6(VAR42);
              VAR51.VAR40=FUN6(VAR42);

              VAR42->VAR71=VAR51.VAR40;
              if (FUN13(VAR42,VAR42->VAR71) == VAR65)
                FUN8(VAR89,
                  "");
              for (VAR52=VAR51.VAR39;
                   VAR52 < (int)VAR51.VAR40; VAR52++)
                {
                  VAR42->VAR80[VAR52].VAR81=FUN14((char)
                    FUN7(VAR42));
                  VAR42->VAR80[VAR52].VAR82=FUN14((char)
                    FUN7(VAR42));
                  VAR42->VAR80[VAR52].VAR83=FUN14((char)
                    FUN7(VAR42));
                  (void) FUN7(VAR42);   
                }
              break;
            case 0x0E:
              VAR49.VAR25=FUN6(VAR42);
              VAR49.VAR26=FUN6(VAR42);
              if ((VAR49.VAR25 == 0) || (VAR49.VAR26 == 0))
                FUN8(VAR67,"");
              VAR49.VAR27=FUN7(VAR42);
              VAR49.VAR31=FUN7(VAR42);

              if(VAR49.VAR31 > 1)
                continue; 
              switch(VAR49.VAR27)
                {
                case 1:
                  VAR53=1;
                  break;
                case 2:
                  VAR53=2;
                  break;
                case 3:
                  VAR53=4;
                  break;
                case 4:
                  VAR53=8;
                  break;
                case 8:
                  VAR53=24;
                  break;
                default:
                  continue;  
                }
              VAR42->VAR69=VAR49.VAR25;
              VAR42->VAR70=VAR49.VAR26;

              if ((VAR42->VAR71 == 0) && (VAR53 != 24))
                {
                  VAR57
                    VAR58;

                  VAR58=1;
                  VAR42->VAR71=VAR58 << VAR53;
                  if (!FUN13(VAR42,VAR42->VAR71))
                    goto VAR79;
                }
              else
                {
                  if(VAR53 < 24)
                    if( VAR42->VAR71<(VAR58 << VAR53) && VAR53!=24 )
                      VAR42->VAR80=(VAR94 *) FUN16(
                       VAR42->VAR80,(VAR57) (VAR58 << VAR53),
                       sizeof(*VAR42->VAR80));
                }


              switch(VAR49.VAR31)
                {
                case 0:    
                  {
                    VAR56=(VAR55) ((VAR53*VAR42->VAR69+7)/8);
                    VAR59=(unsigned char *) FUN26((VAR57)
                      VAR56,sizeof(*VAR59));
                    if (VAR59 == (unsigned char *) NULL)
                      goto VAR79;

                    for(VAR52=0; VAR52< (VAR55) VAR42->VAR70; VAR52++)
                      {
                        (void) FUN27(VAR42,VAR56,VAR59);
                        FUN28(VAR59,VAR52,VAR42,VAR53);
                      }

                    if(VAR59)
                      VAR59=(unsigned char *) FUN29(VAR59);;
                    break;
                  }
                case 1:    
                  {
                    if( FUN30(VAR42,VAR53) < 0)
                      goto VAR96;
                    break;
                  }
                }

              if(VAR60[0][0]<0 && !VAR3->VAR97)
                {    
                  VAR1
                    *VAR98;

                  VAR98 = FUN18(VAR42, VAR5);
                  if (VAR98 != (VAR1 *) NULL) {
                    FUN19(VAR98,VAR42);
                    (void) FUN20(&VAR42);
                    FUN21(&VAR42,VAR98);
                  }
                  
                }
              if(VAR60[1][1]<0 && !VAR3->VAR97)
                {    
                  VAR1
                    *VAR99;

                  VAR99 = FUN22(VAR42, VAR5);
                  if (VAR99 != (VAR1 *) NULL) {
                    FUN19(VAR99,VAR42);
                    (void) FUN20(&VAR42);
                    FUN21(&VAR42,VAR99);
                  }
                  
                }


              
              FUN24(VAR3,VAR42);
              VAR42->VAR63=8;
              if (VAR42->VAR101 == (VAR1 *) NULL)
                goto VAR102;
              VAR42=FUN25(VAR42);
              VAR42->VAR69=VAR42->VAR70=1;
              VAR42->VAR71=0;
              break;

            case 0x12:  
        VAR52=FUN6(VAR42);
              if(VAR46.VAR16 > (unsigned int) VAR52)
                VAR42=FUN15(VAR42,VAR3,
                  FUN12(VAR42)+VAR52,    
                  (VAR55) (VAR46.VAR16-VAR52-2),VAR5);
              break;

      case 0x1B:          
              VAR54 = FUN31(VAR42,VAR47.VAR23,NULL,&VAR60);
              (void) VAR54;
              break;
            }
        }

      break;

    default:
      {
          FUN8(VAR68,"");
       }
    }












 
  VAR102:
   (void) FUN32(VAR42);

  {
    VAR1
      *VAR103;

    VAR55
      VAR104=0;

    
    VAR103=VAR42;
    VAR42=NULL;
    while (VAR103 != (VAR1 *) NULL)
      {
        VAR1 *VAR105=VAR103;
        if ((VAR103->VAR70 == 0) || (VAR103->VAR69 == 0)) {
          VAR103=VAR103->VAR106;
          FUN33(&VAR105);
        } else {
          VAR42=VAR103;
          VAR103=VAR103->VAR106;
        }
      }
    
    for (VAR103=VAR42; VAR103 != (VAR1 *) NULL; VAR103=VAR103->VAR101)
      VAR103->VAR104=(VAR57) VAR104++;
  }
  if (VAR42 == (VAR1 *) NULL)
    FUN8(VAR67,
      "");
  return(VAR42);
}