static struct VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
	struct VAR1 *VAR6;
	struct VAR7 *VAR8;

	FUN2(&VAR9);
	FUN3(VAR6, VAR8, &VAR10) {
		struct VAR11 *VAR12 = FUN4(VAR6);

		if (!FUN5(&VAR12->VAR13, VAR3) &&
		    !FUN6(&VAR12->VAR14, VAR5) &&
		    !VAR12->VAR15 && VAR6->VAR16 == VAR17)
			goto VAR18;
	}

	FUN3(VAR6, VAR8, &VAR10) {
		struct VAR11 *VAR12 = FUN4(VAR6);

		if (!FUN5(&VAR12->VAR13, VAR3) &&
		    !FUN6(&VAR12->VAR14, &VAR19) &&
		    VAR6->VAR16 == VAR17)
			goto VAR18;
	}
	VAR6 = NULL;
VAR18:
	FUN7(&VAR9);
	return VAR6;
}