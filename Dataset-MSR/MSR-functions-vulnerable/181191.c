FUN1 (VAR1,
                           VAR2,
                           VAR3)

VAR4 *		VAR1;
gss_ctx_id_t		VAR2;
gss_buffer_t		VAR3;

{
    OM_uint32		VAR5;
    gss_union_ctx_id_t	VAR6;
    gss_mechanism	VAR7;

    if (VAR1 == NULL)
	return (VAR8);
    *VAR1 = 0;

    if (VAR2 == VAR9)
	return (VAR10 | VAR11);

    if (VAR3 == VAR12)
	return (VAR10);

    if (FUN2(VAR3))
	return (VAR10);

    
 
     VAR6 = (VAR13) VAR2;




     VAR7 = FUN3 (VAR6->VAR14);
 
     if (VAR7) {

	if (VAR7->VAR15) {
	    VAR5 = VAR7->FUN1(
						    VAR1,
						    VAR6->VAR16,
						    VAR3);
	    if (VAR5 != VAR17)
		FUN4(VAR1, VAR7);
	} else
	    VAR5 = VAR18;

	return(VAR5);
    }

    return (VAR19);
}