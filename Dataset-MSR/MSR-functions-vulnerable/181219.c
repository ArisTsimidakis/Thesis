static int FUN1(mqd_t VAR1, const struct VAR2 *VAR3)
{
	int VAR4;
	struct fd VAR5;
	struct VAR6 *VAR6;
	struct VAR7 *VAR7;
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;

	FUN2(VAR1, VAR3);

	VAR11 = NULL;
	VAR6 = NULL;
	if (VAR3 != NULL) {
		if (FUN3(VAR3->VAR12 != VAR13 &&
			     VAR3->VAR12 != VAR14 &&
			     VAR3->VAR12 != VAR15))
			return -VAR16;
		if (VAR3->VAR12 == VAR14 &&
			!FUN4(VAR3->VAR17)) {
			return -VAR16;
		}
		if (VAR3->VAR12 == VAR15) {
			long VAR18;

			
			VAR11 = FUN5(VAR19, VAR20);
			if (!VAR11) {
				VAR4 = -VAR21;
				goto VAR22;
			}
			if (FUN6(VAR11->VAR23,
					VAR3->VAR24.VAR25,
					VAR19)) {
				VAR4 = -VAR26;
				goto VAR22;
			}

			
			FUN7(VAR11, VAR19);
			
VAR27:
			VAR5 = FUN8(VAR3->VAR17);
			if (!VAR5.VAR28) {
				VAR4 = -VAR29;
				goto VAR22;
			}
			VAR6 = FUN9(VAR5.VAR28);
			FUN10(VAR5);
			if (FUN11(VAR6)) {
				VAR4 = FUN12(VAR6);
				VAR6 = NULL;
				goto VAR22;
			}
 
 			VAR18 = VAR30;
 			VAR4 = FUN13(VAR6, VAR11, &VAR18, NULL);

			if (VAR4 == 1)




 				goto VAR27;


 			if (VAR4) {
 				VAR6 = NULL;
 				VAR11 = NULL;
				goto VAR22;
			}
		}
	}

	VAR5 = FUN8(VAR1);
	if (!VAR5.VAR28) {
		VAR4 = -VAR29;
		goto VAR22;
	}

	VAR7 = FUN14(VAR5.VAR28);
	if (FUN3(VAR5.VAR28->VAR31 != &VAR32)) {
		VAR4 = -VAR29;
		goto VAR33;
	}
	VAR9 = FUN15(VAR7);

	VAR4 = 0;
	FUN16(&VAR9->VAR34);
	if (VAR3 == NULL) {
		if (VAR9->VAR35 == FUN17(VAR36)) {
			FUN18(VAR9);
			VAR7->VAR37 = VAR7->VAR38 = FUN19(VAR7);
		}
	} else if (VAR9->VAR35 != NULL) {
		VAR4 = -VAR39;
	} else {
		switch (VAR3->VAR12) {
		case VAR13:
			VAR9->VAR40.VAR12 = VAR13;
			break;
		case VAR15:
			VAR9->VAR41 = VAR6;
			VAR9->VAR42 = VAR11;
			VAR6 = NULL;
			VAR11 = NULL;
			VAR9->VAR40.VAR12 = VAR15;
			break;
		case VAR14:
			VAR9->VAR40.VAR17 = VAR3->VAR17;
			VAR9->VAR40.VAR24 = VAR3->VAR24;
			VAR9->VAR40.VAR12 = VAR14;
			break;
		}

		VAR9->VAR35 = FUN20(FUN17(VAR36));
		VAR9->VAR43 = FUN21(FUN22());
		VAR7->VAR37 = VAR7->VAR38 = FUN19(VAR7);
	}
	FUN23(&VAR9->VAR34);
VAR33:
	FUN10(VAR5);
VAR22:
	if (VAR6)
		FUN24(VAR6, VAR11);
	else if (VAR11)
		FUN25(VAR11);

	return VAR4;
}