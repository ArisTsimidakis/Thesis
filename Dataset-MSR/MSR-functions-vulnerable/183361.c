MagickExport VAR1 *FUN1(const VAR1 *VAR2,const size_t VAR3,
  const size_t VAR4,const double VAR5,VAR6 *VAR7)
{
#define MaxMeanShiftIterations  100
#define VAR8  ""

  VAR9
    *VAR10,
    *VAR11,
    *VAR12;

  VAR1
    *VAR13;

  VAR14
    VAR15;

  VAR16
    VAR17;

  VAR18
    VAR19;

  assert(VAR2 != (const VAR1 *) NULL);
  assert(VAR2->VAR20 == VAR21);
  if (VAR2->VAR22 != VAR23)
    (void) FUN2(VAR24,FUN3(),"",VAR2->VAR25);
  assert(VAR7 != (VAR6 *) NULL);
  assert(VAR7->VAR20 == VAR21);
  VAR13=FUN4(VAR2,0,0,VAR26,VAR7);
  if (VAR13 == (VAR1 *) NULL)
    return((VAR1 *) NULL);
  if (FUN5(VAR13,VAR27,VAR7) == VAR23)
    {
      VAR13=FUN6(VAR13);
      return((VAR1 *) NULL);
    }
  VAR15=VAR26;
  VAR17=0;
  VAR10=FUN7(VAR2,VAR7);
  VAR12=FUN7(VAR2,VAR7);
  VAR11=FUN8(VAR13,VAR7);
#if FUN9(VAR28)
  #pragma omp parallel for FUN10(static) FUN11(VAR15,VAR17) \
    FUN12(VAR13,VAR13,VAR13->VAR29,1)
#endif
  for (VAR19=0; VAR19 < (VAR18) VAR13->VAR29; VAR19++)
  {
    register const VAR30
      *magick_restrict VAR31;

    register VAR30
      *magick_restrict VAR32;

    register VAR18
      VAR33;

    if (VAR15 == VAR23)
      continue;
    VAR31=FUN13(VAR10,0,VAR19,VAR2->VAR34,1,VAR7);
    VAR32=FUN14(VAR11,0,VAR19,VAR13->VAR34,1,
      VAR7);
    if ((VAR31 == (const VAR30 *) NULL) || (VAR32 == (VAR30 *) NULL))
      {
        VAR15=VAR23;
        continue;
      }
    for (VAR33=0; VAR33 < (VAR18) VAR13->VAR34; VAR33++)
    {
      VAR35
        VAR36,
        VAR37;

      VAR38
        VAR39,
        VAR40;

      register VAR18
        VAR41;

      FUN15(VAR2,&VAR36);
      FUN16(VAR2,VAR31,&VAR36);
      VAR39.VAR33=(double) VAR33;
      VAR39.VAR19=(double) VAR19;
      for (VAR41=0; VAR41 < VAR42; VAR41++)
      {
        double
          VAR43,
          VAR44;

        VAR35
          VAR45;

        VAR38
          VAR46;

        VAR18
          VAR47,
          VAR48;

        VAR46.VAR33=0.0;
        VAR46.VAR19=0.0;
        FUN15(VAR2,&VAR45);
        VAR40=VAR39;
        VAR37=VAR36;
        VAR47=0;
        for (VAR48=(-((VAR18) VAR4/2)); VAR48 <= (((VAR18) VAR4/2)); VAR48++)
        {
          VAR18
            VAR49;

          for (VAR49=(-((VAR18) VAR3/2)); VAR49 <= (((VAR18) VAR3/2)); VAR49++)
          {
            if ((VAR48*VAR48+VAR49*VAR49) <= (VAR18) ((VAR3/2)*(VAR4/2)))
              {
                VAR35
                  VAR50;

                VAR15=FUN17(VAR12,(VAR18)
                  FUN18(VAR39.VAR33+VAR49),(VAR18) FUN18(
                  VAR39.VAR19+VAR48),&VAR50,VAR7);
                VAR43=(VAR36.VAR51-VAR50.VAR51)*(VAR36.VAR51-VAR50.VAR51)+
                  (VAR36.VAR52-VAR50.VAR52)*(VAR36.VAR52-VAR50.VAR52)+
                  (VAR36.VAR53-VAR50.VAR53)*(VAR36.VAR53-VAR50.VAR53);
                if (VAR43 <= (VAR5*VAR5))
                  {
                    VAR46.VAR33+=VAR39.VAR33+VAR49;
                    VAR46.VAR19+=VAR39.VAR19+VAR48;
                    VAR45.VAR51+=VAR50.VAR51;
                    VAR45.VAR52+=VAR50.VAR52;
                    VAR45.VAR53+=VAR50.VAR53;
                    VAR45.VAR54+=VAR50.VAR54;
                    VAR47++;
                  }
               }
           }
         }

        VAR44=1.0/VAR47;


         VAR39.VAR33=VAR44*VAR46.VAR33;
         VAR39.VAR19=VAR44*VAR46.VAR19;
         VAR36.VAR51=VAR44*VAR45.VAR51;
        VAR36.VAR52=VAR44*VAR45.VAR52;
        VAR36.VAR53=VAR44*VAR45.VAR53;
        VAR36.VAR54=VAR44*VAR45.VAR54;
        VAR43=(VAR39.VAR33-VAR40.VAR33)*
          (VAR39.VAR33-VAR40.VAR33)+
          (VAR39.VAR19-VAR40.VAR19)*
          (VAR39.VAR19-VAR40.VAR19)+
          255.0*VAR55*(VAR36.VAR51-VAR37.VAR51)*
          255.0*VAR55*(VAR36.VAR51-VAR37.VAR51)+
          255.0*VAR55*(VAR36.VAR52-VAR37.VAR52)*
          255.0*VAR55*(VAR36.VAR52-VAR37.VAR52)+
          255.0*VAR55*(VAR36.VAR53-VAR37.VAR53)*
          255.0*VAR55*(VAR36.VAR53-VAR37.VAR53);
        if (VAR43 <= 3.0)
          break;
      }
      FUN19(VAR13,FUN20(VAR36.VAR51),VAR32);
      FUN21(VAR13,FUN20(VAR36.VAR52),VAR32);
      FUN22(VAR13,FUN20(VAR36.VAR53),VAR32);
      FUN23(VAR13,FUN20(VAR36.VAR54),VAR32);
      VAR31+=FUN24(VAR2);
      VAR32+=FUN24(VAR13);
    }
    if (FUN25(VAR11,VAR7) == VAR23)
      VAR15=VAR23;
    if (VAR2->VAR56 != (VAR57) NULL)
      {
        VAR14
          VAR58;

#if FUN9(VAR28)
        #pragma omp VAR59
#endif
        VAR17++;
        VAR58=FUN26(VAR2,VAR8,VAR17,VAR2->VAR29);
        if (VAR58 == VAR23)
          VAR15=VAR23;
      }
  }
  VAR11=FUN27(VAR11);
  VAR12=FUN27(VAR12);
  VAR10=FUN27(VAR10);
  return(VAR13);
}