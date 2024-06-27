VAR1::FUN1(Guint VAR2, Guint VAR3):
  FUN2(VAR2)
{
  Guint VAR4;

  VAR5 = VAR3;
  VAR6 = (VAR7 **)FUN3(VAR5, sizeof(VAR7 *));
  if (!VAR6) VAR5 = 0;
  for (VAR4 = 0; VAR4 < VAR5; ++VAR4) {
    VAR6[VAR4] = NULL;
  }
  VAR8 = NULL;
  VAR9 = NULL;
}