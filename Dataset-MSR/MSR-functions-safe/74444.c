FUN1(
                VAR1 *VAR2,
                ULONG VAR3,
                ULONG VAR4,
                tTcpIpPacketParsingResult VAR5,
                ULONG VAR6)
{
    USHORT  VAR7;
    tTcpIpPacketParsingResult VAR8 = VAR5;
    VAR9 *VAR10 = (VAR9 *)FUN2(VAR2[0].VAR11, VAR4);
    VAR12 *VAR13 = (VAR12 *)FUN2(VAR10, VAR8.VAR14);
    USHORT VAR15 = VAR13->VAR16;
    USHORT VAR17 = FUN3(VAR10, VAR8);
    if (VAR3 >= VAR8.VAR14)
    {
        VAR7 = FUN4(VAR10, VAR8, VAR17);
        VAR8.VAR18 = FUN5(VAR7, VAR15) ?  VAR19 : VAR20;
        if (VAR6 & VAR21)
        {
            if (VAR3 >= (VAR22)(VAR8.VAR14 + sizeof(VAR12)))
            {
                VAR13->VAR16 = VAR7;
                VAR8.VAR23 = VAR8.VAR18 != VAR19;
            }
            else
                VAR8.VAR24 = VAR25;
        }
        else if (VAR8.VAR18 != VAR19 || (VAR6 & VAR26))
        {
            if (VAR8.VAR27)
            {
                VAR13->VAR16 = VAR7;
                FUN6(VAR13, VAR2, VAR4 + VAR8.VAR14, VAR17);
                if (FUN5(VAR13->VAR16, VAR15))
                    VAR8.VAR18 = VAR28;

                if (!(VAR6 & VAR26))
                    VAR13->VAR16 = VAR15;
                else
                    VAR8.VAR23 =
                        VAR8.VAR18 == VAR20 || VAR8.VAR18 == VAR19;
            }
            else
                VAR8.VAR18 = VAR25;
        }
        else if (VAR8.VAR27)
        {
            
            
            
            FUN6(VAR13, VAR2, VAR4 + VAR8.VAR14, VAR17);
            if (FUN5(VAR13->VAR16, VAR15))
                VAR8.VAR18 = VAR28;
            VAR13->VAR16 = VAR15;
        }
    }
    else
        VAR8.VAR29 = VAR30;

    return VAR8;
}