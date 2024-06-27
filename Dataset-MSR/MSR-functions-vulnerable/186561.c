VAR1::VAR2<VAR3> FUN1(
     const VAR4::VAR5& VAR6,
    const VAR7& VAR8) {
  
  
  VAR4::ScopedAllowBlockingForTesting VAR9;

  
  
  GURL VAR10 = VAR8.FUN2();
  VAR1::VAR11 FUN3(VAR10.FUN4());

  VAR1::VAR11 FUN5("");
  if (VAR4::FUN6(VAR12, VAR13,
                       VAR4::VAR14::VAR15)) {
    if (VAR8.VAR16 != VAR17)
      return nullptr;
    VAR12 = VAR12.FUN7(VAR13.FUN8() - 1);
  }

  RequestQuery VAR18 = FUN9(VAR10);

  VAR1::VAR2<VAR19> FUN10(new VAR19);
  VAR20->FUN11(VAR21);

  if (VAR18.FUN12("") != VAR18.FUN13()) {
    if (VAR8.VAR22.FUN12(VAR18[""].FUN14()) ==
        VAR1::VAR11::VAR23) {
      return VAR1::move(VAR20);
    }
  }

  if (VAR18.FUN12("") != VAR18.FUN13()) {
    for (const auto& VAR24 : VAR18[""]) {
      if (VAR24.FUN12("") == VAR1::VAR11::VAR23)
        return VAR1::move(VAR20);
      VAR1::string VAR25 = VAR24.FUN7(0, VAR24.FUN12(""));
      VAR1::string VAR26 = VAR24.FUN7(VAR24.FUN12("") + 1);
      if (VAR8.VAR27.FUN12(VAR25) == VAR8.VAR27.FUN13() ||
          VAR8.VAR27.FUN15(VAR25) != VAR26) {
        return VAR1::move(VAR20);
      }
    }
  }

  
  FUN16(VAR4::FUN6(VAR12, "", VAR4::VAR14::VAR15));
  VAR1::string VAR28 = VAR12.FUN7(1);
  VAR4::VAR5 FUN17(VAR6.FUN18(VAR28));
  VAR1::string VAR29;
  if (!VAR4::FUN19(VAR30, &VAR29)) {
    VAR30 = VAR30.FUN18("");
    if (!VAR4::FUN19(VAR30, &VAR29))
      return nullptr;
  }

   if (VAR8.VAR16 == VAR31)
     VAR29 = "";
 

  if (VAR18.FUN12("") != VAR18.FUN13()) {

    for (const auto& VAR32 : VAR18[""]) {

      if (VAR32.FUN12("") == VAR1::VAR11::VAR23)

        return VAR1::move(VAR20);

      VAR1::string VAR33;

      VAR1::string VAR34;

      VAR4::FUN20(VAR32.FUN7(0, VAR32.FUN12("")), &VAR33);

      VAR4::FUN20(VAR32.FUN7(VAR32.FUN12("") + 1), &VAR34);

      VAR4::FUN21(&VAR29, 0, VAR33, VAR34);

    }

  }




 
   VAR4::VAR5::StringPieceType VAR35;
 #if FUN22(VAR36)
  VAR4::string16 VAR37 = VAR4::FUN23(VAR38);
  VAR35 = VAR37;
#else
  VAR35 = VAR38;
#endif

  VAR4::VAR5 FUN24(VAR30.FUN25(VAR35));

   if (VAR4::FUN26(VAR39)) {
     VAR1::string VAR40;
 

    if (!VAR4::FUN19(VAR39, &VAR40))




       return nullptr;


 
     return VAR1::VAR41<VAR42>(VAR40, VAR29);
   }

  VAR1::VAR2<VAR19> FUN27(new VAR19);
  VAR43->FUN11(VAR44);

  if (VAR8.VAR27.FUN12("") != VAR8.VAR27.FUN13()) {
    VAR1::VAR45<VAR46> VAR47;

    if (VAR48::FUN28(VAR8.VAR27.FUN15(""), &VAR47) &&
        VAR47.FUN8() == 1) {
      VAR47[0].FUN29(VAR29.FUN8());
      size_t VAR49 = VAR47[0].FUN30();
      size_t VAR50 = VAR47[0].FUN31();

      VAR43->FUN11(VAR51);
      VAR43->FUN32(
          "",
          VAR4::FUN33("" VAR52 "" VAR52 "" VAR52, VAR49, VAR50,
                             VAR29.FUN8()));

      VAR29 = VAR29.FUN7(VAR49, VAR50 - VAR49 + 1);
    }
  }

  VAR43->FUN34(FUN35(VAR30));
  VAR43->FUN32("", "");
  VAR43->FUN32("", "" + VAR30.FUN36() + "");
  VAR43->FUN37(VAR29);
  return VAR1::move(VAR43);
}