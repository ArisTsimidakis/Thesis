bool VAR1::FUN1() const {
  static const VAR2::VAR3 FUN2("");
  static const VAR2::VAR3 FUN3("");
  if (VAR4.FUN4(VAR5) == 0) {
    VAR2::VAR3::size_type VAR6 = VAR4.FUN4(VAR7);
    if (VAR6 != VAR2::VAR3::VAR8)
      VAR6 = VAR4.FUN5(VAR9,
                                         VAR6 + VAR7.FUN6());
    if (VAR6 != VAR2::VAR3::VAR8 && VAR4[VAR6] == '')
      return true;
  }
  return false;
}