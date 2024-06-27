inline int VAR1::FUN1(VAR2 *VAR3) {
  int VAR4;

  if (!VAR3->VAR5) {
    VAR4 = 0;
  } else if (VAR3->VAR6 < 0) {
    ++VAR3->VAR6;
    VAR4 = 0;
  } else {
    VAR4 = (*VAR3->VAR5 >> VAR3->VAR7) & 1;
    if (++VAR3->VAR6 == VAR8) {
      VAR3->VAR5 = NULL;
    } else if (VAR3->VAR7 == 0) {
      ++VAR3->VAR5;
      VAR3->VAR7 = 7;
    } else {
      --VAR3->VAR7;
    }
  }
  return VAR4;
}