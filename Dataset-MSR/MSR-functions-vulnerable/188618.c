static unsigned int FUN1(const VAR1 *VAR2, const VAR1 *VAR3,

                                 int VAR4, int VAR5, unsigned int *VAR6) {

  int VAR7 = 0;

  unsigned int VAR8 = 0;

  const int VAR9 = 1 << VAR4, VAR10 = 1 << VAR5;

  for (int VAR11 = 0; VAR11 < VAR10; VAR11++) {

    for (int VAR12 = 0; VAR12 < VAR9; VAR12++) {

      int VAR13 = VAR2[VAR9 * VAR11 + VAR12] - VAR3[VAR9 * VAR11 + VAR12];

      VAR7 += VAR13;

      VAR8 += VAR13 * VAR13;

    }
































   }

  *VAR6 = VAR8;

  return VAR8 - (((VAR14) VAR7 * VAR7) >> (VAR4 + VAR5));
 }