static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	__be16 VAR9;
	int VAR10, VAR11, VAR12 = 0;
	void *VAR13;
	struct VAR14 *VAR15 = (struct VAR14 *)VAR4->VAR16;
	int VAR17, VAR18;
	unsigned char *VAR19;
	int VAR20 = 0;
	int VAR21 = 0;

	FUN2(&VAR2->VAR22);

	VAR11 = -VAR23;
	if (VAR15 == NULL) {
		VAR10	= VAR2->VAR10;
		VAR9	= VAR2->VAR24;
		VAR19	= NULL;
	} else {
		VAR11 = -VAR25;
		if (VAR4->VAR26 < sizeof(struct VAR14))
			goto VAR27;
		if (VAR4->VAR26 < (VAR15->VAR28
					+ FUN3(struct VAR14,
						VAR29)))
			goto VAR27;
		VAR10	= VAR15->VAR30;
		VAR9	= VAR15->VAR31;
		VAR19	= VAR15->VAR29;
	}

	VAR8 = FUN4(FUN5(&VAR2->VAR32), VAR10);
	VAR11 = -VAR33;
	if (FUN6(VAR8 == NULL))
		goto VAR27;

	VAR12 = VAR8->VAR34;

	VAR11 = -VAR35;
	if (FUN6(!(VAR8->VAR36 & VAR37)))
		goto VAR38;

	VAR18 = VAR2->VAR39.VAR40
		- (VAR2->VAR41 - sizeof(struct VAR14));

	if (VAR18 > VAR8->VAR42 + VAR12)
		VAR18 = VAR8->VAR42 + VAR12;

	do {
		VAR13 = FUN7(VAR2, &VAR2->VAR39,
				VAR43);

		if (FUN6(VAR13 == NULL)) {
			FUN8();
			continue;
		}

		VAR21 = VAR43;
		VAR6 = FUN9(&VAR2->VAR32,
				FUN10(VAR8)
				+ sizeof(struct VAR14),
				0, &VAR11);

		if (FUN6(VAR6 == NULL))
			goto VAR44;

		VAR17 = FUN11(VAR2, VAR6, VAR13, VAR8, VAR18, VAR9,
				VAR19);

		if (FUN6(VAR17 < 0)) {
			if (VAR2->VAR45) {
				FUN12(VAR2, VAR13,
						VAR46);
				FUN13(&VAR2->VAR39);
				FUN14(VAR6);
				continue;
			} else {
				VAR21 = VAR47;
				VAR11 = VAR17;
				goto VAR44;
			}
		}

		VAR6->VAR48 = VAR49;
		FUN12(VAR2, VAR13, VAR50);
		FUN15(&VAR2->VAR39.VAR51);

		VAR21 = VAR43;
		VAR11 = FUN16(VAR6);
		if (FUN6(VAR11 > 0)) {
			VAR11 = FUN17(VAR11);
			if (VAR11 && FUN18(VAR2, VAR13) ==
				   VAR46) {
				
				VAR6 = NULL;
				goto VAR44;
			}
			
			VAR11 = 0;
		}
		FUN13(&VAR2->VAR39);
		VAR20 += VAR17;
	} while (FUN19((VAR13 != NULL) ||
			((!(VAR4->VAR52 & VAR53)) &&
			 (FUN20(&VAR2->VAR39.VAR51))))
		);

	VAR11 = VAR20;
	goto VAR38;

VAR44:
	FUN12(VAR2, VAR13, VAR21);
	FUN14(VAR6);
VAR38:
	FUN21(VAR8);
VAR27:
	FUN22(&VAR2->VAR22);
	return VAR11;
}