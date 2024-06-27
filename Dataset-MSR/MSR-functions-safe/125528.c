void VAR1::FUN1(VAR2::VAR3* VAR4) const {
  const VAR5* VAR6 = FUN2();
  const VAR7* VAR8 = FUN3();

  if (VAR6) {
    GDataEntryProto VAR9;
    VAR6->FUN4(&VAR9);
    const bool VAR10 = VAR9.FUN1(VAR4);
    FUN5(VAR10);
  } else if (VAR8) {
    GDataDirectoryProto VAR11;
    VAR8->FUN4(&VAR11);
    const bool VAR10 = VAR11.FUN1(VAR4);
    FUN5(VAR10);
  }
}