static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
				    struct VAR4  *VAR5,
				    __be32 VAR6, __be32 VAR7,
				    struct VAR8 *VAR9,
				    int VAR10)
{
	struct VAR11 *VAR12, *VAR13[256 / sizeof(struct VAR11 *)];
	struct VAR14 *VAR15;
	unsigned short VAR16 = FUN2(VAR5->VAR17);
	struct VAR18 *VAR19 = FUN3(VAR9, VAR1, VAR16);
	int VAR20 = VAR3->VAR21->VAR22;
	unsigned int VAR23 = 0, VAR24 = FUN4(FUN5(*VAR12), VAR25);
	unsigned int VAR26 = 0, VAR27 = 0, VAR28 = (VAR19->VAR23 > 10);
	bool VAR29 = false;

	if (VAR28) {
		VAR27 = FUN6(VAR1, FUN7(VAR30), VAR16) &
			    VAR8.VAR31;
		VAR26 = FUN6(VAR1, VAR7, VAR16) & VAR8.VAR31;
VAR32:
		VAR19 = &VAR8.VAR26[VAR26];
		VAR24 = FUN4(FUN5(*VAR12), VAR33.VAR34);
	}

	FUN8(&VAR19->VAR35);
	FUN9(VAR12, VAR15, &VAR19->VAR36, VAR24) {
		if (FUN10(VAR1, VAR12,
					VAR5->VAR17, VAR7,
					VAR5->VAR37, VAR6,
					VAR20, VAR16)) {
			if (FUN11(VAR23 == FUN12(VAR13))) {
				FUN13(VAR13, VAR23, VAR3, ~0);
				VAR29 = true;
				VAR23 = 0;
			}
			VAR13[VAR23++] = VAR12;
			FUN14(VAR12);
		}
	}

	FUN15(&VAR19->VAR35);

	
	if (VAR28 && VAR26 != VAR27) {
		VAR26 = VAR27;
		goto VAR32;
	}

	
	if (VAR23) {
		FUN13(VAR13, VAR23, VAR3, VAR23 - 1);
	} else {
		if (!VAR29)
			FUN16(VAR1, VAR38,
					 VAR10 == VAR39);
		FUN17(VAR3);
	}
	return 0;
}