bool FUN1(VAR1* VAR2, VAR3::VAR4* VAR5,

                VAR3::VAR4* VAR6) {

  STGMEDIUM VAR7;

  if (FUN2(VAR2, VAR8::FUN3(), &VAR7)) {

    bool VAR9 = false;

    {

      

      VAR3::VAR10::VAR11<wchar_t> FUN4(VAR7.VAR12);

      if (VAR13.FUN5() && VAR13.FUN5()[0] &&

          (FUN6(VAR13.FUN5()) || FUN7(VAR13.FUN5()))) {

        wchar_t VAR14[VAR15];

        DWORD VAR16 = FUN8(VAR14);

        if (FUN9(::FUN10(VAR13.FUN5(), VAR14, &VAR16,

                                           0))) {

          VAR5->FUN11(VAR14);

          VAR6->FUN11(VAR14);

          VAR9 = true;

        }

      }

    }

    FUN12(&VAR7);

    if (VAR9)

      return true;

  }



  if (FUN2(VAR2, VAR8::FUN13(), &VAR7)) {

    bool VAR9 = false;

    {

      

      VAR3::VAR10::VAR11<char> FUN4(VAR7.VAR12);

      if (VAR13.FUN5() && VAR13.FUN5()[0] && (FUN14(VAR13.FUN5()) ||

                                          FUN15(VAR13.FUN5()))) {

        char VAR14[VAR15];

        DWORD VAR16 = FUN8(VAR14);

        if (FUN9(::FUN16(VAR13.FUN5(), VAR14, &VAR16,

                                           0))) {

          VAR5->FUN11(VAR3::FUN17(VAR14));

          VAR6->FUN11(*VAR5);

          VAR9 = true;

        }

      }

    }

    FUN12(&VAR7);

    if (VAR9)

      return true;

  }

  return false;

}