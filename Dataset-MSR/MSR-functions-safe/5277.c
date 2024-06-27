FUN1 (struct tree const *VAR1,
           unsigned int VAR2,
           unsigned char VAR3[])
{
  if (!VAR1)
    return;
  FUN1(VAR1->VAR4, VAR2, VAR3);
  FUN1(VAR1->VAR5, VAR2, VAR3);
  if (VAR2 < VAR3[VAR1->VAR6])
    VAR3[VAR1->VAR6] = VAR2;
}