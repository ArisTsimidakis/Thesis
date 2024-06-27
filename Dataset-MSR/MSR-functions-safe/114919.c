void VAR1::FUN1(int VAR2, VAR3* VAR4) {
  *VAR4 = static_cast<VAR3>(-1);  
  if (VAR5->FUN2(VAR2)) {
    VAR6* VAR7 = VAR5->FUN3(VAR2);
    if (VAR7) {
      VAR8* VAR9 =
          VAR8::FUN4(
              VAR7->FUN5());
      *VAR4 = VAR9->FUN6()->FUN7();
    }
  }
}