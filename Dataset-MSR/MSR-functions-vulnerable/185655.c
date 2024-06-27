VAR1::FUN1(
    VAR2* VAR3,
    jobject VAR4,
    VAR5::VAR6* VAR7) {
  
  VAR5::VAR8* VAR9 =
      VAR7->FUN2().FUN3();
  if (VAR9 == NULL)
    return;

  VAR10 = VAR9->FUN4();

  VAR11.FUN5(VAR3, VAR4);

  VAR12.FUN6(new FUN7(
       this,
       VAR13::FUN8(VAR7->FUN9()),
       VAR14::FUN10(VAR7),

      VAR15::FUN10(VAR7),


       VAR9->FUN4(),
       VAR9->FUN11(),
       VAR5::VAR16::FUN12()));
}