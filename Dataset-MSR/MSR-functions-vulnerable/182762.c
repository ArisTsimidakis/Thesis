MagickExport VAR1 *FUN1(const VAR1 *VAR2,const ComplexOperator VAR3,
  VAR4 *VAR5)
{
#define VAR6  ""

  VAR7
    *VAR8,
    *VAR9,
    *VAR10,
    *VAR11,
    *VAR12,
    *VAR13;

  const char
    *VAR14;

  const VAR1
    *VAR15,
    *VAR16,
    *VAR17,
    *VAR18;

  double
    VAR19;

  VAR1
    *VAR20,
    *VAR21,
    *VAR22,
    *VAR23;

  VAR24
    VAR25;

  VAR26
    VAR27;

  VAR28
    VAR29;

  assert(VAR2 != (VAR1 *) NULL);
  assert(VAR2->VAR30 == VAR31);
  if (VAR2->VAR32 != VAR33)
    (void) FUN2(VAR34,FUN3(),"",VAR2->VAR35);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR30 == VAR31);
  if (VAR2->VAR36 == (VAR1 *) NULL)
    {
      (void) FUN4(VAR5,FUN3(),VAR37,
        "","",VAR2->VAR35);
      return((VAR1 *) NULL);
    }
  VAR23=FUN5(VAR2,0,0,VAR38,VAR5);
  if (VAR23 == (VAR1 *) NULL)
    return((VAR1 *) NULL);
  if (FUN6(VAR23,VAR39) == VAR33)
    {
      VAR23=FUN7(VAR23);
      return(VAR23);
    }
  VAR23->VAR40=32UL;
  VAR21=FUN8();
  FUN9(&VAR21,VAR23);
  VAR23=FUN5(VAR2,0,0,VAR38,VAR5);
  if (VAR23 == (VAR1 *) NULL)
    {
      VAR21=FUN7(VAR21);
      return(VAR21);
    }
  FUN9(&VAR21,VAR23);
  
  VAR14=FUN10(VAR23,"");
  VAR19=0.0;
  if (VAR14 != (const char *) NULL)
    VAR19=FUN11(VAR14,(char **) NULL);
  VAR16=VAR2;
  VAR15=VAR2->VAR36;
  VAR18=VAR2;
  VAR17=VAR2->VAR36;
  if ((VAR2->VAR36->VAR36 != (VAR1 *) NULL) &&
      (VAR2->VAR36->VAR36->VAR36 != (VAR1 *) NULL))
    {
      VAR18=VAR2->VAR36->VAR36;
      VAR17=VAR2->VAR36->VAR36->VAR36;
    }
  VAR22=VAR21;
  VAR20=VAR21->VAR36;
  VAR9=FUN12(VAR16,VAR5);
  VAR8=FUN12(VAR15,VAR5);
  VAR11=FUN12(VAR18,VAR5);
  VAR10=FUN12(VAR17,VAR5);
  VAR13=FUN13(VAR22,VAR5);
  VAR12=FUN13(VAR20,VAR5);
  VAR25=VAR38;
  VAR27=0;
#if FUN14(VAR41)
  #pragma omp parallel for FUN15(static) FUN16(VAR27,VAR25) \
    FUN17(VAR2,VAR21,VAR2->VAR42,1L)
