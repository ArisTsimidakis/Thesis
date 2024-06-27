VAR1 * FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
 {
     static getprivs_ret            VAR6;

    gss_buffer_desc                VAR7, VAR8;




     OM_uint32                      VAR9;
     kadm5_server_handle_t          VAR10;
     const char                     *VAR11 = NULL;

    FUN2(VAR12, &VAR6);

    if ((VAR6.VAR13 = FUN3(*VAR3, VAR5, &VAR10)))
        goto VAR14;

    if ((VAR6.VAR13 = FUN4((void *)VAR10)))
        goto VAR14;

    VAR6.VAR15 = VAR10->VAR15;

    if (FUN5(VAR5, &VAR7, &VAR8) < 0) {
        VAR6.VAR13 = VAR16;
        goto VAR14;
    }

    VAR6.VAR13 = FUN6((void *)VAR10, &VAR6.VAR17);
    if( VAR6.VAR13 != 0 )
        VAR11 = FUN7(VAR10->VAR18, VAR6.VAR13);

    FUN8("", VAR7.VAR19, VAR11,
             &VAR7, &VAR8, VAR5);

     if (VAR11 != NULL)
         FUN9(VAR10->VAR18, VAR11);
 


     FUN10(&VAR9, &VAR7);
     FUN10(&VAR9, &VAR8);

VAR14:
     FUN11(VAR10);
     return &VAR6;
 }