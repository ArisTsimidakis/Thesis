bool VAR1::FUN1(VAR2::VAR3* VAR4, VAR2::VAR5<VAR2::VAR6> VAR7)
{
    if (VAR7.FUN2() || !VAR7->FUN3())
        return false;
    VAR2::VAR5<VAR2::VAR8> VAR9 = VAR2::VAR5<VAR2::VAR8>::FUN4(VAR7);

    if (VAR9->FUN5() < VAR10)
        return false;

    const VAR11* VAR12 = FUN6(VAR9);
    VAR13* VAR14 = VAR13::FUN7(VAR4);
    if (!(VAR12 && VAR14))
        return false;
    return VAR14->FUN8(VAR12, VAR9);
}