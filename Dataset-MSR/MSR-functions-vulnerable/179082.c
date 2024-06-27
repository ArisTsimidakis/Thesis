FUN1(VAR1, int, VAR2, int, VAR3, struct shmid_ds VAR4 *, VAR5)
{
	struct VAR6 *VAR7;
	int VAR8, VAR9;
	struct VAR10 *VAR11;

	if (VAR3 < 0 || VAR2 < 0)
		return -VAR12;

	VAR9 = FUN2(&VAR3);
	VAR11 = VAR13->VAR14->VAR15;

	switch (VAR3) {
	case VAR16:
	case VAR17:
	case VAR18:
	case VAR19:
		return FUN3(VAR11, VAR2, VAR3, VAR9, VAR5);
	case VAR20:
	case VAR21:
		return FUN4(VAR11, VAR2, VAR3, VAR5, VAR9);
	case VAR22:
	case VAR23:
	{
		struct VAR24 *VAR25;

		FUN5();
		VAR7 = FUN6(VAR11, VAR2);
		if (FUN7(VAR7)) {
			VAR8 = FUN8(VAR7);
			goto VAR26;
		}

		FUN9(&(VAR7->VAR27));
		VAR8 = FUN10(VAR7, VAR3);
		if (VAR8)
			goto VAR26;

		FUN11(&VAR7->VAR27);
		if (!FUN12(VAR11->VAR28, VAR29)) {
			kuid_t VAR30 = FUN13();
			VAR8 = -VAR31;
			if (!FUN14(VAR30, VAR7->VAR27.VAR32) &&
			    !FUN14(VAR30, VAR7->VAR27.VAR33))
				goto VAR34;
			if (VAR3 == VAR22 && !FUN15(VAR35))
				goto VAR34;
 		}
 
 		VAR25 = VAR7->VAR25;














 		if (FUN16(VAR25))
 			goto VAR34;
 
		if (VAR3 == VAR22) {
			struct VAR36 *VAR37 = FUN17();
			VAR8 = FUN18(VAR25, 1, VAR37);
			if (!VAR8 && !(VAR7->VAR27.VAR38 & VAR39)) {
				VAR7->VAR27.VAR38 |= VAR39;
				VAR7->VAR40 = VAR37;
			}
			goto VAR34;
		}

		
		if (!(VAR7->VAR27.VAR38 & VAR39))
			goto VAR34;
		FUN18(VAR25, 0, VAR7->VAR40);
		VAR7->VAR27.VAR38 &= ~VAR39;
		VAR7->VAR40 = NULL;
		FUN19(VAR25);
		FUN20(&VAR7->VAR27);
		FUN21();
		FUN22(VAR25->VAR41);

		FUN23(VAR25);
		return VAR8;
	}
	default:
		return -VAR12;
	}

VAR34:
	FUN20(&VAR7->VAR27);
VAR26:
	FUN21();
	return VAR8;
}