FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
     static gpol_ret             VAR5;
     kadm5_ret_t         VAR6;
     char                        *VAR7, *VAR8;

    gss_buffer_desc             VAR9,

        VAR10;




     OM_uint32                   VAR11;
     kadm5_principal_ent_rec     VAR12;
     kadm5_server_handle_t       VAR13;
    const char                  *VAR14 = NULL;

    FUN2(VAR15,  &VAR5);

    if ((VAR5.VAR16 = FUN3(VAR2->VAR17, VAR4, &VAR13)))
        goto VAR18;

    if ((VAR5.VAR16 = FUN4((void *)VAR13)))
        goto VAR18;

    VAR5.VAR17 = VAR13->VAR17;

    VAR8 = "";

    if (FUN5(VAR4, &VAR9, &VAR10) < 0) {
        VAR5.VAR16 = VAR19;
        goto VAR18;
    }
    VAR7 = VAR2->VAR20;

    VAR5.VAR16 = VAR21;
    if (!FUN6(VAR4) && FUN7(VAR13->VAR22,
                                                       FUN8(VAR4),
                                                       VAR23, NULL, NULL))
        VAR5.VAR16 = VAR24;
    else {
        VAR5.VAR16 = FUN9(VAR13->VAR25,
                                       VAR13->VAR26,
                                       &VAR12,
                                       VAR27);
        if (VAR5.VAR16 == VAR24) {
            if (VAR12.VAR28 & VAR29 &&
                strcmp(VAR12.VAR30, VAR2->VAR20) == 0) {
                VAR5.VAR16 = VAR24;
            } else VAR5.VAR16 = VAR21;
            VAR6 = FUN10(VAR13->VAR25,
                                            &VAR12);
            VAR5.VAR16 = VAR5.VAR16 ? VAR5.VAR16 : VAR6;
        }
    }

    if (VAR5.VAR16 == VAR24) {
        VAR5.VAR16 = FUN11(VAR13, VAR2->VAR20, &VAR5.VAR31);

        if( VAR5.VAR16 != 0 )
            VAR14 = FUN12(VAR13->VAR22, VAR5.VAR16);

        FUN13(VAR8,
                 ((VAR7 == NULL) ? "" : VAR7), VAR14,
                 &VAR9, &VAR10, VAR4);
        if (VAR14 != NULL)
            FUN14(VAR13->VAR22, VAR14);

    } else {
         FUN15(VAR8, VAR7,
                    &VAR9, &VAR10, VAR4);
     }


     FUN16(&VAR11, &VAR9);
     FUN16(&VAR11, &VAR10);

VAR18:
     FUN17(VAR13);
     return &VAR5;
 
}