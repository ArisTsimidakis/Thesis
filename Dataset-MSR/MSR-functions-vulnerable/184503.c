bool VAR1::FUN1(
    VAR2::VAR3* VAR4, const VAR2::VAR5& VAR6,
    const VAR7& VAR8) {
  FUN2(VAR9);
  const VAR7* VAR10 = &VAR8;
  DictionaryValue VAR11;
  if (VAR10->FUN3()) {
    if (!VAR12)
      VAR13.FUN4(VAR14);
    return false;
  }

  bool VAR15 = true;
  if (VAR12) {
    if (!VAR10->FUN5(VAR16::VAR17,
                                  &VAR15)) {
      FUN6();
    }
  } else {
    VAR15 = !FUN7(VAR4, VAR6);
  }

  if (VAR12 || !VAR15) {
     VAR11.FUN8(VAR10);
     VAR11.FUN9(VAR16::VAR18,
                                      false);



    

    

    

    

    

    

#if FUN10(VAR19) && !FUN10(VAR20)

    bool VAR21 = !VAR15 && !VAR12;

#VAR22 FUN10(VAR23) || FUN10(VAR19)

    bool VAR21 = !VAR15 && VAR12;

#else

    bool VAR21 = false;

#endif



    VAR16::MarginType VAR24 = VAR16::VAR25;

    if (VAR21)

      VAR24 = FUN11(VAR4, VAR6);
     VAR11.FUN12(VAR16::VAR26,

                                     VAR24);


     VAR10 = &VAR11;
   }
 
  
  
  int VAR27 = VAR28.FUN13() ?
      VAR28->VAR29.VAR30 : 0;
  PrintMsg_PrintPages_Params VAR31;
  FUN14(new FUN15(FUN16(),
      VAR27, *VAR10, &VAR31));
  VAR28.FUN17(new FUN18(VAR31));

  if (!FUN19(VAR31.VAR29)) {
    if (!VAR12) {
      VAR13.FUN4(VAR32);
    } else {
      
      VAR2::VAR3* VAR33 = NULL;
      
      
      FUN20(&VAR33);
      if (VAR33) {
        FUN21()->FUN22(
            VAR33,
            VAR34::FUN23(
                VAR35));
      }
    }
    return false;
  }

  if (VAR31.VAR29.VAR36 < VAR37 || !VAR31.VAR29.VAR30) {
    VAR13.FUN4(VAR38);
    return false;
  }

  if (!VAR12) {
    
    if (!VAR10->FUN24(VAR16::VAR39,
                                 &(VAR31.VAR29.VAR40)) ||
        !VAR10->FUN25(VAR16::VAR41,
                                  &(VAR31.VAR29.VAR42)) ||
        !VAR10->FUN5(VAR16::VAR43,
                                  &(VAR31.VAR29.VAR44))) {
      FUN6();
      VAR13.FUN4(VAR14);
      return false;
     }
 
     VAR31.VAR29.VAR45 = FUN26(*VAR10);




     FUN27(*VAR10);
 

    

    VAR31.VAR29.VAR46 = VAR15 &&

                                        !FUN26(*VAR10);


     
     if (VAR31.VAR29.VAR47) {
       VAR48.FUN17(new FUN28());
      VAR48->FUN29(VAR16::VAR49,
                                     VAR31.VAR29.VAR50);
      VAR48->FUN29(VAR16::VAR51,
                                     VAR31.VAR29.VAR52);
      VAR48->FUN29(VAR16::VAR53,
                                     VAR31.VAR29.VAR54);
    }
  }

  VAR28.FUN17(new FUN18(VAR31));
  FUN14(new FUN30(FUN16(),
                                             VAR31.VAR29.VAR30));
  return true;
}