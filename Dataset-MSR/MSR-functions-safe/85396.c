static void FUN1(struct VAR1 *VAR2,
			unsigned int *VAR3, bool VAR4, int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	unsigned int VAR8, VAR9, VAR10;
	unsigned int VAR11 = FUN3(VAR2) / VAR2->VAR12;
	unsigned int VAR13 = FUN4(VAR2, *VAR3);
	unsigned int VAR14 = FUN5(VAR2, *VAR3);
	unsigned int VAR15 = VAR13;
	bool VAR16 = true;
	int VAR17 = 0;
	int VAR18;

	FUN6(&VAR7->VAR19);

	if (!VAR4 && ((*VAR3 + 1) % VAR2->VAR20)) {
		VAR8 = FUN7(VAR7->VAR21,
			FUN8(VAR2, VAR13 + 1), *VAR3 + 1);
		if (VAR8 < FUN8(VAR2, VAR13 + 1))
			goto VAR22;
	}
VAR23:
	VAR9 = FUN7(VAR7->VAR24, FUN3(VAR2), VAR13);
	if (VAR9 >= FUN3(VAR2)) {
		if (VAR5 == VAR25) {
			VAR9 = FUN7(VAR7->VAR24,
							FUN3(VAR2), 0);
			FUN9(VAR2, VAR9 >= FUN3(VAR2));
		} else {
			VAR17 = 1;
			VAR15 = VAR13 - 1;
		}
	}
	if (VAR17 == 0)
		goto VAR26;

	while (FUN10(VAR15, VAR7->VAR24)) {
		if (VAR15 > 0) {
			VAR15--;
			continue;
		}
		VAR15 = FUN7(VAR7->VAR24,
							FUN3(VAR2), 0);
		FUN9(VAR2, VAR15 >= FUN3(VAR2));
		break;
	}
	VAR9 = VAR15;
VAR26:
	VAR13 = VAR9;
	VAR8 = FUN8(VAR2, VAR9);
	VAR10 = FUN11(VAR2, VAR9);

	
	if (!VAR16)
		goto VAR22;
	if (VAR2->VAR12 == 1)
		goto VAR22;
	if (VAR10 == VAR14)
		goto VAR22;
	if (VAR5 == VAR27) {
		if (!VAR17 && VAR10 + 1 >= VAR11)
			goto VAR22;
		if (VAR17 && VAR10 == 0)
			goto VAR22;
	}
	for (VAR18 = 0; VAR18 < VAR28; VAR18++)
		if (FUN12(VAR2, VAR18)->VAR29 == VAR10)
			break;

	if (VAR18 < VAR28) {
		
		if (VAR17)
			VAR13 = VAR10 * VAR2->VAR12 - 1;
		else if (VAR10 + 1 >= VAR11)
			VAR13 = 0;
		else
			VAR13 = (VAR10 + 1) * VAR2->VAR12;
		VAR16 = false;
		goto VAR23;
	}
VAR22:
	
	FUN9(VAR2, FUN10(VAR8, VAR7->VAR21));
	FUN13(VAR2, VAR8);
	*VAR3 = VAR8;
	FUN14(&VAR7->VAR19);
}