bool VAR1::FUN1(
    const VAR2::VAR3& VAR4, const VAR2::VAR3& VAR5) {
  const VAR6* VAR7 = FUN2(VAR4);
  if (!VAR7) {
    
    return false;
  }
  return FUN3(VAR7, VAR5);
}