void FUN1(VAR1 *VAR2, qemu_irq VAR3, VAR4 *VAR5,
                                 VAR6 *VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11 = FUN2(VAR7);
    int VAR12 = FUN3(VAR11->VAR13);
    int VAR14 = FUN4(VAR11->VAR15);
    if (VAR14 < 0) {
        FUN5(VAR9, ""
                   VAR16 "");
        return;
    }

    VAR5->VAR17[VAR14].VAR18 |= (1U << VAR12);

    VAR2->VAR19.VAR20[0] |= VAR21;
    FUN6(VAR2, VAR3);
}