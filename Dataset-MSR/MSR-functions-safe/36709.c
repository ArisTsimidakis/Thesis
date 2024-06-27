FUN1(VAR1 *VAR2, spnego_gss_cred_id_t VAR3,
		     gss_cred_usage_t VAR4, VAR5 *VAR6)
{
	OM_uint32 VAR7, VAR8;
	gss_cred_id_t VAR9 = VAR10, *VAR11;
	gss_OID_set VAR12 = VAR13;
	gss_OID_set VAR14 = VAR13;
	unsigned int VAR15;
	int VAR16;

	if (VAR3 == NULL) {
		
		VAR11 = (VAR4 == VAR17) ? &VAR9 : NULL;
		VAR7 = FUN2(VAR2, VAR18, VAR4,
					  VAR19, VAR11,
					  VAR6);
		FUN3(&VAR8, &VAR9);
		return (VAR7);
	}

	
	VAR7 = FUN4(VAR2, VAR3->VAR20, NULL, NULL, NULL,
			       &VAR12);
	if (VAR7 != VAR21)
		return (VAR7);

	if (VAR3->VAR22 == VAR13) {
		
		*VAR6 = VAR12;
		*VAR2 = 0;
		return (VAR21);
	}

	
	VAR7 = FUN5(VAR2, &VAR14);
	if (VAR7 != VAR21) {
		FUN6(&VAR8, &VAR12);
		return (VAR7);
	}

	for (VAR15 = 0; VAR15 < VAR3->VAR22->VAR23; VAR15++) {
		FUN7(&VAR8,
					&VAR3->VAR22->VAR24[VAR15],
					VAR12, &VAR16);
		if (!VAR16)
			continue;
		VAR7 = FUN8(VAR2,
					     &VAR3->VAR22->VAR24[VAR15],
					     &VAR14);
		if (VAR7 != VAR21)
			break;
	}

	FUN6(&VAR8, &VAR12);
	if (VAR14->VAR23 == 0 || VAR7 != VAR21) {
		FUN6(&VAR8, &VAR14);
		*VAR2 = VAR25;
		FUN9(VAR2);
		return (VAR26);
	}

	*VAR6 = VAR14;
	*VAR2 = 0;
	return (VAR21);
}