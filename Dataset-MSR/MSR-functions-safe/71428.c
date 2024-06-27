MagickExport void FUN1(void)
{
#if FUN2(VAR1)
  register VAR2
    VAR3;

  if (VAR4 == (VAR5 *) NULL)
    FUN3(&VAR4);
  FUN4(VAR4);
  for (VAR3=0; VAR3 < (VAR2) VAR6.VAR7; VAR3++)
    if (VAR6.VAR8[VAR3]->VAR9 == VAR10)
      VAR11.FUN5(
        VAR6.VAR8[VAR3]->VAR12);
    else
      (void) FUN6(VAR6.VAR8[VAR3]->VAR12,
        VAR6.VAR8[VAR3]->VAR13);
  VAR14=(VAR15 *) NULL;
  (void) FUN7(&VAR6,0,sizeof(VAR6));
  FUN8(VAR4);
  FUN9(&VAR4);
#endif
}