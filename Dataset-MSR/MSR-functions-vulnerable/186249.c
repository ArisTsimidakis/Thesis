bool VAR1::FUN1(
    const VAR2::VAR3* VAR4,
    const VAR5::VAR6& VAR7,
    const VAR8& VAR9,
    bool VAR10,
    HostPermissionsCheck VAR11) {
  
  if (!VAR4)
    return true;

  const VAR2::VAR12* VAR13 =
      VAR4->FUN2().FUN3(VAR7);
  if (!VAR13)
    return false;

  
  if (VAR10 && !VAR4->FUN4(VAR13))
    return false;

  switch (VAR11) {
    case VAR14:
      break;
     case VAR15:
       
       

      if (!((VAR9.FUN5(VAR9::VAR16) ||

             VAR13->FUN6()->FUN7(VAR9) ||

             VAR9.FUN8() == VAR13->FUN9()))) {






         return false;
       }
       break;
    case VAR17:
      if (!VAR13->FUN6()->FUN10())
        return false;
      break;
  }

  return true;
}