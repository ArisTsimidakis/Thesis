static inline void FUN1(VAR1& VAR2, VAR3<VAR4>& VAR5, const VAR6& VAR7, VisualDirectionOverride override, bool VAR8)
{
    
    
    FUN2(&VAR2.FUN3() == &VAR5);
    FUN2(VAR2.FUN4() != VAR7);
    VAR9* VAR10 = VAR2.FUN4().FUN5();
    VAR2.FUN6(VAR7, override, VAR8);

    while (!VAR2.FUN7().FUN8()) {
        
        VAR4* VAR11 = VAR2.FUN7().FUN9();
        VAR2.FUN7().FUN10();

        VAR9* VAR12 = VAR11->FUN11();

        
        
         
         
         

        VAR13* VAR14 = FUN12(FUN13(VAR12, VAR10));




 
         InlineBidiResolver VAR15;
         EUnicodeBidi VAR16 = VAR14->FUN14()->FUN15();
        TextDirection VAR17 = VAR14->FUN14()->FUN16();
        if (VAR16 == VAR18)
            VAR17 = FUN17(VAR14, VAR12);
        else {
            FUN2(VAR16 == VAR19 || VAR16 == VAR20);
            VAR17 = VAR14->FUN14()->FUN16();
        }
        VAR15.FUN18(FUN19(VAR17, FUN20(VAR16)));

        FUN21(VAR15, VAR14, VAR12);

        
        
        
        InlineIterator VAR21 = FUN22(VAR14, VAR12, VAR11->VAR22);
        VAR15.FUN23(VAR21);

        
        
        
        VAR15.FUN6(VAR7, VAR23, VAR8);
        
        
        
        
        if (VAR15.FUN3().FUN24())
            VAR5.FUN25(VAR11, VAR15.FUN3());

        
        
        if (!VAR15.FUN7().FUN8()) {
            VAR2.FUN7().FUN26(VAR15.FUN7());
            VAR15.FUN7().FUN27();
            VAR10 = VAR14;
        }
    }
}