FUN1(const VAR1 *VAR2, VAR3 *VAR4, u_int VAR5,
    char *VAR6, int *VAR7)
{
	bpf_u_int32 VAR8;
	size_t VAR9;
	bpf_u_int32 VAR10;
	bpf_u_int32 VAR11;
	struct VAR12 *VAR13;
	struct VAR14 *VAR15;
	VAR16 *VAR17;
	int VAR18 = 0;
	struct VAR19 *VAR20;
	int VAR21;
	struct block_cursor VAR22;
	struct VAR23 *VAR24;

	
	*VAR7 = 0;

	
	memcpy(&VAR8, VAR2, sizeof(VAR8));
	if (VAR8 != VAR25) {
		
		return (NULL);	
	}

	
	VAR9 = fread(&VAR10, 1, sizeof(VAR10), VAR4);
	if (VAR9 < sizeof(VAR10)) {
		if (FUN2(VAR4)) {
			FUN3(VAR6, VAR26,
			    VAR27, "");
			*VAR7 = 1;
			return (NULL);	
		}

		
		return (NULL);
	}
	VAR9 = fread(&VAR11, 1, sizeof(VAR11), VAR4);
	if (VAR9 < sizeof(VAR11)) {
		if (FUN2(VAR4)) {
			FUN3(VAR6, VAR26,
			    VAR27, "");
			*VAR7 = 1;
			return (NULL);	
		}

		
		return (NULL);
	}
	if (VAR11 != VAR28) {
		VAR11 = FUN4(VAR11);
		if (VAR11 != VAR28) {
			
			return (NULL);
		}
		VAR18 = 1;
		VAR10 = FUN4(VAR10);
	}

	
 	if (VAR10 < sizeof(*VAR13) + sizeof(*VAR15) + sizeof(struct VAR29) ||
             (VAR10 > VAR30)) {
 		FUN5(VAR6, VAR26,

		    "" VAR31 "",

                              sizeof(*VAR13) + sizeof(*VAR15) + sizeof(struct VAR29),

                              VAR10,

                              VAR30);








 
 		*VAR7 = 1;
 		return (NULL);
	}



	
	VAR17 = FUN6(VAR6, sizeof (struct VAR19));
	if (VAR17 == NULL) {
		
		*VAR7 = 1;
		return (NULL);
	}
	VAR17->VAR18 = VAR18;
	VAR20 = VAR17->VAR32;

	
	switch (VAR5) {

	case VAR33:
		VAR20->VAR34 = 1000000;
		break;

	case VAR35:
		VAR20->VAR34 = 1000000000;
		break;

	default:
		FUN5(VAR6, VAR26,
		    "", VAR5);
		free(VAR17);
		*VAR7 = 1;
		return (NULL);
	}

	VAR17->VAR36.VAR37 = VAR5;

	
	VAR17->VAR38 = 2048;
	if (VAR17->VAR38 < VAR10)
		VAR17->VAR38 = VAR10;
	VAR17->VAR39 = malloc(VAR17->VAR38);
	if (VAR17->VAR39 == NULL) {
		FUN5(VAR6, VAR26, "");
		free(VAR17);
		*VAR7 = 1;
		return (NULL);
	}
	VAR20->VAR40 = VAR41;

	
	VAR13 = (struct VAR12 *)VAR17->VAR39;
	VAR15 = (struct VAR14 *)((VAR42 *)VAR17->VAR39 + sizeof(struct VAR12));
	VAR13->VAR43 = VAR8;
	VAR13->VAR10 = VAR10;
	VAR15->VAR11 = VAR11;
	if (FUN7(VAR4,
	    (VAR42 *)VAR17->VAR39 + (sizeof(VAR8) + sizeof(VAR10) + sizeof(VAR11)),
	    VAR10 - (sizeof(VAR8) + sizeof(VAR10) + sizeof(VAR11)),
	    1, VAR6) == -1)
		goto VAR44;

	if (VAR17->VAR18) {
		
		VAR15->VAR45 = FUN8(VAR15->VAR45);
		VAR15->VAR46 = FUN8(VAR15->VAR46);

		
	}
	
	if (! (VAR15->VAR45 == VAR47 &&
	       VAR15->VAR46 == VAR48)) {
		FUN5(VAR6, VAR26,
		    "",
		    VAR15->VAR45, VAR15->VAR46);
		goto VAR44;
	}
	VAR17->VAR49 = VAR15->VAR45;
	VAR17->VAR50 = VAR15->VAR46;

	
	VAR17->VAR36.VAR37 = VAR5;

	
	for (;;) {
		
		VAR21 = FUN9(VAR4, VAR17, &VAR22, VAR6);
		if (VAR21 == 0) {
			
			FUN5(VAR6, VAR26,
			    "");
			goto VAR44;
		}
		if (VAR21 == -1)
			goto VAR44;	
		switch (VAR22.VAR43) {

		case VAR51:
			
			VAR24 = FUN10(&VAR22, sizeof(*VAR24),
			    VAR6);
			if (VAR24 == NULL)
				goto VAR44;	

			
			if (VAR17->VAR18) {
				VAR24->VAR52 = FUN8(VAR24->VAR52);
				VAR24->VAR53 = FUN4(VAR24->VAR53);
			}

			
			if (!FUN11(VAR17, &VAR22, VAR6))
				goto VAR44;

			goto VAR54;

		case VAR55:
		case VAR56:
		case VAR57:
			
			FUN5(VAR6, VAR26,
			    "");
			goto VAR44;

		default:
			
			break;
		}
	}

VAR54:
	VAR17->VAR58 = 0;	
	VAR17->VAR52 = FUN12(VAR24->VAR52);
	VAR17->VAR59 = FUN13(VAR17->VAR52, VAR24->VAR53);
	VAR17->VAR60 = 0;

	
	if (FUN14(FUN15(VAR17->VAR52)) > VAR20->VAR40)
		VAR20->VAR40 = FUN14(FUN15(VAR17->VAR52));

	VAR17->VAR61 = VAR62;
	VAR17->VAR63 = VAR64;

	return (VAR17);

VAR44:
	free(VAR20->VAR65);
	free(VAR17->VAR39);
	free(VAR17);
	*VAR7 = 1;
	return (NULL);
}