FUN1(virDomainPtr VAR1,
                                    unsigned long long VAR2,
                                    unsigned int VAR3)
{
    virConnectPtr VAR4;

    FUN2(VAR1, "", VAR2, VAR3);

    FUN3();

    FUN4(VAR1, -1);
    VAR4 = VAR1->VAR4;

    FUN5(VAR4->VAR3, VAR5);

    if (VAR4->VAR6->VAR7) {
        if (VAR4->VAR6->FUN6(VAR1, VAR2,
                                                           VAR3) < 0)
            goto VAR5;
        return 0;
    }

    FUN7();
 VAR5:
    FUN8(VAR4);
    return -1;
}