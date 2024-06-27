struct VAR1 *FUN1(struct VAR2 *VAR3, unsigned long VAR4,
				     unsigned long VAR5, int VAR6,
				     int *VAR7)
{
	struct VAR1 *VAR8;
	gfp_t VAR9;
	long VAR10;
	int VAR11;

	VAR9 = VAR3->VAR12;
	if (VAR9 & VAR13)
		VAR9 |= VAR14;

	VAR10 = FUN2(VAR3, VAR6);
	while (1) {
		VAR11 = FUN3(VAR3);
		if (VAR11 != 0)
			goto VAR15;

		VAR11 = -VAR16;
		if (VAR3->VAR17 & VAR18)
			goto VAR15;

		if (FUN4(&VAR3->VAR19) < VAR3->VAR20) {
			VAR8 = FUN5(VAR4, VAR9);
			if (VAR8) {
				int VAR21;
				int VAR22;

				
				if (!VAR5)
					break;

				VAR21 = (VAR5 + (VAR23 - 1)) >> VAR24;
				VAR8->VAR25 += VAR5;
				FUN6(VAR8)->VAR26 = VAR21;
				for (VAR22 = 0; VAR22 < VAR21; VAR22++) {
					struct VAR27 *VAR27;

					VAR27 = FUN7(VAR3->VAR12, 0);
					if (!VAR27) {
						VAR11 = -VAR28;
						FUN6(VAR8)->VAR26 = VAR22;
						FUN8(VAR8);
						goto VAR15;
					}

					FUN9(VAR8, VAR22,
							VAR27, 0,
							(VAR5 >= VAR23 ?
							 VAR23 :
							 VAR5));
					VAR5 -= VAR23;
				}

				
				break;
			}
			VAR11 = -VAR28;
			goto VAR15;
		}
		FUN10(VAR29, &VAR3->VAR30->VAR31);
		FUN10(VAR32, &VAR3->VAR30->VAR31);
		VAR11 = -VAR33;
		if (!VAR10)
			goto VAR15;
		if (FUN11(VAR34))
			goto VAR35;
		VAR10 = FUN12(VAR3, VAR10);
	}

	FUN13(VAR8, VAR3);
	return VAR8;

VAR35:
	VAR11 = FUN14(VAR10);
VAR15:
	*VAR7 = VAR11;
	return NULL;
}