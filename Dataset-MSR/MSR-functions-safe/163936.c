VAR1<VAR2> FUN1(
    VAR1<VAR2> VAR3) {
  VAR1<VAR2> VAR4;
  while (!VAR3.FUN2(VAR4)) {
    VAR4 = VAR3;
    VAR3 = FUN3(VAR3, VAR5);
  }
  return VAR3;
}