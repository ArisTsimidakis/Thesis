void VAR1::FUN1(
    VAR2* VAR3,
    const VAR4& VAR5,
    bool VAR6,
    bool VAR7,
    VAR8* VAR9) {
  VAR10::VAR11<VAR12> VAR13;
  bool VAR14 = false;

  
  
  
  if (VAR6 && FUN2()) {
    VAR15* VAR16 = new FUN3(
        VAR5.VAR17, VAR5.VAR18,
        VAR5.VAR19, VAR3->FUN4(), nullptr,
        VAR5.VAR20, VAR5.VAR21, VAR5.VAR22, VAR5.VAR23);
    VAR13 = FUN2()->FUN5(
        VAR16, true, VAR3->FUN6(),
        VAR24->FUN7()->FUN8());

    
    
     FUN9(VAR16->FUN10());
 
     VAR14 = VAR13->FUN11();






   }
 
   
  
  
  
  
  
  
  
  
  if (!VAR13 &&
      FUN12(VAR9) && VAR25 == -1 &&
      (!VAR26->FUN13() ||
       VAR26->FUN13() == VAR3->FUN4())) {
    VAR13 = VAR26->FUN14();

    VAR14 = VAR13->FUN11();
    VAR13->FUN15() = VAR9->FUN16();
  }

  
  if (!VAR13) {
    VAR13 = VAR27::FUN17(new VAR12);

    
    
    
    GURL VAR20 = VAR5.VAR20;
    bool VAR28 = false;
    VAR29::FUN18()->FUN19(
        &VAR20, VAR30, &VAR28);
    VAR13->FUN20(VAR28);

    
    
    
    
    VAR14 = VAR28;
    VAR13->FUN15() = VAR9->FUN16();
  }

  
  
  
  VAR13->FUN21(VAR5.VAR31 ? VAR32
                                                     : VAR33);
  VAR13->FUN22(VAR5.VAR20);
  if (VAR14)
    FUN23(VAR13.FUN24(), VAR5.VAR20);
  VAR13->FUN25(VAR5.VAR21);
  VAR13->FUN26(VAR5.VAR34);
  VAR13->FUN27(
      static_cast<VAR35*>(VAR3->FUN4()));
  VAR13->FUN28(VAR5.VAR36);
  VAR13->FUN29(VAR5.VAR37);

  
  VAR15* VAR16 =
      VAR13->FUN30(VAR3->FUN6());
  VAR16->FUN31(VAR5.VAR17);
  VAR16->FUN32(VAR5.VAR18);
  VAR16->FUN33(VAR5.VAR19);
  VAR16->FUN34(VAR5.VAR22);
  VAR16->FUN35(VAR5.VAR23);

  
  
  
  if (VAR6 && FUN2()) {
    VAR13->FUN36(FUN2()->FUN37());
    VAR13->FUN38() = FUN2()->FUN38();
  }

  FUN39(!VAR5.VAR38 || !VAR7);
  
  
  
  if (VAR5.VAR38) {
    FUN40();
    VAR39.FUN41();
    VAR40 = -1;
  }

  FUN42(VAR10::move(VAR13), VAR7);
}