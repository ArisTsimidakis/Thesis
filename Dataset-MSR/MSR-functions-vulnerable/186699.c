void VAR1::FUN1(VAR2* VAR3) {
  if (!FUN2())
    return;

  VAR4* VAR5 = FUN2()->FUN3();
  if (!VAR5)
    return;

  FUN4(VAR3);
  VAR6* VAR7 =
      VAR3->FUN5();

  bool VAR8 = VAR7->FUN6();
  if (VAR8) {
    VAR7->FUN7();
  } else {
    FUN4(FUN8());
    VAR8 =
        FUN9() && (FUN9() != this) &&
        (FUN10(VAR7)->FUN11() == FUN9());
  }
 
   
   if (FUN2()->FUN12() && VAR8)

    VAR5->FUN13().FUN14();


 
   VAR5->FUN15().FUN16(FUN2(),
                                                true );
}