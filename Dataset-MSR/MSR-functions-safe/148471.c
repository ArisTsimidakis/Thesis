void VAR1::FUN1(
    VAR2* VAR3,
    const VAR4& VAR5,
    const VAR6::VAR7& VAR8,
    const VAR6::VAR7& VAR9,
    ResourceType VAR10) {
  for (auto& VAR11 : VAR12)
    VAR11.FUN2(VAR5, VAR9, VAR10);

  if (VAR5.FUN3() && VAR5.FUN4()) {
    VAR13* VAR14 = VAR3->FUN5()->FUN6();
    VAR15<VAR16::VAR17> FUN7(
        VAR10 == VAR18
            ? VAR14->FUN8()
            : VAR14->FUN9());
    VAR19::FUN10(
        VAR19::VAR20, VAR21,
        VAR22::FUN11(&VAR23, VAR24, VAR5, VAR8));
  }
}