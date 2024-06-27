void VAR1::FUN1(

    VAR2::VAR3* VAR4,


     VAR5::VAR6* VAR7,
     bool VAR8) {
   if (!VAR8) {
    VAR7->FUN2(VAR9, true);
    return;
  }

  bool VAR10;
  VAR11::VAR12::MultiProfileUserBehavior VAR13;
  FUN3(VAR4, &VAR10, &VAR13);
  VAR7->FUN2(VAR9, VAR10);
  VAR7->FUN4(VAR14, static_cast<int>(VAR13));
}