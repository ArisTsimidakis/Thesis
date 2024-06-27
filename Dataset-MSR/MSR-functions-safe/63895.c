static inline bool FUN1(struct VAR1 *VAR2,
					struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = (struct VAR5 *)
					(VAR4->VAR7 + VAR8);
	struct VAR9 *VAR10 = VAR2->VAR10;
	u32 VAR11 = FUN2(VAR6->VAR11);
	u32 VAR12 = FUN2(VAR6->VAR12);
	u32 VAR13 = FUN2(VAR6->VAR13);
	u32 VAR14 = FUN2(VAR6->VAR14);
	u32 VAR15 = FUN2(VAR6->VAR15);
	u32 VAR16 = FUN2(VAR6->VAR16);
	u32 VAR17 = FUN2(VAR6->VAR17);
	u32 VAR18 = FUN2(VAR6->VAR18);
	u32 VAR19 = FUN2(VAR6->VAR19);
	u32 VAR20 = FUN2(VAR6->VAR20);
	u32 VAR21 = FUN2(VAR6->VAR21);
	u32 VAR22 = FUN2(VAR6->VAR22);
	u32 VAR23 = FUN2(VAR6->VAR23);
	u64 VAR24 = VAR16 +
				(VAR21 << VAR23);
	u64 VAR25 = VAR11 +
				(VAR22 << VAR23);

	if (VAR11 != VAR12) {
		FUN3(VAR10, VAR26,
			"",
			VAR11, VAR12);
		return true;
	}

	if (VAR12 + (VAR17 << VAR23) !=
							VAR13) {
		FUN3(VAR10, VAR26,
			"",
			VAR12, VAR13,
			VAR17 << VAR23);
		return true;
	}

	if (VAR13 + (VAR18 << VAR23) !=
							VAR14) {
		FUN3(VAR10, VAR26,
			"",
			VAR13, VAR14,
			VAR18 << VAR23);
		return true;
	}

	if (VAR14 + (VAR19 << VAR23) !=
							VAR15) {
		FUN3(VAR10, VAR26,
			"",
			VAR14, VAR15,
			VAR19 << VAR23);
		return true;
	}

	if (VAR15 + (VAR20 << VAR23) !=
							VAR16) {
		FUN3(VAR10, VAR26,
			"",
			VAR15, VAR16,
			VAR20 << VAR23);
		return true;
	}

	if (VAR24 > VAR25) {
		FUN3(VAR10, VAR26,
			"",
			VAR16,
			VAR11 +
				(VAR22 << VAR23),
			VAR21 << VAR23);
		return true;
	} else if (VAR24 < VAR25) {
		int VAR27 = 0;
		char *VAR28;

		
		VAR6->VAR22 = FUN4((VAR24 -
				VAR11) >> VAR23);

		if (FUN5(VAR10) || FUN6(VAR10->VAR29)) {
			FUN7(VAR2, VAR30);
			VAR28 = "";
		} else {
			VAR27 = FUN8(VAR4, NULL);
			VAR28 = VAR27 ? "" : "";
		}
		FUN3(VAR10, VAR26,
			"",
			VAR28, VAR16,
			VAR11 +
				(VAR22 << VAR23),
			VAR21 << VAR23);
		if (VAR27)
			return true;
	}
	return false;
}