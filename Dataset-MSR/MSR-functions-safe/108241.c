VAR1* VAR2::FUN1(VAR2* VAR3, const VAR4& VAR5, const VAR6& VAR7, bool& VAR8)
{ 
    FUN2(!VAR7.VAR9 || VAR5.FUN3().FUN4());

    if (!VAR5.FUN3().FUN4() && VAR5.FUN3() != "") {
        VAR1* VAR10 = VAR3->FUN5()->FUN6()->FUN7(VAR5.FUN3());
        if (VAR10 && FUN8(VAR10)) {
            if (!VAR5.FUN9().FUN10().FUN4())
                VAR10->FUN11()->FUN12(VAR5, false, false, 0, 0, VAR11);
            if (VAR12* VAR13 = VAR10->FUN13())
                VAR13->FUN14()->FUN15();
            VAR8 = false;
            return VAR10;
        }
    }

    
    if (FUN16(VAR14, VAR15))
        return 0;

    
    FrameLoadRequest VAR16 = VAR5;
    VAR16.FUN9().FUN17(VAR17);
    FUN18(VAR16.FUN9(), FUN19());

    VAR12* VAR18 = VAR14->FUN13();
    if (!VAR18)
        return 0;
        
    VAR12* VAR13 = VAR18->FUN14()->FUN1(VAR14, VAR16, VAR7);
    if (!VAR13)
        return 0;

    VAR1* VAR10 = VAR13->FUN20();
    if (VAR5.FUN3() != "")
        VAR10->FUN6()->FUN21(VAR5.FUN3());

    VAR13->FUN14()->FUN22(VAR7.VAR19 || VAR7.VAR20);
    VAR13->FUN14()->FUN23(VAR7.VAR21);
    VAR13->FUN14()->FUN24(VAR7.VAR22);
    VAR13->FUN14()->FUN25(VAR7.VAR23);
    VAR13->FUN14()->FUN26(VAR7.VAR24);

    
    
    

    FloatRect VAR25 = VAR13->FUN14()->FUN27();
    FloatSize VAR26 = VAR13->FUN14()->FUN28().FUN29();
    if (VAR7.VAR27)
        VAR25.FUN30(VAR7.VAR28);
    if (VAR7.VAR29)
        VAR25.FUN31(VAR7.VAR30);
    if (VAR7.VAR31)
        VAR25.FUN32(VAR7.VAR32 + (VAR25.FUN33() - VAR26.FUN33()));
    if (VAR7.VAR33)
        VAR25.FUN34(VAR7.VAR34 + (VAR25.FUN35() - VAR26.FUN35()));
    VAR13->FUN14()->FUN36(VAR25);

    VAR13->FUN14()->FUN37();

    VAR8 = true;
    return VAR10;
}