bool VAR1::FUN1(const VAR2& VAR3) const
{
    if (VAR4 == VAR5)
        return true;

    int VAR6 = VAR3.FUN2();

    if (VAR6 == VAR7)
        return true;

    if (!VAR6)
        return FUN3(VAR7, VAR3.FUN4());

    if (!VAR7)
        return FUN3(VAR6, VAR3.FUN4());

    return false;
}