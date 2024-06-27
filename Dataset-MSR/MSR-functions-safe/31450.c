static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	struct VAR11 *VAR12;
	struct VAR13 *VAR14;
	int VAR15;
	int VAR16;
	struct VAR17 *VAR18;
	struct VAR19 *VAR20;
	int VAR21 = 0;

	VAR15 = FUN2(VAR2->VAR22.VAR23);
	if (!VAR15)
		return -VAR24;

	VAR16 = sizeof(struct VAR9) +
		(sizeof(struct VAR11) * 2) +
		(VAR15 * 2) +
		sizeof(struct VAR13);

	if (VAR2->VAR25.VAR26 == VAR27)
		VAR16 += FUN3(VAR4);
	else if (VAR2->VAR25.VAR26 == VAR28)
		VAR16 += FUN4(VAR4);

	if ((VAR20 = VAR2->VAR29)) {
		VAR21 = FUN5(VAR20->VAR30);
		VAR16 +=  sizeof(struct VAR17) + VAR21;
	}

	VAR8 =  FUN6(VAR16 + 16, VAR31);
	if (VAR8 == NULL)
		return -VAR32;

	VAR10 = (struct VAR9 *) FUN7(VAR8, sizeof(struct VAR9));
	VAR10->VAR33 = VAR34;
	VAR10->VAR35 = VAR36;
	VAR10->VAR37 = FUN8(VAR2->VAR25.VAR26);
	VAR10->VAR38 = VAR16 / sizeof(VAR39);
	VAR10->VAR40 = 0;
	VAR10->VAR41 = 0;
	VAR10->VAR42 = VAR2->VAR43.VAR44 = FUN9();
	VAR10->VAR45 = 0;

	
	VAR12 = (struct VAR11*) FUN7(VAR8,
					      sizeof(struct VAR11)+VAR15);
	VAR12->VAR46 =
		(sizeof(struct VAR11)+VAR15)/
			sizeof(VAR39);
	VAR12->VAR47 = VAR48;
	VAR12->VAR49 = 0;
	VAR12->VAR50 = 0;
	VAR12->VAR51 =
		FUN10(&VAR2->VAR22.VAR52, 0,
				    (struct VAR53 *) (VAR12 + 1),
				    VAR2->VAR22.VAR23);
	if (!VAR12->VAR51)
		FUN11();

	
	VAR12 = (struct VAR11*) FUN7(VAR8,
					      sizeof(struct VAR11)+VAR15);
	VAR12->VAR46 =
		(sizeof(struct VAR11)+VAR15)/
			sizeof(VAR39);
	VAR12->VAR47 = VAR54;
	VAR12->VAR49 = 0;
	VAR12->VAR50 = 0;
	VAR12->VAR51 =
		FUN10(&VAR2->VAR25.VAR55, 0,
				    (struct VAR53 *) (VAR12 + 1),
				    VAR2->VAR22.VAR23);
	if (!VAR12->VAR51)
		FUN11();

	VAR14 = (struct VAR13 *)  FUN7(VAR8, sizeof(struct VAR13));
	VAR14->VAR56 = sizeof(struct VAR13)/sizeof(VAR39);
	VAR14->VAR57 = VAR58;
	VAR14->VAR59 = VAR60;
	VAR14->VAR61 = VAR62 + 1;
	VAR14->VAR63 = VAR6->VAR64;

	
	if (VAR2->VAR25.VAR26 == VAR27)
		FUN12(VAR8, VAR4);
	else if (VAR2->VAR25.VAR26 == VAR28)
		FUN13(VAR8, VAR4);

	
	if (VAR20) {
		VAR18 = (struct VAR17 *) FUN7(VAR8,
				sizeof(struct VAR17) + VAR21);
		VAR18->VAR65 =
		  (sizeof(struct VAR17) + VAR21) / sizeof(VAR39);
		VAR18->VAR66 = VAR67;
		VAR18->VAR68 = VAR20->VAR69;
		VAR18->VAR70 = VAR20->VAR71;
		VAR18->VAR72 = VAR20->VAR30;
		memcpy(VAR18 + 1, VAR20->VAR73,
		       VAR20->VAR30);
	}

	return FUN14(VAR8, VAR31, VAR74, NULL, FUN15(VAR2));
}