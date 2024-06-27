FUN1 (const struct VAR1 *VAR2, struct VAR3 *VAR4,
                                struct VAR1 *VAR5, char **VAR6)
{
  char *VAR7, *VAR8;
  
  if (VAR9.VAR7 && VAR9.VAR8)
    {
      VAR7 = VAR9.VAR7;
      VAR8 = VAR9.VAR8;
    }
  else
    {
      VAR7 = VAR5->VAR10;
      VAR8 = VAR5->VAR11;
    }
  
  if (VAR7 && VAR8)
    *VAR6 = FUN2 (VAR7, VAR8);

  
#ifdef VAR12
  if (VAR2->VAR13 != VAR14)
#endif
    FUN3 (VAR4, "", *VAR6, VAR15);
}