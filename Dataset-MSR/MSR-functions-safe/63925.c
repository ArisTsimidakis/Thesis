static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    uint32_t VAR7[16], VAR8, VAR9, VAR10;
    VAR11 *VAR12, *VAR13, VAR14, VAR15;
    int VAR16, VAR17;

    VAR12 = VAR2->VAR18;
    VAR13 = VAR4->VAR19[0];

    FUN2(VAR2, VAR7);
    FUN3(VAR2, VAR6->VAR20, VAR2->VAR18);

    for (VAR17 = 0; VAR17 < VAR6->VAR21; VAR17++) {
        VAR8 = VAR7[0] & 0xFF0000;
        VAR9 = VAR7[0] & 0xFF00;
        VAR10 = VAR7[0] & 0xFF;
        for (VAR16 = 0; VAR16 < VAR6->VAR20; VAR16++) {
            VAR14  = *VAR12++;
            VAR15     = VAR14 >> 4;
            VAR14 &= 15;
            switch (VAR15) {
            case 0:
                VAR8 = VAR7[VAR14] & 0xFF0000;
                VAR9 = VAR7[VAR14] & 0xFF00;
                VAR10 = VAR7[VAR14] & 0xFF;
                break;
            case 1:
                VAR10 = VAR14 * 0x11;
                break;
            case 2:
                VAR8 = VAR14 * 0x11 << 16;
                break;
            case 3:
                VAR9 = VAR14 * 0x11 << 8;
                break;
            }
            FUN4(VAR13 + VAR16 * 3, VAR8 | VAR9 | VAR10);
        }
        VAR13 += VAR4->VAR22[0];
    }
}