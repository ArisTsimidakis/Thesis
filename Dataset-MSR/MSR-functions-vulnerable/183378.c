MagickExport VAR1 *FUN1(const VAR1 *VAR2,
  const size_t VAR3,const size_t VAR4,const double VAR5,
  VAR6 *VAR7)
{
#define VAR8  ""

  VAR9
    *VAR10,
    *VAR11;

  VAR1
    *VAR12;

  VAR13
    VAR14;

  VAR15
    VAR16;

  VAR17
    VAR18;

  VAR19
    VAR20;

  
  assert(VAR2 != (VAR1 *) NULL);
  assert(VAR2->VAR21 == VAR22);
  if (VAR2->VAR23 != VAR24)
    (void) FUN2(VAR25,FUN3(),"",VAR2->VAR26);
  assert(VAR7 != (VAR6 *) NULL);
  assert(VAR7->VAR21 == VAR22);
   VAR12=FUN4(VAR2,0,0,VAR27,VAR7);
   if (VAR12 == (VAR1 *) NULL)
     return((VAR1 *) NULL);

  if (VAR3 == 0)


     return(VAR12);
   VAR14=FUN5(VAR12,VAR28,VAR7);
   if (VAR14 == VAR24)
    {
      VAR12=FUN6(VAR12);
      return((VAR1 *) NULL);
    }
  
  VAR14=VAR27;
  VAR16=0;
  VAR18=(VAR17) VAR3*VAR4;
  VAR10=FUN7(VAR2,VAR7);
  VAR11=FUN8(VAR12,VAR7);
#if FUN9(VAR29)
  #pragma omp parallel for FUN10(static) FUN11(VAR16,VAR14) \
    FUN12(VAR2,VAR12,VAR2->VAR30,1)
#endif
  for (VAR20=0; VAR20 < (VAR19) VAR2->VAR30; VAR20++)
  {
    double
      VAR31[VAR32],
      VAR33[VAR32];

    register const VAR34
      *magick_restrict VAR35,
      *magick_restrict VAR36;

    register VAR34
      *magick_restrict VAR37;

    register VAR19
      VAR38,
      VAR39;

    VAR19
      VAR40,
      VAR41,
      VAR42;

    if (VAR14 == VAR24)
      continue;
    VAR35=FUN13(VAR10,-((VAR19) VAR3/2L),VAR20-(VAR19)
      (VAR4/2L),VAR2->VAR43+VAR3,VAR4,VAR7);
    VAR37=FUN14(VAR11,0,VAR20,VAR12->VAR43,
      1,VAR7);
    if ((VAR35 == (const VAR34 *) NULL) || (VAR37 == (VAR34 *) NULL))
      {
        VAR14=VAR24;
        continue;
      }
    VAR40=(VAR19) FUN15(VAR2)*(VAR2->VAR43+VAR3)*(VAR4/2L)+
      FUN15(VAR2)*(VAR3/2);
    for (VAR38=0; VAR38 < (VAR19) FUN15(VAR2); VAR38++)
    {
      PixelChannel VAR44 = FUN16(VAR2,VAR38);
      PixelTrait VAR45 = FUN17(VAR2,VAR44);
      PixelTrait VAR46=FUN17(VAR12,
        VAR44);
      if ((VAR45 == VAR47) ||
          (VAR46 == VAR47))
        continue;
      if ((VAR46 & VAR48) != 0)
        {
          FUN18(VAR12,VAR44,VAR35[VAR40+VAR38],VAR37);
          continue;
        }
      VAR36=VAR35;
      VAR31[VAR44]=0.0;
      VAR33[VAR44]=0.0;
      for (VAR42=0; VAR42 < (VAR19) VAR4; VAR42++)
      {
        for (VAR41=0; VAR41 < (VAR19) VAR3; VAR41++)
        {
          if (VAR41 == (VAR19) (VAR3-1))
            VAR31[VAR44]+=VAR36[VAR38];
          VAR33[VAR44]+=VAR36[VAR38];
          VAR36+=FUN15(VAR2);
        }
        VAR36+=FUN15(VAR2)*VAR2->VAR43;
      }
    }
    for (VAR39=0; VAR39 < (VAR19) VAR2->VAR43; VAR39++)
    {
      for (VAR38=0; VAR38 < (VAR19) FUN15(VAR2); VAR38++)
      {
        double
          VAR49;

        PixelChannel VAR44 = FUN16(VAR2,VAR38);
        PixelTrait VAR45 = FUN17(VAR2,VAR44);
        PixelTrait VAR46=FUN17(VAR12,
          VAR44);
        if ((VAR45 == VAR47) ||
            (VAR46 == VAR47))
          continue;
        if ((VAR46 & VAR48) != 0)
          {
            FUN18(VAR12,VAR44,VAR35[VAR40+VAR38],VAR37);
            continue;
          }
        VAR33[VAR44]-=VAR31[VAR44];
        VAR31[VAR44]=0.0;
        VAR36=VAR35;
        for (VAR42=0; VAR42 < (VAR19) VAR4; VAR42++)
        {
          VAR31[VAR44]+=VAR36[VAR38];
          VAR36+=(VAR3-1)*FUN15(VAR2);
          VAR33[VAR44]+=VAR36[VAR38];
          VAR36+=FUN15(VAR2)*(VAR2->VAR43+1);
        }
        VAR49=(double) (VAR33[VAR44]/VAR18+VAR5);
        FUN18(VAR12,VAR44,(VAR34) ((double)
          VAR35[VAR40+VAR38] <= VAR49 ? 0 : VAR50),VAR37);
      }
      VAR35+=FUN15(VAR2);
      VAR37+=FUN15(VAR12);
    }
    if (FUN19(VAR11,VAR7) == VAR24)
      VAR14=VAR24;
    if (VAR2->VAR51 != (VAR52) NULL)
      {
        VAR13
          VAR53;

#if FUN9(VAR29)
        #pragma omp VAR54
#endif
        VAR16++;
        VAR53=FUN20(VAR2,VAR8,VAR16,
          VAR2->VAR30);
        if (VAR53 == VAR24)
          VAR14=VAR24;
      }
  }
  VAR12->VAR55=VAR2->VAR55;
  VAR11=FUN21(VAR11);
  VAR10=FUN21(VAR10);
  if (VAR14 == VAR24)
    VAR12=FUN6(VAR12);
  return(VAR12);
}