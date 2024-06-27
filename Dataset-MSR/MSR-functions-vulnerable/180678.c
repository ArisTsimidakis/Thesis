FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    static chrand_ret           VAR5;
     VAR6               *VAR7;
     int                         VAR8;
     char                        *VAR9, *VAR10;

    gss_buffer_desc             VAR11,

        VAR12;




     OM_uint32                   VAR13;
     kadm5_server_handle_t       VAR14;
     const char                  *VAR15 = NULL;

    FUN2(VAR16, &VAR5);

    if ((VAR5.VAR17 = FUN3(VAR2->VAR18, VAR4, &VAR14)))
        goto VAR19;

    if ((VAR5.VAR17 = FUN4((void *)VAR14)))
        goto VAR19;

    VAR5.VAR18 = VAR14->VAR18;

    VAR10 = "";

    if (FUN5(VAR4, &VAR11, &VAR12) < 0) {
        VAR5.VAR17 = VAR20;
        goto VAR19;
    }
    if (FUN6(VAR14->VAR21, VAR2->VAR22, &VAR9)) {
        VAR5.VAR17 = VAR23;
        goto VAR19;
    }

    if (FUN7(VAR14, FUN8(VAR4), VAR2->VAR22)) {
        VAR5.VAR17 = FUN9((void *)VAR14, VAR2->VAR22,
                                               VAR2->VAR24,
                                               VAR2->VAR25,
                                               VAR2->VAR26,
                                               &VAR7, &VAR8);
    } else if (!(FUN10(VAR4)) &&
               FUN11(VAR14->VAR21, FUN8(VAR4),
                                  VAR27, VAR2->VAR22, NULL)) {
        VAR5.VAR17 = FUN12((void *)VAR14, VAR2->VAR22,
                                             VAR2->VAR24,
                                             VAR2->VAR25,
                                             VAR2->VAR26,
                                             &VAR7, &VAR8);
    } else {
        FUN13(VAR10, VAR9,
                   &VAR11, &VAR12, VAR4);
        VAR5.VAR17 = VAR28;
    }

    if(VAR5.VAR17 == VAR29) {
        VAR5.VAR30 = VAR7;
        VAR5.VAR31 = VAR8;
    }

    if(VAR5.VAR17 != VAR28) {
        if( VAR5.VAR17 != 0 )
            VAR15 = FUN14(VAR14->VAR21, VAR5.VAR17);

        FUN15(VAR10, VAR9, VAR15,
                 &VAR11, &VAR12, VAR4);

        if (VAR15 != NULL)
             FUN16(VAR14->VAR21, VAR15);
     }
     free(VAR9);


     FUN17(&VAR13, &VAR11);
     FUN17(&VAR13, &VAR12);

VAR19:
     FUN18(VAR14);
     return &VAR5;
 }