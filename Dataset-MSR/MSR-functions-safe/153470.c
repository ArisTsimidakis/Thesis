void VAR1::FUN1(const VAR2::VAR3& VAR4) {
  if (VAR5.FUN2() != VAR4.FUN2()) {
    if (VAR5.FUN2() >= 0)
      FUN3(VAR5.FUN2())->FUN4();
    if (VAR4.FUN2() >= 0)
      FUN3(VAR4.FUN2())->FUN4();
  }

  if (VAR6) {
    VAR6->FUN5(VAR4.FUN2());
    
    
    
    if (!VAR7::VAR8::FUN6(VAR9))
      FUN7();
    FUN8();
  } else {
    if (FUN9() == FUN10()) {
      
      
      FUN8();
    } else if (FUN11()) {
      
      
      
      
      
      
      FUN12();
      FUN7();
    } else {
      
      
      
      FUN13();
    }
  }

  
  
  VAR2::VAR3::SelectedIndices VAR10 =
      VAR11::VAR12<VAR2::VAR3::VAR13>(
          VAR5.FUN14(), VAR4.FUN14());
  VAR2::VAR3::SelectedIndices VAR14 =
      VAR11::VAR12<VAR2::VAR3::VAR13>(
          VAR4.FUN14(), VAR5.FUN14());

  FUN3(VAR4.FUN2())
      ->FUN15(VAR15::VAR16::VAR17::VAR18, true);
  VAR5 = VAR4;

  FUN16(nullptr, false);

  
  for (auto VAR19 :
       VAR11::VAR20<VAR2::VAR3::VAR13>(
           VAR10, VAR14)) {
    FUN3(VAR19)->FUN17();
  }
}