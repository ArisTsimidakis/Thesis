void VAR1::FUN1(VAR2* VAR3)
{
    ImageUID VAR4 = VAR3 ? FUN2(VAR3) : 0;
    if (!VAR3 || !VAR4) {
        if (VAR5)
            FUN3();
        return;
    }

    if (VAR4 == VAR5)
        return;
    bool VAR6 = false;
    GLuint VAR7 = VAR8->FUN4().VAR9.FUN5(VAR4, VAR6);
    if (VAR7 != VAR10) {
        VAR5 = VAR4;
        FUN3();
        VAR10 = VAR7;
        FUN6(VAR3->FUN7(), false);
        if (!VAR6) {
            VAR11 FUN8(FUN9(FUN10(0, 0, VAR12.FUN11(), VAR12.FUN12())));
            VAR13.FUN13(VAR3, VAR14, FUN14(0, 0), VAR15);
            FUN15();
        }
    }
}