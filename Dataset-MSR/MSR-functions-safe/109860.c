void VAR1::FUN1()
{
    FUN2(FUN3());

    VAR2* VAR3 = FUN4();
    if (VAR3 && VAR3->FUN5()) {
        
        FUN6();
        return;
    }

    if (VAR4* VAR5 = FUN7())
        VAR5->FUN8().FUN1();

    FUN9();

    
    if (VAR3 && FUN10() && (VAR3->FUN11() || FUN10()->FUN12()))
        VAR3->FUN13();

    if (VAR3)
        VAR3->FUN14().FUN15();

    FUN16();
}