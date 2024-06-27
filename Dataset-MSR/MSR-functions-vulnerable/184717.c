void VAR1::FUN1() {
  
  
  if (!FUN2()->FUN3())
    FUN2()->FUN4(&VAR2);

  
  
  if (!VAR3.FUN5())
     VAR3.FUN6(new FUN7());
   VAR3->FUN8(VAR4);
   VAR3->FUN9(VAR5);


 
   VAR6.FUN6(new FUN10(VAR7::VAR8));
   VAR9.FUN6(new VAR10::FUN11(*VAR6));
  VAR11.FUN6(new FUN12(*VAR9));
  VAR11->FUN13();

  
  
  VAR12::FUN14("");
  VAR13::FUN15(&VAR14);

  VAR15.FUN6(new VAR16);

  
  VAR17* VAR18 = VAR17::FUN16(
      0,
      VAR19,
      VAR10::FUN17(),
      FUN18(),
      new FUN19(0),
      VAR4,
      VAR5,
      VAR20,
      FUN20(),
      1,
      VAR13::FUN21());
  VAR18->FUN22();
  VAR21 = VAR18;

  
  VAR22.FUN6(new FUN23());
}