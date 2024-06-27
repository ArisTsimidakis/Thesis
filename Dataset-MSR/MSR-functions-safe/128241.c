void VAR1::FUN1()
{
    VAR2* VAR3 = FUN2();
    if (VAR3 && VAR3->FUN3())
        FUN4(false);

    VAR2* VAR4 = FUN5();
    if (VAR4 && VAR4->FUN3())
        FUN6(false);

    if (VAR5) {
        VAR5->FUN7();
        VAR5 = nullptr;
    }
}