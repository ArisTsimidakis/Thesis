bool VAR1::FUN1() const {
   const VAR2& VAR3 =
       FUN2(VAR4);

  if (FUN3(VAR3, ""))


     return true;

  if (FUN3(VAR3, ""))


     return false;
 
   return FUN4(FUN5()) &&
         FUN6(*FUN5()).FUN7();
}