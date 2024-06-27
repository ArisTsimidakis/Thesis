bool VAR1::FUN1(


     VAR2* VAR3,
     VAR4::VAR5* VAR6) const {
   VAR7::VAR8< ::VAR9> VAR10 = VAR11::FUN2(&VAR12);
  VAR7::VAR8< ::VAR9> VAR13;
  VAR11::FUN3(VAR10, FUN4(), &VAR13);

  VAR11::VAR14 FUN5(VAR15.FUN6(VAR13));
  if (VAR16.FUN7()) {
    
    
    

    if (VAR16.FUN8() == VAR12.FUN9(VAR17)) {
      
      VAR4::string16 VAR18;
      VAR16.FUN10(&VAR18);

      VAR7::VAR8<VAR4::VAR5> VAR19;
      size_t VAR20 = FUN11(VAR18, VAR4::FUN12(""), &VAR19);
      if (VAR20 > 0) {
        if (VAR20 > 1)
          *VAR6 = VAR19[1];
        else
          *VAR6 = VAR4::FUN13();

        *VAR3 = FUN14(VAR19[0]);
        return true;
      }
    } else if (VAR16.FUN8() == VAR12.FUN9(
                   VAR21::VAR22)) {
      VAR7::VAR8<VAR7::VAR23> VAR19 = VAR11::FUN15(VAR16);
       for (VAR7::VAR8<VAR7::VAR23>::const_iterator VAR24 = VAR19.FUN16();
            VAR24 != VAR19.FUN17(); ++VAR24) {
         VAR2 FUN18(*VAR24);

        if (!VAR25.FUN19()) {




           *VAR3 = VAR25;
           *VAR6 = VAR4::FUN13();
           return true;
        }
      }
    }
  }

  return false;
}