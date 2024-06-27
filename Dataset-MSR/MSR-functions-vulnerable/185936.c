void FUN1(const char* VAR1)


 {
     FUN2(VAR1);
 

    VAR2<VAR3> VAR4 = FUN3(VAR1);


     FUN4(VAR4.FUN5());
     VAR5<unsigned> VAR6;
     FUN6(VAR4.FUN5(), &VAR6);
    size_t VAR7 = VAR6.FUN7();

    VAR8<VAR9> VAR10 = FUN8();
    VAR10->FUN9(VAR4.FUN5(), true);
    for (size_t VAR11 = 0; VAR11 < VAR7; ++VAR11) {
        VAR10->FUN10(VAR11);
        const size_t VAR12 = 5;
        for (size_t VAR13 = 0; VAR13 < VAR12; ++VAR13) {
            for (size_t VAR14 = 0; VAR14 < VAR7; VAR14 += VAR12) {
                FUN2(VAR15::FUN11() << "" << VAR13 << "" << VAR14);
                VAR16* VAR17 = VAR10->FUN12(VAR14);
                FUN13(VAR6[VAR14], FUN14(VAR17->FUN15()));
            }
        }
    }
}