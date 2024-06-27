VAR1 FUN1(struct VAR2 *VAR2,
					const struct VAR3 *VAR4,
					const struct VAR5 *VAR6,
					const sctp_subtype_t VAR7,
					void *VAR8,
					VAR9 *VAR10)
{
	struct VAR11 *VAR12 = VAR8;
	VAR13 *VAR14;
	__u32 VAR15;

	if (!FUN2(VAR12, VAR6))
		return FUN3(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);

	
	if (!FUN4(VAR12, sizeof(VAR16)))
		return FUN5(VAR2, VAR4, VAR6, VAR7, VAR8,
						  VAR10);

	
	VAR14 = FUN6(VAR12);
	
	if (!VAR14)
		return FUN3(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
	VAR12->VAR17.VAR18 = VAR14;
	VAR15 = FUN7(VAR14->VAR19);

	
	if (FUN8(VAR15, VAR6->VAR20)) {
		FUN9("", VAR21, VAR15,
			 VAR6->VAR20);

		return VAR22;
	}

	
	if (!FUN8(VAR15, VAR6->VAR23))
		return FUN10(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);

	
	FUN11(VAR10, VAR24, FUN12(VAR12));

	
	return VAR25;
}