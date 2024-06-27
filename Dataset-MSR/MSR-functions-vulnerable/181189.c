FUN1(
	    VAR1 *VAR2,
	    gss_ctx_id_t VAR3,
	    VAR4 *VAR5,
	    VAR4 *VAR6,
	    VAR1 *VAR7,
	    VAR8 *VAR9,
	    VAR1 *VAR10,
	    int *VAR11,
	    int *VAR12)
{
    gss_union_ctx_id_t	VAR13;
    gss_mechanism	VAR14;
    OM_uint32		VAR15, VAR16;
    gss_OID		VAR17;
    gss_name_t VAR18 = NULL, VAR19 = NULL;

    VAR15 = FUN2(VAR2,
			      VAR3,
			      VAR5, VAR6,
			      VAR7,
			      VAR9, VAR10,
			      VAR11, VAR12);
    if (VAR15 != VAR20)
	return (VAR15);

    
 
     VAR13 = (VAR21) VAR3;




     VAR14 = FUN3 (VAR13->VAR9);
 
     if (!VAR14 || !VAR14->VAR22 || !VAR14->VAR23 ||
	!VAR14->VAR24) {
	return (VAR25);
    }

    VAR15 = VAR14->FUN1(
			VAR2,
			VAR13->VAR26,
			(VAR5 ? &VAR19 : NULL),
			(VAR6 ? &VAR18 : NULL),
			VAR7,
			&VAR17,
			VAR10,
			VAR11,
			VAR12);

    if (VAR15 != VAR20) {
	FUN4(VAR2, VAR14);
	return VAR15;
    }

    

    if (VAR5) {
	if (VAR19) {
	    VAR15 = FUN5(VAR2, VAR14,
						      VAR19, VAR5);

	    if (VAR15 != VAR20) {
		if (VAR18)
		    VAR14->FUN6(&VAR16, &VAR18);
		return (VAR15);
	    }
	} else {
	    *VAR5 = VAR27;
	}
    }

    if (VAR6) {
        if (VAR18) {
	    VAR15 = FUN5(VAR2, VAR14,
						      VAR18, VAR6);

	    if (VAR15 != VAR20) {
		if (VAR5)
		    (void) FUN6(&VAR16, VAR5);

		return (VAR15);
	    }
        }
        else {
            *VAR6 = VAR27;
        }
    }

    if (VAR9)
	*VAR9 = FUN7(VAR17);

    return(VAR20);
}