void VAR1::VAR2::FUN1(
    const VAR3::VAR4<VAR5::VAR6<VAR5::VAR7>>& VAR8) {
  if (!VAR9) {
    
    delete this;
    return;
  }

  VAR10::Value VAR11;
  if (!VAR8.FUN2()) {
    
    
    
    
    VAR5::VAR6<VAR5::VAR12> VAR13 =
        VAR9.FUN3()->VAR14->FUN4();
    VAR5::VAR12::VAR15 FUN5(VAR13);
    V8ValueConverterImpl VAR16;
    VAR16.FUN6(true);
    VAR16.FUN7(true);
    VAR17::VAR18<VAR10::VAR7> VAR19 =
        VAR16.FUN8(*VAR8.FUN9(), VAR13);
    if (VAR19)
      VAR11 = VAR10::VAR7::FUN10(VAR17::move(VAR19));
  }

  VAR17::move(VAR20).FUN11(VAR17::move(VAR11));

  delete this;
}