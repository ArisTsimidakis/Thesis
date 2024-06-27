VAR1* VAR2::FUN1() const {
  if (VAR3)
    return VAR3->FUN1();

  if (!FUN2())
    return VAR1::FUN3();

  return VAR1::FUN3(FUN2()->FUN1());
}