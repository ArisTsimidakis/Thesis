VAR1 FUN1(
    const VAR2<VAR3>& VAR4,
    TextAffinity VAR5,
    TextDirection VAR6) {
  int VAR7 = VAR4.FUN2();
  VAR8* const VAR9 = VAR4.FUN3();
  VAR10* VAR11 =
      VAR9->FUN4()
          ? FUN5(VAR9)->FUN6().FUN7()
          : VAR9->FUN7();

  FUN8(VAR11) << VAR4;

  if (VAR11->FUN9()) {
    return FUN10(VAR11, VAR7,
                                                VAR5, VAR6);
   }
 

  if (VAR11->FUN11()) {

    if (FUN12(VAR9) &&

        FUN13(VAR11)) {

      

      

      

      

      

      const VAR2<VAR3>& VAR12 =

          FUN14(VAR4);

      if (VAR12 != VAR4) {

        return FUN15(

            VAR12, VAR13::VAR14, VAR6);

      }

      const VAR2<VAR3>& VAR15 =

          FUN16(VAR4);

      if (VAR15 == VAR4 ||

          FUN14(VAR15) == VAR4)

        return FUN17();



      return FUN15(

          VAR15, VAR13::VAR14, VAR6);

    }



    

    

    

    




























   }
 

  if (!VAR11->FUN18())


     return FUN17();



  if (!VAR11->FUN19())






     return FUN17();

  VAR16* const VAR17 = FUN20(VAR11)->FUN21();

  if (!VAR17)






























     return FUN17();

  if ((VAR7 > VAR17->FUN22() &&

       VAR7 < VAR17->FUN23()))

    return FUN17(VAR17, VAR7);

  return FUN24(

      VAR17, VAR7, VAR11->FUN25()->FUN26(),

      VAR6);






 }