VAR1<VAR2> VAR3::FUN1(VAR1<VAR2> VAR4, VAR2* VAR5, VAR6& VAR7)
{
#if !FUN2(VAR8)
    
    
    FUN3(FUN4() || FUN5());
#endif

    VAR9<VAR2> FUN6(this);

    
    if (!VAR5) {
        return FUN7(VAR4, VAR7);
    }

    
    if (!FUN8(VAR4.FUN9(), 0, VAR7)) {
        if (VAR7.FUN10())
            return nullptr;
        return VAR4;
    }
    FUN3(VAR4);

    
    if (VAR5->FUN11() != this) {
        VAR7.FUN12(VAR10, "");
        return nullptr;
    }

    
    if (VAR5->FUN13() == VAR4 || VAR5 == VAR4)
        return VAR4;

    VAR9<VAR2> VAR11 = VAR5;

    NodeVector VAR12;
    FUN14(*VAR4, VAR12, VAR7);
    if (VAR7.FUN10())
        return nullptr;
    if (VAR12.FUN15())
        return VAR4;

    
    if (!FUN16(*VAR4, nullptr, VAR7)) {
        if (VAR7.FUN10())
            return nullptr;
        return VAR4;
    }

    VAR13::FUN17(this);

    VAR14 FUN18(*this);
    for (const auto& VAR15 : VAR12) {
        FUN3(VAR15);
        VAR2& VAR16 = *VAR15;

        
        
        
        
        if (VAR11->FUN11() != this)
            break;
        if (VAR16.FUN11())
            break;

        {
            EventDispatchForbiddenScope VAR17;
            ScriptForbiddenScope VAR18;

            FUN19().FUN20(VAR16);
            FUN21(*VAR11, VAR16);
        }

        FUN22(VAR16);
    }

    FUN23();

    return VAR4;
}