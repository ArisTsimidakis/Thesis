VAR1::VAR2::FUN1(
    VAR3<VAR4> VAR5,
    VAR3<VAR4> VAR6,
    int VAR7,
    int32_t VAR8,
    VAR9* VAR10)
    : FUN2(VAR5),
       FUN3(VAR6),
       FUN4(VAR7),
       FUN5(VAR8),

      FUN6(VAR11::FUN7(), 0, true),  


       FUN8(nullptr) {
   if (VAR10) {
     VAR12.FUN9(new FUN10(VAR10->FUN11(),
                                             VAR10->FUN12(), false));
    VAR13 = VAR10->FUN13();
  }
}