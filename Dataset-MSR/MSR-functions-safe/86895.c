static VAR1 FUN1(
	struct VAR2 *VAR3, const struct VAR4 *VAR5,
	uint32_t key_size VAR6,
	const VAR7 *VAR8, uint32_t VAR9)
{
	TEE_Result VAR10;
	struct VAR11 *VAR12;
	struct VAR13 *VAR14 = NULL;
	uint32_t VAR15 = 0;

	
	VAR10 = FUN2(VAR3, VAR5, VAR8,
					     VAR9);
	if (VAR10 != VAR16)
		return VAR10;

	VAR12 = (struct VAR11 *)VAR3->VAR17;

	if (FUN3(VAR3, VAR5, VAR18))
		VAR14 = VAR12->VAR19;
	if (FUN3(VAR3, VAR5, VAR20))
		VAR15 = VAR12->VAR21;
	VAR10 = FUN4(VAR12, VAR14, VAR15);
	if (VAR10 != VAR16)
		return VAR10;

	
	FUN5(VAR3, VAR5, VAR22);
	FUN5(VAR3, VAR5, VAR23);
	FUN5(VAR3, VAR5, VAR20);
	return VAR16;
}