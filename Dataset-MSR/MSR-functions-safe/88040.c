static int FUN1(const struct VAR1 *VAR2,
			       struct VAR3 *VAR4,
			       struct VAR5 *VAR6,
			       struct VAR7 *VAR8)
{
	const struct VAR9 *VAR10;
	struct VAR11 *VAR11 = FUN2(VAR4->VAR12);
	struct genl_info VAR13;
	struct VAR14 *VAR15 = FUN3(VAR6);
	struct VAR16 **VAR17;
	int VAR18, VAR19;

	
	if (!VAR2->VAR20 && !FUN4(VAR11, &VAR21))
		return -VAR22;

	VAR18 = VAR23 + VAR2->VAR24;
	if (VAR6->VAR25 < FUN5(VAR18))
		return -VAR26;

	VAR10 = FUN6(VAR15->VAR27, VAR2);
	if (VAR10 == NULL)
		return -VAR28;

	if ((VAR10->VAR29 & VAR30) &&
	    !FUN7(VAR4, VAR31))
		return -VAR32;

	if ((VAR10->VAR29 & VAR33) &&
	    !FUN8(VAR4, VAR11->VAR34, VAR31))
		return -VAR32;

	if ((VAR6->VAR35 & VAR36) == VAR36) {
		int VAR37;

		if (VAR10->VAR38 == NULL)
			return -VAR28;

		if (!VAR2->VAR39) {
			struct netlink_dump_control VAR40 = {
				.VAR41 = VAR2->VAR41,
				
				.VAR42 = (void *)VAR10,
				.VAR43 = VAR44,
				.VAR45 = VAR46,
				.VAR47 = VAR48,
			};

			FUN9();
			VAR37 = FUN10(VAR11->VAR49, VAR4, VAR6, &VAR40);
			FUN11();

		} else {
			struct netlink_dump_control VAR40 = {
				.VAR41 = VAR2->VAR41,
				.VAR43 = VAR10->VAR43,
				.VAR45 = VAR10->VAR38,
				.VAR47 = VAR10->VAR47,
			};

			VAR37 = FUN10(VAR11->VAR49, VAR4, VAR6, &VAR40);
		}

		return VAR37;
	}

	if (VAR10->VAR50 == NULL)
		return -VAR28;

	if (VAR2->VAR51 && VAR2->VAR39) {
		VAR17 = FUN12(VAR2->VAR51 + 1,
					sizeof(struct VAR16 *),
					VAR52);
		if (VAR17 == NULL)
			return -VAR53;
	} else
		VAR17 = VAR2->VAR17;

	if (VAR17) {
		VAR19 = FUN13(VAR6, VAR18, VAR17, VAR2->VAR51,
				  VAR10->VAR54, VAR8);
		if (VAR19 < 0)
			goto VAR55;
	}

	VAR13.VAR56 = VAR6->VAR57;
	VAR13.VAR58 = FUN14(VAR4).VAR59;
	VAR13.VAR60 = VAR6;
	VAR13.VAR61 = FUN3(VAR6);
	VAR13.VAR62 = FUN3(VAR6) + VAR23;
	VAR13.VAR63 = VAR17;
	VAR13.VAR8 = VAR8;
	FUN15(&VAR13, VAR11);
	memset(&VAR13.VAR64, 0, sizeof(VAR13.VAR64));

	if (VAR2->VAR65) {
		VAR19 = VAR2->FUN16(VAR10, VAR4, &VAR13);
		if (VAR19)
			goto VAR55;
	}

	VAR19 = VAR10->FUN17(VAR4, &VAR13);

	if (VAR2->VAR66)
		VAR2->FUN18(VAR10, VAR4, &VAR13);

VAR55:
	if (VAR2->VAR39)
		FUN19(VAR17);

	return VAR19;
}