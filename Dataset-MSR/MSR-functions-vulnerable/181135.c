MagickExport VAR1 FUN1(VAR2 *VAR3,
  const double VAR4,const double VAR5,VAR6 *VAR7)
{
#VAR8 FUN2(VAR9)  ((double) FUN3((VAR10) (VAR9)))
#define VAR11  ""

  VAR12
    *VAR13;

  double
    *VAR14,
    *VAR15,
    *VAR16,
    *VAR17;

  VAR1
    VAR18;

  VAR19
    VAR20;

  register VAR21
    VAR22;

  VAR21
    VAR23;

  
  assert(VAR3 != (VAR2 *) NULL);
   assert(VAR3->VAR24 == VAR25);
   if (VAR3->VAR26 != VAR27)
     (void) FUN4(VAR28,FUN5(),"",VAR3->VAR29);




   if (FUN6(VAR3,VAR7) != VAR27)
     (void) FUN7(VAR3,VAR30,VAR7);
   VAR14=(double *) FUN8(FUN9(VAR3),sizeof(*VAR14));
  VAR17=(double *) FUN8(FUN9(VAR3),sizeof(*VAR17));
  VAR15=(double *) FUN8(VAR31+1UL,FUN9(VAR3)*
    sizeof(*VAR15));
  VAR16=(double *) FUN8(VAR31+1UL,
    FUN9(VAR3)*sizeof(*VAR16));
  if ((VAR14 == (double *) NULL) || (VAR17 == (double *) NULL) ||
      (VAR15 == (double *) NULL) || (VAR16 == (double *) NULL))
    {
      if (VAR16 != (double *) NULL)
        VAR16=(double *) FUN10(VAR16);
      if (VAR15 != (double *) NULL)
        VAR15=(double *) FUN10(VAR15);
      if (VAR17 != (double *) NULL)
        VAR17=(double *) FUN10(VAR17);
      if (VAR14 != (double *) NULL)
        VAR14=(double *) FUN10(VAR14);
      FUN11(VAR32,"",
        VAR3->VAR29);
    }
  
  VAR18=VAR33;
  (void) FUN12(VAR15,0,(VAR31+1)*FUN9(VAR3)*
    sizeof(*VAR15));
  VAR13=FUN13(VAR3,VAR7);
  for (VAR23=0; VAR23 < (VAR21) VAR3->VAR34; VAR23++)
  {
    register const VAR10
      *magick_restrict VAR35;

    register VAR21
      VAR36;

    if (VAR18 == VAR27)
      continue;
    VAR35=FUN14(VAR13,0,VAR23,VAR3->VAR37,1,VAR7);
    if (VAR35 == (const VAR10 *) NULL)
      {
        VAR18=VAR27;
        continue;
      }
    for (VAR36=0; VAR36 < (VAR21) VAR3->VAR37; VAR36++)
    {
      double
        VAR38;

      VAR38=FUN15(VAR3,VAR35);
      for (VAR22=0; VAR22 < (VAR21) FUN9(VAR3); VAR22++)
      {
        if (VAR3->VAR39 != VAR40)
          VAR38=(double) VAR35[VAR22];
        VAR15[FUN9(VAR3)*FUN3(
          FUN16(VAR38))+VAR22]++;
      }
      VAR35+=FUN9(VAR3);
    }
  }
  VAR13=FUN17(VAR13);
  
  for (VAR22=0; VAR22 < (VAR21) FUN9(VAR3); VAR22++)
  {
    double
      VAR41;

    register VAR21
      VAR42;

    VAR14[VAR22]=0.0;
    VAR17[VAR22]=FUN2(VAR43);
    VAR41=0.0;
    for (VAR42=0; VAR42 <= (VAR21) VAR31; VAR42++)
    {
      VAR41+=VAR15[FUN9(VAR3)*VAR42+VAR22];
      if (VAR41 > VAR4)
        break;
    }
    VAR14[VAR22]=(double) VAR42;
    VAR41=0.0;
    for (VAR42=(VAR21) VAR31; VAR42 != 0; VAR42--)
    {
      VAR41+=VAR15[FUN9(VAR3)*VAR42+VAR22];
      if (VAR41 > ((double) VAR3->VAR37*VAR3->VAR34-VAR5))
        break;
    }
    VAR17[VAR22]=(double) VAR42;
  }
  VAR15=(double *) FUN10(VAR15);
  
  (void) FUN12(VAR16,0,(VAR31+1)*FUN9(VAR3)*
    sizeof(*VAR16));
  for (VAR22=0; VAR22 < (VAR21) FUN9(VAR3); VAR22++)
  {
    register VAR21
      VAR42;

    for (VAR42=0; VAR42 <= (VAR21) VAR31; VAR42++)
    {
      double
        VAR44;

      VAR44=FUN18(VAR17[VAR22]-VAR14[VAR22]);
      if (VAR42 < (VAR21) VAR14[VAR22])
        VAR16[FUN9(VAR3)*VAR42+VAR22]=0.0;
      else
        if (VAR42 > (VAR21) VAR17[VAR22])
          VAR16[FUN9(VAR3)*VAR42+VAR22]=(double) VAR43;
        else
          if (VAR14[VAR22] != VAR17[VAR22])
            VAR16[FUN9(VAR3)*VAR42+VAR22]=(double) FUN19(
              (double) (VAR31*VAR44*(VAR42-VAR14[VAR22])));
    }
  }
  if (VAR3->VAR45 == VAR46)
    {
      register VAR21
        VAR42;

      
      for (VAR42=0; VAR42 < (VAR21) VAR3->VAR47; VAR42++)
      {
        if ((FUN20(VAR3) & VAR48) != 0)
          {
            VAR22=FUN21(VAR3,VAR49);
            VAR3->VAR50[VAR42].VAR51=VAR16[FUN9(VAR3)*
              FUN3(FUN16(VAR3->VAR50[VAR42].VAR51))+VAR22];
          }
        if ((FUN22(VAR3) & VAR48) != 0)
          {
            VAR22=FUN21(VAR3,VAR52);
            VAR3->VAR50[VAR42].VAR53=VAR16[FUN9(VAR3)*
              FUN3(FUN16(VAR3->VAR50[VAR42].VAR53))+VAR22];
          }
        if ((FUN23(VAR3) & VAR48) != 0)
          {
            VAR22=FUN21(VAR3,VAR54);
            VAR3->VAR50[VAR42].VAR55=VAR16[FUN9(VAR3)*
              FUN3(FUN16(VAR3->VAR50[VAR42].VAR55))+VAR22];
          }
        if ((FUN24(VAR3) & VAR48) != 0)
          {
            VAR22=FUN21(VAR3,VAR56);
            VAR3->VAR50[VAR42].VAR57=VAR16[FUN9(VAR3)*
              FUN3(FUN16(VAR3->VAR50[VAR42].VAR57))+VAR22];
          }
      }
    }
  
  VAR18=VAR33;
  VAR20=0;
  VAR13=FUN25(VAR3,VAR7);
#if FUN26(VAR58)
  #pragma omp parallel for FUN27(static,4) FUN28(VAR20,VAR18) \
    FUN29(VAR3,VAR3,VAR3->VAR34,1)
#endif
  for (VAR23=0; VAR23 < (VAR21) VAR3->VAR34; VAR23++)
  {
    register VAR10
      *magick_restrict VAR59;

    register VAR21
      VAR36;

    if (VAR18 == VAR27)
      continue;
    VAR59=FUN30(VAR13,0,VAR23,VAR3->VAR37,1,VAR7);
    if (VAR59 == (VAR10 *) NULL)
      {
        VAR18=VAR27;
        continue;
      }
    for (VAR36=0; VAR36 < (VAR21) VAR3->VAR37; VAR36++)
    {
      register VAR21
        VAR42;

      if (FUN31(VAR3,VAR59) == 0)
        {
          VAR59+=FUN9(VAR3);
          continue;
        }
      for (VAR42=0; VAR42 < (VAR21) FUN9(VAR3); VAR42++)
      {
        PixelChannel VAR60=FUN32(VAR3,VAR42);
        PixelTrait VAR61=FUN33(VAR3,VAR60);
        if ((VAR61 & VAR48) == 0)
          continue;
        if (VAR14[VAR42] == VAR17[VAR42])
          continue;
        VAR59[VAR42]=FUN16(VAR16[FUN9(VAR3)*
          FUN3(VAR59[VAR42])+VAR42]);
      }
      VAR59+=FUN9(VAR3);
    }
    if (FUN34(VAR13,VAR7) == VAR27)
      VAR18=VAR27;
    if (VAR3->VAR62 != (VAR63) NULL)
      {
        VAR1
          VAR64;

#if FUN26(VAR58)
        #pragma omp FUN35 (VAR65)
#endif
        VAR64=FUN36(VAR3,VAR11,VAR20++,
          VAR3->VAR34);
        if (VAR64 == VAR27)
          VAR18=VAR27;
      }
  }
  VAR13=FUN17(VAR13);
  VAR16=(double *) FUN10(VAR16);
  VAR17=(double *) FUN10(VAR17);
  VAR14=(double *) FUN10(VAR14);
  return(VAR18);
}