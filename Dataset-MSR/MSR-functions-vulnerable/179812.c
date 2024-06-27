FUN1(VAR1 *VAR2,
                              VAR3 *VAR4,
                               gss_buffer_t VAR5)
 {
     OM_uint32 VAR6;

    iakerb_ctx_id_t VAR7 = (VAR8)VAR4;


 
     
     if (!VAR7->VAR9)
        return VAR10;

    VAR6 = FUN2(VAR2, &VAR7->VAR11,
                                      VAR5);
    if (VAR7->VAR11 == VAR12) {
        FUN3(VAR7);
        *VAR4 = VAR12;
    }
     return VAR6;
 }