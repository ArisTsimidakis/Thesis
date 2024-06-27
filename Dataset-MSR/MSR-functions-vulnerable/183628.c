bool VAR1::FUN1(VAR2* VAR3)
{
    
    
    if (!VAR4->FUN2() || !VAR4->FUN2()->FUN3() || VAR3->FUN4()->FUN5() || !VAR4->FUN6())
        return false;

    VAR5* VAR6 = VAR4->FUN6()->FUN7();

    TextAutosizingWindowInfo VAR7;

    
     VAR7.VAR8 = VAR4->FUN2()->FUN8();
     if (VAR7.VAR8.FUN9()) {
         bool VAR9 = !VAR10::FUN10(VAR6);

        VAR7.VAR8 = VAR6->FUN4()->FUN11(VAR9).FUN12(); 






     }
 
     
    
    VAR7.VAR11 = VAR6->FUN4()->FUN13();
    for (VAR5* VAR12 = VAR4->FUN14(); VAR12; VAR12 = VAR12->FUN15()->FUN16()) {
        if (!VAR12->FUN4()->FUN17())
            VAR7.VAR11 = VAR7.VAR11.FUN18(VAR12->FUN4()->FUN13());
    }

    
    VAR13* VAR14 = VAR3->FUN19() ? FUN20(VAR3) : VAR3->FUN21();
    while (VAR14 && !FUN22(VAR14))
        VAR14 = VAR14->FUN21();

    VAR13* VAR15 = VAR14;
    while (VAR15 && (!FUN22(VAR15) || !FUN23(VAR15)))
        VAR15 = VAR15->FUN21();

    FUN24(VAR15, VAR14, VAR3, VAR7);
    return true;
}