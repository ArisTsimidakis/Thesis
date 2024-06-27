static int FUN1(struct VAR1 *VAR1,
				 struct VAR2 *VAR3,
				 struct VAR4 *VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR1);
	struct VAR8 *VAR9 = NULL, *new = NULL;
	int VAR10 = 0;

	if (!VAR5->VAR11)
		return 0;

VAR12:
	FUN3(&VAR7->VAR13);
	
	FUN4(VAR9, &VAR7->VAR14, VAR15) {
		if (VAR5->VAR16 == VAR9->VAR17) {
			FUN5(VAR5->VAR18);
			VAR5->VAR11 = 0;
			VAR5->VAR19 = 0;
			goto VAR20;
		}
	}

	if (VAR3->VAR21 != VAR22)
		goto VAR20;

	if (new == NULL) {
		FUN6(&VAR7->VAR13);
		new = FUN7(sizeof(struct VAR8),
			     VAR23);
		if (new == NULL) {
			VAR10 = -VAR24;
			goto VAR25;
		}
		goto VAR12;
	}
	
	new->VAR17 = VAR5->VAR16;
	new->VAR26 = VAR5->VAR27;
	VAR5->VAR19 = 0;
	FUN8(&new->VAR15, &VAR7->VAR14);
	FUN8(&new->VAR28, &VAR3->VAR29);
	new = NULL;
VAR20:
	FUN6(&VAR7->VAR13);
VAR25:
	if (new)
		FUN9(new);
	return VAR10;
}