FUN1(struct VAR1 *VAR2, const void **VAR3,
                        int64_t VAR4, int VAR5)
{
  int VAR6, VAR7;
  struct VAR8 *VAR8 = (struct VAR8 *)(VAR2->VAR9->VAR10);

  if (!VAR8->VAR11)
  {
    if ((VAR8->VAR11 = malloc(VAR8->VAR12)) == NULL)
    {
      FUN2(&VAR2->VAR13, VAR14,
                        "");
      return (VAR15);
    }
  }

  VAR6 = FUN3(&VAR8->VAR16, VAR4);
  if(VAR6 + VAR5 <= FUN4(&VAR8->VAR16))
    memcpy(&VAR8->VAR11[VAR8->VAR17], &VAR8->VAR16.VAR18[VAR6],
           VAR5);
  else
  {
    VAR7 = FUN4(&VAR8->VAR16) - VAR6;
    if (VAR7 < 0) {
      FUN2(&VAR2->VAR13, VAR19,
                        "");
      return (VAR15);
    }
    if (VAR7 < VAR5) {
      memcpy(&VAR8->VAR11[VAR8->VAR17],
             &VAR8->VAR16.VAR18[VAR6], VAR7);
      memcpy(&VAR8->VAR11[VAR8->VAR17 + VAR7],
             &VAR8->VAR16.VAR18[0], VAR5 - VAR7);
    } else
      memcpy(&VAR8->VAR11[VAR8->VAR17],
             &VAR8->VAR16.VAR18[VAR6], VAR5);
  }
  VAR8->VAR17 += VAR5;
  if (VAR8->VAR17 >= VAR8->VAR12)
    *VAR3 = VAR8->VAR11;
  else
    *VAR3 = NULL;
  return (VAR20);
}