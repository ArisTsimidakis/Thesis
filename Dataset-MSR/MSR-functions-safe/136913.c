bool VAR1::FUN1() {
  
  FUN2(FUN3(), VAR2::VAR3);
  if (VAR4* VAR5 = FUN4())
    return VAR5->FUN5(this);
  return false;
}