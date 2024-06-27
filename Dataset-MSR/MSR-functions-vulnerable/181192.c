FUN1( VAR1 *VAR2,
          gss_ctx_id_t VAR3,
          int VAR4,
          gss_qop_t VAR5,
          gss_buffer_t VAR6,
          int *VAR7,
          gss_buffer_t VAR8)
{

    

    OM_uint32           VAR9;
    gss_union_ctx_id_t  VAR10;
    gss_mechanism       VAR11;

    VAR9 = FUN2(VAR2, VAR3,
                           VAR4, VAR5,
                           VAR6, VAR7,
                           VAR8);
    if (VAR9 != VAR12)
        return (VAR9);

    
 
     VAR10 = (VAR13) VAR3;




     VAR11 = FUN3 (VAR10->VAR14);
 
     if (VAR11) {
        if (VAR11->VAR15) {
            VAR9 = VAR11->FUN1(VAR2,
                                    VAR10->VAR16,
                                    VAR4,
                                    VAR5,
                                    VAR6,
                                    VAR7,
                                    VAR8);
            if (VAR9 != VAR12)
                FUN4(VAR2, VAR11);
        } else if (VAR11->VAR17 ||
                   (VAR11->VAR18 && VAR11->VAR19)) {
            VAR9 = FUN5(VAR11,
                                      VAR2,
                                      VAR10,
                                      VAR4,
                                      (VAR20)VAR5,
                                      VAR21,
                                      VAR6,
                                      VAR7,
                                      VAR8);
        } else
            VAR9 = VAR22;

        return(VAR9);
    }
    

    return (VAR23);
}