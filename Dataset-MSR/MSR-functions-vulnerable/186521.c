void VAR1::FUN1(
     VAR2* VAR3,
    VAR4* VAR5,
    VAR6::VAR7<VAR8> VAR9) {
  FUN2(VAR10.FUN3());
  FUN2(VAR3);
  FUN2(VAR5);
  FUN2(VAR5->FUN4());
  FUN2(VAR9);
  VAR11 = VAR3;
   VAR12 = VAR5->FUN4();
   VAR13 = VAR6::move(VAR9);
   VAR13->FUN5(this);

  FUN6();
   FUN7();
 












 #if FUN8(VAR14)

  if (VAR15.FUN9()) {


     VAR13->FUN10()
         ->FUN11(true);
   }
#endif  

  for (auto& VAR16 : VAR17)
    VAR16.FUN12();
}