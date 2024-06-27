static VAR1 FUN1(VAR2 *VAR3)
{
  VAR4
    *VAR5;

  VAR6
    *VAR7;

  VAR1
    VAR8;

  VAR9
    *VAR10;

  register VAR11
    VAR12;

  VAR11
    *VAR13,
    VAR14,
    VAR15;

  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR16 == VAR17);
  if (VAR3->VAR18 != VAR19)
    (void) FUN2(VAR3,VAR20);
  VAR13=(VAR11 *) FUN3(VAR21,
    sizeof(*VAR13));
  if (VAR13 == (VAR11 *) NULL)
    FUN4(VAR22,"",
      VAR3->VAR23);
  if (VAR3->VAR24 != VAR25)
    {
      VAR6
        *VAR7;

       (void) FUN5(VAR13,(-1),VAR21*
         sizeof(*VAR13));
       if (FUN6(VAR3,VAR21) == VAR26)

        FUN4(VAR22,"",

          VAR3->VAR23);










       VAR3->VAR27=0;
       VAR8=VAR28;
       VAR7=(&VAR3->VAR7);
      VAR5=FUN7(VAR3,VAR7);
#if FUN8(VAR29)
      #pragma omp parallel for FUN9(static,4) FUN10(VAR8) \
        FUN11(VAR3,VAR3,VAR3->VAR30,1)
#endif
      for (VAR15=0; VAR15 < (VAR11) VAR3->VAR30; VAR15++)
      {
        register VAR31
          *magick_restrict VAR32;

        register VAR9
          *magick_restrict VAR33;

        register VAR11
          VAR34;

        if (VAR8 == VAR26)
          continue;
        VAR33=FUN12(VAR5,0,VAR15,VAR3->VAR35,1,
          VAR7);
        if (VAR33 == (VAR9 *) NULL)
          {
            VAR8=VAR26;
            continue;
          }
        VAR32=FUN13(VAR5);
        for (VAR34=0; VAR34 < (VAR11) VAR3->VAR35; VAR34++)
        {
          register VAR36
            VAR37;

          VAR37=FUN14(FUN15(VAR33));
          if (VAR13[VAR37] < 0)
            {
#if FUN8(VAR29)
              #pragma omp FUN16 (VAR38)
#endif
              if (VAR13[VAR37] < 0)
                {
                  VAR13[VAR37]=(VAR11) VAR3->VAR27;
                  VAR3->VAR10[VAR3->VAR27].VAR39=FUN15(VAR33);
                  VAR3->VAR10[VAR3->VAR27].VAR40=FUN17(VAR33);
                  VAR3->VAR10[VAR3->VAR27].VAR41=FUN18(VAR33);
                  VAR3->VAR27++;
               }
            }
          FUN19(VAR32+VAR34,VAR13[VAR37]);
          VAR33++;
        }
        if (FUN20(VAR5,VAR7) == VAR26)
          VAR8=VAR26;
      }
      VAR5=FUN21(VAR5);
    }
  for (VAR12=0; VAR12 < (VAR11) VAR3->VAR27; VAR12++)
    VAR3->VAR10[VAR12].VAR42=(unsigned short) VAR12;
  FUN22((void *) VAR3->VAR10,VAR3->VAR27,sizeof(VAR9),
    VAR43);
  VAR10=(VAR9 *) FUN3(VAR3->VAR27,
    sizeof(*VAR10));
  if (VAR10 == (VAR9 *) NULL)
    FUN4(VAR22,"",
      VAR3->VAR23);
  VAR14=0;
  VAR10[VAR14]=VAR3->VAR10[0];
  for (VAR12=0; VAR12 < (VAR11) VAR3->VAR27; VAR12++)
  {
    if (FUN23(VAR3,&VAR10[VAR14],&VAR3->VAR10[VAR12]) == VAR26)
      {
        VAR14++;
        VAR10[VAR14]=VAR3->VAR10[VAR12];
      }
    VAR13[(VAR11) VAR3->VAR10[VAR12].VAR42]=VAR14;
  }
  VAR3->VAR27=(VAR36) (VAR14+1);
  VAR3->VAR10=(VAR9 *) FUN24(VAR3->VAR10);
  VAR3->VAR10=VAR10;
  VAR8=VAR28;
  VAR7=(&VAR3->VAR7);
  VAR5=FUN7(VAR3,VAR7);
#if FUN8(VAR29)
  #pragma omp parallel for FUN9(static,4) FUN10(VAR8) \
    FUN11(VAR3,VAR3,VAR3->VAR30,1)
#endif
  for (VAR15=0; VAR15 < (VAR11) VAR3->VAR30; VAR15++)
  {
    register VAR31
      *magick_restrict VAR32;

    register const VAR9
      *magick_restrict VAR33;

    register VAR11
      VAR34;

    if (VAR8 == VAR26)
      continue;
    VAR33=FUN12(VAR5,0,VAR15,VAR3->VAR35,1,VAR7);
    if (VAR33 == (VAR9 *) NULL)
      {
        VAR8=VAR26;
        continue;
      }
    VAR32=FUN13(VAR5);
    for (VAR34=0; VAR34 < (VAR11) VAR3->VAR35; VAR34++)
      FUN19(VAR32+VAR34,VAR13[FUN14(FUN25(
        VAR32+VAR34))]);
    if (FUN20(VAR5,VAR7) == VAR26)
      VAR8=VAR26;
  }
  VAR5=FUN21(VAR5);
  VAR13=(VAR11 *) FUN24(VAR13);
  VAR3->VAR18=VAR19;
  if (FUN26(VAR3,&VAR3->VAR7) != VAR26)
    VAR3->VAR18=VAR44;
  return(VAR8);
}