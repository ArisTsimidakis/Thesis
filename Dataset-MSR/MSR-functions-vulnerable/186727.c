void VAR1::FUN1(
    const VAR2::VAR3& VAR4,
    VAR5<int> VAR6,
    VAR5<int> VAR7,
    VAR2::VAR8<VAR9> VAR10) {
  static const size_t VAR11 = 10 * 1024 * 1024;
  static const char VAR12[] = "";
 
   VAR13<VAR14::VAR15> VAR16 =
       VAR17->FUN2(VAR4);

  if (!VAR16 && VAR18 &&


       FUN3(VAR4, VAR12, VAR19::VAR20::VAR21)) {

    VAR22* VAR23 = VAR18->FUN4();
     VAR24* VAR25 =

        VAR24::FUN5(VAR23);

    VAR26* VAR27 = VAR18->FUN6();


     VAR2::string VAR28 = VAR4.FUN7(strlen(VAR12));
     VAR16 =

        VAR17->FUN8(VAR25, VAR27, VAR4, VAR28);


   }
 
   if (!VAR16) {
    VAR10->FUN9(VAR29::FUN10(""));
    return;
  }
  VAR16->FUN1(
      VAR6.FUN11(-1), VAR7.FUN11(VAR11),
      VAR19::FUN12(&VAR1::VAR30, VAR31.FUN13(),
                     VAR19::FUN14(VAR2::move(VAR10))));
}