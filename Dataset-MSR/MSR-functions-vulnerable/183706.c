VAR1::Result VAR2::FUN1(
    const VAR3& VAR4, const VAR5& VAR6) {
#if FUN2(VAR7)
  bool VAR8 = false;

  if (!VAR4.FUN3(VAR9, &VAR8))
    return FUN4();

  VAR10.FUN5(VAR8);
  VAR10.VAR6 = VAR6;

  return VAR11;
 #else
   FUN6(!VAR12);
 










   if (!VAR13->FUN7(VAR4, VAR6))
     return FUN4();
 
  return VAR11;
#endif
}