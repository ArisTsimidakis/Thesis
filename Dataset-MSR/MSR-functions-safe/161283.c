void VAR1::FUN1(InputEventAckSource VAR2,
                                   InputEventAckState VAR3,
                                   const VAR4::VAR5& VAR6) {
  if ((VAR6.FUN2() & VAR4::VAR5::VAR7) == 0)
    return;

  if (VAR4::VAR5::FUN3(VAR6.FUN4()) &&
      !VAR8.FUN5()) {
    VAR8.FUN6()->FUN7();
    VAR8.FUN8();
    return;
  }
  if ((VAR4::VAR5::FUN9(VAR6.FUN4()) ||
       VAR6.FUN4() == VAR4::VAR5::VAR9) &&
      !VAR10.FUN5()) {
    VAR10.FUN6()->FUN7();
    VAR10.FUN8();
    return;
  }
}