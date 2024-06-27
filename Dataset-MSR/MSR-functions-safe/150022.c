bool VAR1::FUN1(int VAR2,
                                      const VAR3::VAR4& VAR5) {
  VAR6* VAR7 = FUN2()->FUN3(VAR2);
  if (!VAR7)
    return false;

  VAR7->FUN4(
      FUN5(VAR5 - VAR7->FUN6()));
  return true;
}