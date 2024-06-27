VAR1::FUN1() {
  VAR2::VAR3* VAR4 =
      VAR5->FUN2()->FUN3();
  FUN4(VAR4);
  VAR6* VAR7 =
      VAR6::FUN5(
          VAR4);
  VAR8::ServiceWorkerWorkerClientRequest VAR9;
  VAR8::VAR10
      VAR11;
  VAR8::ServiceWorkerContainerHostPtrInfo VAR12;
  VAR13* VAR14 = VAR7->FUN6();
  
  
  if (VAR14) {
    VAR14->FUN7(
        VAR15::FUN8(&VAR11));

    VAR8::ServiceWorkerWorkerClientPtr VAR16;
    VAR9 = VAR15::FUN8(&VAR16);
    VAR14->FUN9(VAR17::move(VAR16));

    if (VAR2::VAR18::FUN10())
      VAR12 = VAR14->FUN11();
  }

  VAR8::RendererPreferenceWatcherPtr VAR19;
  VAR8::RendererPreferenceWatcherRequest VAR20 =
      VAR15::FUN8(&VAR19);
  FUN12()->FUN13(VAR17::move(VAR19));

  auto VAR21 = VAR22::VAR23<VAR24>(
      VAR25->FUN14(), VAR17::move(VAR20),
      VAR17::move(VAR9),
      VAR17::move(VAR11),
      VAR17::move(VAR12), FUN15()->FUN16(),
      FUN15()->FUN17(),
      FUN18()->FUN19()->FUN20(
          VAR26::VAR27),
      FUN18()
          ->FUN19()
          ->FUN21(),
      VAR28::FUN22()->FUN23(),
      VAR28::FUN22()->FUN24()->FUN16());

  VAR21->FUN25(VAR29);
  VAR21->FUN26(VAR30);
  VAR21->FUN27(
      VAR5->FUN28().FUN29());
  VAR21->FUN30(
      VAR5->FUN28().FUN31());
  VAR21->FUN32(VAR7->FUN33());
  VAR21->FUN34(
      VAR7->FUN35());
  VAR21->FUN36(
      FUN37(VAR5->FUN28().FUN38()).FUN39());
  if (VAR14)
    VAR21->FUN40(VAR14->FUN41());

  for (auto& VAR31 : VAR32)
    VAR31.FUN42(VAR21.FUN43());
  return VAR17::move(VAR21);
}