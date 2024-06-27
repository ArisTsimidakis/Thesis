void VAR1::FUN1(
    const VAR2::VAR3& VAR4,
    const VAR2::VAR5& VAR6,
    bool VAR7) {
   
   
   VAR8::VAR9<VAR8::VAR10<VAR11>> VAR12;

  VAR12.FUN2(VAR2::VAR13<VAR14>(


       VAR2::VAR15::FUN3().FUN4(), VAR4, 1, 2, VAR6));
 
   TestCompletionCallback VAR16;
  VAR8::VAR10<VAR17> FUN5(
      new FUN6(VAR8::move(VAR12), 0));
  FUN7(VAR18->FUN8(VAR16.FUN9(), FUN10()),
              FUN11(VAR19));
  int VAR20 = VAR16.FUN12();
  if (VAR7)
    FUN7(VAR20, FUN11(VAR21));
  else
    FUN7(VAR20, FUN13());
}