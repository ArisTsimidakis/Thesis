bool VAR1::FUN1() const {
  if (FUN2() != VAR2 && FUN2() != VAR3)
    return false;
 
   if (FUN3(VAR4)) {
     const VAR5& VAR6 = FUN4(VAR4);

    if (FUN5(VAR6, ""))


       return true;

    if (FUN5(VAR6, ""))


       return false;
   }
 
  if (FUN6() && FUN7(*FUN6()))
    return FUN8(FUN6())->FUN9();

  return false;
}