FUN1(VAR1, VAR2, VAR3, VAR4,
        VAR5, VAR6, VAR7, VAR8)
    VAR9 *VAR1;
    gss_ctx_id_t VAR2;
    int VAR3;
    gss_qop_t VAR4;
    gss_buffer_t VAR5;
    int *VAR6;
    gss_buffer_t VAR7;
    int VAR8;
{
    VAR10 *VAR11;
    krb5_error_code VAR12;
    krb5_context VAR13;

    VAR7->VAR14 = 0;
    VAR7->VAR15 = NULL;

    
    if (VAR4 != 0) {
        *VAR1 = (VAR9) VAR16;
        return VAR17;
    }
 
     VAR11 = (VAR10 *) VAR2;
 

    if (! VAR11->VAR18) {


         *VAR1 = VAR19;
         return(VAR20);
     }

    VAR13 = VAR11->VAR21;
    switch (VAR11->VAR22)
    {
    case 0:
        VAR12 = FUN2(VAR13, VAR11->VAR23, VAR11->VAR24,
                                  &VAR11->VAR25, VAR11->VAR26,
                                  VAR5, VAR7,
                                  VAR11->VAR27, VAR11->VAR28, VAR11->VAR29,
                                  VAR3, VAR8, VAR11->VAR30);
        break;
    case 1:
        VAR12 = FUN3(VAR13, VAR11,
                                              VAR5,
                                              VAR7,
                                              VAR3, VAR8);
        break;
    default:
        VAR12 = VAR16;   
        break;
    }

    if (VAR12) {
        *VAR1 = VAR12;
        FUN4(*VAR1, VAR13);
        return(VAR17);
    }

    if (VAR6)
        *VAR6 = VAR3;

    *VAR1 = 0;
    return(VAR31);
}