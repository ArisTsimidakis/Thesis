int FUN1(struct VAR1 *VAR1, loff_t VAR2, loff_t VAR3, int VAR4)
{
	struct VAR5 *VAR5 = VAR1->VAR6->VAR7;
	struct VAR8 *VAR9 = VAR5->VAR10->VAR11;
	int VAR12;

	FUN2("", VAR5->VAR13);

	if (VAR9->VAR14)
		
		return 0;

	VAR12 = FUN3(VAR5->VAR15, VAR2, VAR3);
	if (VAR12)
		return VAR12;
	FUN4(&VAR5->VAR16);

	
	if (!VAR4 || (VAR5->VAR17 & VAR18)) {
		VAR12 = VAR5->VAR10->VAR19->FUN5(VAR5, NULL);
		if (VAR12)
			goto VAR20;
	}

	
	VAR12 = FUN6(VAR9, VAR5);
VAR20:
	FUN7(&VAR5->VAR16);
	return VAR12;
}