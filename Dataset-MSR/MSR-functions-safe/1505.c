static void VAR1 FUN1(void *VAR2)
{
    int32_t VAR3;
    int VAR4 = 0;
    size_t VAR5 = 7;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2;

    VAR4 = FUN2(VAR9, VAR5, "", &VAR3);
    if (VAR4 < 0) {
        goto VAR10;
    }
    FUN3(VAR9->VAR11, VAR9->VAR12, VAR3);

    VAR7 = FUN4(VAR9, VAR3);
    if (VAR7 == NULL) {
        VAR4 = -VAR13;
        goto VAR10;
    }
    
    if (!(VAR9->VAR14->VAR15.VAR16 & VAR17)) {
        VAR4 = -VAR18;
        goto VAR19;
    }
    
    VAR4 = FUN5(VAR9, &VAR7->VAR20);
    if (VAR4 < 0) {
        goto VAR19;
    }
    VAR4 = FUN6(VAR9, &VAR7->VAR20);
    if (!VAR4) {
        VAR4 = VAR5;
    }
VAR19:
    
    FUN7(VAR9->VAR14, VAR7->VAR3);
    FUN8(VAR9, VAR7);
VAR10:
    FUN9(VAR9, VAR4);
}