VAR1::VAR2::FUN1(
    VAR1* VAR3, const VAR4::VAR5& VAR6, StorageType VAR7) {
  switch (VAR7) {
    case VAR8:
      return new FUN2(
          VAR3, VAR6);
    case VAR9:
      return new FUN3(
          VAR3, VAR6);
    default:
      FUN4();
  }
  return NULL;
}