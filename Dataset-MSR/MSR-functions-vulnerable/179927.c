static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR1);
	struct VAR6 *VAR7 = FUN3(VAR5);
	struct udf_fileident_bh VAR8 = { .VAR9 = NULL, .VAR10 = NULL};
	struct VAR11 *VAR12 = NULL;
	struct fileIdentDesc VAR13;
	int VAR14, VAR15;
	loff_t VAR16;
	int VAR17;
	unsigned char *VAR18 = NULL;
	unsigned char *VAR19;
	uint16_t VAR20;
	uint8_t VAR21;
	loff_t VAR22 = FUN4(VAR5) + VAR5->VAR23;
	struct VAR24 *VAR25, *VAR26[16];
	struct kernel_lb_addr VAR27;
	uint32_t VAR28;
	sector_t VAR29;
	int VAR30, VAR31, VAR32 = 0;
	struct extent_position VAR33 = { NULL, 0, {0, 0} };

	if (VAR3->VAR34 == 0) {
		if (!FUN5(VAR1, VAR3))
			return 0;
		VAR3->VAR34 = 1;
	}
	VAR16 = (VAR3->VAR34 - 1) << 2;
	if (VAR16 >= VAR22)
		goto VAR35;

	VAR18 = FUN6(VAR36, VAR37);
	if (!VAR18) {
		VAR32 = -VAR38;
		goto VAR35;
	}

	if (VAR16 == 0)
		VAR16 = FUN4(VAR5);

	VAR8.VAR39 = VAR8.VAR40 = VAR16 & (VAR5->VAR41->VAR42 - 1);
	if (VAR7->VAR43 != VAR44) {
		if (FUN7(VAR5, VAR16 >> VAR5->VAR41->VAR45,
		    &VAR33, &VAR27, &VAR28, &VAR29)
		    != (VAR46 >> 30)) {
			VAR32 = -VAR47;
			goto VAR35;
		}
		VAR14 = FUN8(VAR5->VAR41, &VAR27, VAR29);
		if ((++VAR29 << VAR5->VAR41->VAR45) < VAR28) {
			if (VAR7->VAR43 == VAR48)
				VAR33.VAR29 -= sizeof(struct VAR49);
			else if (VAR7->VAR43 ==
					VAR50)
				VAR33.VAR29 -= sizeof(struct VAR51);
		} else {
			VAR29 = 0;
		}

		if (!(VAR8.VAR9 = VAR8.VAR10 = FUN9(VAR5->VAR41, VAR14))) {
			VAR32 = -VAR52;
			goto VAR35;
		}

		if (!(VAR29 & ((16 >> (VAR5->VAR41->VAR45 - 9)) - 1))) {
			VAR30 = 16 >> (VAR5->VAR41->VAR45 - 9);
			if (VAR30 + VAR29 > (VAR28 >> VAR5->VAR41->VAR45))
				VAR30 = (VAR28 >> VAR5->VAR41->VAR45) - VAR29;
			for (VAR31 = 0; VAR30 > 0; VAR30--) {
				VAR14 = FUN8(VAR5->VAR41, &VAR27, VAR29 + VAR30);
				VAR25 = FUN10(VAR5->VAR41, VAR14);
				if (VAR25 && !FUN11(VAR25) && !FUN12(VAR25))
					VAR26[VAR31++] = VAR25;
				else
					FUN13(VAR25);
			}
			if (VAR31) {
				FUN14(VAR53, VAR31, VAR26);
				for (VAR30 = 0; VAR30 < VAR31; VAR30++)
					FUN13(VAR26[VAR30]);
			}
		}
	}

	while (VAR16 < VAR22) {
		struct kernel_lb_addr VAR54;

		VAR3->VAR34 = (VAR16 >> 2) + 1;

		VAR12 = FUN15(VAR5, &VAR16, &VAR8, &VAR13, &VAR33, &VAR27,
					&VAR28, &VAR29);
		if (!VAR12)
			goto VAR35;

		VAR20 = FUN16(VAR13.VAR55);
		VAR21 = VAR13.VAR56;

		if (VAR8.VAR9 == VAR8.VAR10) {
			VAR19 = VAR12->VAR57 + VAR20;
		} else {
			int VAR58;	

			VAR58 = VAR8.VAR39 + sizeof(struct VAR11) + VAR20 + VAR21;

			if (VAR58 >= VAR21) {
				VAR19 = (char *)(VAR8.VAR10->VAR59 + VAR58 - VAR21);
			} else {
				VAR19 = VAR18;
				memcpy(VAR19, VAR12->VAR57 + VAR20,
				       VAR21 - VAR58);
				memcpy(VAR19 + VAR21 - VAR58,
				       VAR8.VAR10->VAR59, VAR58);
			}
		}

		if ((VAR13.VAR60 & VAR61) != 0) {
			if (!FUN17(VAR5->VAR41, VAR62))
				continue;
		}

		if ((VAR13.VAR60 & VAR63) != 0) {
			if (!FUN17(VAR5->VAR41, VAR64))
				continue;
		}

		if (VAR13.VAR60 & VAR65) {
			if (!FUN18(VAR1, VAR3))
				goto VAR35;
 			continue;
 		}
 

		VAR17 = FUN19(VAR5->VAR41, VAR19, VAR18, VAR21);




 		if (!VAR17)
 			continue;
 
		VAR54 = FUN20(VAR13.VAR66.VAR67);
		VAR15 = FUN8(VAR5->VAR41, &VAR54, 0);
		if (!FUN21(VAR3, VAR18, VAR17, VAR15, VAR68))
			goto VAR35;
	} 

	VAR3->VAR34 = (VAR16 >> 2) + 1;

VAR35:
	if (VAR8.VAR9 != VAR8.VAR10)
		FUN13(VAR8.VAR10);
	FUN13(VAR8.VAR9);
	FUN13(VAR33.VAR69);
	FUN22(VAR18);

	return VAR32;
}