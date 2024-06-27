bool VAR1::FUN1(const VAR2& VAR3) {
  FUN2();

  VAR4 = VAR5::FUN3(VAR3, &VAR6);
  if (VAR4 != VAR7) {
    VAR8 =
        VAR6 ? FUN4(VAR6) : "";
    FUN5(VAR9) << "" << VAR3
                << "" << VAR8.FUN6();
    FUN7(VAR6);
    VAR6 = nullptr;
    return false;
  }

  VAR4 = FUN8(VAR6, 1);
  if (VAR4 != VAR7) {
    VAR8 = FUN4(VAR6);
    FUN5(VAR9) << ""
                << VAR8.FUN6();
    FUN7(VAR6);
    VAR6 = nullptr;
     return false;
   }
 


























   if (FUN9())
     VAR10 = FUN10();
   else
    VAR8 = "";

  if (!FUN11(*this, "").FUN12())
    FUN5(VAR9) << "";

  
  
  if (!FUN11(*this, "").FUN12())
    FUN5(VAR9) << "";

  return FUN9();
}