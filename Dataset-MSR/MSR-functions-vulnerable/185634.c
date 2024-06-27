void VAR1::FUN1(const VAR2& VAR3,
                                        const VAR2& VAR4,
                                        TextGranularity VAR5) {
  SelectionInDOMTree VAR6 =
      VAR7::FUN2()
           .FUN3(VAR3.FUN4(),
                                       VAR4.FUN4())
           .FUN5(VAR3.FUN6())

          .FUN7(FUN8())
           .FUN9();
 
   if (VAR6.FUN10())
    return;

  const VAR8& VAR9 =
      FUN11(VAR6, VAR5);
  if (VAR9.FUN10())
    return;

  VAR7::Builder VAR10;
  if (VAR9.FUN12()) {
    VAR10.FUN13(VAR9.FUN14(),
                             VAR9.FUN15());
  } else {
    VAR10.FUN13(VAR9.FUN15(),
                              VAR9.FUN14());
   }
   VAR10.FUN5(VAR9.FUN6());

  VAR10.FUN7(FUN8());
   FUN16(VAR10.FUN9(), VAR11::FUN2()
                                     .FUN17(true)
                                     .FUN18(true)
                                     .FUN19(VAR5)


                                     .FUN9());
 }