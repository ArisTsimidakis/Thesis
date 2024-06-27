int FUN1(struct VAR1 *VAR2, int write, void VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
	struct VAR9 *VAR10 = VAR2->VAR11;
	struct VAR12 *VAR13;
	int VAR14;

	if ((strcmp(VAR2->VAR15, "") == 0) ||
	    (strcmp(VAR2->VAR15, "") == 0))
		FUN2(VAR2, "", VAR10 ? VAR10->VAR16 : "");

	if (strcmp(VAR2->VAR15, "") == 0)
		VAR14 = FUN3(VAR2, write, VAR4, VAR6, VAR8);

	else if (strcmp(VAR2->VAR15, "") == 0)
		VAR14 = FUN4(VAR2, write,
						  VAR4, VAR6, VAR8);

	else if ((strcmp(VAR2->VAR15, "") == 0) ||
		 (strcmp(VAR2->VAR15, "") == 0))
		VAR14 = FUN5(VAR2, write,
						     VAR4, VAR6, VAR8);
	else
		VAR14 = -1;

	if (write && VAR14 == 0 && VAR10 && (VAR13 = FUN6(VAR10)) != NULL) {
		if (VAR2->VAR17 == &FUN7(VAR13->VAR18, VAR19))
			VAR13->VAR18->VAR20 =
					FUN8(FUN7(VAR13->VAR18, VAR19));
		VAR13->VAR21 = VAR22;
		FUN9(VAR23, VAR13);
		FUN10(VAR13);
	}
	return VAR14;
}