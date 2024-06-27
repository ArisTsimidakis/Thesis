void VAR1::FUN1(VAR2& VAR3, const VAR4& VAR5, bool VAR6)
{
    if (!VAR7)
        return;

    const VAR8& VAR9 = VAR7->FUN2();
    FloatingObjectSetIterator VAR10 = VAR9.FUN3();
    for (FloatingObjectSetIterator VAR11 = VAR9.FUN4(); VAR11 != VAR10; ++VAR11) {
        VAR12* VAR13 = *VAR11;
        
        if (VAR13->FUN5() && !VAR13->FUN6()->FUN7()) {
            VAR2 FUN8(VAR3);
            VAR14.VAR15 = VAR6 ? VAR3.VAR15 : VAR16;
            
            LayoutPoint VAR17 = FUN9(VAR13, FUN10(VAR5.FUN11() + FUN12(VAR13) - VAR13->FUN6()->FUN11(), VAR5.FUN13() + FUN14(VAR13) - VAR13->FUN6()->FUN13()));
            VAR13->FUN6()->FUN15(VAR14, VAR17);
            if (!VAR6) {
                VAR14.VAR15 = VAR18;
                VAR13->FUN6()->FUN15(VAR14, VAR17);
                VAR14.VAR15 = VAR19;
                VAR13->FUN6()->FUN15(VAR14, VAR17);
                VAR14.VAR15 = VAR20;
                VAR13->FUN6()->FUN15(VAR14, VAR17);
                VAR14.VAR15 = VAR21;
                VAR13->FUN6()->FUN15(VAR14, VAR17);
            }
        }
    }
}