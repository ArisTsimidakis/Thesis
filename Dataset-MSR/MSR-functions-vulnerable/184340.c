bool VAR1::FUN1(const VAR2::VAR3& VAR4)
{
#if VAR5
    FUN2(VAR6, "", VAR4.FUN3().FUN4());
#endif

#if FUN5(VAR7)
    if (!VAR8->VAR9)
        return false;

    if (VAR8->VAR10->FUN6())
        return false;

    VAR11* VAR12 = VAR8->VAR13.FUN7();
    if (VAR12)
         return VAR8->FUN8(VAR12, VAR4);
 
     VAR2::TouchEvent VAR14 = VAR4;

    for (unsigned VAR15 = 0; VAR15 < VAR4.VAR16.FUN9(); VAR15++) {

        VAR14.VAR16[VAR15].VAR17 = VAR8->FUN10(VAR14.VAR16[VAR15].VAR17);

        VAR14.VAR16[VAR15].VAR18 = VAR14.VAR16[VAR15].VAR18;

    }


     if (VAR4.FUN11())
         VAR8->VAR19 = true;
     else if (VAR14.VAR20 == VAR2::VAR3::VAR21 || VAR14.VAR20 == VAR2::VAR3::VAR22)
        VAR8->VAR19 = false;

    if (VAR14.VAR20 == VAR2::VAR3::VAR21) {
        VAR8->FUN12();
        VAR8->VAR23->FUN13(VAR14.VAR16[0]);

        
        VAR24* VAR25 = VAR8->VAR23->FUN14().FUN15();
        if (VAR25)
            VAR8->VAR23->FUN16();
    }

    bool VAR26 = false;

    if (!VAR4.VAR20 != VAR2::VAR3::VAR27)
        VAR26 = VAR8->VAR9->FUN17()->FUN18(FUN19(&VAR14));

    if (VAR8->VAR28) {
        if (VAR14.VAR20 == VAR2::VAR3::VAR29 || VAR14.VAR20 == VAR2::VAR3::VAR22)
            VAR8->VAR28 = false;
        return true;
    }

    if (VAR26) {
        if (VAR14.VAR20 == VAR2::VAR3::VAR21)
            VAR8->VAR28 = true;
        return true;
    }

    if (VAR4.FUN20())
        VAR8->VAR23->FUN13(VAR14.VAR16[0]);

#endif

    return false;
}