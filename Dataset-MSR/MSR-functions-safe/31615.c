VAR1 FUN1(struct VAR2 *VAR2,
				     const struct VAR3 *VAR4,
				     const struct VAR5 *VAR6,
				     const sctp_subtype_t VAR7,
				     void *VAR8,
				     VAR9 *VAR10)
{
	struct VAR11 *VAR12 = VAR8;
	int VAR13;

	if (!FUN2(VAR12, VAR6)) {
		FUN3(VAR10, VAR14,
				FUN4());
		return FUN5(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
	}

	if (!FUN6(VAR12, sizeof(VAR15)))
		return FUN7(VAR2, VAR4, VAR6, VAR7, VAR8,
						  VAR10);

	VAR13 = FUN8(VAR6, VAR12, VAR10 );
	switch (VAR13) {
	case VAR16:
	case VAR17:
	case VAR18:
	case VAR19:
	case VAR20:
		break;
	case VAR21:
		goto VAR22;
	case VAR23:
		return FUN9(VAR2, VAR4, VAR6, VAR12, VAR10,
			(VAR24 *)VAR12->VAR25.VAR26, sizeof(VAR27));
	default:
		FUN10();
	}

	

	
	if (VAR12->VAR28) {
		
		FUN3(VAR10, VAR29, FUN4());
		FUN3(VAR10, VAR30, FUN11());
		FUN3(VAR10, VAR31,
				FUN12(VAR32));
	}

VAR22:
	return VAR33;
}