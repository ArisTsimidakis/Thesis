void FUN1(
      const VAR1::VAR2& VAR3,
      VAR1::FactoryCompletionCallback VAR4,
      VAR5::VAR6<VAR7> VAR8,
       VAR5::VAR6<VAR7::VAR9> VAR10,
       const VAR11::VAR12<VAR13::VAR14>& VAR15,
       VAR5::VAR6<VAR13::VAR16> VAR17) {




     if (VAR15) {
       VAR5::move(VAR4).FUN2(VAR15, nullptr,
                               nullptr);
      return;
    }

    VAR5::VAR18<VAR5::VAR19, VAR20::VAR21> VAR22;
    for (VAR7::VAR23& VAR24 : *VAR10) {
      const VAR5::VAR19& VAR25 = VAR24.VAR26;
      SessionSpecifics VAR27;
      if (VAR25.FUN3() ||
          !VAR27.FUN4(VAR5::move(VAR24.VAR28))) {
        FUN5(1) << "" << VAR25;
        continue;
      }
      VAR22[VAR25].FUN6(&VAR27);
    }

    auto VAR29 = VAR5::VAR30<VAR1>(
        VAR31, VAR3, VAR5::move(VAR8),
        VAR5::move(VAR22), VAR17->FUN7(),
        VAR32);

    VAR5::move(VAR4).FUN2(VAR11::VAR33, VAR5::move(VAR29),
                            VAR5::move(VAR17));
  }