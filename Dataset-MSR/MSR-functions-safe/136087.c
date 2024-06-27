VAR1::Size VAR2::FUN1() const {
  if (VAR3 == nullptr && VAR4 == nullptr)
    return VAR5::VAR6::FUN1();

  int VAR7 = 0;
  if (VAR3)
    VAR7 += VAR3->FUN1().FUN2();
  if (VAR4)
    VAR7 += VAR4->FUN1().FUN2();

  int VAR8 = VAR9;
  if (VAR10)
    VAR8 = VAR11::FUN3(VAR8, VAR10->FUN1().FUN4());
  if (VAR12)
    VAR8 = VAR11::FUN3(VAR8, VAR12->FUN1().FUN4());
  VAR8 += VAR13;
  VAR8 = VAR11::FUN5(VAR8, VAR14);

  return VAR1::FUN6(VAR8, VAR7);
}