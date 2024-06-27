FUN1(VAR1* VAR2, const VAR3* VAR4, const VAR3* VAR5,
	  const VAR3* VAR6, const VAR3* VAR7, const VAR3* VAR8)
{
  const VAR3 *VAR9, *VAR10, *VAR11, *VAR12;
  const VAR3 *VAR13;

  VAR12 = VAR8 + (VAR5 - VAR4) - 1;
  if (VAR12 > VAR7)
    VAR12 = VAR7;

  VAR13 = VAR5 - 1;
  VAR9 = VAR6 + (VAR5 - VAR4) - 1;
  if (FUN2(VAR2->VAR14)) {
    while (VAR9 < VAR12) {
      VAR11 = VAR9;
      VAR10 = VAR13;
      while (*VAR11 == *VAR10) {
        if (VAR10 == VAR4) return (VAR3* )VAR11;
        VAR11--; VAR10--;
      }
      VAR9 += VAR2->VAR15[*VAR9];
    }
  }
  else { 
    while (VAR9 < VAR12) {
      VAR11 = VAR9;
      VAR10 = VAR13;
      while (*VAR11 == *VAR10) {
        if (VAR10 == VAR4) return (VAR3* )VAR11;
        VAR11--; VAR10--;
      }
      VAR9 += VAR2->VAR14[*VAR9];
    }
  }
  return (VAR3* )NULL;
}