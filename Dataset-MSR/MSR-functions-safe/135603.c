void FUN1(VAR1& VAR2) {
  VAR3& VAR4 = VAR2.FUN2();
  if (!VAR4.FUN3())
    return;

  VAR5* const VAR6 = VAR2.FUN4();

  
  
  VAR6->FUN5();

  const VAR7& VAR8 = FUN6(VAR2);
  if (VAR8.FUN7())
    return;

  
  const VAR9& VAR10 = FUN8(VAR8);
  if (VAR10.FUN9() != 2)
    return;
  const VAR9& VAR11 = VAR10.FUN10(1) + VAR10.FUN11(1);

  if (FUN12(
          FUN13(VAR6), VAR11,
          VAR12::VAR13::VAR14,
          new FUN14(1, VAR15::FUN15(VAR8))) !=
      VAR16::VAR17)
    return;

  
  if (VAR2.FUN4() != VAR6)
    return;

  
  
  VAR6->FUN5();

  
  
  const VAR7& VAR18 = FUN6(VAR2);
  if (VAR18.FUN7())
    return;

  const VAR9& VAR19 = FUN8(VAR18);
  if (VAR19.FUN9() != 2)
    return;
  const VAR9& VAR20 = VAR19.FUN10(1) + VAR19.FUN11(1);

  const VAR21& VAR22 =
      VAR21::FUN16().FUN17(VAR18).FUN18();

  
  if (FUN19(VAR22) !=
      VAR2.FUN20().FUN21())
    VAR2.FUN20().FUN22(VAR22);

  
  VAR4.FUN23(VAR20, false, false,
                                  VAR12::VAR13::VAR14);
}