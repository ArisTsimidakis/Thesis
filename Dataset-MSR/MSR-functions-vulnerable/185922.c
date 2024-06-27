void VAR1::FUN1(const VAR2& VAR3,
                                bool VAR4) {
  FUN2("", "");
  VAR5.FUN3();
  if (!VAR3.FUN4() || FUN5()->FUN6() ||
      VAR3.FUN7() == VAR6::VAR7::VAR8)
    return;

  FUN8(true, false);
  FUN9(false);
  FUN10(false);
  VAR9 = false;
  VAR10 = VAR3.FUN11();
  VAR11 = VAR3.FUN12().FUN13();
  VAR12 = VAR3.FUN14();
   VAR13 = VAR3.FUN15();
   VAR14 = FUN16();
 

  VAR15::string VAR16 = FUN17();

  VAR17 FUN18(VAR16);


   if (!VAR18.FUN19())
     return;
 
  
  
  const VAR19* VAR20 =
      FUN5()->FUN20();
  const VAR21* VAR22 =
      VAR20->FUN21();
  const bool VAR23 =
      FUN22(VAR3.FUN12(), VAR18, VAR22,
                 VAR13,
                 VAR20->FUN23(), FUN5());
  VAR17 FUN24(VAR24);
  ZeroSuggestEligibility VAR25 = VAR26::VAR27;
  if (!VAR23) {
    const bool VAR28 =
        FUN22(VAR29, VAR18, VAR22,
                   VAR13,
                   VAR20->FUN23(), FUN5());
    VAR25 = VAR28
                      ? VAR26::VAR30
                      : VAR26::VAR31;
  }
  FUN25(
      "", static_cast<int>(VAR25),
      static_cast<int>(VAR26::VAR32));
  if (VAR23 &&
       !VAR33::FUN26() &&
       !VAR33::FUN27()) {
     

    if (VAR33::FUN28()) {

      VAR16 +=






           "" + VAR34::FUN29(VAR11) +

          VAR33::FUN30();

      VAR18 = FUN31(VAR16);


     } else {
       VAR35::string16 VAR36;
       VAR37::VAR38 FUN32(VAR36);
      VAR39.VAR40 = VAR11;
      VAR18 =
          FUN31(VAR22->FUN33().FUN34(
              VAR39, VAR20->FUN23()));
    }
  } else if (!FUN35(VAR3.FUN12())) {
    return;
  }

  VAR41 = false;
  
  
  
  FUN36();
  FUN37(VAR18);
}