FUN1(struct VAR1 *VAR2, int *VAR3, struct VAR4 *VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR5->VAR8);
	struct tcf_result VAR9;

	if (!VAR7)
		return VAR2;

	
	FUN3(VAR7->VAR10, VAR2);

	switch (FUN4(VAR2, VAR7, &VAR9, false)) {
	case VAR11:
	case VAR12:
		VAR2->VAR13 = FUN5(VAR9.VAR14);
		break;
	case VAR15:
		FUN6(VAR7->VAR10);
		*VAR3 = VAR16;
		goto VAR17;
	case VAR18:
	case VAR19:
		*VAR3 = VAR20;
VAR17:
		FUN7(VAR2);
		return NULL;
	case VAR21:
		
		FUN8(VAR2);
		*VAR3 = VAR20;
		return NULL;
	default:
		break;
	}

	return VAR2;
}