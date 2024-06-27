bool VAR1::FUN1(VAR2* VAR3) {
  if (VAR3->FUN2() && !FUN3())
    return false;
  VAR3->FUN4(VAR4 ? VAR4->FUN5()->FUN6()
                                   : VAR5::VAR6,
                       VAR4);

  VAR7::VAR8* VAR9 =
      new VAR7::FUN7();
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN10()));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN11()));
  VAR3->FUN8(VAR10::FUN9(VAR9));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN12()));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN13()));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN14(
      FUN15())));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN16()));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN17(FUN18())));
   VAR3->FUN8(VAR10::FUN9(new VAR7::FUN19()));
   VAR3->FUN8(VAR10::FUN9(new VAR7::FUN20()));
   VAR3->FUN8(VAR10::FUN9(new VAR7::FUN21()));

  VAR3->FUN8(

      VAR10::FUN9(new VAR7::FUN22(false )));








   VAR3->FUN8(VAR10::FUN9(new VAR7::FUN23(
       VAR7::VAR11::VAR12,
       VAR13 ? VAR13->FUN24() : 0,
      FUN15())));
  VAR3->FUN8(
      VAR10::FUN9(new VAR7::FUN25(VAR9)));
  VAR3->FUN8(VAR10::FUN9(new VAR7::FUN26()));

  if (FUN27())
    VAR3->FUN28(VAR14);

  if (FUN29().FUN30() == 1) {
    
    if (!VAR10::VAR15::FUN31(VAR16::VAR17) &&
        !VAR10::VAR15::FUN31(
            VAR16::VAR18)) {
      VAR19.FUN32(new FUN33());
    }
    FUN34();
#if FUN35(VAR20)
    FUN36()->FUN37();
#endif
  }
  return true;
}