#endif
  for (VAR29=0; VAR29 < (VAR28) VAR2->VAR42; VAR29++)
  {
    register const VAR43
      *magick_restrict VAR44,
      *magick_restrict VAR45,
      *magick_restrict VAR46,
      *magick_restrict VAR47;

    register VAR43
      *magick_restrict VAR48,
      *magick_restrict VAR49;

    register VAR28
      VAR50;
 
     if (VAR25 == VAR33)
       continue;

    VAR45=FUN18(VAR9,0,VAR29,VAR16->VAR51,1,VAR5);

    VAR44=FUN18(VAR8,0,VAR29,VAR15->VAR51,1,VAR5);

    VAR47=FUN18(VAR11,0,VAR29,VAR18->VAR51,1,VAR5);

    VAR46=FUN18(VAR10,0,VAR29,VAR17->VAR51,1,VAR5);
















     VAR49=FUN19(VAR13,0,VAR29,VAR22->VAR51,1,VAR5);
     VAR48=FUN19(VAR12,0,VAR29,VAR20->VAR51,1,VAR5);
     if ((VAR45 == (const VAR43 *) NULL) ||
        (VAR44 == (const VAR43 *) NULL) ||
        (VAR47 == (const VAR43 *) NULL) ||
        (VAR46 == (const VAR43 *) NULL) ||
        (VAR49 == (VAR43 *) NULL) || (VAR48 == (VAR43 *) NULL))
      {
        VAR25=VAR33;
        continue;
      }
    for (VAR50=0; VAR50 < (VAR28) VAR2->VAR51; VAR50++)
    {
      switch (VAR3)
      {
        case VAR52:
        {
          VAR49->VAR53=VAR45->VAR53+VAR47->VAR53;
          VAR48->VAR53=VAR44->VAR53+VAR46->VAR53;
          VAR49->VAR54=VAR45->VAR54+VAR47->VAR54;
          VAR48->VAR54=VAR44->VAR54+VAR46->VAR54;
          VAR49->VAR55=VAR45->VAR55+VAR47->VAR55;
          VAR48->VAR55=VAR44->VAR55+VAR46->VAR55;
          if (VAR2->VAR56 != VAR33)
            {
              VAR49->VAR57=VAR45->VAR57+VAR47->VAR57;
              VAR48->VAR57=VAR44->VAR57+VAR46->VAR57;
            }
          break;
        }
        case VAR58:
        default:
        {
          VAR49->VAR53=VAR45->VAR53;
          VAR48->VAR53=(-VAR46->VAR53);
          VAR49->VAR54=VAR45->VAR54;
          VAR48->VAR54=(-VAR46->VAR54);
          VAR49->VAR55=VAR45->VAR55;
          VAR48->VAR55=(-VAR46->VAR55);
          if (VAR2->VAR56 != VAR33)
            {
              VAR49->VAR57=VAR45->VAR57;
              VAR48->VAR57=(-VAR46->VAR57);
            }
          break;
        }
        case VAR59:
        {
          double
            VAR60;

          VAR60=FUN20(VAR47->VAR53*VAR47->VAR53+VAR46->VAR53*VAR46->VAR53+VAR19);
          VAR49->VAR53=VAR60*(VAR45->VAR53*VAR47->VAR53+VAR44->VAR53*VAR46->VAR53);
          VAR48->VAR53=VAR60*(VAR44->VAR53*VAR47->VAR53-VAR45->VAR53*VAR46->VAR53);
          VAR60=FUN20(VAR47->VAR54*VAR47->VAR54+VAR46->VAR54*VAR46->VAR54+
            VAR19);
          VAR49->VAR54=VAR60*(VAR45->VAR54*VAR47->VAR54+VAR44->VAR54*VAR46->VAR54);
          VAR48->VAR54=VAR60*(VAR44->VAR54*VAR47->VAR54-VAR45->VAR54*VAR46->VAR54);
          VAR60=FUN20(VAR47->VAR55*VAR47->VAR55+VAR46->VAR55*VAR46->VAR55+VAR19);
          VAR49->VAR55=VAR60*(VAR45->VAR55*VAR47->VAR55+VAR44->VAR55*VAR46->VAR55);
          VAR48->VAR55=VAR60*(VAR44->VAR55*VAR47->VAR55-VAR45->VAR55*VAR46->VAR55);
          if (VAR2->VAR56 != VAR33)
            {
              VAR60=FUN20(VAR47->VAR57*VAR47->VAR57+VAR46->VAR57*
                VAR46->VAR57+VAR19);
              VAR49->VAR57=VAR60*(VAR45->VAR57*VAR47->VAR57+VAR44->VAR57*
                VAR46->VAR57);
              VAR48->VAR57=VAR60*(VAR44->VAR57*VAR47->VAR57-VAR45->VAR57*
                VAR46->VAR57);
            }
          break;
        }
        case VAR61:
        {
          VAR49->VAR53=FUN21(VAR45->VAR53*VAR45->VAR53+VAR44->VAR53*VAR44->VAR53);
          VAR48->VAR53=FUN22(VAR44->VAR53,VAR45->VAR53)/(2.0*VAR62)+0.5;
          VAR49->VAR54=FUN21(VAR45->VAR54*VAR45->VAR54+VAR44->VAR54*VAR44->VAR54);
          VAR48->VAR54=FUN22(VAR44->VAR54,VAR45->VAR54)/(2.0*VAR62)+0.5;
          VAR49->VAR55=FUN21(VAR45->VAR55*VAR45->VAR55+VAR44->VAR55*VAR44->VAR55);
          VAR48->VAR55=FUN22(VAR44->VAR55,VAR45->VAR55)/(2.0*VAR62)+0.5;
          if (VAR2->VAR56 != VAR33)
            {
              VAR49->VAR57=FUN21(VAR45->VAR57*VAR45->VAR57+VAR44->VAR57*VAR44->VAR57);
              VAR48->VAR57=FUN22(VAR44->VAR57,VAR45->VAR57)/(2.0*VAR62)+0.5;
            }
          break;
        }
        case VAR63:
        {
          VAR49->VAR53=VAR64*(VAR45->VAR53*VAR47->VAR53-VAR44->VAR53*VAR46->VAR53);
          VAR48->VAR53=VAR64*(VAR44->VAR53*VAR47->VAR53+VAR45->VAR53*VAR46->VAR53);
          VAR49->VAR54=VAR64*(VAR45->VAR54*VAR47->VAR54-VAR44->VAR54*VAR46->VAR54);
          VAR48->VAR54=VAR64*(VAR44->VAR54*VAR47->VAR54+VAR45->VAR54*VAR46->VAR54);
          VAR49->VAR55=VAR64*(VAR45->VAR55*VAR47->VAR55-VAR44->VAR55*VAR46->VAR55);
          VAR48->VAR55=VAR64*(VAR44->VAR55*VAR47->VAR55+VAR45->VAR55*VAR46->VAR55);
          if (VAR2->VAR56 != VAR33)
            {
              VAR49->VAR57=VAR64*(VAR45->VAR57*VAR47->VAR57-VAR44->VAR57*
                VAR46->VAR57);
              VAR48->VAR57=VAR64*(VAR44->VAR57*VAR47->VAR57+VAR45->VAR57*
                VAR46->VAR57);
            }
          break;
        }
        case VAR65:
        {
          VAR49->VAR53=VAR45->VAR53*FUN23(2.0*VAR62*(VAR44->VAR53-0.5));
          VAR48->VAR53=VAR45->VAR53*FUN24(2.0*VAR62*(VAR44->VAR53-0.5));
          VAR49->VAR54=VAR45->VAR54*FUN23(2.0*VAR62*(VAR44->VAR54-0.5));
          VAR48->VAR54=VAR45->VAR54*FUN24(2.0*VAR62*(VAR44->VAR54-0.5));
          VAR49->VAR55=VAR45->VAR55*FUN23(2.0*VAR62*(VAR44->VAR55-0.5));
          VAR48->VAR55=VAR45->VAR55*FUN24(2.0*VAR62*(VAR44->VAR55-0.5));
          if (VAR2->VAR56 != VAR33)
            {
               VAR49->VAR57=VAR45->VAR57*FUN23(2.0*VAR62*(VAR44->VAR57-0.5));
               VAR48->VAR57=VAR45->VAR57*FUN24(2.0*VAR62*(VAR44->VAR57-0.5));
            }
          break;
        }
        case VAR66:
        {
          VAR49->VAR53=VAR45->VAR53-VAR47->VAR53;
          VAR48->VAR53=VAR44->VAR53-VAR46->VAR53;
          VAR49->VAR54=VAR45->VAR54-VAR47->VAR54;
          VAR48->VAR54=VAR44->VAR54-VAR46->VAR54;
          VAR49->VAR55=VAR45->VAR55-VAR47->VAR55;
          VAR48->VAR55=VAR44->VAR55-VAR46->VAR55;
          if (VAR2->VAR56 != VAR33)
            {
              VAR49->VAR57=VAR45->VAR57-VAR47->VAR57;
              VAR48->VAR57=VAR44->VAR57-VAR46->VAR57;
            }
          break;
        }
      }
      VAR45++;
      VAR44++;
      VAR47++;
      VAR46++;
      VAR49++;
      VAR48++;
    }
    if (FUN25(VAR12,VAR5) == VAR33)
      VAR25=VAR33;
    if (FUN25(VAR13,VAR5) == VAR33)
      VAR25=VAR33;
    if (VAR2->VAR67 != (VAR68) NULL)
      {
        VAR24
          VAR69;

#if FUN14(VAR41)
        #pragma omp VAR70
#endif
        VAR27++;
        VAR69=FUN26(VAR2,VAR6,VAR27,VAR2->VAR42);
        if (VAR69 == VAR33)
          VAR25=VAR33;
      }
  }
  VAR13=FUN27(VAR13);
  VAR12=FUN27(VAR12);
  VAR11=FUN27(VAR11);
  VAR10=FUN27(VAR10);
  VAR9=FUN27(VAR9);
  VAR8=FUN27(VAR8);
  if (VAR25 == VAR33)
    VAR21=FUN7(VAR21);
  return(VAR21);
}