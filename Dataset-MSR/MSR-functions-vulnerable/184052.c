EncodedJSValue VAR1 FUN1(VAR2* VAR3)
{
    JSValue VAR4 = VAR3->FUN2();
    if (!VAR4.FUN3(&VAR5::VAR6))
        return FUN4(VAR3);
    VAR5* VAR7 = VAR8<VAR5*>(FUN5(VAR4));
     FUN6(VAR7, &VAR5::VAR6);
     VAR9* VAR10 = static_cast<VAR9*>(VAR7->FUN7());
     if (VAR3->FUN8() < 1)

        return FUN9(VAR3, FUN10(VAR3, ""));


     int FUN11(FUN12(VAR3, 0, VAR11).FUN13(VAR3));
     if (VAR3->FUN14())
         return VAR12::FUN15(FUN16());

    size_t VAR13 = VAR3->FUN8();
    if (VAR13 <= 1) {
        VAR10->FUN17(VAR14);
        return VAR12::FUN15(FUN16());
    }

    int FUN18(FUN12(VAR3, 1, VAR11).FUN13(VAR3));
    if (VAR3->FUN14())
        return VAR12::FUN15(FUN16());
    if (VAR13 <= 2) {
        VAR10->FUN17(VAR14, VAR15);
        return VAR12::FUN15(FUN16());
    }

    int FUN19(FUN12(VAR3, 2, VAR11).FUN13(VAR3));
    if (VAR3->FUN14())
        return VAR12::FUN15(FUN16());
    VAR10->FUN17(VAR14, VAR15, VAR16);
    return VAR12::FUN15(FUN16());
}