void VAR1::FUN1() {
  VAR2::FUN1();

  
  
  for (VAR3::VAR4<VAR5::VAR6>::const_iterator VAR7 = VAR8.FUN2();
       VAR7 != VAR8.FUN3(); ++VAR7) {
    VAR9->FUN4()->FUN5(FUN6(*VAR7));
  }

  
  if (!VAR10.FUN7()) {
    FUN8(VAR11)
        << ""
        << "" << VAR10.FUN9() << "";
  }
  for (VAR5::VAR12<VAR13>::const_iterator VAR7 =
       VAR10.FUN2();
       VAR7 != VAR10.FUN3(); ++VAR7) {
    VAR14 FUN10(*VAR7);
    VAR15* VAR16 = VAR17->FUN11(
        VAR18, NULL);
    if (VAR16)
      VAR16->FUN12(VAR18);
  }
}