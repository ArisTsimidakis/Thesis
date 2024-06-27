static VAR1 FUN1(struct VAR2 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = VAR2->VAR7;
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;
	char *VAR12 = NULL;
	ssize_t VAR13, VAR14 = -VAR15;
	int VAR16;

	
	if (FUN2(VAR6->VAR17->VAR18 != VAR19))
		return -VAR20;

	
	VAR11 = VAR6->VAR11;
	if (!VAR11) {
		if (VAR2->VAR21 & VAR22)
			return -VAR23;

		VAR13 = FUN3(VAR6->VAR24, (VAR11 = VAR6->VAR11));
		if (VAR13)
			return -VAR25;
	}

	
	VAR16 = (!VAR4->read == !VAR6->VAR26);
	if (VAR16 && VAR6->VAR27)
		return -VAR15;

	
	if (!VAR16) {
		
		struct VAR28 *VAR29 = VAR6->VAR17->VAR29;
		size_t VAR30;

		FUN4(&VAR6->VAR17->VAR31);
		
		if (VAR6->VAR11 != VAR11) {
			FUN5(&VAR6->VAR17->VAR31);
			return -VAR32;
		}
		VAR14 = FUN6(&VAR4->VAR12);
		
		if (VAR4->read)
			VAR14 = FUN7(VAR29, VAR11->VAR11, VAR14);
		FUN5(&VAR6->VAR17->VAR31);

		VAR12 = FUN8(VAR14, VAR33);
		if (FUN9(!VAR12))
			return -VAR34;
		if (!VAR4->read) {
			VAR30 = FUN10(VAR12, VAR14, &VAR4->VAR12);
			if (VAR30 != VAR14) {
				VAR13 = -VAR35;
				goto VAR36;
			}
		}
	}

	
	VAR13 = FUN11(&VAR6->mutex, VAR2->VAR21 & VAR22);
	if (FUN9(VAR13))
		goto VAR36;

	FUN4(&VAR6->VAR17->VAR31);

	if (VAR6->VAR11 != VAR11) {
		
		VAR13 = -VAR32;
	} else if (VAR16) {
		
		if (FUN12(VAR6->VAR11 == VAR11) && !FUN2(!VAR11->VAR11))
			FUN13(VAR11->VAR11);
		VAR13 = -VAR37;
	} else if (FUN9(VAR14 == -VAR15)) {
		
		FUN14(1, "", VAR38);
		VAR13 = -VAR15;
	} else if (!VAR4->VAR39) {
		FUN15(VAR40);
		bool VAR41 = false;

		VAR9 = VAR11->VAR9;
		VAR9->VAR42      = VAR12;
		VAR9->VAR43   = VAR14;

		VAR9->VAR44  = &VAR40;
		VAR9->VAR45 = VAR46;

		VAR13 = FUN16(VAR11->VAR11, VAR9, VAR47);
		if (FUN9(VAR13 < 0))
			goto VAR48;

		FUN5(&VAR6->VAR17->VAR31);

		if (FUN9(FUN17(&VAR40))) {
			
			FUN18(VAR11->VAR11, VAR9);
			VAR41 = VAR11->VAR49 < 0;
		}

		
		VAR13 = VAR41 ? -VAR25 : VAR11->VAR49;
		if (VAR4->read && VAR13 > 0) {
			VAR13 = FUN19(VAR12, VAR13, &VAR4->VAR12);
			if (!VAR13)
				VAR13 = -VAR35;
		}
		goto VAR50;
	} else if (!(VAR9 = FUN20(VAR11->VAR11, VAR33))) {
		VAR13 = -VAR34;
	} else {
		VAR9->VAR42      = VAR12;
		VAR9->VAR43   = VAR14;

		VAR4->VAR42 = VAR12;
		VAR4->VAR11 = VAR11->VAR11;
		VAR4->VAR9 = VAR9;
		VAR4->VAR17 = VAR6->VAR17;

		VAR9->VAR44  = VAR4;
		VAR9->VAR45 = VAR51;

		VAR13 = FUN16(VAR11->VAR11, VAR9, VAR47);
		if (FUN9(VAR13)) {
			FUN21(VAR11->VAR11, VAR9);
			goto VAR48;
		}

		VAR13 = -VAR52;
		
		VAR12 = NULL;
	}

VAR48:
	FUN5(&VAR6->VAR17->VAR31);
VAR50:
	FUN22(&VAR6->mutex);
VAR36:
	FUN23(VAR12);
	return VAR13;
}