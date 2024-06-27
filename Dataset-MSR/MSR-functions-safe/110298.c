UrlSchemeType VAR1::FUN1(const VAR2::VAR3& VAR4) {
  FUN2(VAR5 != NULL);
  PP_URLComponents_Dev VAR6;
  VAR7::Var VAR8 =
      VAR5->FUN3(VAR7::FUN4(VAR4), &VAR6);

  if (VAR8.FUN5() ||
      (VAR6.VAR9.VAR10 == 0 && VAR6.VAR9.VAR11 == -1)) {
    
    return VAR12;
  }

  FUN2(VAR6.VAR9.VAR10 <
            static_cast<int>(VAR8.FUN6().FUN7()));
  FUN2(VAR6.VAR9.VAR10 + VAR6.VAR9.VAR11 <
            static_cast<int>(VAR8.FUN6().FUN7()));

  VAR2::string VAR9 = VAR8.FUN6().FUN8(VAR6.VAR9.VAR10,
                                                       VAR6.VAR9.VAR11);
  if (VAR9 == VAR13)
    return VAR14;
  if (VAR9 == VAR15)
    return VAR16;
  return VAR12;
}