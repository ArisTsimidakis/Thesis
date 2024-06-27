static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
	struct VAR6	*VAR7 = (struct VAR6 *) VAR4;
	struct VAR8	*VAR9 = FUN2(VAR2);
	struct VAR10	*VAR11 = FUN3(VAR2);
	struct VAR12	*VAR13, *VAR14, final;
	struct VAR15	*VAR16;
	struct flowi6		VAR17;
	struct VAR18	*VAR19 = NULL;
	struct VAR20	*VAR21;
	int			VAR22;
	int			VAR23;

	if (VAR7->VAR24 == VAR25) {
		if (FUN4(VAR2))
			return -VAR26;
		VAR23 = FUN5(VAR2, VAR4, VAR5);
		goto VAR27;
	}

	if (VAR5 < VAR28)
		return -VAR29;

	if (VAR7->VAR24 != VAR30)
		return -VAR26;

	memset(&VAR17, 0, sizeof(VAR17));
	if (VAR11->VAR31) {
		VAR17.VAR19 = VAR7->VAR32&VAR33;
		if (VAR17.VAR19&VAR34) {
			VAR19 = FUN6(VAR2, VAR17.VAR19);
			if (!VAR19)
				return -VAR29;
		}
	}

	VAR22 = FUN7(&VAR7->VAR35);

	if (VAR22 == VAR36) {
		
		VAR7->VAR35.VAR37[15] = 0x01;
	}

	VAR13 = &VAR7->VAR35;

	if (VAR22 == VAR38) {
		struct sockaddr_in VAR39;

		if (FUN4(VAR2)) {
			VAR23 = -VAR40;
			goto VAR41;
		}
		VAR39.VAR42 = VAR25;
		VAR39.VAR43.VAR44 = VAR13->VAR45[3];
		VAR39.VAR46 = VAR7->VAR47;

		VAR23 = FUN5(VAR2,
					     (struct VAR3 *) &VAR39,
					     sizeof(VAR39));

VAR27:
		if (VAR23)
			goto VAR41;

		FUN8(VAR9->VAR48, &VAR2->VAR49);

		if (FUN9(&VAR11->VAR50) ||
		    FUN10(&VAR11->VAR50))
			FUN8(VAR9->VAR51, &VAR11->VAR50);

		if (FUN9(&VAR2->VAR52) ||
		    FUN10(&VAR2->VAR52)) {
			FUN8(VAR9->VAR53,
					       &VAR2->VAR52);
			if (VAR2->VAR54->VAR55)
				VAR2->VAR54->FUN11(VAR2);
		}

		goto VAR41;
	}

	if (FUN12(VAR22)) {
		if (VAR5 >= sizeof(struct VAR6) &&
		    VAR7->VAR56) {
			if (VAR2->VAR57 &&
			    VAR2->VAR57 != VAR7->VAR56) {
				VAR23 = -VAR29;
				goto VAR41;
			}
			VAR2->VAR57 = VAR7->VAR56;
		}

		if (!VAR2->VAR57 && (VAR22 & VAR58))
			VAR2->VAR57 = VAR11->VAR59;

		
		if (!VAR2->VAR57) {
			VAR23 = -VAR29;
			goto VAR41;
		}
	}

	VAR2->VAR49 = *VAR13;
	VAR11->VAR60 = VAR17.VAR19;

	VAR9->VAR61 = VAR7->VAR47;

	

	VAR17.VAR62 = VAR2->VAR63;
	VAR17.VAR13 = VAR2->VAR49;
	VAR17.VAR50 = VAR11->VAR50;
	VAR17.VAR64 = VAR2->VAR57;
	VAR17.VAR65 = VAR2->VAR66;
	VAR17.VAR67 = VAR9->VAR61;
	VAR17.VAR68 = VAR9->VAR69;

	if (!VAR17.VAR64 && (VAR22&VAR58))
		VAR17.VAR64 = VAR11->VAR59;
 
 	FUN13(VAR2, FUN14(&VAR17));
 

	VAR21 = VAR19 ? VAR19->VAR21 : VAR11->VAR21;




 	VAR14 = FUN15(&VAR17, VAR21, &final);


 
 	VAR16 = FUN16(VAR2, &VAR17, VAR14);
 	VAR23 = 0;
	if (FUN17(VAR16)) {
		VAR23 = FUN18(VAR16);
		goto VAR41;
	}

	

	if (FUN9(&VAR11->VAR50))
		VAR11->VAR50 = VAR17.VAR50;

	if (FUN9(&VAR2->VAR52)) {
		VAR2->VAR52 = VAR17.VAR50;
		VAR9->VAR53 = VAR70;
		if (VAR2->VAR54->VAR55)
			VAR2->VAR54->FUN11(VAR2);
	}

	FUN19(VAR2, VAR16,
		      FUN20(&VAR17.VAR13, &VAR2->VAR49) ?
		      &VAR2->VAR49 : NULL,
#ifdef VAR71
		      FUN20(&VAR17.VAR50, &VAR11->VAR50) ?
		      &VAR11->VAR50 :
#endif
		      NULL);

	VAR2->VAR72 = VAR73;
	FUN21(VAR2);
VAR41:
	FUN22(VAR19);
	return VAR23;
}