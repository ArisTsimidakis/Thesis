void VAR1::FUN1()
{
    FUN2(VAR2::FUN3(VAR3::VAR4));
    
    FUN2(VAR2::FUN3(VAR3::VAR5));

    PageVisibilityState VAR6 = FUN4();
    for (VAR7* VAR8 : VAR9)
        VAR8->FUN1(VAR6);

    if (VAR6 == VAR10)
        FUN5().FUN6();

    if (FUN7() && VAR11)
        VAR11->FUN8();
}