static BROTLI_INLINE int FUN1(int VAR1,
    VAR2* VAR3, int VAR4) {
  uint32_t VAR5 = VAR3->VAR6[VAR4];
  int VAR7 = VAR4 * VAR8;
  const VAR9* VAR10 = &VAR3->VAR11[VAR7];
  const VAR9* VAR12 = &VAR3->VAR13[VAR7];
  VAR14* VAR15 = &VAR3->VAR15;
  VAR16* VAR17 = &VAR3->VAR18[VAR4 * 2];
  uint32_t VAR19;

  
  if (!VAR1) {
    VAR19 = FUN2(VAR10, VAR15);
    VAR3->VAR20[VAR4] = FUN3(VAR12, VAR15);
  } else {
    BrotliBitReaderState VAR21;
    FUN4(VAR15, &VAR21);
    if (!FUN5(VAR10, VAR15, &VAR19)) return 0;
    if (!FUN6(VAR3, &VAR3->VAR20[VAR4], VAR12, VAR15)) {
      VAR3->VAR22 = VAR23;
      FUN7(VAR15, &VAR21);
      return 0;
    }
  }

  if (VAR19 == 1) {
    VAR19 = VAR17[1] + 1;
  } else if (VAR19 == 0) {
    VAR19 = VAR17[0];
  } else {
    VAR19 -= 2;
  }
  if (VAR19 >= VAR5) {
    VAR19 -= VAR5;
  }
  VAR17[0] = VAR17[1];
  VAR17[1] = VAR19;
  return 1;
}