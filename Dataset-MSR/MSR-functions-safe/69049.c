static VAR1 FUN1(VAR2 *VAR3,const VAR4 *VAR5,
  const ssize_t VAR6,VAR7 *VAR8,VAR9 *VAR10)
{
  VAR1
    VAR11;

  VAR12
    VAR13,
    VAR14;

  VAR15
    VAR16,
    VAR17;

  unsigned char
    *VAR18,
    *VAR19;

  if (VAR3->VAR20 != VAR21)
    (void) FUN2(VAR22,FUN3(),
       "");

  VAR14=FUN4(VAR3);
  VAR19=(unsigned char *) FUN5(VAR14,sizeof(*VAR19));
  if (VAR19 == (unsigned char *) NULL)
    FUN6(VAR23,"",
      VAR3->VAR24);

  VAR13=0;
  for (VAR17=0; VAR17 < (VAR15) VAR3->VAR25; VAR17++)
    if ((VAR7) VAR13 < VAR8[VAR17])
      VAR13=(VAR12) VAR8[VAR17];

  if (VAR13 > VAR14 + 256) 
    {
      VAR19=(unsigned char *) FUN7(VAR19);
      FUN6(VAR23,"",
        VAR3->VAR24);
    }

  VAR18=(unsigned char *) FUN5(VAR13,sizeof(*VAR19));
  if (VAR18 == (unsigned char *) NULL)
    {
      VAR19=(unsigned char *) FUN7(VAR19);
      FUN6(VAR23,"",
        VAR3->VAR24);
    }

  (void) FUN8(VAR18,0,VAR13*sizeof(*VAR18));

  VAR11=VAR26;
  for (VAR17=0; VAR17 < (VAR15) VAR3->VAR25; VAR17++)
  {
    VAR11=VAR21;

    VAR16=FUN9(VAR3,(VAR12) VAR8[VAR17],VAR18);
    if (VAR16 != (VAR15) VAR8[VAR17])
      break;

    VAR16=FUN10((VAR12) VAR8[VAR17],VAR18,
      (VAR15) (VAR3->VAR27 == 1 ? 123456 : VAR3->VAR27),VAR14,VAR19);
    if (VAR16 != (VAR15) VAR14)
      break;

    VAR11=FUN11(VAR3,VAR5->VAR28,VAR17,VAR6,VAR19,
      VAR10);
    if (VAR11 == VAR21)
      break;
  }

  VAR18=(unsigned char *) FUN7(VAR18);
  VAR19=(unsigned char *) FUN7(VAR19);
  return(VAR11);
}