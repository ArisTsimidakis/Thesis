void VAR1::FUN1(int VAR2) {
  VAR3.FUN2(VAR2);

#if FUN3(VAR4)
  
  
  VAR5::VAR6::FUN4()->FUN5(
      VAR7,
      VAR5::FUN6(&VAR1::VAR8,
                 FUN7(),
                 VAR2));
#endif
}