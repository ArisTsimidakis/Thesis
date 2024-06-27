bool VAR1::FUN1(
    const VAR2* VAR3,
    const VAR4::VAR5& VAR6,
    const VAR4::VAR5& VAR7) {
  if (!VAR3)
    return false;

  const VAR1* VAR8 = FUN2(*VAR3);
   if (!VAR8)
     return false;
 

  bool VAR9 = false;

  for (size_t VAR10 = 0;

       VAR10 < VAR8->VAR11.FUN3();

       ++VAR10) {

    if (FUN4(VAR6, VAR8->VAR11[VAR10])) {

      VAR9 = true;

      break;












     }
   }
 

  return VAR9 && VAR3->FUN5(

      VAR8->VAR12, VAR7);










 }