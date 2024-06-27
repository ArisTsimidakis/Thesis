static VAR1 *FUN1(const VAR2 *VAR3,VAR1 *VAR4,
  char *VAR5,VAR6 *VAR7)
{
  char
    VAR8[VAR9],
    VAR10[VAR9],
    *VAR11;

  VAR12
    *VAR13;

  VAR1
    *VAR14;

  VAR15
    VAR16;

  VAR17
    VAR18;

  VAR19
    VAR20;

  VAR21
    VAR22;

  VAR23
    VAR24;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR25 == VAR26);
  if (VAR3->VAR27 != VAR28)
    (void) FUN2(VAR29,FUN3(),"",
      VAR3->VAR8);
  assert(VAR7 != (VAR6 *) NULL);
  assert(VAR7->VAR25 == VAR26);
  
  VAR18.VAR30=VAR31;
  VAR18.VAR32=VAR31;
  if ((VAR4->VAR33 == 0.0) || (VAR4->VAR34 == 0.0))
    {
      VAR35
        VAR36;

      VAR37
        VAR38;

      VAR38=FUN4(VAR39,&VAR36);
      VAR4->VAR33=VAR36.VAR40;
      VAR4->VAR34=VAR36.VAR41;
      if ((VAR38 & VAR42) == 0)
        VAR4->VAR34=VAR4->VAR33;
    }
  VAR20.VAR43=612;
  VAR20.VAR44=792;
  VAR20.VAR30=43;
  VAR20.VAR32=43;
  if (VAR3->VAR20 != (char *) NULL)
    (void) FUN5(VAR3->VAR20,&VAR20);
  
  VAR4->VAR45=(VAR46) FUN6((((double) VAR20.VAR43*VAR4->VAR33)/
     VAR18.VAR30)+0.5);
   VAR4->VAR47=(VAR46) FUN6((((double) VAR20.VAR44*VAR4->VAR34)/
     VAR18.VAR32)+0.5);












   VAR4->VAR20.VAR30=0;
   VAR4->VAR20.VAR32=0;
   VAR14=(VAR1 *) NULL;
  if (VAR3->VAR14 != (char *) NULL)
    {
      VAR2
        *VAR48;

      VAR48=FUN7(VAR3);
      FUN8(VAR48,(void *) NULL,0);
      (void) FUN9(VAR48->VAR8,VAR3->VAR14,
        VAR9);
      VAR14=FUN10(VAR48,VAR7);
      VAR48=FUN11(VAR48);
    }
  
  (void) FUN12(VAR4);
  VAR13=FUN13(VAR3,(VAR12 *) NULL);
  (void) FUN14(&VAR13->VAR5,VAR3->VAR8);
  (void) FUN15(VAR10,VAR9,"",(long) VAR20.VAR30,
    (long) VAR20.VAR32);
  (void) FUN14(&VAR13->VAR10,VAR10);
  VAR16=FUN16(VAR4,VAR13,&VAR24);
  if (VAR16 == VAR28)
    FUN17(VAR49,"");
  VAR20.VAR32=(VAR21) FUN18((double) VAR20.VAR32+VAR24.VAR50-0.5);
  (void) FUN15(VAR10,VAR9,"",(long) VAR20.VAR30,
    (long) VAR20.VAR32);
  (void) FUN14(&VAR13->VAR10,VAR10);
  (void) FUN9(VAR8,VAR3->VAR8,VAR9);
  if (*VAR13->VAR5 != '')
    *VAR13->VAR5='';
  VAR11=VAR5;
  for (VAR22=2*VAR20.VAR32; VAR11 != (char *) NULL; )
  {
    
    (void) FUN19(&VAR13->VAR5,VAR5);
    (void) FUN19(&VAR13->VAR5,"");
    VAR22+=(VAR21) (VAR24.VAR50-VAR24.VAR51);
    if (VAR4->VAR52 == (VAR1 *) NULL)
      {
        VAR16=FUN20(VAR4,VAR53,VAR22,VAR4->VAR47);
        if (VAR16 == VAR28)
          break;
      }
    VAR11=FUN21(VAR4,VAR5);
    if ((VAR22 < (VAR21) VAR4->VAR47) && (VAR11 != (char *) NULL))
      continue;
    if (VAR14 != (VAR1 *) NULL)
      {
        VAR54
          VAR55;

        VAR55=FUN22(VAR4,
          (VAR54) NULL,VAR4->VAR56);
        (void) FUN23(VAR4,VAR14);
        (void) FUN22(VAR4,VAR55,
          VAR4->VAR56);
      }
    (void) FUN24(VAR4,VAR13);
    if (VAR11 == (char *) NULL)
      break;
    
    *VAR13->VAR5='';
    VAR22=2*VAR20.VAR32;
    FUN25(VAR3,VAR4);
    if (FUN26(VAR4) == (VAR1 *) NULL)
      {
        VAR4=FUN27(VAR4);
        return((VAR1 *) NULL);
      }
    VAR4->VAR57->VAR45=VAR4->VAR45;
    VAR4->VAR57->VAR47=VAR4->VAR47;
    VAR4=FUN28(VAR4);
    (void) FUN9(VAR4->VAR8,VAR8,VAR9);
    (void) FUN12(VAR4);
    VAR16=FUN20(VAR4,VAR58,FUN29(VAR4),
      FUN30(VAR4));
    if (VAR16 == VAR28)
      break;
  }
  if (VAR14 != (VAR1 *) NULL)
    {
      VAR54
        VAR55;

      VAR55=FUN22(VAR4,
        (VAR54) NULL,VAR4->VAR56);
      (void) FUN23(VAR4,VAR14);
      (void) FUN22(VAR4,VAR55,VAR4->VAR56);
    }
  (void) FUN24(VAR4,VAR13);
  if (VAR14 != (VAR1 *) NULL)
    VAR14=FUN31(VAR14);
  VAR13=FUN32(VAR13);
  (void) FUN33(VAR4);
  return(FUN34(VAR4));
}