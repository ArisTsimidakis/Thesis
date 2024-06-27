VAR1* VAR1::FUN1(VAR2* VAR3)
{
    if (!VAR3)
        return 0;

    if (VAR3->FUN2())
        return VAR4::FUN1(FUN3(*VAR3));
    return VAR5::FUN1(FUN4(*VAR3));
}