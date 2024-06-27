FUN1(
    VAR1* VAR2,
    const VAR3<VAR4::VAR5>& VAR6,
    const VAR3<VAR4::VAR5>& VAR7) {
  FUN2(VAR8::VAR9::VAR10);
   FUN3(VAR2);
   FUN3(VAR2->FUN4());
 

  VAR11::VAR12*

      VAR13 =

          VAR14::FUN5(

              VAR2);

  bool VAR15 = VAR13 &&

                 VAR13->FUN6();




 
   VAR16::VAR17<VAR11::VAR18>
       FUN7(
          new VAR11::FUN8(
              VAR19::FUN9(),
              VAR2->FUN4(), VAR8::FUN10(),
              VAR6, VAR7, VAR15, FUN11(),
              VAR20::FUN12(VAR21::FUN13())));

  VAR22->FUN14(
      VAR16::VAR23<VAR11::VAR24>());
  VAR22->FUN15(
      VAR16::VAR23<VAR11::VAR25>());
  VAR22->FUN16(
      VAR16::VAR23<VAR11::VAR26>(
          VAR7, VAR4::FUN17(&VAR27)));

  return VAR22;
}