static int FUN1(struct VAR1 *VAR2,
				    struct VAR3 *VAR4,
				    struct VAR5 *VAR6)
{
	int VAR7 = 0;

	FUN2(VAR2, VAR4);

	if (VAR2->VAR8.VAR9) {
		VAR7 = FUN3(VAR6, VAR10,
				  VAR2->VAR8.VAR9);
		if (VAR7)
			goto VAR11;
	}

	if (VAR2->VAR12) {
		VAR7 = FUN4(VAR6, VAR13, sizeof(*VAR2->VAR12), VAR2->VAR12);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR14) {
		VAR7 = FUN5(VAR6, VAR15, VAR2->VAR14,
					VAR16);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR17) {
		VAR7 = FUN4(VAR6, VAR18, FUN6(VAR2->VAR17), VAR2->VAR17);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR19) {
		VAR7 = FUN7(VAR2->VAR19, VAR6);
		if (!VAR7)
			VAR7 = FUN4(VAR6, VAR20,
				      FUN8(VAR2->VAR19), VAR2->VAR19);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR21) {
		VAR7 = FUN4(VAR6, VAR22, FUN9(VAR2->VAR21), VAR2->VAR21);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR23) {
		VAR7 = FUN4(VAR6, VAR24, sizeof(*(VAR2->VAR23)), VAR2->VAR23);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR25) {
		VAR7 = FUN4(VAR6, VAR26, sizeof(*VAR2->VAR25), VAR2->VAR25);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR27) {
		VAR7 = FUN3(VAR6, VAR28, VAR2->VAR27);
		if (VAR7)
			goto VAR11;
	}
	VAR7 = FUN10(VAR6, &VAR2->VAR29);
	if (VAR7)
		goto VAR11;
	if (VAR2->VAR30)
		VAR7 = FUN4(VAR6, VAR31,
			      FUN11(VAR2->VAR30),
			      VAR2->VAR30);
	else
		VAR7 = FUN4(VAR6, VAR32, sizeof(VAR2->VAR33),
			      &VAR2->VAR33);
	if (VAR7)
		goto VAR11;
	if(VAR2->VAR34.VAR35)
		VAR7 = FUN12(&VAR2->VAR34, VAR6);
	if (VAR7)
		goto VAR11;
	if (VAR2->VAR8.VAR36) {
		VAR7 = FUN3(VAR6, VAR37, VAR2->VAR8.VAR36);
		if (VAR7)
			goto VAR11;
	}
	if (VAR2->VAR38)
		VAR7 = FUN13(VAR2->VAR38, VAR6);
VAR11:
	return VAR7;
}