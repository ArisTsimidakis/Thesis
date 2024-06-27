void VAR1::FUN1(VAR2* VAR3) {
   VAR4::FUN1(VAR3);
   VAR5* VAR6 = static_cast<VAR5*>(VAR3);
   

  FUN2(VAR6->VAR7, VAR7);


 
   int VAR8 = FUN3()->FUN4();
   VAR9::Size VAR10 = VAR6->FUN5();
  VAR9::Size VAR11 = VAR12->FUN6();

  
  
  FUN7(VAR13 == VAR8,
                 VAR10 == VAR11)
      << "" << VAR10.FUN8() << ""
      << VAR11.FUN8();

  if (VAR13 != VAR8 &&
      VAR11 != VAR10) {
    
    
    
    VAR12->FUN9();
  }

  VAR6->FUN10(VAR14);

  VAR15<VAR16> VAR17 =
      VAR12->FUN11();
  VAR17->FUN12(FUN13());
  VAR17->FUN14(!FUN15() &&
                                  !VAR18->FUN16());
  VAR6->FUN17(VAR17, &VAR19,
                                 nullptr);
  FUN18(VAR19.FUN19());
}