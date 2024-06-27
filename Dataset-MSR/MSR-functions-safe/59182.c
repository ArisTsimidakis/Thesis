static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
	const struct VAR5 *VAR6 = NULL;
	struct VAR7 *VAR8;
	struct bpf_call_arg_meta VAR9;
	bool VAR10;
	int VAR11, VAR12;

	
	if (VAR3 < 0 || VAR3 >= VAR13) {
		FUN2(VAR2, "", FUN3(VAR3),
			VAR3);
		return -VAR14;
	}

	if (VAR2->VAR15->VAR16)
		VAR6 = VAR2->VAR15->FUN4(VAR3);

	if (!VAR6) {
		FUN2(VAR2, "", FUN3(VAR3),
			VAR3);
		return -VAR14;
	}

	
	if (!VAR2->VAR17->VAR18 && VAR6->VAR19) {
		FUN2(VAR2, "");
		return -VAR14;
	}

	
	VAR10 = FUN5(VAR6->VAR20);
	if (VAR10 && VAR6->VAR21 != VAR22) {
		FUN2(VAR2, "",
			FUN3(VAR3), VAR3);
		return -VAR14;
	}

	memset(&VAR9, 0, sizeof(VAR9));
	VAR9.VAR23 = VAR6->VAR23;

	
	VAR12 = FUN6(VAR6);
	if (VAR12) {
		FUN2(VAR2, "",
			FUN3(VAR3), VAR3);
		return VAR12;
	}

	
	VAR12 = FUN7(VAR2, VAR24, VAR6->VAR21, &VAR9);
	if (VAR12)
		return VAR12;
	VAR12 = FUN7(VAR2, VAR25, VAR6->VAR26, &VAR9);
	if (VAR12)
		return VAR12;
	VAR12 = FUN7(VAR2, VAR27, VAR6->VAR28, &VAR9);
	if (VAR12)
		return VAR12;
	VAR12 = FUN7(VAR2, VAR29, VAR6->VAR30, &VAR9);
	if (VAR12)
		return VAR12;
	VAR12 = FUN7(VAR2, VAR31, VAR6->VAR32, &VAR9);
	if (VAR12)
		return VAR12;

	
	for (VAR11 = 0; VAR11 < VAR9.VAR33; VAR11++) {
		VAR12 = FUN8(VAR2, VAR4, VAR9.VAR34, VAR11, VAR35, VAR36, -1);
		if (VAR12)
			return VAR12;
	}

	VAR8 = FUN9(VAR2);
	
	for (VAR11 = 0; VAR11 < VAR37; VAR11++) {
		FUN10(VAR2, VAR8, VAR38[VAR11]);
		FUN11(VAR2, VAR38[VAR11], VAR39);
	}

	
	if (VAR6->VAR40 == VAR41) {
		
		FUN12(VAR2, VAR8, VAR42);
	} else if (VAR6->VAR40 == VAR43) {
		VAR8[VAR42].VAR44 = VAR45;
	} else if (VAR6->VAR40 == VAR46) {
		struct VAR47 *VAR48;

		VAR8[VAR42].VAR44 = VAR49;
		
		FUN13(VAR2, VAR8, VAR42);
		VAR8[VAR42].VAR50 = 0;
		
		if (VAR9.VAR51 == NULL) {
			FUN2(VAR2,
				"");
			return -VAR14;
		}
		VAR8[VAR42].VAR51 = VAR9.VAR51;
		VAR8[VAR42].VAR52 = ++VAR2->VAR53;
		VAR48 = &VAR2->VAR54[VAR4];
		if (!VAR48->VAR51)
			VAR48->VAR51 = VAR9.VAR51;
		else if (VAR48->VAR51 != VAR9.VAR51)
			VAR48->VAR51 = VAR55;
	} else {
		FUN2(VAR2, "",
			VAR6->VAR40, FUN3(VAR3), VAR3);
		return -VAR14;
	}

	VAR12 = FUN14(VAR2, VAR9.VAR51, VAR3);
	if (VAR12)
		return VAR12;

	if (VAR10)
		FUN15(VAR2);
	return 0;
}