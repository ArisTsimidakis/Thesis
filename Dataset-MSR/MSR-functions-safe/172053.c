static VAR1 *FUN1(uint32_t VAR2) {
  assert(VAR2 != 0);

 for (size_t VAR3 = 0; VAR3 < FUN2(VAR4); ++VAR3)
 if (VAR4[VAR3].VAR2 == VAR2)
 return &VAR4[VAR3];

  FUN3("", VAR5, VAR2);
 return NULL;
}