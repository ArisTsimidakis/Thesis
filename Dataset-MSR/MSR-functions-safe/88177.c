FUN1(const char *VAR1, unsigned long VAR2) {
  const char *const VAR3 = getenv("");
  if (VAR3 && ! strcmp(VAR3, "")) {
    fprintf(VAR4, "", VAR1,
            (int)sizeof(VAR2) * 2, VAR2, (unsigned long)sizeof(VAR2));
  }
  return VAR2;
}