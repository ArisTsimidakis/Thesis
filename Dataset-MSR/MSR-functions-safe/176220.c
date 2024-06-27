static void FUN1(
 VAR1* VAR2, uint32_t VAR3, VAR1* VAR4,
 ElementsKind VAR5, uint32_t VAR6, int VAR7) {
 DisallowHeapAllocation VAR8;
 VAR9* VAR10 = VAR9::FUN2(VAR2);
 int VAR11 = VAR7;
 if (VAR7 < 0) {
    FUN3(VAR7 == VAR12::VAR13 ||
           VAR7 == VAR12::VAR14);
    VAR11 = VAR10->FUN4() + 1 - VAR3;
 if (VAR7 == VAR12::VAR14) {
 int VAR15 = VAR6 + VAR11;
 int VAR16 = VAR4->FUN5() - VAR15;
 if (VAR16 > 0) {
 VAR17* VAR18 = VAR10->FUN6();
 FUN7(VAR19::FUN2(VAR4)->FUN8() + VAR15,
                      VAR18->FUN9(), VAR16);
 }
 }
 }
  FUN3(VAR4 != VAR2);
  FUN3(FUN10(VAR5));
 if (VAR11 == 0) return;
 VAR19* VAR20 = VAR19::FUN2(VAR4);
 uint32_t VAR21 = VAR20->FUN5();
 if (VAR6 + VAR11 > VAR21) {
    VAR11 = VAR21 - VAR6;
 }
 WriteBarrierMode VAR22 = FUN11(VAR5)
 ? VAR23
 : VAR24;
 VAR25* VAR26 = VAR10->FUN12();
 for (int VAR27 = 0; VAR27 < VAR11; VAR27++) {
 int VAR28 = VAR10->FUN13(VAR26, VAR27 + VAR3);
 if (VAR28 != VAR9::VAR29) {
 VAR30* VAR31 = VAR10->FUN14(VAR28);
      FUN3(!VAR31->FUN15(VAR26));
      VAR20->FUN16(VAR27 + VAR6, VAR31, VAR22);
 } else {
      VAR20->FUN17(VAR26, VAR27 + VAR6);
 }
 }
}