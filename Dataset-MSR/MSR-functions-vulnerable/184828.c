void VAR1::FUN1(VAR2::VAR3* VAR4,
                                                 VAR5* VAR6,
                                                 int VAR7,
                                                 int VAR8) {
  VAR9::string VAR10;
  VAR9::string VAR11;
  VAR4->FUN2("",
                                   &VAR10);
  VAR4->FUN2("",
                                   &VAR11);

  if (!VAR11.FUN3() ||
      !VAR10.FUN3()) {
    FUN4(1) << ""
            << "" << VAR11 << ""
             << "" << VAR10 << "";
   }
 

  if (!VAR12::FUN5(VAR4->FUN6().FUN7()))


     return;
 
   
  VAR9::VAR13<VAR9::VAR14<VAR9::VAR15, VAR9::VAR15> > VAR16;
  VAR17::FUN8(VAR11, '', '',
                                     &VAR16);
  VAR9::string VAR18;
  VAR9::string VAR19;
  for (size_t VAR20 = 0; VAR20 < VAR16.FUN9(); ++VAR20) {
    const VAR9::VAR14<VAR9::VAR15, VAR9::VAR15>& VAR14 = VAR16[VAR20];
    const VAR9::VAR15& VAR21 = VAR14.VAR22;
    const VAR9::VAR15& VAR23 = VAR14.VAR24;
    if (VAR21 == "") {
      FUN10(VAR23, """, &VAR19);
    } else if (VAR21 == "") {
      VAR18 = VAR23;
    }
  }

  
  
  
  if (!VAR19.FUN3())
    VAR6->FUN11(VAR19);

  if (!VAR19.FUN3() || !VAR18.FUN3()) {
    FUN4(1) << ""
            << "" << VAR19
            << "" << VAR18;
  }

  
  AutoAccept VAR25 = VAR26;
  VAR27::Source VAR28 = VAR27::VAR29;
  GURL VAR30;
  VAR9::VAR13<VAR9::VAR15> VAR31;
  VAR17::FUN12(VAR10, '', &VAR31);
  for (size_t VAR20 = 0; VAR20 < VAR31.FUN9(); ++VAR20) {
    const VAR9::VAR15& VAR32 = VAR31[VAR20];
    if (VAR32 == "") {
      VAR25 = VAR33;
    } else if (VAR32 == "") {
      VAR25 = VAR34;
    } else if (VAR32 == "") {
      VAR25 = VAR35;
    }
  }

  
  
  VAR28 = FUN13(VAR4->FUN14(), &VAR30);
  if (VAR28 != VAR27::VAR29)
    VAR25 = VAR36;

  if (VAR25 != VAR26) {
    FUN4(1) << ""
            << "" << VAR25;
  }

  
  
  
  
  
  
  
  if (VAR18.FUN3() && VAR19.FUN3() &&
      VAR25 == VAR26 && !VAR30.FUN15()) {
    return;
  }

  VAR37::VAR38::FUN16(
      VAR37::VAR38::VAR39, VAR40,
      VAR17::FUN17(&VAR1::VAR41, VAR18,
                 VAR19, VAR25, VAR28, VAR30, VAR7, VAR8));
}