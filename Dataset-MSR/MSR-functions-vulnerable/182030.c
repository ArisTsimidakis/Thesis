MagickExport VAR1 *FUN1(const VAR1 *VAR2,
  const VAR3 *VAR4,VAR5 *VAR6)
{
#define VAR7  ""

  VAR8
    *VAR9,
    *VAR10;

  VAR1
    *VAR11;

  VAR12
    VAR13;

  VAR14
    VAR15;

  VAR3
     VAR16;
 
   VAR17


     VAR18;
 
   
  assert(VAR2 != (const VAR1 *) NULL);
  assert(VAR2->VAR19 == VAR20);
  if (VAR2->VAR21 != VAR22)
    (void) FUN2(VAR23,FUN3(),"",VAR2->VAR24);
  assert(VAR4 != (const VAR3 *) NULL);
  assert(VAR6 != (VAR5 *) NULL);
  assert(VAR6->VAR19 == VAR20);
  VAR16=(*VAR4);
  VAR11=FUN4(VAR2,VAR2->VAR25+VAR16.VAR26,
    VAR2->VAR27+VAR16.VAR28,VAR29,VAR6);
  if (VAR11 == (VAR1 *) NULL)
    return((VAR1 *) NULL);
  if (FUN5(VAR11,VAR30,VAR6) == VAR22)
    {
      VAR11=FUN6(VAR11);
      return((VAR1 *) NULL);
    }
  if ((FUN7(&VAR11->VAR31) == VAR22) &&
      (FUN8(VAR11->VAR32) != VAR22))
    (void) FUN9(VAR11,VAR33,VAR6);
  if ((VAR11->VAR31.VAR34 != VAR35) &&
      (VAR11->VAR34 == VAR35))
    (void) FUN10(VAR11,VAR36,VAR6);
  (void) FUN11(VAR11,VAR6);
  
  switch (VAR2->VAR37)
  {
    default:
    case VAR38:
    case VAR39:
      break;
    case VAR40:
    {
      VAR16.VAR41+=(VAR17) VAR16.VAR26/2;
      break;
    }
    case VAR42:
    {
      VAR16.VAR41+=(VAR17) VAR16.VAR26;
      break;
    }
    case VAR43:
    {
      VAR16.VAR18+=(VAR17) VAR16.VAR26/2;
      break;
    }
    case VAR44:
    {
      VAR16.VAR41+=(VAR17) VAR16.VAR26/2;
      VAR16.VAR18+=(VAR17) VAR16.VAR28/2;
      break;
    }
    case VAR45:
    {
      VAR16.VAR41+=(VAR17) VAR16.VAR26;
      VAR16.VAR18+=(VAR17) VAR16.VAR28/2;
      break;
    }
    case VAR46:
    {
      VAR16.VAR18+=(VAR17) VAR16.VAR28;
      break;
    }
    case VAR47:
    {
      VAR16.VAR41+=(VAR17) VAR16.VAR26/2;
      VAR16.VAR18+=(VAR17) VAR16.VAR28;
      break;
    }
    case VAR48:
    {
      VAR16.VAR41+=(VAR17) VAR16.VAR26;
      VAR16.VAR18+=(VAR17) VAR16.VAR28;
      break;
    }
  }
  
   VAR13=VAR29;
   VAR15=0;


   VAR9=FUN12(VAR2,VAR6);
   VAR10=FUN13(VAR11,VAR6);
 #if FUN14(VAR49)
  #pragma omp parallel for FUN15(static,4) FUN16(VAR15,VAR13) \
    FUN17(VAR2,VAR11,1,1)
#endif
  for (VAR18=0; VAR18 < (VAR17) VAR16.VAR18; VAR18++)
  {
    register const VAR50
      *restrict VAR51;

    register VAR17
      VAR41;

    register VAR50
      *restrict VAR52;
 
     if (VAR13 == VAR22)
       continue;

    VAR51=FUN18(VAR9,0,VAR18,VAR2->VAR25,1,VAR6);




     VAR52=FUN19(VAR10,0,VAR18,VAR11->VAR25,1,
       VAR6);
     if ((VAR51 == (const VAR50 *) NULL) || (VAR52 == (VAR50 *) NULL))
       {
         VAR13=VAR22;
         continue;
       }

    for (VAR41=0; VAR41 < VAR16.VAR41; VAR41++)


     {
       register VAR17
         VAR53;

      if (FUN20(VAR2,VAR51) == 0)
        {
          FUN21(VAR11,VAR52);
          VAR51+=FUN22(VAR2);
          VAR52+=FUN22(VAR11);
          continue;
        }
      for (VAR53=0; VAR53 < (VAR17) FUN22(VAR2); VAR53++)
      {
        PixelChannel VAR54=FUN23(VAR2,VAR53);
        PixelTrait VAR55=FUN24(VAR2,VAR54);
        PixelTrait VAR56=FUN24(VAR11,VAR54);
        if ((VAR55 == VAR35) ||
            (VAR56 == VAR35))
          continue;
        FUN25(VAR11,VAR54,VAR51[VAR53],VAR52);
      }
      FUN26(VAR11,FUN27(VAR2,VAR51),VAR52);
      FUN28(VAR11,FUN29(VAR2,VAR51),VAR52);
      FUN30(VAR11,FUN31(VAR2,VAR51),VAR52);
      FUN32(VAR11,FUN33(VAR2,VAR51),VAR52);
      VAR51+=FUN22(VAR2);
      VAR52+=FUN22(VAR11);
    }
    for ( ; VAR41 < (VAR17) (VAR16.VAR41+VAR16.VAR26); VAR41++)
      VAR52+=FUN22(VAR11);
    for ( ; VAR41 < (VAR17) VAR11->VAR25; VAR41++)
    {
      register VAR17
        VAR53;

      if (FUN20(VAR2,VAR51) == 0)
        {
          FUN21(VAR11,VAR52);
          VAR51+=FUN22(VAR2);
          VAR52+=FUN22(VAR11);
          continue;
        }
      for (VAR53=0; VAR53 < (VAR17) FUN22(VAR2); VAR53++)
      {
        PixelChannel VAR54=FUN23(VAR2,VAR53);
        PixelTrait VAR55=FUN24(VAR2,VAR54);
        PixelTrait VAR56=FUN24(VAR11,VAR54);
        if ((VAR55 == VAR35) ||
            (VAR56 == VAR35))
          continue;
        FUN25(VAR11,VAR54,VAR51[VAR53],VAR52);
      }
      FUN26(VAR11,FUN27(VAR2,VAR51),VAR52);
      FUN28(VAR11,FUN29(VAR2,VAR51),VAR52);
      FUN30(VAR11,FUN31(VAR2,VAR51),VAR52);
      FUN32(VAR11,FUN33(VAR2,VAR51),VAR52);
      VAR51+=FUN22(VAR2);
      VAR52+=FUN22(VAR11);
    }
    if (FUN34(VAR10,VAR6) == VAR22)
      VAR13=VAR22;
    if (VAR2->VAR57 != (VAR58) NULL)
      {
        VAR12
          VAR59;

#if FUN14(VAR49)
        #pragma omp FUN35 (VAR60)
#endif
        VAR59=FUN36(VAR2,VAR7,VAR15++,
          VAR11->VAR27);
        if (VAR59 == VAR22)
          VAR13=VAR22;
      }
  }
#if FUN14(VAR49)
  #pragma omp parallel for FUN15(static,4) FUN16(VAR15,VAR13) \
    FUN17(VAR2,VAR11,1,1)
#endif
  for (VAR18=(VAR17) (VAR16.VAR18+VAR16.VAR28);
       VAR18 < (VAR17) VAR11->VAR27; VAR18++)
  {
    register const VAR50
      *restrict VAR51;

    register VAR17
      VAR41;

    register VAR50
      *restrict VAR52;
 
     if (VAR13 == VAR22)
       continue;

    VAR51=FUN18(VAR9,0,VAR18-(VAR17) VAR16.VAR28,

      VAR2->VAR25,1,VAR6);

    if ((VAR18 < 0) || (VAR18 >= (VAR17) VAR11->VAR27))


       continue;




     VAR52=FUN19(VAR10,0,VAR18,VAR11->VAR25,1,
       VAR6);
     if ((VAR51 == (const VAR50 *) NULL) || (VAR52 == (VAR50 *) NULL))
       {
         VAR13=VAR22;
         continue;
       }

    for (VAR41=0; VAR41 < VAR16.VAR41; VAR41++)


     {
       register VAR17
         VAR53;

      if (FUN20(VAR2,VAR52) == 0)
        {
          FUN21(VAR11,VAR52);
          VAR51+=FUN22(VAR2);
          VAR52+=FUN22(VAR11);
          continue;
        }
      for (VAR53=0; VAR53 < (VAR17) FUN22(VAR2); VAR53++)
      {
        PixelChannel VAR54=FUN23(VAR2,VAR53);
        PixelTrait VAR55=FUN24(VAR2,VAR54);
        PixelTrait VAR56=FUN24(VAR11,VAR54);
        if ((VAR55 == VAR35) ||
            (VAR56 == VAR35))
          continue;
        FUN25(VAR11,VAR54,VAR51[VAR53],VAR52);
      }
      FUN26(VAR11,FUN27(VAR2,VAR51),VAR52);
      FUN28(VAR11,FUN29(VAR2,VAR51),VAR52);
      FUN30(VAR11,FUN31(VAR2,VAR51),VAR52);
      FUN32(VAR11,FUN33(VAR2,VAR51),VAR52);
      VAR51+=FUN22(VAR2);
      VAR52+=FUN22(VAR11);
    }
    for ( ; VAR41 < (VAR17) (VAR16.VAR41+VAR16.VAR26); VAR41++)
      VAR52+=FUN22(VAR11);
    for ( ; VAR41 < (VAR17) VAR11->VAR25; VAR41++)
    {
      register VAR17
        VAR53;

      if (FUN20(VAR2,VAR52) == 0)
        {
          FUN21(VAR11,VAR52);
          VAR51+=FUN22(VAR2);
          VAR52+=FUN22(VAR11);
          continue;
        }
      for (VAR53=0; VAR53 < (VAR17) FUN22(VAR2); VAR53++)
      {
        PixelChannel VAR54=FUN23(VAR2,VAR53);
        PixelTrait VAR55=FUN24(VAR2,VAR54);
        PixelTrait VAR56=FUN24(VAR11,VAR54);
        if ((VAR55 == VAR35) ||
            (VAR56 == VAR35))
          continue;
        FUN25(VAR11,VAR54,VAR51[VAR53],VAR52);
      }
      FUN26(VAR11,FUN27(VAR2,VAR51),VAR52);
      FUN28(VAR11,FUN29(VAR2,VAR51),VAR52);
      FUN30(VAR11,FUN31(VAR2,VAR51),VAR52);
      FUN32(VAR11,FUN33(VAR2,VAR51),VAR52);
      VAR51+=FUN22(VAR2);
      VAR52+=FUN22(VAR11);
    }
    if (FUN34(VAR10,VAR6) == VAR22)
      VAR13=VAR22;
    if (VAR2->VAR57 != (VAR58) NULL)
      {
        VAR12
          VAR59;

#if FUN14(VAR49)
        #pragma omp FUN35 (VAR60)
#endif
        VAR59=FUN36(VAR2,VAR7,VAR15++,
          VAR11->VAR27);
        if (VAR59 == VAR22)
          VAR13=VAR22;
      }
  }
  VAR10=FUN37(VAR10);
  VAR9=FUN37(VAR9);
  if (VAR13 == VAR22)
    VAR11=FUN6(VAR11);
  return(VAR11);
}