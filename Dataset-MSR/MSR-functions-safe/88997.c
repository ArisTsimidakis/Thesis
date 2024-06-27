MagickExport VAR1 FUN1(VAR2 *VAR3,const double VAR4,
  VAR5 *VAR6)
{
#define VAR7  ""

  VAR8
    *VAR9;

  VAR1
    VAR10;

  VAR11
    VAR12;

  VAR13
    *VAR14;

  register VAR15
    VAR16;

  VAR15
    VAR17;

  
  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR18 == VAR19);
  if (VAR3->VAR20 != VAR21)
    (void) FUN2(VAR22,FUN3(),"",VAR3->VAR23);
  if (VAR4 == 1.0)
    return(VAR24);
  VAR14=(VAR13 *) FUN4(VAR25+1UL,sizeof(*VAR14));
  if (VAR14 == (VAR13 *) NULL)
    FUN5(VAR26,"",
      VAR3->VAR23);
  (void) memset(VAR14,0,(VAR25+1)*sizeof(*VAR14));
  if (VAR4 != 0.0)
    for (VAR16=0; VAR16 <= (VAR15) VAR25; VAR16++)
      VAR14[VAR16]=FUN6((double) (VAR25*FUN7((double) VAR16/
        VAR25,1.0/VAR4)));
  if (VAR3->VAR27 == VAR28)
    for (VAR16=0; VAR16 < (VAR15) VAR3->VAR29; VAR16++)
    {
      
      if ((FUN8(VAR3) & VAR30) != 0)
        VAR3->VAR31[VAR16].VAR32=(double) VAR14[FUN9(
          FUN10(VAR3->VAR31[VAR16].VAR32))];
      if ((FUN11(VAR3) & VAR30) != 0)
        VAR3->VAR31[VAR16].VAR33=(double) VAR14[FUN9(
          FUN10(VAR3->VAR31[VAR16].VAR33))];
      if ((FUN12(VAR3) & VAR30) != 0)
        VAR3->VAR31[VAR16].VAR34=(double) VAR14[FUN9(
          FUN10(VAR3->VAR31[VAR16].VAR34))];
      if ((FUN13(VAR3) & VAR30) != 0)
        VAR3->VAR31[VAR16].VAR35=(double) VAR14[FUN9(
          FUN10(VAR3->VAR31[VAR16].VAR35))];
    }
  
  VAR10=VAR24;
  VAR12=0;
  VAR9=FUN14(VAR3,VAR6);
#if FUN15(VAR36)
  #pragma omp parallel for FUN16(static) FUN17(VAR12,VAR10) \
    FUN18(VAR3,VAR3,VAR3->VAR37,1)
#endif
  for (VAR17=0; VAR17 < (VAR15) VAR3->VAR37; VAR17++)
  {
    register VAR13
      *magick_restrict VAR38;

    register VAR15
      VAR39;

    if (VAR10 == VAR21)
      continue;
    VAR38=FUN19(VAR9,0,VAR17,VAR3->VAR40,1,VAR6);
    if (VAR38 == (VAR13 *) NULL)
      {
        VAR10=VAR21;
        continue;
      }
    for (VAR39=0; VAR39 < (VAR15) VAR3->VAR40; VAR39++)
    {
      register VAR15
        VAR41;

      for (VAR41=0; VAR41 < (VAR15) FUN20(VAR3); VAR41++)
      {
        PixelChannel VAR42 = FUN21(VAR3,VAR41);
        PixelTrait VAR43 = FUN22(VAR3,VAR42);
        if ((VAR43 & VAR30) == 0)
          continue;
        VAR38[VAR41]=VAR14[FUN9(FUN10((VAR44)
          VAR38[VAR41]))];
      }
      VAR38+=FUN20(VAR3);
    }
    if (FUN23(VAR9,VAR6) == VAR21)
      VAR10=VAR21;
    if (VAR3->VAR45 != (VAR46) NULL)
      {
        VAR1
          VAR47;

#if FUN15(VAR36)
        #pragma omp VAR48
#endif
        VAR12++;
        VAR47=FUN24(VAR3,VAR7,VAR12,VAR3->VAR37);
        if (VAR47 == VAR21)
          VAR10=VAR21;
      }
  }
  VAR9=FUN25(VAR9);
  VAR14=(VAR13 *) FUN26(VAR14);
  if (VAR3->VAR4 != 0.0)
    VAR3->VAR4*=VAR4;
  return(VAR10);
}