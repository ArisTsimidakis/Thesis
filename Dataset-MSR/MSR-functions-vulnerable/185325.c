void VAR1::FUN1(
     const VAR2::VAR3& VAR4,

    VAR2::Rect VAR5,

    VAR2::Rect VAR6,

    VAR2::Rect VAR7,

    VAR2::Transform VAR8,








     bool VAR9) {
   FUN2(!VAR10.FUN3());
 
  VAR2::Transform VAR11 = VAR4;
  VAR11.FUN4().FUN5(-VAR5.FUN6(), -VAR5.FUN7(), 0);
  FUN8(VAR11, VAR5, VAR6,
                             VAR7,
                             VAR8, !VAR9);
  if (!VAR9 || VAR12) {
    VAR12 = false;
    FUN9(VAR2::FUN10(VAR5.FUN11()));
  }

  VAR13->FUN12();

  
  
  
  if (VAR9) {
    VAR14 = VAR11;
    VAR15 = VAR5;
    VAR16 = VAR6;
    VAR17 =
        VAR7;
    VAR18 = VAR8;
  } else {
    bool VAR19 = false;
    FUN8(VAR14,
                               VAR15,
                               VAR16,
                               VAR17,
                               VAR18,
                               VAR19);
    
    
    
    VAR12 = true;
  }

  if (VAR10.FUN3())
    VAR13->FUN13();
}