void VAR1::FUN1(const VAR2& VAR3) {
  if (!FUN2())
    return;

  VAR4* VAR5 = FUN2()->FUN3();
  if (!VAR5->FUN4())
    VAR5->FUN5();

  VAR5->FUN6(VAR3);
}