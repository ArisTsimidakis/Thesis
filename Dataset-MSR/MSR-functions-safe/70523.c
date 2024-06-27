static int FUN1(struct VAR1 *VAR2,
				  ext4_fsblk_t VAR3,
				  VAR4 *VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	ext4_fsblk_t VAR8 = FUN3(VAR7->VAR9->VAR10);
	ext4_fsblk_t VAR11;
	ext4_fsblk_t VAR12;
	ext4_fsblk_t VAR13;
	ext4_fsblk_t VAR14;
	int VAR15 = 0;
	ext4_group_t VAR16, VAR17 = VAR7->VAR18;

	if (FUN4(VAR2))
		VAR15 = 1;

	FUN5("");

	for (VAR16 = 0; VAR16 < VAR7->VAR18; VAR16++) {
		struct VAR19 *VAR20 = FUN6(VAR2, VAR16, NULL);

		if (VAR16 == VAR7->VAR18 - 1 || VAR15)
			VAR11 = FUN7(VAR7->VAR9) - 1;
		else
			VAR11 = VAR8 +
				(FUN8(VAR2) - 1);

		if ((VAR17 == VAR7->VAR18) &&
		   !(VAR20->VAR21 & FUN9(VAR22)))
			VAR17 = VAR16;

		VAR12 = FUN10(VAR2, VAR20);
		if (VAR12 == VAR3) {
			FUN11(VAR2, VAR23, ""
				 ""
				 "", VAR16);
		}
		if (VAR12 < VAR8 || VAR12 > VAR11) {
			FUN11(VAR2, VAR23, ""
			       ""
			       "", VAR16, VAR12);
			return 0;
		}
		VAR13 = FUN12(VAR2, VAR20);
		if (VAR13 == VAR3) {
			FUN11(VAR2, VAR23, ""
				 ""
				 "", VAR16);
		}
		if (VAR13 < VAR8 || VAR13 > VAR11) {
			FUN11(VAR2, VAR23, ""
			       ""
			       "", VAR16, VAR13);
			return 0;
		}
		VAR14 = FUN13(VAR2, VAR20);
		if (VAR14 == VAR3) {
			FUN11(VAR2, VAR23, ""
				 ""
				 "", VAR16);
		}
		if (VAR14 < VAR8 ||
		    VAR14 + VAR7->VAR24 - 1 > VAR11) {
			FUN11(VAR2, VAR23, ""
			       ""
			       "", VAR16, VAR14);
			return 0;
		}
		FUN14(VAR2, VAR16);
		if (!FUN15(VAR2, VAR16, VAR20)) {
			FUN11(VAR2, VAR23, ""
				 "",
				 VAR16, FUN16(FUN17(VAR2, VAR16,
				     VAR20)), FUN16(VAR20->VAR25));
			if (!(VAR2->VAR26 & VAR27)) {
				FUN18(VAR2, VAR16);
				return 0;
			}
		}
		FUN18(VAR2, VAR16);
		if (!VAR15)
			VAR8 += FUN8(VAR2);
	}
	if (NULL != VAR5)
		*VAR5 = VAR17;
	return 1;
}