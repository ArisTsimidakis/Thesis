static void FUN1(struct VAR1 *VAR2)
{
	int VAR3;
	struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	struct VAR8 *VAR9 = VAR2->VAR10;

	
	if (VAR9) {
		for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++) {
			VAR7 = VAR9->VAR12[VAR3];
			if (VAR7->VAR13 != (VAR14)VAR15) {
				VAR5 = VAR2->VAR12[VAR7->VAR13];
				if (VAR5->VAR16 &&
				    (VAR5->VAR17->VAR18.VAR19 != VAR20)) {
					VAR5->VAR17->VAR18.VAR21 =
							VAR22;
					FUN2(VAR2,
							     VAR5, VAR23);
				}
			}
		}
	} else {
		for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++) {
			VAR5 = VAR2->VAR12[VAR3];
			if (VAR5->VAR16 && VAR5->VAR17->VAR18.VAR19 !=
				VAR20)
				FUN2(VAR2, VAR5, VAR23);
		}
	}
}