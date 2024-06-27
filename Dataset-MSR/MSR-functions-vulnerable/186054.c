void VAR1::FUN1() {
   VAR2<const VAR3> VAR4 =
       FUN2();
   if (!VAR4.FUN3()) {

    FUN4(VAR5::VAR6, VAR7);




     return;
   }
 
  VAR8 = FUN5();
  VAR8->FUN6(
      VAR9::FUN7(&VAR1::VAR10, this),
      VAR4.FUN3(), &VAR11, VAR12::move(VAR13),
      VAR14::FUN8());
}