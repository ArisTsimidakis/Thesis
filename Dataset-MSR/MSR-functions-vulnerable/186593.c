void VAR1::FUN1(const VAR2& VAR3) {
  FUN2(!FUN3());

  if (!VAR3.FUN4()) {
    
    
    VAR4 = FUN5(VAR5);
    FUN6(VAR6::FUN7());
    FUN8();
    FUN9({});
    return;
  }

  SandboxFlags VAR7 = VAR3.FUN10();
  if (VAR8->FUN11()) {
    
    
    
    
    
    VAR7 |=
        VAR9 &
        ~(VAR10 | VAR11);
  }
  
  
  FUN12(VAR7);
  FUN13(VAR3.FUN14());
  if (VAR3.FUN15()) {
    for (auto VAR12 : *VAR3.FUN15())
       FUN16(VAR12);
   }
 

  VAR13* VAR14 = nullptr;


 
   if (FUN17(VAR15)) {
     VAR4 = VAR16;
    VAR17<VAR6> VAR18 =
        VAR6::FUN7();
    
    
    
    
    
    
    VAR1* VAR19 = VAR3.FUN18();
    if (VAR19) {
      if (VAR19->FUN3()->FUN19())
        VAR18->FUN20(true);
      if (VAR19->FUN3()->FUN21())
        VAR18->FUN22();
      VAR14 = VAR19->FUN23();
    }
    FUN6(VAR20::move(VAR18));
  } else if (VAR1* VAR19 = VAR3.FUN18()) {
    VAR4 = VAR19->FUN24();
    
    
    FUN6(VAR19->FUN25());
    VAR14 = VAR19->FUN23();
  } else {
    VAR4 = VAR16;
    FUN6(VAR6::FUN26(VAR16));
  }

  
  
  
  if (VAR3.FUN27()) {
    FUN28(FUN3()->FUN29()
                        ? VAR21::VAR22::VAR23
                        : VAR21::VAR22::VAR24);
  } else if (FUN3()->FUN30()) {
    
    
    
    
    FUN28(VAR21::VAR22::VAR23);
  } else {
    FUN28(VAR21::VAR22::VAR25);
  }

  if (FUN31()) {
    
    
    
    
    
     FUN32(
         FUN31()->FUN33()->FUN23());
   } else {

    FUN8(nullptr, VAR14);




   }
 
   if (VAR26* VAR27 = VAR3.FUN34()) {
    if (!VAR27->FUN35()) {
      
      
      
      FUN25()->FUN36();
    } else if (FUN3()->FUN30()) {
      if (VAR27->FUN37()) {
        
        
        FUN25()->FUN36();
      } else if (!VAR27->FUN38()) {
        
        
        FUN25()->FUN39();
      }
    }
  }

  if (FUN3()->FUN40() &&
      VAR6::FUN26(VAR16)->FUN19())
    FUN25()->FUN20(true);

  FUN9({});

  FUN41();
}