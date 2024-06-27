VAR1::FUN1(bool VAR2,
                           const VAR3& VAR4,
                           VAR5::VAR6* VAR7,
                           VAR5::VAR8* VAR9,
                           VAR10* VAR11)
  : FUN2(VAR2),
    FUN3(VAR4),
    FUN4(new FUN5(
        FUN6(this), VAR7)),
    FUN7(false),
    FUN8(false),
    FUN9(VAR7),
    FUN10(VAR9),
    FUN11(false),
    FUN12(-1),
    FUN13(-1),
    FUN14(VAR11),
    FUN15(FUN6(this)),
    FUN16(&VAR5::VAR12::VAR13) {
}