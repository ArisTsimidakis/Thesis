void VAR1::FUN1(VAR2* VAR3,
                             VAR4* VAR5) {
  VAR6* VAR7 = FUN2().FUN3();
  VAR8* VAR9 = FUN2().FUN4();
  if (!VAR7 || !VAR9 || !VAR9->FUN5())
    return;

  
  
  
  
  if (!FUN6()) {
    FUN2().FUN7(VAR10::FUN8(
        VAR11, VAR12,
        ""));
    return;
  }

  if (VAR13)
    return;

  
  EventQueueScope VAR14;
  VAR15<bool> FUN9(&VAR13, true);

  if (VAR3 && !VAR5) {
    
    
    
    
    for (const auto& VAR16 : FUN10()) {
      if (!VAR16->FUN11())
        continue;
      VAR4* VAR17 =
          FUN12(VAR16);
      FUN13(!VAR17->FUN14());
      if (VAR17->FUN15()) {
        VAR5 = VAR17;
        break;
      }
    }
  }

  VAR18* VAR19 =
      VAR18::FUN8(this, VAR20, VAR3, VAR5);
  if (VAR19->FUN16() == VAR18::VAR21) {
    FUN17(VAR19);
  } else if (VAR22) {
    
    
    VAR23 = VAR19;
  } else {
    
    
    FUN18(VAR19);
  }
}