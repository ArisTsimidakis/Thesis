static void FUN1(struct VAR1 *VAR1)
 {
 	struct VAR2 *VAR3 = NULL;
	struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	uint16_t VAR8;
 	struct VAR9 *VAR10 = FUN2(VAR1);
 	struct VAR11 *VAR12 = FUN3(VAR1->VAR13);
 	unsigned int VAR14;


 


 	
	VAR3 = FUN4(VAR1->VAR13, &VAR10->VAR15, 0, &VAR8);
	if (!VAR3) {
		FUN5(VAR1->VAR13, "", VAR1->VAR16);
		FUN6(VAR1);
		return;
	}

	if (VAR8 != VAR17 && VAR8 != VAR18 &&
	    VAR8 != VAR19) {
		FUN5(VAR1->VAR13, "",
			VAR1->VAR16, VAR8);
		FUN7(VAR3);
		FUN6(VAR1);
		return;
	}

	VAR5 = (struct VAR4 *)VAR3->VAR20;
	VAR7 = (struct VAR6 *)VAR3->VAR20;

	if (VAR5->VAR21.VAR22 == FUN8(4096)) {
		struct VAR2 *VAR23;

 		VAR23 = FUN4(VAR1->VAR13, &VAR10->VAR15, 1,
 					&VAR8);
 		if (VAR8 == VAR24 && VAR23) {

			struct VAR2 *VAR25 = NULL;
 			struct kernel_lb_addr VAR26;
 			struct VAR27 *VAR28;
 
 			VAR28 = (struct VAR27 *)VAR23->VAR20;
 			VAR26 = FUN9(VAR28->VAR29.VAR30);
 

			if (VAR28->VAR29.VAR31 &&

				(VAR25 = FUN4(VAR1->VAR13, &VAR26, 0,

							&VAR8))) {

				if (VAR8 == VAR17 ||

					VAR8 == VAR18) {

					memcpy(&VAR10->VAR15,

						&VAR26,

						sizeof(struct VAR32));

					FUN7(VAR3);

					FUN7(VAR23);

					FUN7(VAR25);

					FUN1(VAR1);






















 					return;
 				}

				FUN7(VAR25);


 			}
 		}
 		FUN7(VAR23);
	} else if (VAR5->VAR21.VAR22 != FUN8(4)) {
		FUN5(VAR1->VAR13, "",
			FUN10(VAR5->VAR21.VAR22));
		FUN7(VAR3);
		FUN6(VAR1);
		return;
	}
	if (VAR5->VAR21.VAR22 == FUN8(4))
		VAR10->VAR33 = 0;
	else 
		VAR10->VAR33 = 1;

	VAR10->VAR34 = FUN10(VAR5->VAR21.VAR35) &
							VAR36;
	VAR10->VAR37 = 0;
	VAR10->VAR38 = 0;
	VAR10->VAR39 = 0;
	VAR10->VAR40 = 0;
	VAR10->VAR41 = 0;
	VAR10->VAR42 = 0;
	if (VAR5->VAR43.VAR44 == FUN8(VAR18)) {
		VAR10->VAR45 = 1;
		VAR10->VAR46 = 0;
		if (FUN11(VAR1, VAR1->VAR13->VAR47 -
					sizeof(struct VAR6))) {
			FUN6(VAR1);
			return;
		}
		memcpy(VAR10->VAR48.VAR49,
		       VAR3->VAR20 + sizeof(struct VAR6),
		       VAR1->VAR13->VAR47 -
					sizeof(struct VAR6));
	} else if (VAR5->VAR43.VAR44 == FUN8(VAR17)) {
		VAR10->VAR45 = 0;
		VAR10->VAR46 = 0;
		if (FUN11(VAR1, VAR1->VAR13->VAR47 -
						sizeof(struct VAR4))) {
			FUN6(VAR1);
			return;
		}
		memcpy(VAR10->VAR48.VAR49,
		       VAR3->VAR20 + sizeof(struct VAR4),
		       VAR1->VAR13->VAR47 - sizeof(struct VAR4));
	} else if (VAR5->VAR43.VAR44 == FUN8(VAR19)) {
		VAR10->VAR45 = 0;
		VAR10->VAR46 = 1;
		VAR10->VAR40 = FUN12(
				((struct VAR50 *)VAR3->VAR20)->
				 VAR51);
		if (FUN11(VAR1, VAR1->VAR13->VAR47 -
					sizeof(struct VAR50))) {
			FUN6(VAR1);
			return;
		}
		memcpy(VAR10->VAR48.VAR49,
		       VAR3->VAR20 + sizeof(struct VAR50),
		       VAR1->VAR13->VAR47 -
					sizeof(struct VAR50));
		return;
	}

	FUN13(&VAR12->VAR52);
	FUN14(VAR1, FUN12(VAR5->VAR53));
	if (!FUN15(VAR1->VAR54) ||
	    FUN16(VAR1->VAR13, VAR55) ||
	    FUN16(VAR1->VAR13, VAR56))
		VAR1->VAR54 = FUN3(VAR1->VAR13)->VAR57;

	FUN17(VAR1, FUN12(VAR5->VAR58));
	if (!FUN18(VAR1->VAR59) ||
	    FUN16(VAR1->VAR13, VAR60) ||
	    FUN16(VAR1->VAR13, VAR61))
		VAR1->VAR59 = FUN3(VAR1->VAR13)->VAR62;

	if (VAR5->VAR21.VAR63 != VAR64 &&
			VAR12->VAR65 != VAR66)
		VAR1->VAR67 = VAR12->VAR65;
	else if (VAR5->VAR21.VAR63 == VAR64 &&
			VAR12->VAR68 != VAR66)
		VAR1->VAR67 = VAR12->VAR68;
	else
		VAR1->VAR67 = FUN19(VAR5);
	VAR1->VAR67 &= ~VAR12->VAR69;
	FUN20(&VAR12->VAR52);

	VAR14 = FUN10(VAR5->VAR70);
	if (!VAR14)
		VAR14 = 1;
	FUN21(VAR1, VAR14);

	VAR1->VAR71 = FUN22(VAR5->VAR72);
	VAR10->VAR39 = VAR1->VAR71;

	if (VAR10->VAR45 == 0) {
		VAR1->VAR73 = FUN22(VAR5->VAR74) <<
			(VAR1->VAR13->VAR75 - 9);

		if (!FUN23(&VAR1->VAR76, VAR5->VAR77))
			VAR1->VAR76 = VAR12->VAR78;

		if (!FUN23(&VAR1->VAR79,
					    VAR5->VAR80))
			VAR1->VAR79 = VAR12->VAR78;

		if (!FUN23(&VAR1->VAR81, VAR5->VAR82))
			VAR1->VAR81 = VAR12->VAR78;

		VAR10->VAR37 = FUN22(VAR5->VAR83);
		VAR10->VAR38 = FUN12(VAR5->VAR84);
		VAR10->VAR40 = FUN12(VAR5->VAR51);
		VAR10->VAR85 = FUN12(VAR5->VAR86);
	} else {
		VAR1->VAR73 = FUN22(VAR7->VAR74) <<
		    (VAR1->VAR13->VAR75 - 9);

		if (!FUN23(&VAR1->VAR76, VAR7->VAR77))
			VAR1->VAR76 = VAR12->VAR78;

		if (!FUN23(&VAR1->VAR79,
					    VAR7->VAR80))
			VAR1->VAR79 = VAR12->VAR78;

		if (!FUN23(&VAR10->VAR87, VAR7->VAR88))
			VAR10->VAR87 = VAR12->VAR78;

		if (!FUN23(&VAR1->VAR81, VAR7->VAR82))
			VAR1->VAR81 = VAR12->VAR78;

		VAR10->VAR37 = FUN22(VAR7->VAR83);
		VAR10->VAR38 = FUN12(VAR7->VAR84);
		VAR10->VAR40 = FUN12(VAR7->VAR51);
		VAR10->VAR85 = FUN12(VAR7->VAR86);
	}

	switch (VAR5->VAR21.VAR63) {
	case VAR64:
		VAR1->VAR89 = &VAR90;
		VAR1->VAR91 = &VAR92;
		VAR1->VAR67 |= VAR93;
		FUN24(VAR1);
		break;
	case VAR94:
	case VAR95:
	case VAR96:
	case VAR97:
		if (VAR10->VAR34 == VAR98)
			VAR1->VAR49.VAR99 = &VAR100;
		else
			VAR1->VAR49.VAR99 = &VAR101;
		VAR1->VAR89 = &VAR102;
		VAR1->VAR91 = &VAR103;
		VAR1->VAR67 |= VAR104;
		break;
	case VAR105:
		VAR1->VAR67 |= VAR106;
		break;
	case VAR107:
		VAR1->VAR67 |= VAR108;
		break;
	case VAR109:
		FUN25(VAR1, VAR1->VAR67 | VAR110, 0);
		break;
	case VAR111:
		FUN25(VAR1, VAR1->VAR67 | VAR112, 0);
		break;
	case VAR113:
		VAR1->VAR49.VAR99 = &VAR114;
		VAR1->VAR89 = &VAR115;
		VAR1->VAR67 = VAR116 | VAR117;
		break;
	case VAR118:
		FUN26("");
		break;
	case VAR119:
		FUN26("");
		break;
	case VAR120:
		FUN26("");
		break;
	default:
		FUN5(VAR1->VAR13, "",
			VAR1->VAR16, VAR5->VAR21.VAR63);
		FUN6(VAR1);
		return;
	}
	if (FUN27(VAR1->VAR67) || FUN28(VAR1->VAR67)) {
		struct VAR121 *VAR122 =
			(struct VAR121 *)FUN29(VAR1, 12, 1);
		if (VAR122) {
			FUN25(VAR1, VAR1->VAR67,
				FUN30(FUN12(VAR122->VAR123),
				      FUN12(VAR122->VAR124)));
			
		} else
			FUN6(VAR1);
	}
	FUN7(VAR3);
}