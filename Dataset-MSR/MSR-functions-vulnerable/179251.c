VAR1 FUN1(struct VAR2 *VAR2,
					const struct VAR3 *VAR4,
					const struct VAR5 *VAR6,
					const sctp_subtype_t VAR7,
					void *VAR8,
					VAR9 *VAR10)
{
	sctp_disposition_t VAR11;
	struct VAR12 *VAR13 = VAR8;
	struct VAR5 *VAR14;
	int VAR15 = 0;
	char VAR16;
	struct VAR12 *VAR17;

	
	if (!FUN2(VAR13, sizeof(VAR18)))
		return FUN3(VAR2, VAR4, VAR6, VAR7, VAR8,
						  VAR10);

	
	VAR13->VAR19.VAR20 = (struct VAR21 *)VAR13->VAR22->VAR23;
	if (!FUN4(VAR13->VAR22, FUN5(VAR13->VAR24->VAR25) -
					sizeof(VAR18)))
		goto VAR26;

	
	VAR14 = FUN6(VAR4, VAR6, VAR13, VAR27, &VAR15,
				      &VAR17);

	
	if (!VAR14) {
		
		switch (VAR15) {
		case -VAR28:
			goto VAR26;

		case -VAR29:
			FUN7(VAR2, VAR4, VAR6, VAR13, VAR10,
						   VAR17);
			return FUN8(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
		case -VAR30:
		default:
			return FUN8(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
		}
	}

	
	VAR16 = FUN9(VAR14, VAR6);

	switch (VAR16) {
	case '': 
		VAR11 = FUN10(VAR2, VAR4, VAR6, VAR13, VAR10,
					      VAR14);
		break;

	case '': 
		VAR11 = FUN11(VAR2, VAR4, VAR6, VAR13, VAR10,
					      VAR14);
		break;

	case '': 
		VAR11 = FUN12(VAR2, VAR4, VAR6, VAR13, VAR10,
					      VAR14);
		break;

	case '': 
		VAR11 = FUN13(VAR2, VAR4, VAR6, VAR13, VAR10,
					      VAR14);
		break;

	default: 
		VAR11 = FUN8(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
		break;
 	}
 
 	

	FUN14(VAR10, VAR31, FUN15(VAR14));


 	FUN14(VAR10, VAR32, FUN16());
 
 	
	FUN14(VAR10, VAR33,
			 FUN15((struct VAR5 *)VAR6));

	return VAR11;

VAR26:
	return VAR34;
}