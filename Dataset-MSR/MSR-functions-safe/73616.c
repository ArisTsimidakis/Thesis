MagickExport VAR1 *FUN1(const VAR2 *VAR3)
{
  VAR4
    *restrict VAR5;

  const int
    VAR6 = FUN2();

  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR7 == VAR8);
  assert(VAR3->VAR9 != (VAR10) NULL);
  VAR5=(VAR4 *) VAR3->VAR9;
  assert(VAR5->VAR7 == VAR8);
  if (VAR5->VAR11.VAR12 !=
       (VAR13) NULL)
    return(VAR5->VAR11.FUN3(VAR3));
  assert(VAR6 < (int) VAR5->VAR14);
  return(VAR5->VAR15[VAR6]->VAR16);
}