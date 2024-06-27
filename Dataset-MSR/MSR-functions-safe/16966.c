int VAR1::VAR2::FUN1(
    VAR3::VAR4* VAR5,
    const VAR3::VAR6& VAR7,
    VAR3::VAR8* VAR9) {
  VAR10<VAR11::VAR12> VAR13 = FUN2();
  if (!VAR13) {
    return VAR3::VAR14;
  }

  const VAR15::VAR16* VAR17 =
      VAR15::VAR16::FUN3(VAR5);
  if (!VAR17) {
    
    
    return VAR3::VAR14;
  }

  VAR18 FUN4(
      FUN5(VAR19::FUN6(VAR5->FUN7().FUN8())),
      VAR19::FUN6(VAR5->FUN9()),
      VAR19::FUN6(VAR5->FUN10()),
      VAR17->FUN11());

  VAR20* VAR21 =
      VAR20::FUN12(&VAR22);
  VAR21->VAR9 = VAR9;

  VAR13->FUN1(&VAR22);

  return VAR21->VAR23 ? VAR3::VAR24 : VAR3::VAR14;
}