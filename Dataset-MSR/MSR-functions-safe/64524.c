MagickExport VAR1 *FUN1(const VAR2 *VAR3,
  const size_t VAR4,const size_t VAR5,const VAR6 *VAR7)
{
  VAR8
    *VAR9;

  VAR10
    *VAR11;

  VAR1
    *VAR12;

  VAR13
    VAR14;

  VAR15
    VAR16;

  assert(VAR3 != (const VAR2 *) NULL);
  if (VAR3->VAR17 != VAR18)
    (void) FUN2(VAR19,FUN3(),"");
  assert(VAR3->VAR20 == VAR21);
  assert(VAR7 != (const VAR6 *) NULL);
  VAR12=FUN4(VAR3);
  VAR12->VAR22=VAR4;
  VAR12->VAR23=VAR5;
  VAR12->VAR24=VAR7->VAR24;
  VAR12->VAR25=VAR7->VAR25;
  VAR12->VAR26=VAR7->VAR26;
  VAR12->VAR27=VAR7->VAR27;
  VAR16=VAR28;
  VAR11=(&VAR12->VAR11);
  VAR9=FUN5(VAR12,VAR11);
#if FUN6(VAR29)
  #pragma omp parallel for FUN7(static,4) FUN8(VAR16) \
    FUN9(VAR12,VAR12,VAR12->VAR23,1)
#endif
  for (VAR14=0; VAR14 < (VAR13) VAR12->VAR23; VAR14++)
  {
    register VAR30
      *magick_restrict VAR31;

    register VAR32
      *magick_restrict VAR33;

    register VAR13
      VAR34;

    if (VAR16 == VAR18)
      continue;
    VAR33=FUN10(VAR9,0,VAR14,VAR12->VAR22,1,VAR11);
    if (VAR33 == (VAR32 *) NULL)
      {
        VAR16=VAR18;
        continue;
      }
    VAR31=FUN11(VAR9);
    for (VAR34=0; VAR34 < (VAR13) VAR12->VAR22; VAR34++)
    {
      FUN12(VAR12,VAR7,VAR33,VAR31+VAR34);
      VAR33++;
    }
    if (FUN13(VAR9,VAR11) == VAR18)
      VAR16=VAR18;
  }
  VAR9=FUN14(VAR9);
  if (VAR16 == VAR18)
    VAR12=FUN15(VAR12);
  return(VAR12);
}