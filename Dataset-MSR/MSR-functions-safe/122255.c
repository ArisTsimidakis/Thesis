bool VAR1::FUN1(VAR2<VAR3<VAR4> >* VAR5, CheckValidityDispatchEvents VAR6)
{
    if (!FUN2() || FUN3())
        return true;
    if (VAR6 == VAR7)
        return false;
    
    VAR3<VAR1> FUN4(this);
    VAR3<VAR8> FUN5(FUN6());
    bool VAR9 = FUN7(VAR10::FUN8(VAR11::VAR12));
    if (VAR9 && VAR5 && FUN9() && VAR13 == FUN6())
        VAR5->FUN10(this);
    return false;
}