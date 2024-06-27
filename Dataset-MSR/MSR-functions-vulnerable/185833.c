VAR1::FUN1(

    const VAR2::VAR3& VAR4,

    VAR5* VAR6,

    VAR7::VAR8<VAR9::VAR10> VAR11,

    VAR12<VAR13::VAR14> VAR15,

    bool VAR16)

    : FUN2(VAR4),

      FUN3(VAR6),

      FUN4(VAR15),

      FUN5(VAR16),

      FUN6(VAR7::move(VAR11)) {}