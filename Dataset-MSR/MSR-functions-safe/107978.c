bool FUN1(VAR1* VAR2, VAR3<VAR4>& VAR5)
{
    bool VAR6;
    if (!VAR2->FUN1(VAR6))
        return false;

    VAR5.FUN2(VAR6 ? VAR7 : VAR8);
    return true;
}