void FUN1(const VAR1<VAR2::VAR3>& VAR4, VAR5::VAR6* VAR7) {
  *VAR7 << "";
  bool VAR8 = true;
  for (auto VAR9 : VAR4) {
    if (VAR8)
      VAR8 = false;
    else
      *VAR7 << "";
    *VAR7 << VAR9;
  }
  *VAR7 << "";
}