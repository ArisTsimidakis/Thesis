VAR1 *FUN1(qemu_irq VAR2, qemu_irq VAR3, qemu_irq VAR4)
{
    VAR5 *VAR6;

    VAR6 = (VAR5 *)
            FUN2(sizeof(VAR5));
    memset(VAR6, 0, sizeof(VAR5));
    VAR6->VAR7 = 400;
    VAR6->VAR8 = 240;
    VAR6->VAR9 = 0;
    VAR6->VAR10 = VAR6->VAR11 = 0;
    VAR6->VAR12 = FUN3(VAR13, VAR14, VAR6);
    VAR6->VAR15 = VAR2;
    VAR6->VAR16 = VAR3;
    VAR6->VAR17 = VAR4;
    VAR6->VAR18 = 0x2301;
    VAR6->VAR19 = "";

    VAR6->VAR20[0] = 0;
    VAR6->VAR20[1] = 1;
    VAR6->VAR20[2] = 1;
    VAR6->VAR20[3] = 0;
    VAR6->VAR20[4] = 1;
    VAR6->VAR20[5] = 0;
    VAR6->VAR20[6] = 1;
    VAR6->VAR20[7] = 0;

    VAR6->VAR21.VAR22 = VAR6;
    VAR6->VAR21.send = (void *) VAR23;
    VAR6->VAR21.VAR24 = (void *) VAR25;

    VAR6->VAR26.VAR22 = VAR6;
    VAR6->VAR26.VAR27 = (void *) VAR28;
    VAR6->VAR26.VAR29 = (void *) VAR30;
    VAR6->VAR26.VAR31.VAR32 = VAR6->VAR33;
    VAR6->VAR26.VAR34.VAR32 = VAR6->VAR35;

    FUN4(VAR6);

    FUN5(VAR36, VAR6, 1,
                    "");

    FUN6(VAR6->VAR19, &VAR6->VAR37);

    FUN7((void *) VAR38, VAR6);
    FUN8(NULL, VAR6->VAR19, -1, 0, VAR39, VAR40, VAR6);

    return &VAR6->VAR21;
}