int FUN1(const VAR1 *VAR2, const char *VAR3, const char *VAR4, int VAR5) {
  assert(VAR2 != NULL);
  assert(VAR3 != NULL);
  assert(VAR4 != NULL);

 VAR6 *VAR7 = FUN2(VAR2, VAR3, VAR4);
 if (!VAR7)
 return VAR5;

 char *VAR8;
 int VAR9 = FUN3(VAR7->VAR10, &VAR8, 0);
 return (*VAR8 == '') ? VAR9 : VAR5;
}