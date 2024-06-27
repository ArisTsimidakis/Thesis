void VAR1::FUN1() {
  if (VAR2)
    return;

  bool VAR3 = FUN2(VAR4);
  VAR5.FUN3(VAR6, VAR3);
#if FUN4(VAR7)
  VAR5.FUN3(VAR8,
                                        FUN5(VAR4));
#endif
}