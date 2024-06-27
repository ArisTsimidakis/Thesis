VAR1 FUN1(

    const VAR1& VAR2,

    const VAR3::VAR4& VAR5,

    const VAR3::VAR4& VAR6,

    const VAR3::VAR4& VAR7,

    bool VAR8) {

  VAR3::VAR9<VAR3::VAR4> VAR10;

  if (VAR8) {

    for (VAR11::VAR12 FUN2(VAR2); !VAR13.FUN3(); VAR13.FUN4()) {

      VAR3::string VAR14 = FUN5(VAR13.FUN6(),

          VAR13.FUN7());

      if (!VAR14.FUN8()) {

        VAR10.FUN9(

            VAR15::FUN10("", VAR13.FUN6().FUN11(), VAR14.FUN11()));

      }

    }

  }

  VAR3::string VAR16 =

      VAR10.FUN8() ? "" : "" + VAR15::FUN12(VAR10, "");

  VAR3::string VAR17 = VAR15::FUN10("",

      VAR5.FUN11(), VAR6.FUN11(), VAR7.FUN11(), VAR16.FUN11());

  GURL VAR18 = FUN13(VAR17);

  if (!VAR18.FUN14())

    return FUN13();

  return VAR18;

}