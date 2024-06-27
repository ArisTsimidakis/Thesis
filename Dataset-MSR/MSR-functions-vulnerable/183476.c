bool VAR1::FUN1(
     const VAR2::VAR3::VAR4& VAR5) {
   const VAR2::VAR3::VAR6& VAR7 = VAR5.VAR8;

  if (!FUN2(VAR9::VAR10, VAR7.FUN3()))

      return false;

  if (!FUN4(VAR5.VAR11))

      return false;

  if (!FUN2(VAR9::VAR12, VAR7.FUN5()))

      return false;

  if (!FUN6(VAR9::VAR13, VAR7.FUN7()))

      return false;

  if (!FUN6(VAR9::VAR14, !VAR7.FUN8()))

      return false;

  return true;












 }