FUN1(virDomainPtr VAR1, virDomainMemoryStatPtr VAR2,
                     unsigned int VAR3, unsigned int VAR4)
{
    virConnectPtr VAR5;
    unsigned long VAR6 = 0;

    FUN2(VAR1, "",
                     VAR2, VAR3, VAR4);

    FUN3();

    FUN4(VAR1, -1);

    if (!VAR2 || VAR3 == 0)
        return 0;

    if (VAR3 > VAR7)
        VAR3 = VAR7;

    VAR5 = VAR1->VAR5;
    if (VAR5->VAR8->VAR9) {
        VAR6 = VAR5->VAR8->FUN5(VAR1, VAR2, VAR3,
                                                       VAR4);
        if (VAR6 == -1)
            goto VAR10;
        return VAR6;
    }

    FUN6();

 VAR10:
    FUN7(VAR1->VAR5);
    return -1;
}