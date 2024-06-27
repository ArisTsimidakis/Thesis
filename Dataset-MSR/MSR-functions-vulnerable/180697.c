FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
 {
     static generic_ret              VAR5;
     char                            *VAR6;

    gss_buffer_desc                 VAR7,

        VAR8;




     OM_uint32                       VAR9;
     kadm5_server_handle_t           VAR10;
     const char                      *VAR11 = NULL;

    FUN2(VAR12, &VAR5);

    if ((VAR5.VAR13 = FUN3(VAR2->VAR14, VAR4, &VAR10)))
        goto VAR15;

    if ((VAR5.VAR13 = FUN4((void *)VAR10)))
        goto VAR15;

    VAR5.VAR14 = VAR10->VAR14;

    if (FUN5(VAR4, &VAR7, &VAR8) < 0) {
        VAR5.VAR13 = VAR16;
        goto VAR15;
    }
    if (FUN6(VAR10->VAR17, VAR2->VAR18, &VAR6)) {
        VAR5.VAR13 = VAR19;
        goto VAR15;
    }

    if (!(FUN7(VAR4)) &&
        FUN8(VAR10->VAR17, FUN9(VAR4),
                           VAR20, VAR2->VAR18, NULL)) {
        VAR5.VAR13 = FUN10((void *)VAR10, VAR2->VAR18,
                                            VAR2->VAR21,
                                            VAR2->VAR22,
                                            VAR2->VAR23,
                                            VAR2->VAR24, VAR2->VAR25);
    } else {
        FUN11("", VAR6,
                   &VAR7, &VAR8, VAR4);
        VAR5.VAR13 = VAR26;
    }

    if(VAR5.VAR13 != VAR26) {
        if( VAR5.VAR13 != 0 )
            VAR11 = FUN12(VAR10->VAR17, VAR5.VAR13);

        FUN13("", VAR6, VAR11,
                 &VAR7, &VAR8, VAR4);

        if (VAR11 != NULL)
            FUN14(VAR10->VAR17, VAR11);
     }
 
     free(VAR6);


     FUN15(&VAR9, &VAR7);
     FUN15(&VAR9, &VAR8);

VAR15:
     FUN16(VAR10);
     return &VAR5;
 }