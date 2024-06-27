void VAR1::update(VAR2& VAR3, const VAR4& VAR5)
{
    if (VAR6)
        return;

    
    
    IntRect VAR7 = FUN1(VAR5);
    FUN2(VAR8, VAR7);
    VAR8 = VAR7;

    FUN3(VAR5);

    
    
    IntRect VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    FUN4(VAR5, VAR10, VAR11, VAR12, VAR13);
    for (int VAR14 = VAR11; VAR14 <= VAR13; ++VAR14) {
        for (int VAR15 = VAR10; VAR15 <= VAR12; ++VAR15) {
            VAR16* VAR17 = VAR18[FUN5(VAR15, VAR14)].FUN6();
            if (!VAR17)
                VAR17 = FUN7(VAR15, VAR14);
            if (!VAR17->FUN8()->FUN9(VAR19, VAR20::VAR21))
                VAR17->VAR22 = FUN10(VAR15, VAR14);
            VAR9.FUN11(VAR17->VAR22);
        }
    }

    if (VAR9.FUN12())
        return;

    const IntRect VAR23 = FUN13(VAR9);
    VAR20* VAR24 = FUN14();
#if FUN15(VAR25)
    VAR26<VAR27::VAR28> FUN16(new VAR27::FUN17(VAR23.FUN18(), VAR23.FUN19(), false));
    VAR26<VAR29> FUN20(new FUN21(VAR30.FUN6()));
    VAR26<VAR31> FUN22(new FUN23(reinterpret_cast<VAR32*>(VAR33.FUN6())));

    
    VAR30->FUN24(static_cast<VAR34>(-VAR23.FUN25()), static_cast<VAR34>(-VAR23.FUN26()));

    VAR3.FUN27(*VAR35, VAR23);

    
    const VAR36& VAR37 = VAR30->FUN28()->FUN29(false);
    FUN30(VAR37.FUN18() == VAR23.FUN18() && VAR37.FUN19() == VAR23.FUN19());
    if (VAR37.FUN18() != VAR23.FUN18() || VAR37.FUN19() != VAR23.FUN19())
        FUN31();
    VAR38* VAR39 = static_cast<VAR38*>(VAR37.FUN32());
    if (!VAR39)
        FUN31();
#VAR40 FUN15(VAR41)
    VAR42<VAR38> VAR43;
    int VAR44 = 4 * VAR23.FUN18();
    VAR43.FUN33(VAR44 * VAR23.FUN19());
    memset(VAR43.FUN34(), 0, VAR43.FUN35());
    VAR45<VAR46> FUN36(VAR47, FUN37());
    VAR45<VAR48> VAR49;
    VAR49.FUN38(FUN39(VAR43.FUN34(),
                                                       VAR23.FUN18(), VAR23.FUN19(), 8, VAR44,
                                                       VAR50.FUN6(),
                                                       VAR51 | VAR52));
    FUN40(VAR49.FUN6(), 0, VAR23.FUN19());
    FUN41(VAR49.FUN6(), 1, -1);
    VAR26<VAR31> FUN42(new FUN23(VAR49.FUN6()));

    
    FUN40(VAR49.FUN6(), -VAR23.FUN25(), -VAR23.FUN26());
    VAR3.FUN27(*VAR53, VAR23);

    
    FUN30(static_cast<int>(FUN43(VAR49.FUN6())) == VAR23.FUN18() && static_cast<int>(FUN44(VAR49.FUN6())) == VAR23.FUN19());
    VAR38* VAR39 = static_cast<VAR38*>(VAR43.FUN34());
#else
#VAR54 ""
#endif

    
    if (!VAR18.FUN35())
        return;

    for (int VAR14 = VAR11; VAR14 <= VAR13; ++VAR14) {
        for (int VAR15 = VAR10; VAR15 <= VAR12; ++VAR15) {
            VAR16* VAR17 = VAR18[FUN5(VAR15, VAR14)].FUN6();
            if (!VAR17)
                FUN31();
            if (!VAR17->FUN45())
                continue;

            
            IntRect VAR55 = FUN46(VAR15, VAR14);
            const IntPoint VAR56 = VAR55.FUN47();
            VAR55.FUN48(FUN13(VAR17->VAR22));
            if (VAR55.FUN12())
                continue;

            if (!VAR17->FUN8()->FUN49(VAR19, VAR20::VAR21)) {
                VAR6 = true;
                FUN50();
                return;
            }

            
            VAR4 FUN51(FUN52(VAR55.FUN25() - VAR56.FUN25(), VAR55.FUN26() - VAR56.FUN26()), VAR55.FUN35());
            if (VAR57.FUN25() < 0)
                FUN31();
            if (VAR57.FUN26() < 0)
                FUN31();

            
            VAR58 FUN53(VAR55.FUN25() - VAR23.FUN25(), VAR55.FUN26() - VAR23.FUN26());
            if (VAR59.FUN25() < 0)
                FUN31();
            if (VAR59.FUN26() < 0)
                FUN31();
            if (VAR59.FUN25() + VAR57.FUN18() > VAR23.FUN18())
                FUN31();
            if (VAR59.FUN26() + VAR57.FUN19() > VAR23.FUN19())
                FUN31();

            VAR38* VAR60;
            if (VAR23.FUN18() == VAR55.FUN18() && !VAR59.FUN25())
                VAR60 = &VAR39[4 * VAR59.FUN26() * VAR23.FUN18()];
            else {
                
                
                for (int VAR61 = 0; VAR61 < VAR57.FUN19(); ++VAR61)
                    memcpy(&VAR62[VAR57.FUN18() * 4 * VAR61],
                           &VAR39[4 * (VAR59.FUN25() + (VAR59.FUN26() + VAR61) * VAR23.FUN18())],
                           VAR57.FUN18() * 4);

                VAR60 = &VAR62[0];
            }

            VAR17->FUN8()->FUN54();
            FUN55(VAR24, VAR24->FUN56(VAR20::VAR63, 0, VAR57.FUN25(), VAR57.FUN26(), VAR57.FUN18(), VAR57.FUN19(), VAR20::VAR21, VAR20::VAR64, VAR60));

            VAR17->FUN57();
        }
    }
}