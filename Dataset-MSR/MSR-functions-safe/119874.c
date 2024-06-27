void VAR1::FUN1()
{
    VAR2<VAR3> FUN2(VAR4);
    VAR5 = false;

    if (VAR4->FUN3())
        VAR4->FUN3()->FUN4();

    
    if (VAR6)
        return;

    
    if (VAR4->FUN5()->FUN6())
        return;

    
    if (VAR4->FUN5()->FUN7()->FUN8())
        return;

    
    if (VAR4->FUN5()->FUN9())
        return;

    
    if (!FUN10())
        return;

    
    VAR6 = true;
    VAR7 = 0;
    VAR4->FUN5()->FUN11(VAR8::VAR9);
    if (VAR4->FUN5()->FUN12())
        VAR4->FUN5()->FUN13();

    VAR4->FUN14()->FUN15();

    FUN16();
    if (VAR4->FUN17())
        FUN18();

    if (VAR4->FUN3())
        VAR4->FUN3()->FUN4();
}