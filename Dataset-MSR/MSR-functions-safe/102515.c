static VAR1::VAR2 FUN1(
    const VAR3& VAR4,
    const VAR3& VAR5) {
  
  if (!VAR6::FUN2(VAR4))
    return VAR1::VAR7;

  
  if (!VAR6::FUN3(VAR5.FUN4()))
    return VAR1::VAR7;

  
  if (VAR4.FUN5(VAR5))
    return VAR1::VAR8;

  
  if (!VAR6::FUN2(VAR5))
    return VAR1::VAR9;

  
  
  bool VAR10 = VAR6::FUN3(VAR4);
  bool VAR11 = VAR6::FUN3(VAR5);
  if (VAR10 && !VAR11)
    return VAR1::VAR12;

  
  
  if (!VAR10 && VAR11)
    return VAR1::VAR13;

  
  if (VAR4.FUN6() == VAR5.FUN6())
    return VAR1::VAR14;

  if (VAR11) {
    
    
    
    
    
    if (!VAR6::FUN7(VAR5, false )) {
      if (!VAR6::FUN8(VAR5))
        return VAR1::VAR15;
      return VAR1::VAR16;
    }
  }
  return VAR1::VAR9;
}