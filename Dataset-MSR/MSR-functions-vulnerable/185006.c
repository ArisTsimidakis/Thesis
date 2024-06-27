int VAR1::FUN1(VAR2::VAR3* VAR4, int VAR5,
                             const VAR2::VAR6& VAR7) {
  FUN2(VAR8::FUN3(VAR8::VAR9));
  
  FUN2(!VAR10);
  FUN4(VAR11, 0);
  FUN2(VAR12.FUN5());
  
  FUN2(VAR4);
  FUN6(VAR5, 0);
  FUN2(!VAR7.FUN5());

  if (VAR13 != VAR2::VAR14) {
    
    return VAR13;
  }

  if (VAR15 == 0) {
    
     return 0;
   }
 










   if (VAR16.FUN7()) {
     
     VAR10 = VAR4;
    VAR11 = VAR5;
    VAR12 = VAR7;
    return VAR2::VAR17;
  }

  int VAR18 = FUN8(&VAR16, VAR4, VAR5);
  VAR15 -= VAR18;
  FUN9(VAR15, 0);
  return VAR18;
}