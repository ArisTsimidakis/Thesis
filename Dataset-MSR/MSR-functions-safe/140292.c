void VAR1::FUN1(VAR2* VAR3,
                        VAR4::InputType VAR5) {
  switch (FUN2()
              .FUN3()
              .FUN4()
              .FUN5()) {
    case VAR6:
      
      break;
    case VAR7:
      FUN6(VAR3, VAR5);
      break;
    case VAR8:
      if (VAR3) {
        FUN7(FUN2().FUN8());
        VAR9::FUN9(*FUN2().FUN8(),
                                  VAR10::FUN9(VAR3), VAR5)
            ->FUN10();
      }
      break;
  }
}