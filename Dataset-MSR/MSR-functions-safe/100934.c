VAR1* VAR1::FUN1(
    VAR2* VAR3) {
  FUN2(("",
                 static_cast<void*>(VAR3)));
  if (VAR3 == NULL) {
    return NULL;
  }
  VAR1* VAR4 =
      new(VAR5::VAR6) FUN3(VAR3);
  if (VAR4 == NULL) {
    return NULL;
  }
  FUN2(("",
                 static_cast<void*>(VAR4)));
  return VAR4;
}