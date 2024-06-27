VAR1 FUN1(struct VAR2 *VAR2,
					 const struct VAR3 *VAR4,
					 const struct VAR5 *VAR6,
					 const sctp_subtype_t VAR7, void *VAR8,
					 VAR9 *VAR10)
{
	struct VAR11	*VAR12 = VAR8;
	struct VAR11	*VAR13 = VAR6->VAR14;
	struct VAR11	*VAR15;
	struct VAR16	*VAR17 = NULL;
	VAR18		*VAR19;
	__u32			VAR20, VAR21;

	if (!FUN2(VAR12, VAR6)) {
		FUN3(VAR10, VAR22,
				FUN4());
		return FUN5(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
	}

	
	if (!VAR2->VAR23.VAR24 && !VAR12->VAR25)
		return FUN6(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);

	
	if (!FUN7(VAR12, sizeof(VAR26)))
		return FUN8(VAR2, VAR4, VAR6, VAR7, VAR8,
						  VAR10);

	VAR19 = (VAR18 *)VAR12->VAR27->VAR28;
 	VAR21 = FUN9(VAR19->VAR29);
 
 	

	if (!FUN10(VAR6,

	    (VAR30 *)VAR19->VAR31,

	    (void *)VAR12->VAR32,

	    &VAR17))


 		return FUN11(VAR2, VAR4, VAR6, VAR7, VAR8,
 			   (void *)VAR17, VAR10);
 
	if (VAR13) {
		VAR19 = (VAR18 *)VAR13->VAR33.VAR19;
		VAR20 = FUN9(VAR19->VAR29);
	} else {
		VAR20 = VAR6->VAR34 - 1;
	}

	
	if (FUN12(VAR21, VAR20 + 1) &&
	    !(VAR6->VAR14)) {
		VAR15 = FUN13(VAR6, VAR12,
					sizeof(VAR35));
		if (VAR15) {
			FUN14(VAR15, VAR36, 0);
			FUN3(VAR10, VAR37,
					FUN15(VAR15));
		}
		
		FUN3(VAR10, VAR38,
				FUN16(VAR39));
		FUN3(VAR10, VAR40, FUN4());
		FUN3(VAR10, VAR41,
				FUN17(VAR42));
		FUN3(VAR10, VAR43,
				FUN18(VAR36));
		FUN19(VAR2, VAR44);
		FUN20(VAR2, VAR45);
		return VAR46;
	}

	if ((VAR21 == VAR20) && VAR6->VAR14) {
		FUN3(VAR10, VAR38,
				FUN16(VAR39));

		if (!FUN21((struct VAR5 *)VAR6,
					     VAR12)) {
			
			FUN3(VAR10, VAR47,
					FUN4());
			return VAR48;
		}

		VAR15 = FUN13(VAR6, VAR12,
					sizeof(VAR35));
		if (VAR15) {
			FUN14(VAR15, VAR49, 0);
			FUN3(VAR10, VAR37,
					FUN15(VAR15));
		}
		
		FUN3(VAR10, VAR40, FUN4());
		FUN3(VAR10, VAR41,
				FUN17(VAR42));
		FUN3(VAR10, VAR43,
				FUN18(VAR36));
		FUN19(VAR2, VAR44);
		FUN20(VAR2, VAR45);
		return VAR46;
	}

	return VAR50;
}