bool VAR1::FUN1() const {
#if FUN2(VAR2)
  return VAR3;
#else
  const VAR4::VAR5* VAR6 = this->FUN3();
  return VAR6 && VAR6->FUN4();
#endif
}