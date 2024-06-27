static int FUN1(struct VAR1 *VAR1, void VAR2 *VAR3)
{
	struct VAR4 *VAR4 = FUN2(VAR1)->VAR5;
	struct VAR6 *VAR7 = FUN3(VAR4)->VAR7;
	struct VAR8 *VAR9;
	int VAR10;

	if (FUN4(VAR7))
		return -VAR11;

	if (FUN5(&VAR7->VAR12->VAR13,
			1)) {
		FUN6("");
		return -VAR14;
	}
	VAR10 = FUN7(VAR1);
	if (VAR10) {
		FUN8(&VAR7->VAR12->VAR13,
			   0);
		return VAR10;
	}

	switch (VAR4->VAR15 & VAR16) {
	case VAR17:
		if (!FUN9(VAR18)) {
			VAR10 = -VAR19;
			goto VAR20;
		}
		VAR10 = FUN10(VAR7, 0);
		if (VAR10)
			goto VAR20;
		VAR10 = FUN10(VAR7->VAR12->VAR21, 0);
		break;
	case VAR22:
		if (!(VAR1->VAR23 & VAR24)) {
			VAR10 = -VAR25;
			goto VAR20;
		}

		VAR9 = FUN11(sizeof(*VAR9), VAR26);
		if (!VAR9) {
			VAR10 = -VAR27;
			goto VAR20;
		}

		if (VAR3) {
			if (FUN12(VAR9, VAR3,
					   sizeof(*VAR9))) {
				VAR10 = -VAR28;
				FUN13(VAR9);
				goto VAR20;
			}
			
			if ((VAR9->VAR29 & VAR30)) {
				VAR9->VAR29 |= VAR31;
				VAR9->VAR32 = (VAR33)-1;
			}
		} else {
			
			VAR9->VAR34 = (VAR35)-1;
		}
		VAR10 = FUN14(FUN2(VAR1)->VAR5, VAR1,
					VAR9, 0, 0);
		if (VAR10 > 0)
			VAR10 = 0;
		FUN13(VAR9);
		break;
	default:
		VAR10 = -VAR25;
	}
VAR20:
	FUN15(VAR1);
	FUN8(&VAR7->VAR12->VAR13, 0);
	return VAR10;
}