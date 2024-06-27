static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR6
    VAR7;

  VAR1
    *VAR8;

  VAR9
    VAR10;

  VAR11
    VAR12,
    VAR13;

  VAR14
    VAR15;

  VAR16
    *VAR17;

  register VAR9
    *VAR18;

  register VAR11
    VAR19;

  register VAR20
    *VAR21;

  register VAR11
    VAR22;

  register unsigned char
    *VAR23;

  VAR24
    VAR25,
    VAR26;

  VAR11
    VAR27;

  unsigned char
    *VAR28;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR29 == VAR30);
  if (VAR3->VAR31 != VAR32)
    (void) FUN2(VAR33,FUN3(),"",
      VAR3->VAR34);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR29 == VAR30);
  VAR8=FUN4(VAR3);
  VAR15=FUN5(VAR3,VAR8,VAR35,VAR5);
  if (VAR15 == VAR32)
    {
      VAR8=FUN6(VAR8);
      return((VAR1 *) NULL);
    }
  
   (void) FUN7(&VAR7,0,sizeof(VAR7));
   VAR7.VAR36=FUN8(VAR8);

  if (VAR7.VAR36!=40)


     FUN9(VAR37,"");
   
  VAR7.VAR38=(short) FUN8(VAR8);
  VAR7.VAR39=(short) FUN8(VAR8);
  VAR7.VAR40=FUN10(VAR8);
  VAR7.VAR41=FUN10(VAR8);
  VAR7.VAR42=FUN8(VAR8);
  VAR7.VAR43=FUN8(VAR8);
  VAR7.VAR44=FUN8(VAR8);
  VAR7.VAR45=FUN8(VAR8);
  VAR7.VAR46=FUN8(VAR8);
  VAR7.VAR47=FUN8(VAR8);
  if ((VAR7.VAR42 == VAR48) &&
      ((VAR7.VAR41 == 16) || (VAR7.VAR41 == 32)))
    {
      VAR7.VAR49=FUN8(VAR8);
      VAR7.VAR50=FUN8(VAR8);
      VAR7.VAR51=FUN8(VAR8);
    }
  VAR8->VAR52=VAR7.VAR41 == 32 ? VAR53 : VAR32;
  VAR8->VAR54=(VAR24) FUN11(VAR7.VAR38);
  VAR8->VAR55=(VAR24) FUN11(VAR7.VAR39);
  VAR8->VAR56=8;
  if ((VAR7.VAR46 != 0) || (VAR7.VAR41 < 16))
    {
      VAR24
        VAR57;

      VAR8->VAR58=VAR59;
      VAR8->VAR60=VAR7.VAR46;
      VAR57=1;
      if (VAR8->VAR60 == 0)
        VAR8->VAR60=VAR57 << VAR7.VAR41;
    }
  if (VAR3->VAR36)
    {
      VAR61
        VAR62;

      VAR63
        VAR64;

      VAR64=FUN12(VAR3->VAR36,&VAR62);
      if (VAR64 & VAR65)
        if ((VAR62.VAR38 != 0) && (VAR62.VAR38 < VAR8->VAR54))
          VAR8->VAR54=VAR62.VAR38;
      if (VAR64 & VAR66)
         if ((VAR62.VAR39 != 0) && (VAR62.VAR39 < VAR8->VAR55))
           VAR8->VAR55=VAR62.VAR39;
     }












   if (VAR8->VAR58 == VAR59)
     {
       VAR24
        VAR26,
        VAR67;

      unsigned char
        *VAR68;

      
      if (FUN13(VAR8,VAR8->VAR60) == VAR32)
        FUN9(VAR69,"");
      VAR26=(VAR24) VAR8->VAR60;
      VAR68=(unsigned char *) FUN14(VAR26,
        4*sizeof(*VAR68));
      if (VAR68 == (unsigned char *) NULL)
        FUN9(VAR69,"");
      VAR67=4;
      VAR27=FUN15(VAR8,VAR67*VAR8->VAR60,VAR68);
      if (VAR27 != (VAR11) (VAR67*VAR8->VAR60))
        FUN9(VAR37,"");
      VAR23=VAR68;
      for (VAR22=0; VAR22 < (VAR11) VAR8->VAR60; VAR22++)
      {
        VAR8->VAR70[VAR22].VAR71=FUN16(*VAR23++);
        VAR8->VAR70[VAR22].VAR72=FUN16(*VAR23++);
        VAR8->VAR70[VAR22].VAR73=FUN16(*VAR23++);
        if (VAR67 == 4)
          VAR23++;
      }
      VAR68=(unsigned char *) FUN17(VAR68);
    }
  
  if (VAR7.VAR42 == VAR74)
    VAR7.VAR41<<=1;
  VAR25=4*((VAR8->VAR54*VAR7.VAR41+31)/32);
  VAR26=VAR25*VAR8->VAR55;
  VAR17=FUN18((VAR24) VAR8->VAR55,FUN19(
    VAR25,VAR8->VAR54+256UL)*sizeof(*VAR28));
  if (VAR17 == (VAR16 *) NULL)
    FUN9(VAR69,"");
  VAR28=(unsigned char *) FUN20(VAR17);
  if ((VAR7.VAR42 == VAR75) ||
      (VAR7.VAR42 == VAR48))
    {
      VAR27=FUN15(VAR8,VAR26,VAR28);
      if (VAR27 != (VAR11) (VAR26))
        FUN9(VAR37,"");
    }
  else
    {
      
      VAR15=FUN21(VAR8,VAR7.VAR42 ? VAR53 : VAR32,
        VAR28);
      if (VAR15 == VAR32)
        FUN9(VAR37,"");
    }
  
  VAR8->VAR76=VAR77;
  VAR8->VAR78=(double) VAR7.VAR44/100.0;
  VAR8->VAR79=(double) VAR7.VAR45/100.0;
  
  switch (VAR7.VAR41)
  {
    case 1:
    {
      
      for (VAR13=(VAR11) VAR8->VAR55-1; VAR13 >= 0; VAR13--)
      {
        VAR23=VAR28+(VAR8->VAR55-VAR13-1)*VAR25;
        VAR21=FUN22(VAR8,0,VAR13,VAR8->VAR54,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        VAR18=FUN23(VAR8);
        for (VAR19=0; VAR19 < ((VAR11) VAR8->VAR54-7); VAR19+=8)
        {
          for (VAR12=0; VAR12 < 8; VAR12++)
          {
            VAR10=(VAR9) ((*VAR23) & (0x80 >> VAR12) ? 0x01 : 0x00);
            FUN24(VAR18+VAR19+VAR12,VAR10);
          }
          VAR23++;
        }
        if ((VAR8->VAR54 % 8) != 0)
          {
            for (VAR12=0; VAR12 < (VAR11) (VAR8->VAR54 % 8); VAR12++)
            {
              VAR10=(VAR9) ((*VAR23) & (0x80 >> VAR12) ? 0x01 : 0x00);
              FUN24(VAR18+VAR19+VAR12,VAR10);
            }
            VAR23++;
          }
        if (FUN25(VAR8,VAR5) == VAR32)
          break;
        if (VAR8->VAR80 == (VAR1 *) NULL)
          {
            VAR15=FUN26(VAR8,VAR81,VAR8->VAR55-VAR13-1,
              VAR8->VAR55);
            if (VAR15 == VAR32)
              break;
          }
      }
      (void) FUN27(VAR8);
      break;
    }
    case 4:
    {
      
      for (VAR13=(VAR11) VAR8->VAR55-1; VAR13 >= 0; VAR13--)
      {
        VAR23=VAR28+(VAR8->VAR55-VAR13-1)*VAR25;
        VAR21=FUN22(VAR8,0,VAR13,VAR8->VAR54,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        VAR18=FUN23(VAR8);
        for (VAR19=0; VAR19 < ((VAR11) VAR8->VAR54-1); VAR19+=2)
        {
          VAR10=FUN28(VAR8,(*VAR23 >> 4) & 0xf);
          FUN24(VAR18+VAR19,VAR10);
          VAR10=FUN28(VAR8,*VAR23 & 0xf);
          FUN24(VAR18+VAR19+1,VAR10);
          VAR23++;
        }
        if ((VAR8->VAR54 % 2) != 0)
          {
            VAR10=FUN28(VAR8,(*VAR23 >> 4) & 0xf);
            FUN24(VAR18+VAR19,VAR10);
            VAR23++;
          }
        if (FUN25(VAR8,VAR5) == VAR32)
          break;
        if (VAR8->VAR80 == (VAR1 *) NULL)
          {
            VAR15=FUN26(VAR8,VAR81,VAR8->VAR55-VAR13-1,
              VAR8->VAR55);
            if (VAR15 == VAR32)
              break;
          }
      }
      (void) FUN27(VAR8);
      break;
    }
    case 8:
    {
      
      if ((VAR7.VAR42 == VAR82) ||
          (VAR7.VAR42 == VAR74))
        VAR25=VAR8->VAR54;
      for (VAR13=(VAR11) VAR8->VAR55-1; VAR13 >= 0; VAR13--)
      {
        VAR23=VAR28+(VAR8->VAR55-VAR13-1)*VAR25;
        VAR21=FUN22(VAR8,0,VAR13,VAR8->VAR54,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        VAR18=FUN23(VAR8);
        for (VAR19=0; VAR19 < (VAR11) VAR8->VAR54; VAR19++)
        {
          VAR10=FUN28(VAR8,*VAR23);
          FUN24(VAR18+VAR19,VAR10);
          VAR23++;
          VAR21++;
        }
        if (FUN25(VAR8,VAR5) == VAR32)
          break;
        if (VAR8->VAR80 == (VAR1 *) NULL)
          {
            VAR15=FUN26(VAR8,VAR81,VAR8->VAR55-VAR13-1,
              VAR8->VAR55);
            if (VAR15 == VAR32)
              break;
          }
      }
      (void) FUN27(VAR8);
      break;
    }
    case 16:
    {
      unsigned short
        VAR83;

      
      VAR8->VAR58=VAR84;
      if (VAR7.VAR42 == VAR82)
        VAR25=2*VAR8->VAR54;
      for (VAR13=(VAR11) VAR8->VAR55-1; VAR13 >= 0; VAR13--)
      {
        VAR23=VAR28+(VAR8->VAR55-VAR13-1)*VAR25;
        VAR21=FUN22(VAR8,0,VAR13,VAR8->VAR54,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        for (VAR19=0; VAR19 < (VAR11) VAR8->VAR54; VAR19++)
        {
          VAR83=(*VAR23++);
          VAR83|=(*VAR23++ << 8);
          if (VAR7.VAR49 == 0)
            {
              FUN29(VAR21,FUN16(FUN30(
                (unsigned char) ((VAR83 >> 10) & 0x1f))));
              FUN31(VAR21,FUN16(FUN30(
                (unsigned char) ((VAR83 >> 5) & 0x1f))));
              FUN32(VAR21,FUN16(FUN30(
                (unsigned char) (VAR83 & 0x1f))));
            }
          else
            {
              FUN29(VAR21,FUN16(FUN30(
                (unsigned char) ((VAR83 >> 11) & 0x1f))));
              FUN31(VAR21,FUN16(FUN33(
                (unsigned char) ((VAR83 >> 5) & 0x3f))));
              FUN32(VAR21,FUN16(FUN30(
                (unsigned char) (VAR83 & 0x1f))));
            }
          VAR21++;
        }
        if (FUN25(VAR8,VAR5) == VAR32)
          break;
        if (VAR8->VAR80 == (VAR1 *) NULL)
          {
            VAR15=FUN26(VAR8,VAR81,VAR8->VAR55-VAR13-1,
              VAR8->VAR55);
            if (VAR15 == VAR32)
              break;
          }
      }
      break;
    }
    case 24:
    case 32:
    {
      
      for (VAR13=(VAR11) VAR8->VAR55-1; VAR13 >= 0; VAR13--)
      {
        VAR23=VAR28+(VAR8->VAR55-VAR13-1)*VAR25;
        VAR21=FUN22(VAR8,0,VAR13,VAR8->VAR54,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        for (VAR19=0; VAR19 < (VAR11) VAR8->VAR54; VAR19++)
        {
          FUN32(VAR21,FUN16(*VAR23++));
          FUN31(VAR21,FUN16(*VAR23++));
          FUN29(VAR21,FUN16(*VAR23++));
          if (VAR8->VAR52 != VAR32)
            FUN34(VAR21,FUN16(*VAR23++));
          VAR21++;
        }
        if (FUN25(VAR8,VAR5) == VAR32)
          break;
        if (VAR8->VAR80 == (VAR1 *) NULL)
          {
            VAR15=FUN26(VAR8,VAR81,VAR8->VAR55-VAR13-1,
              VAR8->VAR55);
            if (VAR15 == VAR32)
              break;
          }
      }
      break;
    }
    default:
      FUN9(VAR37,"");
  }
  VAR17=FUN35(VAR17);
  if (FUN36(VAR8) != VAR32)
    FUN37(VAR5,VAR37,"",
      VAR8->VAR34);
  if (VAR7.VAR39 < 0)
    {
      VAR1
        *VAR85;

      
      VAR85=FUN38(VAR8,VAR5);
      if (VAR85 != (VAR1 *) NULL)
        {
          FUN39(VAR85,VAR8);
          VAR8=FUN40(VAR8);
          VAR8=VAR85;
        }
    }
  (void) FUN41(VAR8);
  return(FUN42(VAR8));
}