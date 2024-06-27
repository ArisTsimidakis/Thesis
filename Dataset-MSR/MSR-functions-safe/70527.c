static int FUN1(struct VAR1 *VAR2)
{
	int VAR3, VAR4 = 0;
	unsigned long VAR5[VAR6] = {
		FUN2(FUN3(VAR2)->VAR7->VAR8),
		FUN2(FUN3(VAR2)->VAR7->VAR9),
		FUN2(FUN3(VAR2)->VAR7->VAR10)
	};
	bool VAR11[VAR6] = {
		FUN4(VAR2, VAR12),
		FUN4(VAR2, VAR13),
		FUN4(VAR2, VAR14),
	};

	FUN5(VAR2)->VAR15 |= VAR16;
	for (VAR3 = 0; VAR3 < VAR6; VAR3++) {
		if (VAR5[VAR3]) {
			VAR4 = FUN6(VAR2, VAR3, VAR17,
				VAR18 |
				(VAR11[VAR3] ? VAR19 : 0));
			if (VAR4) {
				FUN7(VAR2,
					""
					""
					"", VAR3, VAR4);
				return VAR4;
			}
		}
	}
	return 0;
}