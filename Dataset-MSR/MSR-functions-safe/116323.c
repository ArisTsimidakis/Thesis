void VAR1::FUN1(VAR2* VAR3)
{
    FUN2(VAR1);
    if (VAR4->VAR5) {
        VAR3->FUN3();
        return;
    }

    bool VAR6 = FUN4() != VAR7
                           || VAR3->FUN5().FUN6() != 1
                           || FUN7() >= FUN8()
                           || FUN9() >= FUN10();

    if (!VAR6)
        VAR4->VAR8.update(VAR3);
    else
        VAR4->VAR8.FUN11();

    FUN12();
    VAR4->VAR9->FUN13()->FUN14(VAR3);
}