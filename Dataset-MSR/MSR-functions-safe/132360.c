void FUN1(
    VAR1::VAR2<VAR3> VAR4,
    const VAR5::VAR6& VAR7,
    VAR8<VAR9::VAR10> VAR11,
    VAR8<VAR12> VAR13) {
  if (!VAR13) {
    VAR11->FUN2(VAR14,
                                   VAR9::FUN3(&VAR15, VAR7,
                                              VAR16));
    return;
  }

  
  new FUN4(VAR13, VAR4.FUN5());

  VAR11->FUN2(
      VAR14,
      VAR9::FUN3(&VAR15, VAR7, VAR17));
}