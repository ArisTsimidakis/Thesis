static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6, *VAR7;
	struct VAR8 *VAR9;
	const struct VAR10 *VAR11 = VAR4->VAR12;
	int VAR13;
	int VAR14;

	if (FUN2(VAR2, VAR15, VAR4->VAR16))
		return -VAR17;

	VAR6 = FUN3(VAR2, VAR18);
	if (!VAR6)
		return -VAR17;
 
 	if (VAR11->VAR19) {
 		struct ieee_ets VAR20;


 		VAR14 = VAR11->FUN4(VAR4, &VAR20);
 		if (!VAR14 &&
 		    FUN5(VAR2, VAR21, sizeof(VAR20), &VAR20))
			return -VAR17;
	}
 
 	if (VAR11->VAR22) {
 		struct ieee_maxrate VAR23;


 		VAR14 = VAR11->FUN6(VAR4, &VAR23);
 		if (!VAR14) {
 			VAR14 = FUN5(VAR2, VAR24,
				      sizeof(VAR23), &VAR23);
			if (VAR14)
				return -VAR17;
		}
	}
 
 	if (VAR11->VAR25) {
 		struct ieee_pfc VAR26;


 		VAR14 = VAR11->FUN7(VAR4, &VAR26);
 		if (!VAR14 &&
 		    FUN5(VAR2, VAR27, sizeof(VAR26), &VAR26))
			return -VAR17;
	}

	VAR7 = FUN3(VAR2, VAR28);
	if (!VAR7)
		return -VAR17;

	FUN8(&VAR29);
	FUN9(VAR9, &VAR30, VAR31) {
		if (VAR9->VAR32 == VAR4->VAR32) {
			VAR14 = FUN5(VAR2, VAR33, sizeof(VAR9->VAR7),
					 &VAR9->VAR7);
			if (VAR14) {
				FUN10(&VAR29);
				return -VAR17;
			}
		}
	}

	if (VAR4->VAR12->VAR34)
		VAR13 = VAR4->VAR12->FUN11(VAR4);
	else
		VAR13 = -VAR35;

	FUN10(&VAR29);
	FUN12(VAR2, VAR7);

 	
 	if (VAR11->VAR36) {
 		struct ieee_ets VAR20;


 		VAR14 = VAR11->FUN13(VAR4, &VAR20);
 		if (!VAR14 &&
 		    FUN5(VAR2, VAR37, sizeof(VAR20), &VAR20))
			return -VAR17;
	}
 
 	if (VAR11->VAR38) {
 		struct ieee_pfc VAR26;


 		VAR14 = VAR11->FUN14(VAR4, &VAR26);
 		if (!VAR14 &&
 		    FUN5(VAR2, VAR39, sizeof(VAR26), &VAR26))
			return -VAR17;
	}

	if (VAR11->VAR40 && VAR11->VAR41) {
		VAR14 = FUN15(VAR4, VAR2,
					   VAR42,
					   VAR43,
					   VAR33);
		if (VAR14)
			return -VAR17;
	}

	FUN12(VAR2, VAR6);
	if (VAR13 >= 0) {
		VAR14 = FUN16(VAR2, VAR44, VAR13);
		if (VAR14)
			return -VAR17;
	}

	return 0;
}