static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;
	char VAR7[VAR8];
	unsigned int VAR9;
	struct VAR10 *VAR10;
	int VAR11;

	memset(VAR7, 0, sizeof(VAR7));
	FUN2(VAR7, VAR2->VAR12->VAR7, sizeof(VAR7));
	VAR9 = FUN3(strlen(VAR7)+1, sizeof(VAR13));

	VAR2->VAR7 = VAR7;
	VAR2->VAR14 = VAR9;

	VAR2->VAR15.VAR16.VAR9 = sizeof(VAR2->VAR15) + VAR9;
	FUN4();
	FUN5(VAR10, &VAR17, VAR18) {
		VAR4 = FUN6(VAR10->VAR19);
		if (VAR4->VAR20 != VAR10)
			goto VAR21;
		FUN7(&VAR4->VAR6, VAR2);

		VAR11 = VAR10->VAR22;
		if (VAR11 < 0)
			goto VAR21;

		VAR6 = FUN8(VAR23->VAR24[VAR11]);
		if (VAR6)
			FUN7(VAR6, VAR2);
VAR21:
		FUN9(VAR10->VAR19);
	}
	FUN10();
}