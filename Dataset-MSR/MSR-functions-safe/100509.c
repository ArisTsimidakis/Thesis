void VAR1::remove(VAR2* VAR3)
{
    
    
    if (VAR3->FUN1()) {
        
        VAR4.remove(VAR3->FUN2());
        VAR3->FUN3(false);

        
        FUN4(VAR3);
        FUN5(VAR3);
        
        
        
        VAR5<VAR6*>::iterator VAR7 = VAR8.FUN6();
        for (VAR5<VAR6*>::iterator VAR9 = VAR8.FUN7(); VAR9 != VAR7; ++VAR9)
            (*VAR9)->FUN8(VAR3);

        
        int VAR10 = -static_cast<int>(VAR3->FUN9());
        if (VAR10)
            FUN10(VAR3->FUN11(), VAR10);
    } else
        FUN12(VAR4.FUN13(VAR3->FUN2()) != VAR3);

    if (VAR3->FUN14())
        delete VAR3;
}