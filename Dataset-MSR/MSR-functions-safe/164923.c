VAR1::FUN1(
    VAR2* VAR3,
    VAR4::VAR5* VAR6,
    const VAR7::VAR8& VAR9,
    int VAR10,
    int VAR11,
    VAR12* VAR13,
    uint32_t VAR14,
    VAR7::VAR15::URLLoaderRequest VAR16,
    VAR7::VAR15::URLLoaderClientPtr VAR17) {
  FUN2(VAR3->FUN3() ||
         VAR3->FUN4() ||
         VAR3->FUN5());
  
  VAR18::VAR19<VAR20> VAR21 =
      VAR18::VAR22<VAR23>(
          VAR6, this, VAR18::move(VAR16), VAR18::move(VAR17),
          static_cast<VAR24>(VAR9.VAR25),
          VAR14);

  
  if (VAR9.VAR25 == VAR26) {
    auto VAR27 = VAR18::VAR22<VAR28>(
        VAR6,
        VAR29::VAR30::FUN6(VAR31),
        VAR18::move(VAR21));
    VAR21 = VAR18::move(VAR27);
  }

  return FUN7(
      VAR6, static_cast<VAR24>(VAR9.VAR25),
      VAR13, VAR9.VAR32,
      static_cast<VAR33::VAR15::VAR34>(
          VAR9.VAR35),
      VAR14, VAR3->FUN8(), VAR11,
      VAR10, VAR18::move(VAR21));
}