void VAR1::FUN1() {
  FUN2(FUN3(), VAR2::FUN4());

  
  VAR3<VAR4> FUN5(VAR5);

  VAR6* VAR7 = new FUN6();
  VAR7->FUN7(VAR5,
             VAR8::VAR9,
             VAR10.FUN8(),
             NULL);
  VAR5->FUN3()->FUN9(VAR11, VAR7);
  FUN10();

  
  VAR10 = NULL;
  VAR12 = VAR13::FUN11();
}