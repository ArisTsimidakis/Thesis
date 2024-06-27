bool VAR1::FUN1(
    uint32 VAR2,
    const VAR3::VAR4* VAR5,
    float VAR6,
    VAR7::ProcessHandle VAR8) {

#ifdef VAR9
  VAR10<VAR7::VAR11> FUN2(
      new VAR7::FUN3(VAR5->VAR12, true,
                             VAR8));
#else
  VAR10<VAR7::VAR11> FUN2(
      new VAR7::FUN3(VAR5->VAR12, true));
#endif
 
   
   if (VAR7::VAR11::FUN4(VAR13->FUN5())) {

    const size_t VAR14 = 4 * VAR5->VAR15.FUN6();


















 #ifdef VAR9
     if (!VAR13->FUN7(0)) {
       FUN8(VAR16) << "";
      FUN9(
          VAR7::FUN10(""));
      return false;
    }

    if (VAR13->FUN11() < VAR14) {
      FUN8(VAR16) << "";
      FUN9(
          VAR7::FUN10(""));
      return false;
    }
#else
    if (!VAR13->FUN7(VAR14)) {
      FUN8(VAR16) << "";
      FUN9(
          VAR7::FUN10(""));
      return false;
    }
#endif
  }

  VAR17<VAR18> FUN12(new FUN13(
      VAR19,
      VAR2,
      VAR5->VAR20,
      VAR6,
      VAR5->VAR15,
      VAR13.FUN14()));
  VAR21.FUN15(VAR22);
  return true;
}