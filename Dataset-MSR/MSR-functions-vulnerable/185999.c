const VAR1::VAR2& VAR3::FUN1(


     const VAR1::VAR2& VAR4) {
   
   const auto& VAR5 = VAR6.FUN2(VAR4);
  if (VAR5 != VAR6.FUN3()) {
    return VAR5->VAR7;
  }

  
  VAR8* VAR9 = VAR8::FUN4(VAR10);
  if (!VAR9) {
    return VAR11::FUN5();
  }
  VAR1::VAR12<VAR8::VAR13> VAR14 =
      VAR9->FUN6(VAR4);
  if (!VAR14) {
    return VAR11::FUN5();
  }

  
  VAR6[VAR4] = VAR14->VAR15;
  return VAR6[VAR4];
}