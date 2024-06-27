VAR1 *VAR2::FUN1(int VAR3, const char *VAR4) {
  VAR1 *VAR5;

  if (VAR3 < 2) {
    return NULL;
  }
  if (!(VAR5 = VAR6->FUN1(VAR3, VAR4))) {
    return NULL;
  }
  VAR5->FUN2(VAR4)->FUN2("");
  return VAR5;
}