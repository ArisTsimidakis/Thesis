void VAR1::FUN1(VAR2* VAR3) {
  VAR3->FUN2(VAR4);
  VAR4 = false;

  if (VAR5.FUN3()) {
    VAR6* VAR7 = VAR3->FUN4(VAR5->FUN5());
    VAR3->FUN6(static_cast<VAR8*>(VAR7));
  } else {
    VAR3->FUN6(nullptr);
  }

  VAR3->FUN7(VAR9);
  VAR3->FUN8(VAR10);
  VAR3->FUN9(VAR11);
  VAR3->FUN10(
      VAR12::VAR13,
      FUN11(VAR12::VAR13));
  VAR3->FUN10(
      VAR12::VAR14,
      FUN11(VAR12::VAR14));
  VAR3->FUN10(
      VAR12::VAR15,
      FUN11(VAR12::VAR15));

  if (VAR16 && VAR17) {
    VAR3->FUN12(
        VAR18 ? VAR18->FUN5()
                                     : VAR19::VAR20,
        VAR16->FUN5(), VAR17->FUN5(),
        VAR21 ? VAR21->FUN5()
                                     : VAR19::VAR20);
    FUN13(VAR17->FUN14());
  } else {
    VAR3->FUN15();
  }

  VAR3->FUN16(VAR22);

  bool VAR23 =
      VAR3->FUN17() && VAR3->FUN18()->VAR24;
  
  
  
  if (VAR25 && VAR23) {
    if (VAR26.VAR27 ==
        VAR3->FUN18()->VAR27)
      VAR3->FUN18()->FUN19(&VAR26);
    else
      VAR3->FUN20();
  }
  
  VAR3->FUN21(&VAR26);

  VAR3->FUN22(
      VAR28, VAR29, VAR30);

  VAR3->FUN23(
      VAR31);
  VAR3->FUN24(VAR32);
  VAR3->FUN25(VAR33);
  VAR3->FUN26(VAR34);
  VAR3->FUN27()->FUN28(VAR35);
  if (VAR3->FUN17())
    VAR3->FUN27()->FUN29();

  VAR3->FUN30(VAR36);
 
   VAR3->FUN31(VAR37);
 




   if (VAR38) {
     VAR3->FUN32(
         VAR39::move(VAR38));
  }

  FUN13(!VAR3->FUN33());

  VAR3->FUN34(false);
}