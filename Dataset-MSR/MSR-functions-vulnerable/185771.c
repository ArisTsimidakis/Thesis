VAR1::FUN1(VAR2::VAR3* VAR4)
    : FUN2(VAR4),
      FUN3(nullptr),
      FUN4(false),
      FUN5(false),
 #if !FUN6(VAR5)
       FUN7(true),
 #endif

      FUN8(VAR6->FUN9()->FUN10()) {




   FUN11(VAR7.FUN12());
   VAR8* VAR9 =
       VAR8::FUN13(VAR4->FUN14());
  VAR10.FUN15(
      VAR11::VAR12, VAR9->FUN16(),
      VAR13::FUN17(&VAR1::VAR14,
                 VAR13::FUN18(this)));
}