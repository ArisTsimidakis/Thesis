void VAR1::FUN1(
    EventType VAR2,
    KeyboardCode VAR3,
    int VAR4,
    guint32 VAR5) {
  VAR6* VAR7 = FUN2();
  FUN3(VAR2, VAR3, VAR4);

  if (VAR7 != FUN2())
    return;

  if (VAR8.FUN4(VAR5, VAR4)) {
     string16 VAR9 = VAR8.FUN5();
     if (!VAR9.FUN6()) {
       VAR7 = FUN2();

      if (VAR7)

        VAR7->FUN7(VAR9);


















     }
     return;
   }

  VAR7 = FUN2();
  const uint16 VAR10 = VAR11::FUN8(VAR3, VAR4);
  if (VAR7 && VAR10)
    VAR7->FUN9(VAR10, VAR4);
}