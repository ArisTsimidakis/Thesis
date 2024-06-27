GapRects VAR1::FUN1(const VAR2* VAR3, const VAR4& VAR5, const VAR6& VAR7,
    VAR8& VAR9, VAR8& VAR10, VAR8& VAR11, const VAR12* VAR13) const
{
    GapRects VAR14;

    
    VAR15* VAR16;
    for (VAR16 = FUN2(); VAR16 && VAR16->FUN3() == VAR17; VAR16 = VAR16->FUN4()) { }

    for (bool VAR18 = false; VAR16 && !VAR18; VAR16 = VAR16->FUN4()) {
        SelectionState VAR19 = VAR16->FUN3();
        if (VAR19 == VAR20 || VAR19 == VAR21)
            VAR18 = true;

        if (VAR16->FUN5())
            continue; 

        if (VAR16->FUN6() && VAR16->FUN7()) {
            
            
            LayoutSize VAR22 = VAR16->FUN8()->FUN9();
            if (VAR22.FUN10() || VAR22.FUN11())
                continue;
        }

        bool VAR23 = VAR16->FUN12() || VAR16->FUN13(); 
        bool VAR24 = VAR23 || (VAR16->FUN14() && VAR19 != VAR17);
        if (VAR24) {
            
            if (VAR19 == VAR21 || VAR19 == VAR25) {
                
                VAR14.FUN15(FUN16(VAR3, VAR5, VAR7, VAR9, VAR10, VAR11,
                    VAR16->FUN17(), VAR13));
            }

            
            
            if (VAR23 && (VAR19 == VAR26 || VAR18))
                VAR19 = VAR17;

            
            bool VAR27, VAR28;
            FUN18(VAR19, VAR27, VAR28);

            if (VAR27)
                VAR14.FUN19(FUN20(VAR3, VAR5, VAR7, this, VAR16->FUN21(), VAR16->FUN17(), VAR16->FUN22(), VAR13));
            if (VAR28)
                VAR14.FUN23(FUN24(VAR3, VAR5, VAR7, this, VAR16->FUN25(), VAR16->FUN17(), VAR16->FUN22(), VAR13));

            
            
            
            VAR9 = VAR3->FUN26(VAR7) + VAR16->FUN27();
            VAR10 = FUN28(VAR3, VAR16->FUN27());
            VAR11 = FUN29(VAR3, VAR16->FUN27());
        } else if (VAR19 != VAR17 && VAR16->FUN30()) {
            
            VAR14.FUN31(FUN32(VAR16)->FUN33(VAR3, VAR5, FUN34(VAR7.FUN10() + VAR16->FUN35().FUN36(), VAR7.FUN11() + VAR16->FUN35().FUN37()),
                VAR9, VAR10, VAR11, VAR13));
        }
    }
    return VAR14;
}