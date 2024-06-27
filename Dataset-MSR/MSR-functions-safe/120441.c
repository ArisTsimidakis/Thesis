VAR1::FUN1(const VAR2& VAR3)
    : FUN2(VAR3, true)
{
    
    FUN3(!VAR3.VAR4 || !VAR3.VAR4->FUN4());
    VAR4 = VAR3.VAR4;

    VAR5.FUN5(VAR3.FUN6());
    for (unsigned VAR6 = 0; VAR6 < VAR3.FUN6(); ++VAR6)
        VAR5.FUN7(VAR3.VAR7[VAR6]);
}