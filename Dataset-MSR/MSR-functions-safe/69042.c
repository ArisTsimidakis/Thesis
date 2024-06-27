static VAR1 FUN1(const VAR2 *VAR3,
  VAR4 *VAR5,VAR6* VAR7)
{
  const char
    *VAR8;

  VAR1
    VAR9;

  VAR10
    VAR11;

  if (VAR5->VAR12 != VAR13 || VAR5->VAR14 != VAR15)
    return(VAR16);
  VAR8=FUN2(VAR3,"");
  if (FUN3(VAR8) != VAR17)
    return(VAR16);
  VAR9=VAR16;
#if FUN4(VAR18)
#pragma omp parallel for FUN5(static,4) FUN6(VAR9) \
  FUN7(VAR5,VAR5,VAR5->VAR19,1)
#endif
  for (VAR11=0; VAR11 < (VAR10) VAR5->VAR19; VAR11++)
  {
    register VAR20
      *magick_restrict VAR21;

    register VAR10
      VAR22;

    if (VAR9 == VAR17)
      continue;
    VAR21=FUN8(VAR5,0,VAR11,VAR5->VAR23,1,VAR7);
    if (VAR21 == (VAR20 *) NULL)
    {
      VAR9=VAR17;
      continue;
    }
    for (VAR22=0; VAR22 < (VAR10) VAR5->VAR23; VAR22++)
    {
      double
        VAR24;

      register VAR10
        VAR25;

      VAR24=VAR26*FUN9(VAR5, VAR21);
      if (VAR24 != 0.0 && VAR24 != 1.0)
        {
          for (VAR25=0; VAR25 < (VAR10) FUN10(VAR5); VAR25++)
          {
            PixelChannel VAR27=FUN11(VAR5,VAR25);
            if (VAR27 != VAR28)
              VAR21[VAR25]=FUN12((VAR21[VAR25]-((1.0-VAR24)*VAR29))/VAR24);
          }
        }
      VAR21+=FUN10(VAR5);
    }
    if (FUN13(VAR5,VAR7) == VAR17)
      VAR9=VAR17;
  }

  return(VAR9);
}