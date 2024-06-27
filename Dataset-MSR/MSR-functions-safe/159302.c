int VAR1::FUN1() {
  if (FUN2())
    return 0;

  int VAR2 = 1;
  VAR2 *= 2;  
  int VAR3 = FUN3() ? FUN3()->FUN4() : 0;
  VAR4<VAR5> VAR6;
  FUN5(VAR6);
  if (!VAR6.FUN6()) {
    
    
    
    if (VAR6.FUN7().FUN8() && VAR3 > 0 &&
        FUN3()->FUN9()) {
      if (VAR6.FUN7().FUN10() || VAR6.FUN7().FUN11())
        VAR2 += VAR3;  
      VAR2 += VAR3;    
    } else if (VAR6.FUN7().FUN10() || VAR6.FUN7().FUN11()) {
      VAR2 += 1;  
    }
  }

  return VAR2;
}