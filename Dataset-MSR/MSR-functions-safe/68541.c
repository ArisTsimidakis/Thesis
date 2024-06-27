FUN1 (VAR1 ** VAR2, guint VAR3,
    VAR1 ** VAR4, VAR5 * VAR6)
{
  *VAR2 = NULL;

  if (*VAR6 < VAR3)
    return VAR7;

  *VAR2 = FUN2 (*VAR4, VAR3);
  *VAR4 += VAR3;
  *VAR6 -= VAR3;
  return VAR8;
}