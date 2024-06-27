static int FUN1(struct VAR1 *VAR2,
				     struct VAR3 *VAR4, const __u16 VAR5,
				     struct VAR6 **VAR7)
{
	struct VAR8 *VAR9 = VAR2->VAR10;
	struct VAR11 *VAR12 = FUN2(VAR4);
	const struct VAR13 *VAR14 = FUN3(VAR4);
	const struct VAR15 *VAR16 = &VAR14->VAR17;
	const struct VAR15 *VAR18 = &VAR14->VAR16;
	const int VAR19 = VAR4->VAR20;
	const __portpair VAR21 = FUN4(VAR12->VAR22, VAR5);
	struct VAR23 *VAR23 = FUN5(VAR4);
	const unsigned int VAR24 = FUN6(VAR23, VAR16, VAR5, VAR18,
						VAR12->VAR22);
	struct VAR25 *VAR26 = FUN7(VAR9, VAR24);
	VAR27 *VAR28 = FUN8(VAR9, VAR24);
	struct VAR3 *VAR29;
	const struct VAR30 *VAR31;
	struct VAR6 *VAR32;
	int VAR33 = 0;

	FUN9(VAR28);

	
	FUN10(VAR29, VAR31, &VAR26->VAR34) {
		VAR32 = FUN11(VAR29);

		if (FUN12(VAR29, VAR23, VAR24, VAR18, VAR16, VAR21, VAR19)) {
			if (FUN13(VAR4, VAR29, VAR7))
				goto VAR35;
			else
				goto VAR36;
		}
	}
	VAR32 = NULL;

	
	FUN10(VAR29, VAR31, &VAR26->VAR37) {
		if (FUN14(VAR29, VAR23, VAR24, VAR18, VAR16, VAR21, VAR19))
			goto VAR36;
	}

VAR35:
	
	VAR12->VAR38 = VAR5;
	VAR12->VAR39 = FUN15(VAR5);
	VAR4->VAR40 = VAR24;
	FUN16(!FUN17(VAR4));
	FUN18(VAR4, &VAR26->VAR37);
	if (VAR32) {
		VAR33 = FUN19(VAR32);
		FUN20(VAR23, VAR41);
	}
	FUN21(VAR28);
	if (VAR33)
		FUN22(VAR32);
	FUN23(FUN5(VAR4), VAR4->VAR42, 1);

	if (VAR7) {
		*VAR7 = VAR32;
	} else if (VAR32) {
		
		FUN24(VAR32, VAR2);

		FUN22(VAR32);
	}
	return 0;

VAR36:
	FUN21(VAR28);
	return -VAR43;
}