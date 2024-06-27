static VAR1 FUN1(VAR2 *VAR3,
  const size_t VAR4,const ssize_t VAR5,const ssize_t VAR6,
  const unsigned char *VAR7,VAR8 *VAR9)
{
  VAR10
    VAR11;

  register const unsigned char
    *VAR12;

  register VAR10
    *VAR13;

  register VAR14
    VAR15;

  VAR16
    VAR17;

  VAR12=VAR7;
  VAR13=FUN2(VAR3,0,VAR5,VAR3->VAR18,1,VAR9);
  if (VAR13 == (VAR10 *) NULL)
    return VAR19;
  VAR17=FUN3(VAR3);
  for (VAR15=0; VAR15 < (VAR14) VAR3->VAR18; VAR15++)
  {
    if (VAR17 == 1)
      VAR11=FUN4(*VAR12++);
    else if (VAR17 == 2)
      {
        unsigned short
          VAR20;

        VAR12=FUN5(VAR21,VAR12,&VAR20);
        VAR11=FUN6(VAR20);
      }
    else
      {
        VAR22
          VAR20;

        VAR12=FUN7(VAR21,VAR12,&VAR20);
        VAR11=FUN8((VAR23)VAR24*VAR20);
      }
    if (VAR3->VAR25 > 1)
      {
        FUN9(VAR3,VAR4,VAR6,VAR17,VAR11,VAR13,VAR9);
        VAR13+=FUN10(VAR3);
      }
    else
      {
        VAR14
          VAR26,
          VAR27;

        VAR27=(VAR14) VAR3->VAR18-VAR15;
        if (VAR27 > 8)
          VAR27=8;
        for (VAR26 = 0; VAR26 < (VAR14) VAR27; VAR26++)
        {
          FUN9(VAR3,VAR4,VAR6,VAR17,(((unsigned char) VAR11)
            & (0x01 << (7-VAR26))) != 0 ? 0 : VAR24,VAR13,VAR9);
          VAR13+=FUN10(VAR3);
          VAR15++;
        }
        if (VAR15 != (VAR14) VAR3->VAR18)
          VAR15--;
        continue;
      }
  }
  return(FUN11(VAR3,VAR9));
}