VAR1::FUN1(VAR2<VAR3> VAR4)
    : FUN2(
          this,
          VAR5::FUN3(VAR5::VAR6),
          VAR7::VAR8::FUN4()->FUN5(
              VAR9::VAR10)),
      FUN6(VAR4.FUN7()),
      FUN8(VAR11::FUN9()->FUN10()) {
  VAR7::VAR12::FUN11(&VAR13, 1);
  VAR14.FUN12(new FUN13(VAR15.FUN14()));
  VAR14->FUN15(this);
  VAR15->FUN16(VAR16::VAR17,
                             new FUN17(this));
  VAR18.FUN18(VAR15.FUN14());
  VAR19.FUN12(
      new FUN19(this, VAR15.FUN14()));

  VAR20.FUN12(
      new FUN20(this, VAR15.FUN14()));

  VAR21* VAR22 =
      VAR21::FUN21(VAR15.FUN14());
  if (VAR22)
    FUN22(VAR22->FUN23());
  if (VAR7::VAR8::FUN4()->FUN5(
          VAR9::VAR23)) {
    
    VAR24::VAR25::FUN24(
        VAR15.FUN14(), &VAR18);
  }
}