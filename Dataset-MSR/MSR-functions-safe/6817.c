void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
	struct hdr_ctx VAR6;
	const char *VAR7 = "";
	int VAR8 = 10;

	VAR6.VAR9 = 0;


	if (FUN2(VAR2->VAR10 & VAR11)) {
		VAR7 = "";
		VAR8 = 16;
	}

	VAR2->VAR10 &= ~(VAR12 | VAR13);
	while (FUN3(VAR7, VAR8, VAR4->VAR14->VAR15->VAR16, &VAR2->VAR17, &VAR6)) {
		if (VAR6.VAR18 >= 10 && FUN4(VAR6.VAR19 + VAR6.VAR20, VAR6.VAR18, "", 10)) {
			if (VAR5 & VAR13)
				VAR2->VAR10 |= VAR13;
			else
				FUN5(VAR4, &VAR2->VAR17, &VAR6);
		}
		else if (VAR6.VAR18 >= 5 && FUN4(VAR6.VAR19 + VAR6.VAR20, VAR6.VAR18, "", 5)) {
			if (VAR5 & VAR12)
				VAR2->VAR10 |= VAR12;
			else
				FUN5(VAR4, &VAR2->VAR17, &VAR6);
		}
	}

	if (VAR5 == (VAR2->VAR10 & (VAR12|VAR13)))
		return;

	if ((VAR5 & VAR12) && !(VAR2->VAR10 & VAR12)) {
		VAR2->VAR10 |= VAR12;
		VAR7 = "";
		VAR8  = 17;
		if (FUN2(VAR2->VAR10 & VAR11)) {
			VAR7 = "";
			VAR8 = 23;
		}
		FUN6(VAR4, &VAR2->VAR17, VAR7, VAR8);
	}

	if ((VAR5 & VAR13) && !(VAR2->VAR10 & VAR13)) {
		VAR2->VAR10 |= VAR13;
		VAR7 = "";
		VAR8 = 22;
		if (FUN2(VAR2->VAR10 & VAR11)) {
			VAR7 = "";
			VAR8 = 28;
		}
		FUN6(VAR4, &VAR2->VAR17, VAR7, VAR8);
	}
	return;
}