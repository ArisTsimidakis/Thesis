VAR1::VAR2<VAR3*> VAR3::FUN1() {
  VAR1::VAR2<VAR3*> VAR4;
  VAR5<VAR6> FUN2(
      VAR7::FUN3());
  while (VAR8* VAR9 = VAR10->FUN4()) {
    VAR11* VAR12 = VAR11::FUN5(VAR9);
    if (!VAR12)
      continue;
    VAR13* VAR14 = VAR13::FUN6(VAR12);
    if (!VAR14)
      continue;
    if (VAR14->FUN7() != VAR12)
      continue;
    
    
    VAR4.FUN8(static_cast<VAR3*>(VAR14));
  }
  return VAR4;
}