void VAR1::FUN1(
    uint64_t VAR2,
    VAR3::VAR4<VAR5::VAR6::VAR7> VAR8) {
  for (auto& VAR9 : VAR8) {
    VAR10::VAR11& VAR12 = VAR9->VAR12;
    uint32_t VAR13 = VAR9->VAR13;

    if (!VAR12->FUN2())
      return;

    VAR10::ScopedSharedBufferMapping VAR14 = VAR12->FUN3(VAR13);
    if (!VAR14) {
      FUN4(VAR15) << "";
      return;
    }

    const char* VAR16 = static_cast<const char*>(VAR14.FUN5());
    VAR3::VAR17 FUN6(VAR16, VAR16 + VAR13);

    const int VAR18 = 1;
    const char* const VAR19[] = {""};
    const unsigned char VAR20[] = {VAR21};
    VAR3::VAR22<VAR23::VAR24::VAR25> FUN7(
        new FUN8(VAR3::move(VAR26)));

    
    
    FUN9(
        VAR27,
        VAR23::VAR24::VAR28::FUN10(
            VAR23::VAR24::VAR29::VAR30),
        "", VAR31::VAR32, VAR2,
        VAR9->VAR33, VAR18, VAR19,
        VAR20, nullptr , &VAR34,
        VAR35);
  }
  if (VAR36) {
    VAR3::move(VAR36).FUN11();
    VAR36.FUN12();
  }
}