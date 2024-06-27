static unsigned char *FUN1(VAR1 *VAR2,VAR1 *VAR3,
  size_t VAR4,const unsigned int VAR5,VAR6 *VAR7)
{
  VAR8
    VAR9;

  register VAR10
    VAR11;

  register unsigned char
    *VAR12,
    *VAR13;

  VAR6
    VAR14,
    VAR15,
    VAR16,
    VAR17,
    VAR18;

  VAR10
    VAR19,
    VAR20,
    VAR21;

  unsigned char
    *VAR22,
    *VAR23;

  
  if (VAR5 <= 8)
    VAR4&=0x7fff;
  VAR18=VAR3->VAR24;
  VAR14=1;
  if (VAR5 == 16)
    {
      VAR14=2;
      VAR18*=2;
    }
  else
    if (VAR5 == 32)
      VAR18*=VAR3->VAR25 != VAR26 ? 4 : 3;
  if (VAR4 == 0)
    VAR4=VAR18;
  VAR16=(VAR6) (VAR3->VAR24 | 0x8000);
  if (VAR3->VAR27 == VAR28)
    VAR16=(VAR6) ((4*VAR3->VAR24) | 0x8000);
  
  VAR22=(unsigned char *) FUN2(VAR3->VAR29,VAR16*
    sizeof(*VAR22));
  if (VAR22 == (unsigned char *) NULL)
    return((unsigned char *) NULL);
  *VAR7=VAR16*VAR3->VAR29*sizeof(*VAR22);
  (void) FUN3(VAR22,0,*VAR7);
  VAR23=(unsigned char *) FUN2(VAR16,2*
    sizeof(*VAR23));
  if (VAR23 == (unsigned char *) NULL)
    return((unsigned char *) NULL);
  if (VAR4 < 8)
    {
      
      for (VAR21=0; VAR21 < (VAR10) VAR3->VAR29; VAR21++)
      {
        VAR13=VAR22+VAR21*VAR18;
        VAR9=VAR4;
        VAR19=FUN4(VAR2,(VAR6) VAR9,VAR23);
        (void) VAR19;
        VAR12=FUN5(VAR23,&VAR9,VAR5);
        if ((VAR13+VAR9) > (VAR22+(*VAR7)))
          {
            (void) FUN6(&VAR3->VAR30,FUN7(),
              VAR31,"","",
              VAR3->VAR32);
            break;
          }
        (void) FUN8(VAR13,VAR12,(VAR6) VAR9);
      }
      VAR23=(unsigned char *) FUN9(VAR23);
      return(VAR22);
    }
  
  for (VAR21=0; VAR21 < (VAR10) VAR3->VAR29; VAR21++)
  {
    VAR13=VAR22+VAR21*VAR18;
    if (VAR4 > 200)
      VAR17=FUN10(VAR2);
    else
      VAR17=1UL*FUN11(VAR2);
    if (VAR17 >= VAR16)
      {
        (void) FUN6(&VAR3->VAR30,FUN7(),
          VAR31,"","",VAR3->VAR32);
        break;
      }
    VAR19=FUN4(VAR2,VAR17,VAR23);
    for (VAR20=0; VAR20 < (VAR10) VAR17; )
      if ((VAR23[VAR20] & 0x80) == 0)
        {
          VAR15=(VAR6) ((VAR23[VAR20] & 0xff)+1);
          VAR9=VAR15*VAR14;
          VAR12=FUN5(VAR23+VAR20+1,&VAR9,VAR5);
          if ((VAR13-VAR22+VAR9) <= *VAR7)
            (void) FUN8(VAR13,VAR12,(VAR6) VAR9);
          VAR13+=VAR9;
          VAR20+=(VAR10) (VAR15*VAR14+1);
        }
      else
        {
          VAR15=(VAR6) (((VAR23[VAR20] ^ 0xff) & 0xff)+2);
          VAR9=VAR14;
          VAR12=FUN5(VAR23+VAR20+1,&VAR9,VAR5);
          for (VAR11=0; VAR11 < (VAR10) VAR15; VAR11++)
          {
            if ((VAR13-VAR22+VAR9) <= *VAR7)
              (void) FUN8(VAR13,VAR12,(VAR6) VAR9);
            VAR13+=VAR9;
          }
          VAR20+=(VAR10) VAR14+1;
        }
  }
  VAR23=(unsigned char *) FUN9(VAR23);
  return(VAR22);
}