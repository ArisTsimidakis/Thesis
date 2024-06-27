bool VAR1::FUN1() {
  if (!VAR2.VAR3.FUN2())
    return true;
  const VAR4::VAR5<VAR6>& VAR7 =
      VAR2.VAR3->FUN3();
  const VAR4::VAR5<VAR6>& VAR8 =
      VAR2.VAR3->FUN4();
  const VAR4::VAR5<VAR6>& VAR9 =
      VAR2.FUN5();
  const VAR4::VAR5<VAR6>& VAR10 =
      VAR2.VAR11->FUN6();
  const VAR4::VAR5<VAR6>& VAR12 =
      VAR2.VAR11->FUN7();
  FUN8(VAR7.FUN9(),
            VAR8.FUN9());
  FUN8(VAR7.FUN9(),
            VAR9.FUN9());
  FUN8(VAR7.FUN9(),
            VAR10.FUN9());
  FUN8(VAR7.FUN9(),
            VAR12.FUN9());
  for (size_t VAR13 = 0; VAR13 < VAR7.FUN9(); ++VAR13) {
    uint32_t VAR14 =
        (~VAR10[VAR13] &
         VAR9[VAR13]) |
        (VAR10[VAR13] &
         VAR12[VAR13]);
    if ((VAR8[VAR13] & VAR7[VAR13]) !=
        (VAR14 & VAR7[VAR13])) {
      return false;
    }
  }
  return true;
}