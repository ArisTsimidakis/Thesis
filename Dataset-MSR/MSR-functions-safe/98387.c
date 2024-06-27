VAR1 FUN1(VAR2* VAR3)
{
    FUN2(FUN3(VAR3), VAR4);

    VAR5* VAR6 = FUN4(VAR3);
    VAR7* VAR8 = VAR6->FUN5();
    if (!VAR8)
        return VAR4;

    ScrollbarMode VAR9 = VAR8->FUN6();

    if (VAR9 == VAR10)
        return VAR11;

    if (VAR9 == VAR12)
        return VAR13;

    return VAR4;
}