void FUN1(
      uint32_t VAR1,
      const VAR2::VAR3<VAR4::VAR5>& VAR6) {
    VAR4::VAR7::ResourceMessageReplyParams VAR8;
    VAR9::Message VAR10;
    FUN2(VAR11.FUN3(
        VAR12::VAR13,
        &VAR8,
        &VAR10));
    VAR11.FUN4();

    FUN5(VAR14, VAR8.FUN6());

    uint32_t VAR15 = 0;
    VAR2::VAR3<VAR4::VAR5> VAR16;
    FUN2(VAR4::VAR17<
        VAR12>(
        VAR10, &VAR15, &VAR16));
    FUN5(VAR1, VAR15);
    FUN5(VAR6, VAR16);
  }