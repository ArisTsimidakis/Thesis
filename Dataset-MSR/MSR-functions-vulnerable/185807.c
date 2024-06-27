bool FUN1(VAR1* VAR2) {
  if (!VAR2)
    return false;

   if (!VAR2->FUN2())
     return false;
 

  return FUN3(FUN4(VAR2)->FUN5(VAR3),

                           "");




 }