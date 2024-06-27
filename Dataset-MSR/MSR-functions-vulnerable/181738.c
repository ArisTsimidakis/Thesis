static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR6
    VAR7;

  VAR8
    *VAR9,
    *VAR10,
    *VAR11,
    *VAR12;

  VAR13
    VAR14;

  VAR15
    *VAR16;

  VAR17
    VAR18;

  VAR19
    VAR20;

  VAR1
    *VAR21;

  VAR22
    VAR23;

  VAR24
    VAR25;

  register VAR22
    *VAR26;

  register VAR27
    VAR28,
    VAR29;

  register VAR30
    *VAR31;

  register unsigned char
    *VAR32,
    *VAR33,
    *VAR34,
    *VAR35;

  VAR36
    VAR37;

  VAR27
    VAR38;

  unsigned char
    *VAR39;

  unsigned int
    VAR40,
    VAR41,
    VAR42,
    VAR43;

  VAR36
    VAR44;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR45 == VAR46);
  if (VAR3->VAR47 != VAR48)
    (void) FUN2(VAR49,FUN3(),"",
      VAR3->VAR50);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR45 == VAR46);
  VAR21=FUN4(VAR3);
  VAR25=FUN5(VAR3,VAR21,VAR51,VAR5);
  if (VAR25 == VAR48)
    {
      VAR21=FUN6(VAR21);
      return((VAR1 *) NULL);
    }
  (void) FUN7(VAR21);
  
  VAR18=FUN8();
  if (VAR18 != VAR52)
    FUN9(VAR53,"");
  VAR37=20000000;
  VAR18=FUN10(&VAR37);
  if (VAR18 != VAR52)
    {
      FUN11();
      FUN9(VAR53,"");
    }
  VAR41=64;
  VAR42=64;
  VAR16=(VAR15 *) NULL;
  {
#if FUN12(VAR54)
    VAR55
      VAR56;

    FUN13(VAR21->VAR50,&VAR56);
    VAR18=FUN14((const VAR55 &) VAR56,(char *) NULL,
#else
    VAR18=FUN14(VAR21->VAR50,(char *) NULL,
#endif
      &VAR43,&VAR40,&VAR41,&VAR42,&VAR7,&VAR16);
  }
  if (VAR18 == VAR57)
    {
      FUN11();
      FUN9(VAR58,"");
    }
  if (VAR18 != VAR52)
    {
      FUN11();
      FUN15(VAR5,VAR59,"",
        VAR21->VAR50);
      VAR21=FUN6(VAR21);
      return((VAR1 *) NULL);
    }
  if (VAR7.VAR60 == 0)
    {
      FUN11();
      FUN9(VAR61,"");
    }
  if (VAR3->VAR62 == (char *) NULL)
    {
      float
        VAR63;

      
      VAR63=(float) VAR43/VAR40;
      VAR18=FUN16(VAR16,&VAR63);
      if (VAR18 != VAR52)
        FUN9(VAR64,"");
      if (VAR43 != (VAR36) FUN17((VAR63*VAR40)+0.5))
        FUN18(VAR43,VAR40);
    }
  VAR18=FUN19(VAR16,&VAR20);
  if (VAR18 != VAR52)
    {
      FUN11();
      FUN9(VAR64,"");
    }
  if (VAR20.VAR65)
    if ((VAR20.VAR66.VAR67 != 0) &&
        (VAR20.VAR66.VAR68 != (unsigned char *) NULL))
      {
        char
          *VAR69;

        
        VAR69=(char *) NULL;
        if (~VAR20.VAR66.VAR67 >= (VAR70-1))
          VAR69=(char *) FUN20(VAR20.VAR66.VAR67+
            VAR70,sizeof(*VAR69));
        if (VAR69 == (char *) NULL)
          {
            FUN11();
            FUN9(VAR58,"");
          }
        (void) FUN21(VAR69,(char *) VAR20.VAR66.VAR68,
          VAR20.VAR66.VAR67+1);
        (void) FUN22(VAR21,"",VAR69);
        VAR69=FUN23(VAR69);
      }
  if (VAR20.VAR71)
    if ((VAR20.VAR72.VAR67 != 0) &&
        (VAR20.VAR72.VAR68 != (unsigned char *) NULL))
      {
        char
          *VAR72;

        
        VAR72=(char *) NULL;
        if (~VAR20.VAR72.VAR67 >= (VAR70-1))
          VAR72=(char *) FUN20(VAR20.VAR72.VAR67+
            VAR70,sizeof(*VAR72));
        if (VAR72 == (char *) NULL)
          {
            FUN11();
            FUN9(VAR58,"");
          }
        (void) FUN21(VAR72,(char *) VAR20.VAR72.VAR68,
          VAR20.VAR72.VAR67+1);
        (void) FUN22(VAR21,"",VAR72);
        VAR72=FUN23(VAR72);
      }
  
  for (VAR28=1; ; VAR28++)
    if (((VAR43 >> VAR28) < VAR41) || ((VAR40 >> VAR28) < VAR42))
      break;
  VAR44=VAR28;
  if (VAR3->VAR73 != 0)
    while (VAR44 > VAR3->VAR44)
    {
      VAR43>>=1;
      VAR40>>=1;
      VAR44--;
    }
  if (VAR3->VAR74 != (char *) NULL)
    while ((VAR43 > VAR21->VAR75) || (VAR40 > VAR21->VAR76))
    {
      VAR43>>=1;
      VAR40>>=1;
      VAR44--;
    }
  VAR21->VAR77=8;
  VAR21->VAR75=VAR43;
  VAR21->VAR76=VAR40;
  if ((VAR7.VAR60 % 2) == 0)
    VAR21->VAR78=VAR79;
  if (VAR7.VAR60 == 1)
    {
      
      if (FUN24(VAR21,VAR80) == VAR48)
        {
          FUN11();
          FUN9(VAR58,"");
        }
    }
  if (VAR3->VAR81 != VAR48)
    {
      (void) FUN25(VAR16);
       FUN11();
       return(FUN26(VAR21));
     }












   
  VAR39=(unsigned char *) FUN20(VAR21->VAR75,(VAR42+
    1UL)*VAR7.VAR60*sizeof(*VAR39));
  if (VAR39 == (unsigned char *) NULL)
    {
      FUN11();
      (void) FUN25(VAR16);
      FUN9(VAR58,"");
    }
  
  VAR14.VAR60=VAR7.VAR60;
  for (VAR28=0; VAR28 < 4; VAR28++)
  {
    VAR14.VAR82[VAR28].VAR83.VAR84=VAR85;
    VAR14.VAR82[VAR28].VAR86=1;
    VAR14.VAR82[VAR28].VAR87=1;
    VAR14.VAR82[VAR28].VAR88=VAR14.VAR60;
    VAR14.VAR82[VAR28].VAR89=VAR21->VAR75*
      VAR14.VAR82[VAR28].VAR88;
    VAR14.VAR82[VAR28].VAR90=VAR39+VAR28;
  }
  VAR14.VAR82[0].VAR83.VAR91=VAR14.VAR60 > 2 ?
    VAR92 : VAR93;
  VAR12=(&VAR14.VAR82[0]);
  VAR14.VAR82[1].VAR83.VAR91=VAR14.VAR60 > 2 ?
    VAR94 : VAR95;
  VAR11=(&VAR14.VAR82[1]);
  VAR14.VAR82[2].VAR83.VAR91=VAR96;
  VAR10=(&VAR14.VAR82[2]);
  VAR14.VAR82[3].VAR83.VAR91=VAR95;
  VAR9=(&VAR14.VAR82[VAR14.VAR60-1]);
  FUN27(VAR97);
  
  for (VAR38=0; VAR38 < (VAR27) VAR21->VAR76; VAR38++)
  {
    VAR31=FUN28(VAR21,0,VAR38,VAR21->VAR75,1,VAR5);
    if (VAR31 == (VAR30 *) NULL)
      break;
    VAR26=FUN29(VAR21);
    if ((VAR38 % VAR42) == 0)
      {
        
        if (VAR3->VAR62 != (char *) NULL)
          VAR18=FUN30(VAR16,0,VAR38,VAR21->VAR75,VAR38+
            VAR42-1,VAR44,&VAR14);
        else
          VAR18=FUN31(VAR16,0.0F,
            (float) VAR38/VAR21->VAR76,(float) VAR21->VAR75/VAR21->VAR76,
            (float) (VAR38+VAR42-1)/VAR21->VAR76,(VAR27) VAR21->VAR75,
            (VAR27) VAR42,&VAR14);
        if (VAR18 == VAR57)
          {
            VAR39=(unsigned char *) FUN32(VAR39);
            (void) FUN25(VAR16);
            FUN11();
            FUN9(VAR58,"");
          }
      }
    
    VAR35=VAR12->VAR90+(VAR38 % VAR42)*VAR12->VAR89;
    VAR34=VAR11->VAR90+(VAR38 % VAR42)*VAR11->VAR89;
    VAR33=VAR10->VAR90+(VAR38 % VAR42)*VAR10->VAR89;
    VAR32=VAR9->VAR90+(VAR38 % VAR42)*VAR9->VAR89;
    for (VAR29=0; VAR29 < (VAR27) VAR21->VAR75; VAR29++)
    {
      if (VAR14.VAR60 > 2)
        {
          FUN33(VAR31,FUN34(*VAR35));
          FUN35(VAR31,FUN34(*VAR34));
          FUN36(VAR31,FUN34(*VAR33));
        }
      else
        {
          VAR23=FUN34(*VAR35);
          FUN37(VAR26+VAR29,VAR23);
          FUN33(VAR31,VAR23);
          FUN35(VAR31,VAR23);
          FUN36(VAR31,VAR23);
        }
      FUN38(VAR31,VAR98);
      if (VAR21->VAR78 != VAR48)
        FUN39(VAR31,FUN34(*VAR32));
      VAR31++;
      VAR35+=VAR12->VAR88;
      VAR34+=VAR11->VAR88;
      VAR33+=VAR10->VAR88;
      VAR32+=VAR9->VAR88;
    }
    if (FUN40(VAR21,VAR5) == VAR48)
      break;
    VAR25=FUN41(VAR21,VAR99,(VAR100) VAR38,
      VAR21->VAR76);
    if (VAR25 == VAR48)
      break;
  }
  VAR39=(unsigned char *) FUN32(VAR39);
  (void) FUN25(VAR16);
  FUN11();
  return(FUN26(VAR21));
}