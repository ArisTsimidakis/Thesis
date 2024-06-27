VAR1::VAR2* VAR3::FUN1(
    VAR1::VAR2* VAR4) const {
  if (!FUN2(VAR4))
    return NULL;

  
  
  VAR1::VAR2* VAR5 =
      FUN3(VAR6::VAR7);
  if (!VAR5->FUN4().FUN5())
    return FUN3(VAR6::VAR8);

  
  
  int VAR9 = VAR5->FUN6();
  int VAR10 = VAR4->FUN7()->FUN8()->FUN6();

  VAR1::VAR2* VAR11 = NULL;
  if (VAR10 < VAR9) {
    VAR11 = FUN3(
        VAR6::VAR8);
  } else {
    VAR11 = FUN3(
        VAR6::VAR12);
  }

  return VAR11;
}