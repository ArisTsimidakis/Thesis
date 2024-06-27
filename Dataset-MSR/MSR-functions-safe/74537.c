int FUN1(struct VAR1 *VAR1, int VAR2)
{
	struct VAR3 *VAR4 = VAR1->VAR4;
	struct VAR1 *VAR5;
	int VAR6, VAR7, VAR8 = 0, VAR9 = 0;
	unsigned int VAR10;

	if (VAR4->VAR11)
		VAR8 = FUN2(VAR4->VAR11);

	FUN3(&VAR4->mutex);

	
	VAR1->VAR2 = VAR2;
	VAR6 = FUN4(VAR4);
	if (VAR6 < 0) {
		VAR6 = 0;
		goto VAR12;
	}

	if (!VAR4->VAR13->VAR14->VAR15)
		goto VAR12;

	
	VAR6 = -VAR16;

	if (!VAR4->VAR13->VAR14->VAR17)
		goto VAR12;

	
	VAR7 = FUN5(VAR4);
	if (VAR7 <= 0) {
		FUN6(VAR4, "");
		goto VAR12;
	}

	
	if (VAR8 <= 0)
		VAR8 = VAR4->VAR18->VAR8;
	if (VAR8 <= 0) {
		FUN6(VAR4, "");
		goto VAR12;
	}

	
	FUN7(VAR5, &VAR4->VAR19, VAR20)
		VAR9 += VAR5->VAR2;

	VAR10 = VAR4->VAR13->VAR14->FUN8(VAR4,
						 VAR8, VAR7,
						 VAR9);
	VAR6 = FUN9(VAR4, &VAR10);
	if (VAR6 < 0) {
		FUN6(VAR4, "",
			 VAR9, VAR8, VAR7);
		goto VAR12;
	}

	VAR6 = VAR4->VAR13->VAR14->FUN10(VAR4, VAR10);
	if (VAR6 < 0) {
		FUN6(VAR4, "", VAR10);
		goto VAR12;
	}
	VAR6 = VAR10;
VAR12:
	FUN11(&VAR4->mutex);
	return VAR6;
}