VAR1::FUN1(VAR2* VAR3,
                     const VAR4::VAR5& VAR6,
                     VAR7* VAR8,
                     bool VAR9)
    : FUN2(VAR3),
      FUN3(VAR6),
      FUN4(VAR8),
      FUN5(NULL) {
  FUN6(VAR10::VAR11::FUN7(VAR12).FUN8());
  if (VAR13::VAR14::FUN9())
     FUN10(VAR9 ? VAR15 : VAR16);
 
   const VAR10::VAR11* VAR17 =

      VAR10::VAR18::FUN11(VAR19)->FUN12()

          ->FUN13(VAR12);




   FUN14(VAR17);
 
   VAR20 = VAR17->FUN15();

  VAR21.FUN16(
      new VAR10::FUN17(VAR19,
                                VAR17,
                                VAR10::VAR22::FUN18(VAR17),
                                FUN19(),
                                VAR10::VAR23::FUN20(),
                                this));
  FUN21();

  FUN22();
}