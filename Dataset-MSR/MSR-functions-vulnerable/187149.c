VAR1::FUN1(VAR2::VAR3<VAR4> VAR5)
     : FUN2(VAR2::move(VAR5)) {
   auto* VAR6 = FUN3();
   VAR7 = FUN4(VAR6->FUN5());


   FUN6(VAR7);
 
   const auto VAR8 = VAR6->FUN7();
  if (VAR8 & VAR4::VAR9) {
    VAR10 = FUN8(VAR4::VAR9);
    VAR10->FUN9(true);
    if (VAR6->FUN10()) {
      VAR11.FUN11(new FUN12(
          VAR10,
          VAR12::FUN13(&VAR1::VAR13, VAR12::FUN14(this))));
    }
  }

  if (VAR8 & VAR4::VAR14) {
    VAR15 = FUN8(VAR4::VAR14);
    if (VAR8 == VAR4::VAR14)
      VAR15->FUN9(true);
  }

  VAR16 = FUN15(VAR6->FUN16(), this);
  FUN6(VAR16);
}