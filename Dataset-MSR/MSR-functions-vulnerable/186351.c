VAR1::ExamineResult VAR1::FUN1(
    const VAR2* VAR3) const {
  if (VAR3 == FUN2(VAR4))
    return FUN3(VAR5);

  if (VAR3->FUN4().FUN5() == VAR6::VAR7)
    return FUN3(VAR8);

  if (VAR3->FUN6())
    return FUN3(VAR5);

  
  
  if (VAR3->FUN7())
    return FUN3(VAR5);

  if (!VAR3->FUN8() && !VAR3->FUN9())
    return FUN3(VAR8);

  if (!FUN10(VAR3, VAR4))
    return FUN3(VAR8);

  LayoutRect VAR9 = FUN11(VAR3, VAR4);
   LayoutRect VAR10 =
       FUN2(VAR4)->FUN12(FUN13());
 


















   bool VAR11 =
       VAR9.FUN14() > 0 && VAR9.FUN15() > 0;
   if (VAR11 && VAR10.FUN16(VAR9)) {
    return FUN3(
        VAR10.FUN17(VAR9) ? VAR12 : VAR13,
        FUN18(VAR4));
  } else {
    return FUN3(VAR8);
  }
}