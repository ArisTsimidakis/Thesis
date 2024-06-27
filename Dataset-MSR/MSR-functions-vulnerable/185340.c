void VAR1::FUN1(const VAR2& VAR3)
{
    if (!FUN2().FUN3()) {
        
        if (VAR4)
            FUN4();
    }

    if (FUN5() == FUN6(VAR3))
        return;

    FUN1(FUN6(VAR3));

    VAR5* VAR6 = FUN2().FUN7();
    FUN8(VAR6);

    VAR7<VAR8> VAR9 = FUN2().FUN9();

    FUN10(FUN11(""), "", "", VAR10::FUN12(&FUN2()));
    
    VAR11::FUN13(&FUN2());

    const VAR12* VAR13 = FUN2().FUN14();

    
    
    if (!VAR9->FUN15()) {
        
        FUN16()->FUN17().FUN18();
         FUN2().FUN19(FUN2().FUN20(VAR13));
         
         VAR9->FUN21();

        

        

        VAR9->FUN22();

        FUN23(VAR9->FUN24());


         FUN25();
     }
 
    
    VAR6->FUN26().FUN27();

    FloatQuad VAR14 = FUN28(FUN16()->FUN29()->FUN30());

    VAR14 = VAR13->FUN31(VAR14);
    VAR6->FUN32().FUN33(VAR14);

    bool VAR15 = true;

    if (!FUN2().FUN3() && FUN2().FUN34()->FUN35()->FUN36()) {
        
        DisableCompositingQueryAsserts VAR16;
        bool VAR17 = FUN37()
            && !FUN16()->FUN38()
            && !FUN16()->FUN39()
            && !FUN16()->FUN40()
            && FUN2().FUN41()->FUN42().FUN43() != VAR18;

        if (FUN44() || VAR17)
            VAR15 = false;
    }

    
    if (VAR15) {
        if (FUN2().FUN9()->FUN15())
            FUN2().FUN45(true);
        else
            FUN2().FUN46(VAR13, FUN16()->FUN29()->FUN30(), VAR19);
    }

    
    if (FUN2().FUN47())
        FUN2().FUN47()->FUN48().FUN49(FUN2().FUN47());

    if (VAR20* VAR21 = FUN2().FUN48().FUN50())
        VAR21->FUN51(&FUN2());

    VAR11::FUN52(&FUN2());
}