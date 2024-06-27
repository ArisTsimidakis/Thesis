VAR1* VAR2::FUN1(
    int64_t VAR3,
     const VAR4::VAR5<VAR6>& VAR7,
     VAR8::WebIDBTransactionMode VAR9,
     VAR10::VAR11* VAR12) {

  FUN2(FUN3(VAR3), nullptr) << "" << VAR3;


   VAR4::VAR13<VAR1> VAR14 =
       VAR15::FUN4()->FUN5(
           VAR3, this, VAR7, VAR9, VAR12);
  VAR1* VAR16 = VAR14.FUN6();
  VAR17[VAR3] = VAR4::move(VAR14);
  return VAR16;
}