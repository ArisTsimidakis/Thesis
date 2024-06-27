void VAR1::FUN1(VAR2& VAR3, int VAR4, int VAR5)
{
    if (!VAR3.FUN2(FUN3()) || FUN3()->FUN4()->FUN5() != VAR6 || VAR3.VAR7 != VAR8)
        return;

    
    IntRect VAR9 = FUN6();
    int VAR10 = VAR9.FUN7();
    int VAR11 = VAR9.FUN8();
    int VAR12 = VAR9.FUN9();
    int VAR13 = VAR9.FUN10();

    
    bool VAR14 = FUN3()->FUN11()->FUN12();
    if (!FUN13() && !VAR14) {
        VAR15* VAR16 = FUN14();
        int& VAR17 = FUN15() ? VAR11 : VAR10;
        int& VAR18 = FUN15() ? VAR13 : VAR12;
        int VAR19 = FUN16(VAR16->FUN17(), VAR17 + VAR18);
        VAR17 = FUN18(VAR16->FUN19(), VAR17);
        VAR18 = VAR19 - VAR17;
    }
    
    
    VAR20 FUN20(VAR10, VAR11, VAR12, VAR13);
    FUN21(VAR21);
    VAR4 += VAR21.FUN7();
    VAR5 += VAR21.FUN8();
    
    VAR22* VAR23 = VAR3.VAR23;
    
    
    
    VAR24* VAR25 = FUN3()->FUN4(VAR26);
    if ((!FUN22() && VAR26 && VAR25 != FUN3()->FUN4()) || (FUN22() && FUN3()->FUN23())) {
        
        FUN24(VAR23, VAR25, VAR27, VAR4, VAR5, VAR12, VAR13);

        Color VAR28 = VAR25->FUN25(VAR29);
        FUN26(VAR3, VAR28, VAR25->FUN27(), VAR4, VAR5, VAR12, VAR13);
        FUN24(VAR23, VAR25, VAR30, VAR4, VAR5, VAR12, VAR13);

        
        
        if (FUN22() && FUN3()->FUN4()->FUN28()) {
            VAR31* VAR32 = FUN3()->FUN4()->FUN29().FUN30();
            bool VAR33 = VAR32 && VAR32->FUN31(VAR25->FUN32());
            if (VAR33 && !VAR32->FUN33())
                return; 

            
            
            if (!VAR33 || (!FUN34() && !FUN35()))
                FUN36()->FUN37(VAR23, VAR4, VAR5, VAR12, VAR13, FUN3()->FUN4(), FUN38(), FUN39());
            else {
                
                
                
                
                
                
                
                
                int VAR34 = 0;
                for (VAR1* VAR35 = FUN34(); VAR35; VAR35 = VAR35->FUN34())
                    VAR34 += VAR35->FUN40();
                int VAR36 = VAR34;
                for (VAR1* VAR35 = this; VAR35; VAR35 = VAR35->FUN35())
                    VAR36 += VAR35->FUN40();
                int VAR37 = VAR4 - (FUN15() ? VAR34 : 0);
                int VAR38 = VAR5 - (FUN15() ? 0 : VAR34);
                int VAR39 = FUN15() ? VAR36 : VAR12;
                int VAR40 = FUN15() ? VAR13 : VAR36;
                VAR23->FUN41();
                VAR23->FUN42(FUN43(VAR4, VAR5, VAR12, VAR13));
                FUN36()->FUN37(VAR23, VAR37, VAR38, VAR39, VAR40, FUN3()->FUN4());
                VAR23->FUN44();
            }
        }
    }
}