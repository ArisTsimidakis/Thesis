void VAR1::FUN1(int VAR2,
                                               bool* VAR3,
                                               bool* VAR4) {
  if (VAR5->FUN2(VAR2)) {
    *VAR4 =
        VAR6::FUN1(VAR5->FUN3(VAR2));
    *VAR3 = true;
  } else {
    *VAR3 = false;
    *VAR4 = false;
  }
}