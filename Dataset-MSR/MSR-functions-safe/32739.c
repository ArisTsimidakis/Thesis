static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			  VAR5 *VAR6)
{
	struct VAR7 *VAR8 = FUN2(VAR2);
	bool VAR9 = VAR4->VAR10 & VAR11;

	if ((VAR8->VAR12 & VAR13) &&
	    FUN3(VAR8)) {
		VAR4->VAR10 |= VAR14;
		memset(VAR6, 1, sizeof(VAR5) * VAR15);
		return;
	}

	memset(VAR6, 0, sizeof(VAR5) * VAR15);

	if (FUN4(VAR8) != 0) {
		VAR4->VAR10 |= VAR14;
		VAR6[VAR16] = 1;
	}
	if (!VAR9 && FUN5(VAR8)) {
		VAR4->VAR10 |= VAR14;
		VAR6[VAR17] = 1;
	}
	if (VAR4->VAR10 & VAR18) {
		int VAR19, VAR20 = 0, VAR21 = 0;

		if (FUN6(VAR2)) {
			FUN7(VAR8);
			FUN8(VAR8);
			VAR21 = 1;
		}

		FUN9(VAR8, VAR21);
		FUN10(VAR8, VAR22, 1);
		VAR19 = FUN11(VAR8);
		FUN12(VAR8, VAR23);
		if (!FUN13(VAR8, 5705_PLUS))
			FUN12(VAR8, VAR24);
		if (!VAR19)
			FUN14(VAR8);

		if (VAR8->VAR12 & VAR25)
			FUN15(VAR8);

		if (FUN16(VAR8) != 0) {
			VAR4->VAR10 |= VAR14;
			VAR6[VAR26] = 1;
		}

		if (FUN17(VAR8) != 0) {
			VAR4->VAR10 |= VAR14;
			VAR6[VAR27] = 1;
		}

		if (VAR9)
			VAR4->VAR10 |= VAR28;

		if (FUN18(VAR8, VAR6, VAR9))
			VAR4->VAR10 |= VAR14;

		FUN19(VAR8);

		if (FUN20(VAR8) != 0) {
			VAR4->VAR10 |= VAR14;
			VAR6[VAR29] = 1;
		}

		FUN9(VAR8, 0);

		FUN10(VAR8, VAR30, 1);
		if (FUN6(VAR2)) {
			FUN21(VAR8, VAR31);
			VAR20 = FUN22(VAR8, 1);
			if (!VAR20)
				FUN23(VAR8);
		}

		FUN19(VAR8);

		if (VAR21 && !VAR20)
			FUN24(VAR8);
	}
	if (VAR8->VAR12 & VAR13)
		FUN25(VAR8);

}