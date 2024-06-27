void FUN1(VAR1::VAR2<VAR1::VAR3>* VAR4,
                    VAR1::VAR2<VAR1::VAR3>* VAR5,
                    const VAR1::VAR3& VAR6,
                    const VAR7::VAR8& VAR9) {
  FUN2(VAR4);
  FUN2(VAR5);

  if (VAR9.FUN3() && !VAR9.FUN4())
    VAR4->FUN5(VAR6);

  if (VAR9.FUN6())
    VAR5->FUN5(VAR6);
}