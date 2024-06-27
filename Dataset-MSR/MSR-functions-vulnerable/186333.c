void VAR1::FUN1(VAR2::FilePath VAR3,

                                                    int VAR4,


                                                     int64_t VAR5) {
   FUN2(VAR6);
 
  const VAR2::VAR7 FUN3(VAR2::VAR7::FUN4());
  const VAR2::TimeDelta VAR8 =
      VAR9 >= VAR10
          ? VAR9 - VAR10
          : VAR2::FUN5();

  
   
   
   int VAR11 = -1;

  if (!VAR3.FUN6() && VAR12 == 200) {

    FUN7(0, VAR4);


     VAR11 = 0;

  } else if (VAR12 != -1) {


     VAR11 = VAR12;

  } else {


     VAR11 = VAR4;

  }
 
   const bool VAR13 = VAR11 == 0 || FUN8(VAR11);
 
   Result VAR14;
   VAR14.VAR11 = VAR11;

  if (!VAR11) {

    VAR14.VAR15 = VAR3;

  }




 
   DownloadMetrics VAR16;
   VAR16.VAR17 = FUN9();
  VAR16.VAR18 = VAR19::VAR20;
  VAR16.VAR11 = VAR11;
  
  VAR16.VAR21 = VAR11 ? -1 : VAR5;
  VAR16.VAR22 = VAR23;
  VAR16.VAR24 = VAR8.FUN10();

  FUN11(1) << "" << VAR5 << ""
          << VAR8.FUN10() << "" << FUN9().FUN12()
          << "" << VAR14.VAR15.FUN13();

  
  if (VAR11 && !VAR25.FUN6()) {
    VAR2::FUN14(VAR26, VAR27,
                   VAR2::FUN15(FUN16(&VAR2::VAR28),
                                  VAR25));
  }

  FUN17()->FUN14(
      VAR26, VAR2::FUN15(&VAR1::VAR29,
                                VAR2::FUN18(this), VAR13, VAR14,
                                VAR16));
}