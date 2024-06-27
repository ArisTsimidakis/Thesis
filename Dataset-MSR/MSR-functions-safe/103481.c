bool VAR1::FUN1(
    const VAR2::VAR3& VAR4) const {
  
  
  const VAR5* VAR6 = FUN2(VAR4);
  if (VAR6 && VAR6->FUN3() == VAR5::VAR7)
    return true;

  
  return VAR8->FUN1(VAR4);
}