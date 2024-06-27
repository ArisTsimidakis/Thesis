VAR1 FUN1(const VAR1& VAR2,
                         const VAR3::VAR4& VAR5,
                         const VAR3::VAR4& VAR6,
                         const VAR3::VAR4& VAR7,
                         bool VAR8) {
  VAR3::VAR9<VAR3::VAR4> VAR10;
  VAR3::string VAR11;
  if (VAR8) {
    for (VAR12::VAR13 FUN2(VAR2); !VAR14.FUN3(); VAR14.FUN4()) {
      VAR3::string VAR15 = FUN5(VAR14.FUN6(),
          VAR14.FUN7());
      if (!VAR15.FUN8()) {
        VAR10.FUN9(
             VAR16::FUN10("", VAR14.FUN6().FUN11(), VAR15.FUN11()));
       }
     }

    if (VAR2.FUN12())


       VAR11 = '' + VAR2.FUN13();
   }
   VAR3::string VAR17 =
      VAR10.FUN8() ? "" : "" + VAR16::FUN14(VAR10, "");
  VAR3::string VAR18 =
      VAR16::FUN10("", VAR5.FUN11(), VAR6.FUN11(),
                         VAR7.FUN11(), VAR17.FUN11(), VAR11.FUN11());
  GURL VAR19 = FUN15(VAR18);
  if (!VAR19.FUN16())
    return FUN15();
  return VAR19;
}