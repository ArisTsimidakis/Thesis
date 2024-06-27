VAR1& VAR2::FUN1()
{
    if (!VAR3) {
        VAR3 = VAR1::FUN2();
        if (VAR4 && VAR4->FUN3().FUN4() && VAR4->FUN3().FUN4()->FUN5(this))
            VAR4->FUN3().FUN4()->FUN6(VAR3->FUN7());
    }
    return *VAR3;
}