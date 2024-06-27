void VAR1::FUN1(
    VAR2::VAR3* VAR4,
    VAR5::VAR6* VAR7,
    VAR8::VAR9* VAR10) {
  
  
  
  
  
  VAR7->FUN2(
      VAR11::FUN3(&VAR12::VAR13, VAR10->FUN4()));

  VAR14<VAR11::VAR15> VAR16 =
      VAR11::FUN5(
          {VAR8::VAR17::VAR18});
  VAR4->FUN2(
      VAR11::FUN3(&VAR19::VAR20::VAR13,
                 VAR21->FUN6()),
      VAR16);
  VAR4->FUN2(
      VAR11::FUN7(&VAR22::VAR23::VAR13));

  if (VAR24::FUN8()) {
    VAR25* VAR26 =
        VAR25::FUN9(VAR10->FUN10());
    auto* VAR27 =
        VAR28::VAR29::FUN11(VAR26);
    VAR4->FUN2(
        VAR11::FUN7(
            &VAR24::VAR13,
            VAR27 ? VAR27->FUN12() : nullptr,
            VAR10->FUN4()),
        VAR16);
  }

#if FUN13(VAR30) || FUN13(VAR31)
  if (VAR32) {
    VAR8::VAR33* VAR34 =
        VAR10->FUN10()->FUN14();
    VAR4->FUN2(
        VAR11::FUN3(
            &VAR35::VAR36::VAR37,
            VAR10->FUN4(), VAR34,
            VAR11::FUN3(
                &VAR1::VAR38,
                VAR11::FUN15(this), VAR34)),
        VAR11::FUN5({VAR17::VAR39}));
  }
#endif  

  if (VAR40::VAR41::FUN16()) {
    VAR4->FUN2(VAR11::FUN7(
        &VAR42,
        VAR10->FUN10()->FUN14()));
  }

#if FUN13(VAR43)
  
  
  
  
  
  
  
  
  auto VAR44 = VAR11::FUN7(
      [](VAR8::VAR9* VAR45) -> VAR11::VAR46 {
        return VAR45->FUN17().FUN18();
      },
      VAR11::FUN15(VAR10));
  
  
  VAR4->FUN2(
      VAR11::FUN7(&VAR47::VAR13, VAR48::move(VAR44),
                          VAR8::VAR49,
                          VAR11::FUN15(VAR50::FUN19())),
      VAR16);
#endif
#if FUN13(VAR51)
  VAR25* VAR26 =
      VAR25::FUN9(VAR10->FUN10());
  VAR4->FUN2(
      VAR11::FUN7(&VAR52::VAR53::VAR13,
                          VAR26),
      VAR11::FUN5({VAR17::VAR18}));
#endif

  for (auto* VAR54 : VAR55) {
    VAR54->FUN1(VAR4, VAR7,
                                   VAR10);
  }
}