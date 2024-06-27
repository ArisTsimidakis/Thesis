void VAR1::FUN1() {
  FUN2(VAR2::VAR3::VAR4::VAR5,
               "");
  FUN3(!VAR6.FUN4());

  VAR7* VAR8 = &VAR6.FUN5();
  if (!VAR8->VAR9 || VAR8->VAR10.FUN6() > 0 ||
      VAR8->VAR11) {
    return;
  }

  VAR12::FUN7(VAR8, VAR13.FUN8());

  VAR6.FUN9();
  VAR8 = nullptr;

  
  if (!VAR6.FUN4()) {
     VAR2::VAR14::FUN10()->FUN11(
         VAR15,
         VAR2::FUN12(&VAR1::VAR16,

                       VAR2::FUN13(this)));


   }
 }