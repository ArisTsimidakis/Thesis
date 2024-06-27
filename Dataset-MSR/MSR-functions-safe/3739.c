FUN1 (VAR1 *VAR2,
                             int         VAR3)
{
  int VAR4;
  int VAR5;

  

  VAR4 = FUN2 (VAR2);
  VAR5 = -1;

  
  VAR5 = open ("", VAR6);
  if (VAR5 < 0)
    return FUN3 (VAR2, VAR3);

  FUN4 ("", VAR5);

  if (FUN5 (VAR5, VAR2, VAR3) != VAR3)
    {
      FUN6 (VAR5, NULL);
      FUN7 (VAR2, VAR4);
      return FUN3 (VAR2, VAR3);
    }

  FUN4 ("",
                 VAR3);

  FUN6 (VAR5, NULL);

  return VAR7;
}