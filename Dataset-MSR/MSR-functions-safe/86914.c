VAR1 FUN1(unsigned long VAR2, VAR3 *VAR4)
{
	TEE_Result VAR5, VAR6;
	struct VAR7 *VAR8 = NULL;
	TEE_Time VAR9;

	VAR5 = FUN2(&VAR8);
	if (VAR5 != VAR10)
		return VAR5;

	switch (VAR2) {
	case VAR11:
		VAR5 = FUN3(&VAR9);
		break;
	case VAR12:
		VAR5 = FUN4((const void *)&VAR8->VAR13->VAR14, &VAR9);
		break;
	case VAR15:
		VAR5 = FUN5(&VAR9);
		break;
	default:
		VAR5 = VAR16;
		break;
	}

	if (VAR5 == VAR10 || VAR5 == VAR17) {
		VAR6 = FUN6(VAR4, &VAR9, sizeof(VAR9));
		if (VAR6 != VAR10)
			VAR5 = VAR6;
	}

	return VAR5;
}