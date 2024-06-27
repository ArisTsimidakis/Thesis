MagickExport VAR1 *FUN1(VAR2 *VAR3,const ssize_t VAR4,
  const ssize_t VAR5,const size_t VAR6,const size_t VAR7,
  VAR8 *VAR9)
{
  VAR10
    *magick_restrict VAR11;

  const int
    VAR12 = FUN2();

  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR13 == VAR14);
  assert(VAR3->VAR15 != (VAR16) NULL);
  VAR11=(VAR10 *) VAR3->VAR15;
  assert(VAR11->VAR13 == VAR14);
  if (VAR11->VAR17.VAR18 !=
       (VAR19) NULL)
    return(VAR11->VAR17.FUN3(VAR3,VAR4,VAR5,VAR6,
      VAR7,VAR9));
  assert(VAR12 < (int) VAR11->VAR20);
  return(FUN4(VAR3,VAR4,VAR5,VAR6,VAR7,VAR21,
    VAR11->VAR22[VAR12],VAR9));
}