String VAR1::FUN1() const {
  const VAR2& VAR3 = FUN2(VAR4);
  if (!VAR3.FUN3())
    return VAR3;

  VAR1* VAR5 = FUN4();

  
  
  if (!VAR5) {
    VAR6* VAR7 = FUN5();
    if (VAR7)
      return VAR7->FUN6();
    return VAR8;
  }

  return VAR5->FUN1();
}