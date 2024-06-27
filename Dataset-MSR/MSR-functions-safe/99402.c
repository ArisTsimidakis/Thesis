void FUN1(int VAR1, const VAR2& VAR3, void* VAR4,
                             VAR5::VAR6<int>& VAR7) {
    uint32_t VAR8;
    if (!VAR3.FUN2(&VAR4, &VAR8))
      return;
    const int VAR9 = VAR10->FUN3(VAR8);

    Pickle VAR11;
    if (VAR9 == -1) {
      VAR11.FUN4(false);
    } else {
      VAR11.FUN4(true);
    }

    FUN5(VAR7, VAR11, VAR9);

    if (VAR9 >= 0)
      close(VAR9);
  }