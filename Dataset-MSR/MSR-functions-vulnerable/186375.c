bool VAR1::FUN1(
     const VAR2& VAR3) {
   const VAR4* VAR5 = FUN2(&VAR3);

  if (!VAR5 || (!VAR6::FUN3(VAR7, *VAR5) &&

                   !VAR6::FUN3(VAR8, *VAR5))) {












     return false;
   }
   if (VAR9)
    return false;
  VAR9 = true;

  FUN4()->FUN5();
  return true;
}