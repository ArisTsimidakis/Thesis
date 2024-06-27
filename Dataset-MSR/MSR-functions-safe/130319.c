void VAR1::FUN1(const VAR2* VAR3, VAR4* VAR5, VAR4& VAR6)
{
    const VAR2* VAR7 = VAR3;

    
    InvalidationSetFeatures VAR8;

    for (const VAR2* VAR9 = VAR3; VAR9; VAR9 = VAR9->FUN2()) {
        InvalidationType VAR10 = VAR5 ? VAR11 : VAR12;
        if (VAR13* VAR14 = FUN3(*VAR9, VAR10)) {
            if (VAR5) {
                VAR15* VAR16 = FUN4(VAR14);
                VAR16->FUN5(VAR5->VAR17);

                FUN6(*VAR14, *VAR5);
                if (VAR5 == &VAR6)
                    VAR16->FUN7().FUN8();
                else
                    FUN6(VAR16->FUN7(), VAR6);
            } else {
                FUN6(*VAR14, VAR6);
            }
        } else {
            if (VAR9->FUN9())
                VAR6.VAR18 = true;
            if (VAR9->FUN10())
                VAR6.VAR19 = true;
            if (const VAR20* VAR21 = VAR9->FUN11()) {
                FUN12(FUN13(VAR9->FUN14()));
                for (const VAR2* VAR22 = VAR21->FUN15(); VAR22; VAR22 = VAR20::FUN16(*VAR22))
                    FUN1(VAR22, VAR5, VAR6);
            }
        }

        if (VAR9->FUN17() == VAR2::VAR23)
            continue;

        if (VAR9->FUN18())
            VAR6.VAR18 = true;

        if (!VAR9->FUN19()) {
            VAR7 = VAR9->FUN2();
            VAR5 = nullptr;
            continue;
        }

        if (VAR5) {
            if (VAR5->VAR17 == VAR24)
                continue;

            if (VAR9->FUN17() == VAR2::VAR25)
                VAR5->VAR17++;
            else
                VAR5->VAR17 = VAR24;
            continue;
        }

        VAR8 = FUN20();
        auto VAR26 = FUN21(*VAR7, VAR8, VAR27);
        FUN12(VAR26.VAR28);
        VAR8.VAR29 = VAR26.VAR30 == VAR31;
        VAR5 = &VAR8;
    }
}