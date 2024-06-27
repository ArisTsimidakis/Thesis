bool VAR1::FUN1(
    const VAR2& VAR3) {
  if (VAR3.VAR4 || VAR3.FUN2() != VAR5::VAR6)
    return false;

  for (size_t VAR7 = 0; VAR7 < VAR8.FUN3(); VAR7++) {
    size_t VAR9 = VAR8.FUN3();
    if (VAR8[VAR7].FUN4(VAR3))
      return true;

    
    
    size_t VAR10 = VAR8.FUN3();
    if (VAR10 != VAR9) {
      FUN5(VAR9 - 1, VAR10);
      --VAR7;
    }
  }

  return false;
}