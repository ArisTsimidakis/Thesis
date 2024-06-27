FUN1 (const VAR1 * VAR2, ssize_t VAR3)
{
  char *VAR4;
  VAR1 *VAR5;

  VAR4 = FUN2 (VAR2, VAR3, 0, 0);
  VAR5 = FUN3 (VAR4, -1, VAR6);
  free (VAR4);

  return VAR5;
}