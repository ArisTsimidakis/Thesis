static VAR1 FUN1(struct VAR2 *VAR3)
{
  CURLcode VAR4 = VAR5;
  struct VAR6 *VAR7 = &VAR3->VAR8.VAR7;

  while(VAR7->VAR9 != VAR10 && !VAR4)
    VAR4 = FUN2(&VAR7->VAR11, VAR12);

  return VAR4;
}