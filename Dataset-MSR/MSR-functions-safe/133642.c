void VAR1::FUN1() {
  VAR2.FUN2(true);
  VAR3* VAR4 =
      VAR3::FUN3(FUN4());
  if (VAR4) {
    VAR4->FUN5();
#if FUN6(VAR5)
    VAR4->FUN2(true);
#endif
  }

  VAR6 = VAR7::VAR8::FUN7();

  
  
  VAR9* VAR10 =
      static_cast<VAR9*>(FUN8());
  if (VAR10) {
    VAR10->FUN9(FUN10());
  }

  FUN11(VAR11, VAR12, FUN1());

  VAR13 = true;
}