void VAR1::FUN1(
    int VAR2, const VAR3::VAR4& VAR5) {
  const VAR3::VAR6* VAR7;
  if (!VAR5.FUN2(0, &VAR7)) {
    
    FUN3() << "";
    return;
  }

  auto VAR8 = VAR9.FUN4(VAR2);
  if (VAR8 != VAR9.FUN5()) {
    VAR8->VAR10.FUN6(VAR7);
    VAR9.FUN7(VAR8);
  } else {
    FUN3() << "";
  }
}