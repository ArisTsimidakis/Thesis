bool VAR1::FUN1()
{
    PluginScriptForbiddenScope VAR2;
    VAR3* VAR4 = VAR5;

    if (VAR6->FUN2()) {
        unsigned VAR7 = 0;
        for (VAR8* VAR9 = VAR6; VAR9; VAR9 = VAR9->FUN3().FUN4()) {
            if (VAR9->FUN5()) {
                VAR10* VAR11 = FUN6(VAR9);
                VAR7 += VAR11->FUN2()->FUN7();
            }
        }
        unsigned VAR12 = VAR13::FUN8(VAR13::VAR14);
        float VAR15 = static_cast<float>(VAR7) / VAR12;
        VAR16::FUN9()->FUN10(VAR15);
    }

    
    
    
    VAR17 FUN11(VAR6->FUN2());
    if (VAR18) {
        FUN12()->FUN13();
        FUN14();
    }
    VAR6->FUN15();
    
    
    
    
    if (VAR4 != VAR5)
        return false;
    
    
    
     
     
     if (VAR18) {

        VAR19 FUN16(*VAR6);
         VAR20<bool> FUN17(VAR21, true);
         FUN18(VAR18);
     }
    
    if (!VAR6->FUN12())
        return false;
    FUN19(VAR5 == VAR4);
    
    
    if (VAR6->FUN2())
        VAR6->FUN2()->FUN20();
    VAR18 = VAR5.FUN21();
    FUN22();

    return true;
}