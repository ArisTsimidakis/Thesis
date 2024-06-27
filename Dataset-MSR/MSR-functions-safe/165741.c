VAR1::VAR2 FUN1(
    const VAR3::VAR4& VAR5) {
  VAR1::QuicTransportVersionVector VAR6;
  VAR1::QuicTransportVersionVector VAR7 =
      VAR1::FUN2();

  for (const VAR8::VAR9& VAR10 : VAR8::FUN3(
           VAR5, "", VAR8::VAR11, VAR8::VAR12)) {
    auto VAR13 = VAR7.FUN4();
    while (VAR13 != VAR7.FUN5()) {
      if (VAR1::FUN6(*VAR13) == VAR10) {
        VAR6.FUN7(*VAR13);
        
        
        VAR7.FUN8(VAR13);
        break;
      }
      VAR13++;
    }
  }
  return VAR6;
}