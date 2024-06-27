void VAR1::FUN1(const VAR2& VAR3) {
  for (const VAR4::VAR5& VAR6 : VAR3.VAR7)
    FUN2(FUN3(VAR6), VAR8::VAR9);

  for (const auto& VAR10 : VAR3.VAR11)
    FUN2(VAR10.VAR12, VAR8::VAR13);

  for (const auto& VAR14 : VAR3.VAR15)
    FUN2(VAR14.VAR12, VAR8::VAR16);

  
  if (VAR17 == VAR18) {
    for (const auto& VAR19 : VAR20->FUN4()->FUN5()) {
      const VAR8& VAR21 = VAR19.VAR22;
      if (VAR21.FUN6())
        FUN2(VAR19.VAR23, VAR8::VAR24);
    }
  }
}