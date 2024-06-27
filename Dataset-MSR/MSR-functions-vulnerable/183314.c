void VAR1::FUN1(VAR2 *VAR3, PVOID VAR4, ULONG VAR5) const
{
    FUN2(reinterpret_cast<VAR6*>(VAR4), static_cast<VAR7>(VAR5));

     tTcpIpPacketParsingResult VAR8;
     VAR8 = FUN3(reinterpret_cast<VAR6*>(VAR4), VAR5,
                                                VAR9 | VAR10 | VAR11 | VAR12,


                                                VAR13);
 
     if (VAR8.VAR14 == VAR15 || VAR8.VAR16)
    {
        auto VAR17 = VAR18->VAR19.VAR20;
        auto VAR21 = static_cast<VAR2*>(VAR3);
        auto VAR22 = (VAR23->FUN4() != 0) ? VAR24 : 0;

        VAR21->VAR25 = VAR26;
        VAR21->VAR27 = VAR8.VAR28 == VAR29 ? VAR30 : VAR31;
        VAR21->VAR32 = (VAR7)(VAR8.VAR33 + VAR17 + VAR22);
        VAR21->VAR34 = (VAR7)VAR23->FUN5();
        VAR21->VAR35 = (VAR7)(VAR23->FUN6() + VAR22);
        VAR21->VAR36 = VAR37;
    }
}