FUN1 (
    VAR1         *VAR2,
    VAR3                   *VAR4,
    VAR5       **VAR6)
{
    ACPI_STATUS             VAR7 = VAR8;
    VAR5       *VAR9;
    VAR5       *VAR10 = NULL;
    VAR5       *VAR11;
    UINT8                   VAR12;
    const VAR13  *VAR14;


    FUN2 (VAR15, VAR2);


    VAR7 = FUN3 (VAR2);
    if (VAR7 == VAR16)
    {
        FUN4 (VAR16);
    }
    if (FUN5 (VAR7))
    {
        FUN4 (VAR7);
    }

    

    VAR2->VAR14 = FUN6 (VAR2->VAR17);
    VAR9 = FUN7 (VAR2->VAR17, VAR4);
    if (!VAR9)
    {
        FUN4 (VAR18);
    }

    if (VAR2->VAR14->VAR19 & VAR20)
    {
        VAR7 = FUN8 (VAR2, VAR4, VAR9, &VAR10);
        FUN9 (VAR9);
        if (FUN5 (VAR7))
        {
            FUN4 (VAR7);
        }

        *VAR6 = VAR10;
        FUN4 (VAR8);
    }

    

    if (VAR2->VAR14->VAR19 & VAR21)
    {
        
        VAR9->VAR22.VAR23 = VAR4;
        VAR9->VAR22.VAR24 = 0;
    }

    if (VAR2->VAR17 == VAR25)
    {
        
        VAR9->VAR22.VAR23 = VAR4;
        VAR9->VAR22.VAR24 = 0;
    }

    VAR11 = FUN10 (&(VAR2->VAR26));
    FUN11 (VAR11, VAR9);

    if (VAR11)
    {
        VAR14 = FUN6 (VAR11->VAR27.VAR28);
        if (VAR14->VAR19 & VAR29)
        {
            VAR12 = FUN12 (VAR14->VAR30);
            if (VAR11->VAR27.VAR31 > VAR12)
            {
                VAR9->VAR27.VAR19 |= VAR32;
            }
        }

        
        else if ((VAR11->VAR27.VAR28 == VAR33) ||
                (VAR11->VAR27.VAR28 == VAR34))
        {
            VAR9->VAR27.VAR19 |= VAR32;
        }
    }

    if (VAR2->VAR35 != NULL)
    {
        
        VAR2->VAR9 = *VAR6 = VAR9;

        VAR7 = VAR2->FUN13 (VAR2, &VAR9);
        VAR7 = FUN14 (VAR2, VAR9, VAR7);
        if (VAR7 == VAR36)
        {
            VAR7 = VAR37;
        }
    }

    FUN4 (VAR7);
}