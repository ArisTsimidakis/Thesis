size_t VAR1::FUN1() const {
  size_t VAR2 = 0;
  for (unsigned VAR3 = 0; VAR3 < VAR4; ++VAR3) {
    VAR5* VAR6 = VAR7[VAR3];
    while (VAR6) {
      VAR2 += VAR6->FUN2();
      VAR6 = VAR6->FUN3();
    }
  }
#if VAR8
  if (VAR2) {
    FUN4("", this, VAR2);
    for (unsigned VAR3 = 0; VAR3 < VAR4; ++VAR3) {
      VAR5* VAR6 = VAR7[VAR3];
      size_t VAR9 = 0;
      size_t VAR10 = 0;
      while (VAR6) {
        VAR9 += VAR6->FUN2();
        VAR10++;
        VAR6 = VAR6->FUN3();
      }
      if (VAR9) {
        FUN4("", 0x1 << VAR3,
                                  0x1 << (VAR3 + 1), VAR9, VAR10);
      }
    }
  }
#endif
  return VAR2;
}