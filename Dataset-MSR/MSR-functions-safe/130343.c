bool VAR1::FUN1(VAR2<VAR3<VAR1>>* VAR4, CheckValidityEventBehavior VAR5)
{
    if (FUN2())
        return true;
    if (VAR5 != VAR6)
        return false;
    
    VAR7<VAR1> FUN3(this);
    VAR7<VAR8> FUN4(FUN5());
    bool VAR9 = FUN6(VAR10::FUN7(VAR11::VAR12));
    if (VAR9 && VAR4 && FUN8() && VAR13 == FUN5())
        VAR4->FUN9(this);
    return false;
}