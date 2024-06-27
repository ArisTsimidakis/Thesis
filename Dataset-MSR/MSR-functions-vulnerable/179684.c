int FUN1(struct VAR1 *VAR2, struct socket *VAR3, struct VAR4 *VAR5,
		size_t VAR6, int VAR7)
{
	struct VAR3 *VAR8 = VAR3->VAR8;
	struct VAR9 *VAR10 = FUN2(VAR8);
	long VAR11;
	int VAR12 = 0, VAR13 = VAR7 & VAR14;
	struct VAR15 *VAR16;
	struct VAR17 *VAR18 = NULL;

	
	VAR11 = FUN3(VAR8, VAR13);
 
 	FUN4("", VAR6, VAR7, VAR11);
 

	VAR5->VAR19 = 0;


 	if (VAR7 & VAR20)
 		goto VAR21;
 
	while (1) {
		
		if (!FUN5(&VAR10->VAR22)) {
			VAR12 = FUN6(VAR10, VAR5);
			break;
		}

		if (VAR10->VAR23) {
			VAR12 = FUN7(VAR10, VAR5);
			break;
		}

		if (!FUN8(VAR10, &VAR18)) {
			if (VAR13) {
				VAR12 = -VAR24;
				break;
			}

			VAR11 = FUN9(*FUN10(VAR8),
					(!FUN5(&VAR10->VAR22) ||
					 VAR10->VAR23 ||
					 FUN8(VAR10, &VAR18)), VAR11);
			FUN4("", VAR18,
				 VAR11);
			if (VAR11 > 0 || VAR11 == VAR25)
				continue;

			VAR12 = VAR11;
			if (VAR12 == 0)
				VAR12 = -VAR26;
			break;
		}

		FUN4("", VAR18,
			 &VAR18->VAR27->VAR28,
			 FUN11(VAR18->VAR29.VAR30));
		VAR12 = VAR18->VAR27->VAR31->FUN12(VAR18, VAR5->VAR32,
							     VAR6);
		if (VAR12 < 0)
			break;

		
		if (!FUN13(VAR10, VAR18, !(VAR7 & VAR33))) {
			FUN14(VAR18);
			VAR18 = NULL;
			FUN15(VAR34);
			continue;
		}

		if (VAR12 < FUN16(VAR18->VAR29.VAR35)) {
			if (VAR7 & VAR36)
				VAR12 = FUN16(VAR18->VAR29.VAR35);
			VAR5->VAR7 |= VAR36;
		}

		if (FUN17(VAR18, VAR5)) {
			VAR12 = -VAR37;
			goto VAR21;
		}

		FUN15(VAR38);

		VAR16 = (struct VAR15 *)VAR5->VAR39;
		if (VAR16) {
			VAR16->VAR40 = VAR41;
			VAR16->VAR42 = VAR18->VAR29.VAR30;
			VAR16->VAR43.VAR44 = VAR18->VAR45;
			memset(VAR16->VAR46, 0, sizeof(VAR16->VAR46));
			VAR5->VAR19 = sizeof(*VAR16);
		}
		break;
	}

	if (VAR18)
		FUN14(VAR18);

VAR21:
	return VAR12;
}