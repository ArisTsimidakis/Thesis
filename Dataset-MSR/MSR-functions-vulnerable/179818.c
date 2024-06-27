FUN1(VAR1 *VAR2,
                            gss_cred_id_t VAR3,
                            VAR4 *VAR5,
                            gss_name_t VAR6,
                            gss_OID VAR7,
                            OM_uint32 VAR8,
                            OM_uint32 VAR9,
                            gss_channel_bindings_t VAR10,
                            gss_buffer_t VAR11,
                            VAR12 *VAR13,
                            gss_buffer_t VAR14,
                            VAR1 *VAR15,
                            VAR1 *VAR16)
{
    OM_uint32 VAR17 = VAR18;
    krb5_error_code VAR19;
    iakerb_ctx_id_t VAR20;
    krb5_gss_cred_id_t VAR21;
    krb5_gss_name_t VAR22;
    krb5_boolean VAR23 = VAR24;
     int VAR25 = (*VAR5 == VAR26);
 
     if (VAR25) {

        VAR19 = FUN2(&VAR20);


         if (VAR19 != 0) {
             *VAR2 = VAR19;
             goto VAR27;
        }
        if (VAR3 == VAR28) {
            VAR17 = FUN3(VAR2, NULL,
                                                   VAR29,
                                                   VAR30,
                                                   VAR31,
                                                   &VAR20->VAR32, NULL, NULL);
            if (FUN4(VAR17))
                goto VAR27;
            VAR3 = VAR20->VAR32;
        }
    } else {
        VAR20 = (VAR33)*VAR5;
        if (VAR3 == VAR28)
            VAR3 = VAR20->VAR32;
    }

    VAR22 = (VAR34)VAR6;

    VAR17 = FUN5(VAR2, VAR20->VAR35,
                                   VAR3, VAR6);
    if (FUN4(VAR17))
        goto VAR27;
    VAR23 = VAR36;
    VAR21 = (VAR37)VAR3;

    VAR17 = VAR18;

    if (VAR25) {
        VAR19 = FUN6(VAR20, VAR21, VAR22, VAR9,
                                        &VAR20->VAR38);
        if (VAR19 != 0) {
            *VAR2 = VAR19;
            goto VAR27;
        }
        *VAR5 = (VAR4)VAR20;
    }

    if (VAR20->VAR38 != VAR39) {
        
        VAR19 = FUN7(VAR20,
                                     VAR21,
                                     VAR22,
                                     VAR9,
                                     VAR11,
                                     VAR14);
        if (VAR19 == VAR40)
            VAR17 = VAR41;
        if (VAR19 != 0) {
            *VAR2 = VAR19;
            goto VAR27;
        }
    }

    if (VAR20->VAR38 == VAR39) {
        krb5_gss_ctx_ext_rec VAR42;

        if (VAR23) {
            FUN8(&VAR21->VAR43);
            VAR23 = VAR24;
        }

        FUN9(VAR20, &VAR42);

        if (VAR20->VAR44 == VAR26)
            VAR11 = VAR45;

        
        VAR17 = FUN10(VAR2,
                                                     (VAR46) VAR21,
                                                     &VAR20->VAR44,
                                                     VAR6,
                                                     (VAR12)VAR47,
                                                     VAR8,
                                                     VAR9,
                                                     VAR10,
                                                     VAR11,
                                                     NULL,
                                                     VAR14,
                                                      VAR15,
                                                      VAR16,
                                                      &VAR42);

        if (VAR17 == VAR48) {

            *VAR5 = VAR20->VAR44;

            VAR20->VAR44 = VAR26;

            FUN11(VAR20);

        }




         if (VAR13 != NULL)
             *VAR13 = (VAR12)VAR49;
     } else {
        if (VAR13 != NULL)
            *VAR13 = (VAR12)VAR47;
        if (VAR15 != NULL)
            *VAR15 = 0;
        if (VAR16 != NULL)
            *VAR16 = 0;
        VAR17 = VAR50;
    }

VAR27:
    if (VAR23)
        FUN8(&VAR21->VAR43);
    if (VAR25 && FUN4(VAR17)) {
        FUN11(VAR20);
        *VAR5 = VAR26;
    }
 
     return VAR17;
 }