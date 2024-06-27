static void* FUN1(const char* VAR1)
{
    FUN2(VAR2::VAR3);
    FUN2(FUN3() == VAR4);

    VAR5 FUN4(FUN5(), VAR1);

    if (!FUN6(VAR6))
        return &VAR7;

    ResourceError VAR8;
    ResourceResponse VAR9;
    VAR10<char> VAR11;


    {
        VAR12* VAR13 = VAR2::VAR3;
        VAR2 FUN7(0);
        

        if (VAR13->FUN8()) 
            VAR13->FUN8()->FUN9()->FUN10(VAR6, VAR14, VAR8, VAR9, VAR11);
    }

    
    
    if (!FUN6(VAR9.FUN4()))
        return &VAR7;

    return new FUN11(VAR11);
}