bool VAR1::FUN1(uint32 VAR2,
                                           VAR3* VAR4) {
  VAR5::VAR6* VAR7 =
      FUN2()->FUN3(VAR2);
  if (VAR7) {
    *VAR4 = VAR7->FUN4();
    return true;
  }
  return false;
}