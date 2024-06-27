static void FUN1(VAR1 *VAR2, const VAR3 *VAR4,
                                 const VAR5 *VAR6)
{
    const VAR7 *VAR8 = (const VAR7*)VAR4->VAR9[VAR6->VAR10]->VAR11;
    const VAR12 *VAR13 = &VAR6->VAR14;
    unsigned int VAR15 = 0, VAR16 = 0;

    VAR2->VAR17             = VAR6->VAR17;
    VAR2->VAR18         = VAR6->VAR19;
    VAR2->VAR20        = VAR6->VAR21;
    VAR2->VAR19               = VAR6->VAR19  - VAR13->VAR22 - VAR13->VAR23;
    VAR2->VAR21              = VAR6->VAR21 - VAR13->VAR24  - VAR13->VAR25;
    VAR2->VAR26        = VAR6->VAR27[VAR6->VAR28 - 1].VAR29;
    VAR2->VAR30             = VAR6->VAR31.VAR32.VAR33;
    VAR2->VAR34               = VAR6->VAR31.VAR32.VAR35;

    FUN2(VAR2, VAR6->VAR36.VAR37);

    if (VAR6->VAR36.VAR38)
        VAR2->VAR39 = VAR6->VAR36.VAR40 ? VAR41
                                                            : VAR42;
    else
        VAR2->VAR39 = VAR42;

    if (VAR6->VAR36.VAR43) {
        VAR2->VAR44 = VAR6->VAR36.VAR45;
        VAR2->VAR46       = VAR6->VAR36.VAR47;
        VAR2->VAR48      = VAR6->VAR36.VAR49;
    } else {
        VAR2->VAR44 = VAR50;
        VAR2->VAR46       = VAR51;
        VAR2->VAR48      = VAR52;
    }

    if (VAR8->VAR53) {
        VAR15 = VAR8->VAR54;
        VAR16 = VAR8->VAR55;
    } else if (VAR6->VAR36.VAR56) {
        VAR15 = VAR6->VAR36.VAR57;
        VAR16 = VAR6->VAR36.VAR58;
    }

    if (VAR15 != 0 && VAR16 != 0)
        FUN3(&VAR2->VAR59.VAR16, &VAR2->VAR59.VAR15,
                  VAR15, VAR16, 1 << 30);
}