static void VAR1 FUN1(void *VAR2)
{
    int VAR3;
    int32_t VAR4;
    int64_t VAR5;
    ssize_t VAR6 = 0;
    V9fsString VAR7;
    size_t VAR8 = 7;
    VAR9 *VAR10;
    VAR9 *VAR11;
    VAR12 *VAR13 = VAR2;

    FUN2(&VAR7);
    VAR6 = FUN3(VAR13, VAR8, "", &VAR4, &VAR7, &VAR5, &VAR3);
    if (VAR6 < 0) {
        goto VAR14;
    }
    FUN4(VAR13->VAR15, VAR13->VAR16, VAR4, VAR7.VAR17, VAR5, VAR3);

    VAR10 = FUN5(VAR13, VAR4);
    if (VAR10 == NULL) {
        VAR6 = -VAR18;
        goto VAR14;
    }
    
    VAR11 = VAR10;
    VAR11->VAR19 = VAR20;
    VAR11->VAR21.VAR22.VAR23 = 0;
    VAR11->VAR21.VAR22.VAR24 = VAR5;
     VAR11->VAR21.VAR22.VAR3 = VAR3;
     FUN2(&VAR11->VAR21.VAR22.VAR7);
     FUN6(&VAR11->VAR21.VAR22.VAR7, &VAR7);


     VAR11->VAR21.VAR22.VAR25 = FUN7(VAR5);
     VAR6 = VAR8;
     FUN8(VAR13, VAR10);
    FUN9(VAR13, VAR6);
    FUN10(&VAR7);
}