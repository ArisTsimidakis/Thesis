static int FUN1(struct VAR1		*VAR2,
				   struct VAR3	*VAR4,
				   int			VAR5)
{
	struct VAR6 *VAR6 = FUN2(VAR2);
	struct VAR7	*VAR8;
	struct VAR9	*VAR10;
	struct VAR11	*VAR12;
	struct VAR13	*VAR14;
	struct VAR15	*VAR16;
	struct VAR17	*VAR18;
	union VAR19		*VAR20;
	void			*VAR21;
	struct VAR22		*VAR23;
	struct VAR24 *VAR25;
	int 			VAR26;
	int 			VAR27 = 0;
	int			VAR28 = 0;

	VAR18 = NULL;
	if (!VAR6->VAR29.VAR30)
		return VAR27;

	VAR8 = FUN3(VAR2);
	VAR10 = VAR8->VAR10;

	FUN4("",
		 VAR31, VAR2, VAR4, VAR5);

	FUN5(VAR12, &VAR10->VAR32, VAR32) {

		if (!VAR12->VAR33.VAR34)
			continue;

		if (VAR12->VAR33.VAR35 & VAR36)
			continue;

		if (!FUN6(VAR12, VAR37))
			continue;

		
		VAR21 = VAR4;
		for (VAR26 = 0; VAR26 < VAR5; VAR26++) {
			VAR20 = VAR21;
			VAR23 = FUN7(VAR20->VAR38.VAR39);
			if (!VAR23) {
				VAR27 = -VAR40;
				goto VAR41;
			}

			if (!FUN8(VAR12, VAR20))
				break;

			VAR21 += VAR23->VAR42;
		}
		if (VAR26 < VAR5)
			continue;

		
		VAR16 = &VAR12->VAR43.VAR44;
		VAR20 = FUN9(VAR16, (union VAR19 *)VAR4,
					       VAR5, VAR8);
		if ((VAR20 == NULL) && (VAR5 == 1)) {
			if (VAR12->VAR45)
				continue;
			VAR12->VAR45 =
			    FUN10(sizeof(union VAR19), VAR46);
			if (VAR12->VAR45 == NULL) {
				VAR27 = -VAR47;
				goto VAR41;
			}
			VAR12->VAR45->VAR48.VAR49 =
				    VAR4->VAR49;
			VAR12->VAR45->VAR38.VAR50 =
				    FUN11(VAR16->VAR51);
			if (VAR4->VAR49 == VAR52) {
				struct VAR53 *VAR54;

				VAR54 = (struct VAR53 *)VAR4;
				VAR12->VAR45->VAR38.VAR55.VAR56 = VAR54->VAR55.VAR56;
			} else if (VAR4->VAR49 == VAR57) {
				struct VAR58 *VAR59;

				VAR59 = (struct VAR58 *)VAR4;
				VAR12->VAR45->VAR60.VAR61 = VAR59->VAR61;
			}

			FUN4("",
				 VAR31, VAR12, &VAR12->VAR45->VAR48,
				 VAR12->VAR45);

			VAR12->VAR62 = 1;
			VAR28 = 1;
			goto VAR63;
		}

		if (VAR20 == NULL)
			return -VAR40;

		
		VAR18 = FUN12(VAR12, VAR20, VAR4, VAR5,
						   VAR36);
		if (!VAR18) {
			VAR27 = -VAR47;
			goto VAR41;
		}

VAR63:
		
		VAR21 = VAR4;
		for (VAR26 = 0; VAR26 < VAR5; VAR26++) {
			VAR20 = VAR21;
			VAR23 = FUN7(VAR20->VAR38.VAR39);
			FUN5(VAR25, &VAR16->VAR64, VAR65) {
				if (FUN13(&VAR25->VAR66, VAR20))
					VAR25->VAR67 = VAR68;
			}
			VAR21 += VAR23->VAR42;
		}

		
		FUN5(VAR14, &VAR12->VAR33.VAR69,
					VAR70) {
			FUN14(VAR14->VAR71);
			FUN15(VAR14, NULL,
					     FUN3(VAR12->VAR43.VAR2));
		}

		if (VAR28)
			
			continue;
		VAR27 = FUN16(VAR12, VAR18);
	}
VAR41:
	return VAR27;
}