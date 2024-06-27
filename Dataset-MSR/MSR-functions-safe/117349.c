void VAR1::FUN1(const VAR2& VAR3,
                                       int VAR4,
                                       void* VAR5) {
  int VAR6 = reinterpret_cast<int>(VAR5);
  if (VAR6 == VAR7) {
    
    VAR8* VAR9 = new FUN2();
    ProfileInfo VAR10;
    VAR10.VAR11 = VAR12;
    VAR10.VAR13 = VAR3.FUN3();
    FUN4(FUN5()->FUN6(), VAR14, VAR9,
                         VAR10, VAR15,
                         new FUN7(FUN8()), false);
  } else if (VAR6 == VAR16) {
    if (VAR17->FUN9()) {
      VAR18::FUN10(
          VAR17->FUN9()->FUN11(), FUN12(),
          VAR3.FUN3());
    }
  } else {
    FUN13();
  }
}