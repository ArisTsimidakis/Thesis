void VAR1::VAR2::FUN1(
    const VAR3::VAR4& VAR5) {
  
  
  
  if (!FUN2())
    return;

  
  for (int VAR6 = 0; VAR6 < VAR3::VAR7; ++VAR6) {
    if (VAR5.FUN3(VAR6)) {
      VAR8<VAR1::VAR9> VAR10;
      FUN4(&VAR10);
      FUN5(VAR1::VAR9, VAR10,
                        FUN6(VAR3::FUN7(VAR6)));
    }
  }
}