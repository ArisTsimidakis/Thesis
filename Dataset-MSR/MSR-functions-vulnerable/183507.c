VAR1::Result VAR1::FUN1(

    HWND VAR2,


     int VAR3,
     bool VAR4) {

  FUN2(VAR2);
   FUN2(!VAR5);
   VAR6 = false;




















   
   
   
  
  
  
  
  
  
  PRINTDLGEX VAR7 = { sizeof(VAR8) };
  VAR7.VAR9 = VAR2;
  
  
  VAR7.VAR10 = VAR11 | VAR12  |
                         VAR13 | VAR14;
  if (!VAR4)
    VAR7.VAR10 |= VAR15;

  PRINTPAGERANGE VAR16[32];
  VAR7.VAR17 = VAR18;
  if (VAR3) {
    
    memset(VAR16, 0, sizeof(VAR16));
    VAR16[0].VAR19 = 1;
    VAR16[0].VAR20 = VAR3;
    VAR7.VAR21 = 1;
    VAR7.VAR22 = FUN3(VAR16);
    VAR7.VAR23 = 1;
    VAR7.VAR24 = VAR3;
    VAR7.VAR25 = VAR16;
  } else {
    
    VAR7.VAR10 |= VAR26;
  }

  {
    if (FUN4(&VAR7) != VAR27) {
      FUN5();
      return VAR28;
    }
  }
  
  return FUN6(VAR7);
}