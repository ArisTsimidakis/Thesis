int VAR1::FUN1(const VAR2::VAR3& VAR4,
                                  const VAR5& VAR6,
                                  VAR7* VAR8,
                                  const VAR9& VAR10) {
  FUN2(VAR11, VAR12);
  FUN3(VAR13.FUN4());
  FUN3(!VAR10.FUN4());
  FUN3(VAR8);

  VAR14.FUN5(
      VAR15::VAR16,
      VAR17::FUN6(&VAR5::VAR18,
                 VAR17::FUN7(&VAR6),
                 &VAR4));

  FUN8(1) << VAR19 << ""
           << """"\""
           << """"\"";
  VAR20 = VAR8;

  
  IPEndPoint VAR21;
  int VAR22 = VAR23->socket()->FUN9(&VAR21);
  if (VAR22 != VAR24)
    return VAR22;
  VAR20->VAR25 = VAR26::FUN10(VAR21);

  VAR2::string VAR27 = VAR4 + VAR6.FUN11();

  if (VAR28->VAR29 != NULL) {
    VAR30 = new FUN12(VAR31);
    if (VAR28->VAR29->FUN13()) {
      
      
      VAR32 =
          new FUN12(VAR31 - VAR33);
    } else {
      
      VAR32 = VAR30;
    }
  }

  VAR12 = VAR34;

  
  
  bool VAR35 = false;
  if (FUN14(VAR27, VAR28->VAR29)) {
    size_t VAR36 = VAR27.FUN15() + VAR28->VAR29->FUN15();
    VAR37<VAR38> FUN16(
        new FUN17(VAR36));
    
    
    VAR39 = new FUN18(
        VAR40, VAR36);

    memcpy(VAR39->FUN19(), VAR27.FUN19(), VAR27.FUN15());
    VAR39->FUN20(VAR27.FUN15());

    size_t VAR41 = VAR28->VAR29->FUN15();
    while (VAR41) {
      int VAR42 = VAR28->VAR29->FUN21(VAR39, VAR41,
                                                        FUN22());
      FUN23(VAR42, 0);  
      VAR39->FUN20(VAR42);
      VAR41 -= VAR42;
    }
    FUN3(VAR28->VAR29->FUN24());
    
    VAR39->FUN25(0);
    VAR35 = true;

    VAR14.FUN5(
        VAR15::VAR43,
        VAR17::FUN6(&VAR44,
                   VAR28->VAR29->FUN15(),
                   false, 
                   true ));
  }

  if (!VAR35) {
    
    
    VAR37<VAR45> FUN26(new FUN27(VAR27));
    VAR39 = new FUN18(VAR46,
                                             VAR46->FUN15());
  }

  VAR22 = FUN28(VAR24);
  if (VAR22 == VAR47)
    VAR13 = VAR10;

  return VAR22 > 0 ? VAR24 : VAR22;
}