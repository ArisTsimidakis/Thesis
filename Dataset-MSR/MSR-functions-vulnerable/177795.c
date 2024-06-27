VAR1::FUN1(const VAR2* VAR3)

    : VAR4::FUN1(VAR3),


         FUN2(VAR5::FUN3(VAR3, true, VAR6)),
         FUN4(VAR5::FUN3(VAR3, false, VAR7)),
         FUN5(true), FUN6(nullptr)
{
    const VAR2* VAR8 = VAR5::FUN7(VAR3, VAR9);
    if (VAR8 && VAR8->FUN8()) {
        VAR10 FUN9(VAR8->FUN10()->FUN11());
        if (VAR11.FUN12() && *VAR11.FUN12()) {
            VAR12 = VAR11.FUN12();
            VAR13 = VAR5::FUN3(VAR8, true, VAR14);
            VAR15 = VAR5::FUN13(VAR8, nullptr, VAR16);
        }
    }

    if (VAR12.FUN14()) {
        VAR8 = VAR5::FUN7(VAR3, VAR17);
        if (VAR8 && VAR8->FUN8() && VAR8->FUN15(nullptr, VAR18)) {
            VAR19 = VAR5::FUN13(VAR8, nullptr, VAR18);
            VAR10 FUN16(VAR8->FUN10()->FUN11());
            if (VAR20.FUN12() && *VAR20.FUN12())
                VAR21 = VAR20.FUN12();
        }
    }

    if (!VAR22) {
        VAR8 = VAR5::FUN7(VAR3, VAR23);
        string VAR24 = VAR5::FUN13(VAR8, nullptr, VAR25);
        if (!VAR24.FUN14()) {
            VAR26* VAR27 = VAR28::FUN17().VAR29.FUN18(VAR24.FUN19(), VAR8);
            if (!dynamic_cast<VAR30*>(VAR27)) {
                delete VAR27;
                throw FUN20("");
            }
            VAR31.FUN21(dynamic_cast<VAR30*>(VAR27));
            VAR32.FUN21(VAR28::FUN17().VAR33.FUN18(VAR34, nullptr));
        }

        if (!VAR31.FUN12() || !VAR32.FUN12())
            throw FUN20("");
    }
}