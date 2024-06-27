unsigned long long VAR1::FUN1() const
{
    VAR2* VAR3 = FUN2();
    if (!VAR3)
        return 0;

    
    
    int VAR4 = VAR3->VAR4;
    if (VAR4 < 0)
        return FUN3();

    return FUN4(VAR4);
}