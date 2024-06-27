bool VAR1::FUN1(
    GLuint VAR2, bool* VAR3) {
  FUN2(VAR3);
  *VAR3 = false;
  if (VAR4::FUN3() == VAR4::VAR5)
    return true;

  if (!VAR6.FUN4()) {
    return true;
  }

  
  
  
  
   
 
   

  int VAR7 = VAR2 + 1;

  int VAR8 = 0;














   const VAR9::VAR10& VAR11 =
       VAR6.FUN5();
   for (VAR9::VAR10::const_iterator VAR12 =
       VAR11.FUN6(); VAR12 != VAR11.FUN7(); ++VAR12) {
    const VAR9::VAR13* VAR14 = *VAR12;
    const VAR15::VAR16::VAR13* VAR17 =
        VAR18->FUN8(VAR14->FUN9());
     if (VAR17 &&
         VAR14->FUN10(VAR2) &&
         VAR14->FUN11() == VAR19) {

      int VAR20 = 0;

      if (!FUN12(

          static_cast<int>(VAR7),

          VAR14->FUN13(), &VAR20) ||






           !FUN14(VAR8, VAR20, &VAR8)) {
         FUN15(VAR21, "");
         return false;
       }
     }
   }
 

  const int VAR22 = sizeof(float);  

  int VAR23 = 0;

  if (!FUN12(VAR8, VAR22, &VAR23)) {








     FUN15(VAR21, "");
     return false;
   }
 


 
   FUN16(VAR24, VAR25);

  if (VAR23 > VAR26) {


     FUN17(VAR24, VAR23, NULL, VAR27);










   }
 
   
  GLintptr VAR28 = 0;
  for (VAR9::VAR10::const_iterator VAR12 =
           VAR11.FUN6(); VAR12 != VAR11.FUN7(); ++VAR12) {
    const VAR9::VAR13* VAR14 = *VAR12;
    const VAR15::VAR16::VAR13* VAR17 =
        VAR18->FUN8(VAR14->FUN9());
    if (VAR17 &&
        VAR14->FUN10(VAR2) &&
        VAR14->FUN11() == VAR19) {
      int VAR29 = VAR14->FUN13() * VAR22;
      int VAR30 = VAR29 * VAR7;
      VAR31<float> FUN18(new float[VAR30]);
      const VAR32* VAR33 = reinterpret_cast<const VAR32 *>(
          VAR14->FUN19()->FUN20(VAR14->FUN21(), VAR30));
      const VAR32* VAR34 = VAR33 + VAR29;
      float* VAR35 = VAR36.FUN22();
      while (VAR33 != VAR34) {
        *VAR35++ = static_cast<float>(*VAR33++) / 65536.0f;
      }
      FUN23(VAR24, VAR28, VAR30, VAR36.FUN22());
      FUN24(
          VAR14->FUN9(), VAR14->FUN13(), VAR37, false, 0,
          reinterpret_cast<VAR38*>(VAR28));
      VAR28 += VAR30;
    }
  }
  *VAR3 = true;
  return true;
}