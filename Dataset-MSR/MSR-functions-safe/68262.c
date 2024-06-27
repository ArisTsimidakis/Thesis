static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
				  VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10,
				  int VAR11, char *VAR12, int VAR13,
				  int VAR14) {
	struct VAR15 *VAR16 = VAR2->VAR16;
	const VAR17 *VAR18 = FUN2 (VAR2->VAR19, VAR14, NULL);
	const VAR17 *VAR20 = VAR18 + VAR2->VAR19->VAR21 - VAR14;
	ut64 VAR22;
	ut64 VAR23;
	ut64 VAR24;
	ut16 VAR25 = VAR13 - VAR10;
	ut64 VAR26 = VAR6->VAR27;
	VAR28 *VAR29, *VAR30, *VAR31 = NULL; 
	bool VAR32 = true;
	if (VAR25 >= VAR13) {
		
	}
	VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR22);
	VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR23);
	
	
	ut32 VAR33 = 0;
	ut32 VAR34 = VAR22;
	if (!(VAR30 = FUN4 ((VAR35)free))) {
		return;	
	}
	if (!(VAR31 = FUN4 ((VAR35)free))) {
		FUN5 (VAR30);
		return;
	}

	struct dex_debug_local_t VAR36[VAR13];
	memset (VAR36, 0, sizeof (struct VAR37) * VAR13);
	if (!(VAR8 & 0x0008)) {
		VAR36[VAR25].VAR38 = "";
		VAR36[VAR25].VAR39 = FUN6("", VAR12);
		VAR36[VAR25].VAR40 = 0;
		VAR36[VAR25].VAR41 = NULL;
		VAR36[VAR25].VAR42 = true;
		VAR25++;
	}
	if (!(VAR29 = FUN7 (VAR4, VAR7))) {
		FUN5 (VAR30);
		FUN5 (VAR31);
		return;
	}

	VAR43 *VAR44 = FUN8 (VAR29);
	char *VAR38;
	char *VAR45;
	int VAR46;

	FUN9 (VAR29, VAR44, VAR45) {
		if ((VAR25 >= VAR13) || !VAR45 || VAR23 <= 0) {
			FUN5 (VAR30);
			FUN5 (VAR29);
			FUN5 (VAR31);
			return;
		}
		VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR24); 
		VAR24 -= 1;
		VAR38 = FUN10 (VAR4, VAR24);
		VAR46 = VAR25;
		switch (VAR45[0]) {
		case '':
		case '':
			VAR25 += 2;
			break;
		default:
			VAR25 += 1;
			break;
		}
		if (VAR38) {
			VAR36[VAR46].VAR38 = VAR38;
			VAR36[VAR46].VAR39 = VAR45;
			VAR36[VAR46].VAR41 = NULL;
			VAR36[VAR46].VAR40 = VAR33;
			VAR36[VAR46].VAR42 = true;
		}
		--VAR23;
	}

	ut8 VAR47 = *(VAR18++) & 0xff;
	while (VAR32) {
		switch (VAR47) {
		case 0x0: 
			VAR32 = false;
			break;
		case 0x1: 
			{
			ut64 VAR48;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR48);
			VAR33 += VAR48;
			}
			break;
		case 0x2: 
			{
			st64 VAR49 = FUN11 (&VAR18, VAR20);
			VAR34 += VAR49;
			}
			break;	
		case 0x3: 
			{
			ut64 VAR50;
			ut64 VAR51;
			ut64 VAR52;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR50);
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR51); 
			VAR51 -= 1;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR52); 
			VAR52 -= 1;
			if (VAR50 >= VAR13) {
				FUN5 (VAR30);
				FUN5 (VAR29);
				return;
			}
			
			
			if (VAR36[VAR50].VAR42) {
				struct VAR37 *VAR53 = malloc (
					sizeof (struct VAR37));
				if (!VAR53) {
					VAR32 = false;
					break;
				}
				VAR53->VAR38 = VAR36[VAR50].VAR38;
				VAR53->VAR39 = VAR36[VAR50].VAR39;
				VAR53->VAR40 = VAR36[VAR50].VAR40;
				VAR53->VAR41 = VAR36[VAR50].VAR41;
				VAR53->VAR42 = true;
				VAR53->VAR46 = VAR50;
				VAR53->VAR54 = VAR33;
				FUN12 (VAR31, VAR53);
			}
			VAR36[VAR50].VAR38 = FUN10 (VAR4, VAR51);
			VAR36[VAR50].VAR39 = FUN13 (VAR4, VAR52);
			VAR36[VAR50].VAR40 = VAR33;
			VAR36[VAR50].VAR41 = NULL;
			VAR36[VAR50].VAR42 = true;
			
			}
			break;
		case 0x4: 
			{
			ut64 VAR50;
			ut64 VAR51;
			ut64 VAR52;
			ut64 VAR55;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR50);
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR51);
			VAR51 -= 1;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR52);
			VAR52 -= 1;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR55);
			VAR55 -= 1;
			if (VAR50 >= VAR13) {
				FUN5 (VAR30);
				FUN5 (VAR29);
				return;
			}

			
			
			if (VAR36[VAR50].VAR42) {
				struct VAR37 *VAR53 = malloc (
					sizeof (struct VAR37));
				if (!VAR53) {
					VAR32 = false;
					break;
				}
				VAR53->VAR38 = VAR36[VAR50].VAR38;
				VAR53->VAR39 = VAR36[VAR50].VAR39;
				VAR53->VAR40 = VAR36[VAR50].VAR40;
				VAR53->VAR41 = VAR36[VAR50].VAR41;
				VAR53->VAR42 = true;
				VAR53->VAR46 = VAR50;
				VAR53->VAR54 = VAR33;
				FUN12 (VAR31, VAR53);
			}

			VAR36[VAR50].VAR38 = FUN10 (VAR4, VAR51);
			VAR36[VAR50].VAR39 = FUN13 (VAR4, VAR52);
			VAR36[VAR50].VAR40 = VAR33;
			VAR36[VAR50].VAR41 = FUN10 (VAR4, VAR55);
			VAR36[VAR50].VAR42 = true;
			}
			break;
		case 0x5: 
			{
			ut64 VAR50;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR50);
			
			if (VAR36[VAR50].VAR42) {
				struct VAR37 *VAR53 = malloc (
					sizeof (struct VAR37));
				if (!VAR53) {
					VAR32 = false;
					break;
				}
				VAR53->VAR38 = VAR36[VAR50].VAR38;
				VAR53->VAR39 = VAR36[VAR50].VAR39;
				VAR53->VAR40 = VAR36[VAR50].VAR40;
				VAR53->VAR41 = VAR36[VAR50].VAR41;
				VAR53->VAR42 = true;
				VAR53->VAR46 = VAR50;
				VAR53->VAR54 = VAR33;
				FUN12 (VAR31, VAR53);
			}
			VAR36[VAR50].VAR42 = false;
			}
			break;
		case 0x6: 
			{
			ut64 VAR50;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR50);
			if (!VAR36[VAR50].VAR42) {
				VAR36[VAR50].VAR40 = VAR33;
				VAR36[VAR50].VAR42 = true;
			}
			}
			break;
		case 0x7: 
			break;
		case 0x8: 
			break;
		case 0x9:
			{
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR26);
			VAR26--;
			}
			break;
		default:
			{
			int VAR56 = VAR47 - 0x0a;
			VAR33 += (VAR56 / 15);
			VAR34 += -4 + (VAR56 % 15);
			struct VAR57 *VAR58 =
				malloc (sizeof (struct VAR57));
			if (!VAR58) {
				VAR32 = false;
				break;
			}
			VAR58->VAR26 = VAR26;
			VAR58->VAR33 = VAR33;
			VAR58->VAR34 = VAR34;
			FUN12 (VAR30, VAR58);
			}
			break;
		}
		VAR47 = *(VAR18++) & 0xff;
	}

	if (!VAR2->VAR59) {
		VAR2->VAR59 = FUN14 ();
	}

	char *VAR60;
	char VAR61[64];
	char *VAR62;

	VAR43 *VAR63;
	struct VAR57 *VAR64;
	FUN9 (VAR30, VAR63, VAR64) {
		VAR60 = FUN6 (""VAR65, FUN10 (VAR4, VAR64->VAR26), VAR64->VAR34);
		VAR62 = FUN15 (VAR64->VAR33 + VAR9, VAR61, 16);
		FUN16 (VAR2->VAR59, VAR62, VAR60, 0);
		FUN16 (VAR2->VAR59, VAR60, VAR62, 0);
	}

	if (!VAR66) {
		FUN5 (VAR30);
		FUN5 (VAR31);
		FUN5 (VAR29);
		return;
	}

	VAR43 *VAR67;
	struct VAR57 *VAR58;

	VAR16->FUN17 ("");
	FUN9 (VAR30, VAR67, VAR58) {
		VAR16->FUN17 ("",
				 VAR58->VAR33, VAR58->VAR34);
	}

	VAR16->FUN17 ("");

	VAR43 *VAR68;
	struct VAR37 *VAR53;
	FUN9 (VAR31, VAR68, VAR53) {
		if (VAR53->VAR41) {
			VAR16->FUN17 (
				"",
				VAR53->VAR40, VAR53->VAR54,
				VAR53->VAR46, VAR53->VAR38, VAR53->VAR39,
				VAR53->VAR41);
		} else {
			VAR16->FUN17 (
				"",
				VAR53->VAR40, VAR53->VAR54,
				VAR53->VAR46, VAR53->VAR38, VAR53->VAR39);
		}
	}

	for (VAR46 = 0; VAR46 < VAR13; VAR46++) {
		if (VAR36[VAR46].VAR42) {
			if (VAR36[VAR46].VAR41) {
				VAR16->FUN17 (
					""
					"",
					VAR36[VAR46].VAR40,
					VAR11, VAR46, VAR36[VAR46].VAR38,
					VAR36[VAR46].VAR39,
					VAR36[VAR46].VAR41);
			} else {
				VAR16->FUN17 (
					""
					"",
					VAR36[VAR46].VAR40,
					VAR11, VAR46, VAR36[VAR46].VAR38,
					VAR36[VAR46].VAR39);
			}
		}
	}
	FUN5 (VAR30);
	FUN5 (VAR31);
	FUN5 (VAR29);
}