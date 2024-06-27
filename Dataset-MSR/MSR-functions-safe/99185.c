VAR1::VAR2<VAR1::VAR3> VAR4::FUN1(VAR5::V8WrapperType VAR6, void* VAR7)
{
    FUN2(VAR6 != VAR5::VAR8);
    FUN2(VAR6 != VAR5::VAR9);
    FUN2(VAR6 != VAR5::VAR10);

    bool VAR11 = false;
    switch (VAR6) {
#VAR12 FUN3(VAR13, VAR14) case VAR5::VAR13:
        FUN4(VAR15)
#if FUN5(VAR16)
        FUN6(VAR15)
#endif
        return FUN7(static_cast<VAR17*>(VAR7));
    case VAR5::VAR18:
        return FUN8(static_cast<VAR19*>(VAR7));
    case VAR5::VAR20:
        return FUN9(static_cast<VAR21*>(VAR7));
    case VAR5::VAR22:
        return FUN10(static_cast<VAR23*>(VAR7));
    case VAR5::VAR24:
        return FUN11(static_cast<VAR25*>(VAR7));
#if FUN5(VAR16)
        FUN12(VAR15)
        if (VAR6 == VAR5::VAR26)
            return FUN13(static_cast<VAR27*>(VAR7));
        return FUN14(VAR6, VAR7);
#endif

        FUN15(VAR15)
        VAR11 = true;
        break;
    default:
        break;
  }

#undef VAR15

    if (!VAR7)
        return VAR1::FUN16();

    
    VAR1::VAR28<VAR1::VAR29> VAR30 = VAR11 ? FUN17().FUN18(VAR7) : FUN19().FUN18(VAR7);
    if (VAR30.FUN20()) {
        VAR1::VAR31<VAR1::VAR29> VAR32 = FUN21(VAR6, VAR6, VAR7);
        if (!VAR32.FUN20()) {
            
            
            switch (VAR6) {
#VAR12 FUN3(VAR13, VAR14) \
            case VAR5::VAR13: static_cast<VAR14*>(VAR7)->FUN22(); break;
                FUN23(VAR15)
#undef VAR15
            default:
                FUN24();
            }
            VAR30 = VAR1::VAR28<VAR1::VAR29>::FUN25(VAR32);
            if (VAR11)
                FUN26(VAR7, VAR30);
            else
                FUN27(VAR7, VAR30);

            
            
            
            
            
            
            switch (VAR6) {
            case VAR5::VAR33:
                FUN28(static_cast<VAR34*>(VAR7)->FUN29(), VAR35::VAR36, VAR30);
                break;
            case VAR5::VAR37:
                FUN28(static_cast<VAR38*>(VAR7)->FUN29(), VAR35::VAR39, VAR30);
                break;
            case VAR5::VAR40:
                FUN28(static_cast<VAR41*>(VAR7)->FUN29(), VAR35::VAR42, VAR30);
                break;
            case VAR5::VAR43:
                FUN28(static_cast<VAR44*>(VAR7)->FUN29(), VAR35::VAR45, VAR30);
                break;
            case VAR5::VAR46:
                FUN28(static_cast<VAR47*>(VAR7)->FUN29(), VAR35::VAR48, VAR30);
                break;
            case VAR5::VAR49:
                FUN28(static_cast<VAR50*>(VAR7)->FUN29(), VAR35::VAR51, VAR30);
                break;
            case VAR5::VAR52: {
                VAR53* VAR54 = static_cast<VAR53*>(VAR7);
                VAR55* VAR56 = VAR54->FUN29();
                switch (VAR54->FUN30()) {
                case VAR53::VAR57:
                    FUN28(VAR56, VAR35::VAR58, VAR30);
                    break;
                case VAR53::VAR59:
                    FUN28(VAR56, VAR35::VAR60, VAR30);
                    break;
                case VAR53::VAR61:
                    FUN28(VAR56, VAR35::VAR62, VAR30);
                    break;
                case VAR53::VAR63:
                    FUN28(VAR56, VAR35::VAR64, VAR30);
                    break;
                case VAR53::VAR65:
                    FUN28(VAR56, VAR35::VAR66, VAR30);
                    break;
                case VAR53::VAR67:
                    FUN28(VAR56, VAR35::VAR68, VAR30);
                    break;
                }
                break;
            }
            default:
                break;
            }
        }
    }
    return VAR30;
}