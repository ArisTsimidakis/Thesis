void VAR1::FUN1(const VAR2::VAR3& VAR4,
                                           int VAR5) {
  FUN2("", "", &VAR4, "",
                               "", VAR5);
  VAR6::VAR7::FUN3()->FUN4(
      VAR4, VAR5);

#if FUN5(VAR8)
  VAR9::FUN3()->FUN6()->FUN7(VAR4, VAR5);
#endif  
}