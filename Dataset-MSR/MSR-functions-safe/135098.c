void VAR1::VAR2::FUN1(
    VAR3::VAR4* VAR5, int VAR6) {
  FUN2(VAR7 == VAR5);
  bool VAR8 = true;
  if (VAR5->FUN3().FUN4() && VAR6 > 0) {
    VAR9->FUN5();
    VAR8 = FUN6(VAR6);
    if (VAR8) {
      VAR6 = 0;
      while (VAR5->FUN7(VAR10.FUN8(), VAR11, &VAR6)) {
        if (VAR6 > 0) {
          VAR8 = FUN6(VAR6);
          if (!VAR8)
            break;  
        } else {
          break;
        }
      }
    }
  }
  if (VAR8 && !VAR5->FUN3().FUN9()) {
    FUN10(VAR12, VAR13);
    FUN11();
  }
}