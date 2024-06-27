EncodedJSValue JSC_HOST_CALL VAR1::FUN1(VAR2* VAR3)
{
     VAR1* VAR4 = VAR5<VAR1*>(VAR3->FUN2());
 
     if (VAR3->FUN3() < 1)

        return FUN4(VAR3, FUN5(VAR3, ""));


 
     UString VAR6 = VAR3->FUN6(0).FUN7(VAR3)->FUN8(VAR3);
     UString VAR7;
    if (VAR3->FUN3() > 1)
        VAR7 = VAR3->FUN6(1).FUN7(VAR3)->FUN8(VAR3);

    if (VAR3->FUN9())
        return VAR8::FUN10(FUN11());

    
    VAR9* VAR10 = FUN12(VAR3->FUN13())->FUN14();
    ExceptionCode VAR11 = 0;
    VAR12<VAR13> VAR14 = VAR13::FUN15(VAR10->FUN16(), FUN17(VAR6), FUN17(VAR7), VAR11);
    if (VAR11) {
        FUN18(VAR3, VAR11);
        return VAR8::FUN10(FUN11());
    }

    return VAR8::FUN10(FUN19(FUN20(VAR3, VAR4->FUN21(), VAR14.FUN22())));
}