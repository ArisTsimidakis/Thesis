static VAR1 FUN1(const VAR2 *VAR3,
  const VAR4 *VAR5,VAR6 *VAR7,VAR6 *VAR8,
  const QuantumType VAR9, unsigned char *VAR10,
  MagickOffsetType VAR11,const MagickBooleanType VAR12,
  const CompressionType VAR13,VAR14 *VAR15)
{
  VAR16
    VAR17;

  VAR18
    *VAR19;

  register const VAR20
    *VAR21;

  register VAR22
    VAR23;

  VAR1
    VAR24,
    VAR25;

  VAR22
    VAR26;

  unsigned char
    *VAR27;

#ifdef VAR28

#define CHUNK 16384

  int
    VAR29,
    VAR30;

  unsigned char
    *VAR31;

  VAR32
    VAR33;

  VAR31=(unsigned char *) NULL;
  VAR29=VAR34;
#endif
  VAR24=0;
  if (VAR12 != VAR35)
    {
      VAR11=FUN2(VAR7)+2;
      VAR24+=FUN3(VAR3,VAR7,VAR8,VAR13,1);
    }
  if (VAR8->VAR36 > 8)
    VAR8->VAR36=16;
  VAR17=FUN4(VAR7) && (VAR7->VAR36 == 1) ?
    VAR37 : VAR35;
  VAR19=FUN5(VAR5,VAR8);
  if (VAR19 == (VAR18 *) NULL)
    return(0);
  VAR27=(unsigned char *) FUN6(VAR19);
#ifdef VAR28
  if (VAR13 == VAR38)
    {
      VAR31=(unsigned char *) FUN7(VAR39,
        sizeof(*VAR31));
      if (VAR31 == (unsigned char *) NULL)
        {
          VAR19=FUN8(VAR19);
          return(0);
        }
      memset(&VAR33,0,sizeof(VAR33));
      VAR33.VAR40=VAR41;
      VAR30=VAR42;
      if ((VAR5->VAR43 > 0 && VAR5->VAR43 < 10))
        VAR30=(int) VAR5->VAR43;
       if (FUN9(&VAR33,VAR30) != VAR44)
         {
           VAR19=FUN8(VAR19);




           return(0);
         }
     }
#endif
  for (VAR26=0; VAR26 < (VAR22) VAR8->VAR45; VAR26++)
  {
    VAR21=FUN10(VAR8,0,VAR26,VAR8->VAR46,1,VAR15);
    if (VAR21 == (const VAR20 *) NULL)
      break;
    VAR25=FUN11(VAR8,(VAR47 *) NULL,VAR19,
      VAR9,VAR27,VAR15);
    if (VAR17 != VAR35)
      for (VAR23=0; VAR23 < (VAR22) VAR25; VAR23++)
        VAR27[VAR23]=(~VAR27[VAR23]);
    if (VAR13 == VAR48)
      {
        VAR25=FUN12(VAR7,VAR25,VAR27,VAR10,
          VAR15);
        VAR24+=FUN13(VAR7,VAR25,VAR10);
        VAR11+=FUN14(VAR3,VAR7,VAR25,VAR11);
      }
#ifdef VAR28
    else if (VAR13 == VAR38)
      {
        VAR33.VAR49=(VAR50) VAR25;
        VAR33.VAR51=(VAR52 *) VAR27;
        if (VAR26 == (VAR22) VAR8->VAR45-1)
          VAR29=VAR53;
        do {
            VAR33.VAR54=(VAR50) VAR39;
            VAR33.VAR55=(VAR52 *) VAR31;
            if (FUN15(&VAR33,VAR29) == VAR56)
              break;
            VAR25=(VAR1) VAR39-VAR33.VAR54;
            if (VAR25 > 0)
              VAR24+=FUN13(VAR7,VAR25,VAR31);
        } while (VAR33.VAR54 == 0);
      }
#endif
    else
      VAR24+=FUN13(VAR7,VAR25,VAR27);
  }
#ifdef VAR28
  if (VAR13 == VAR38)
    {
      (void) FUN16(&VAR33);
      VAR31=(unsigned char *) FUN17(
        VAR31);
    }
#endif
  VAR19=FUN8(VAR19);
  return(VAR24);
}