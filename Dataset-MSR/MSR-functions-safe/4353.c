FUN1(VAR1, VAR2)
{
	VAR3 *VAR4 = NULL, *VAR5 = NULL;
	char *VAR6 = NULL, *VAR7, *VAR8 = NULL, *VAR9 = NULL, *VAR10 = NULL;
	int VAR11 = 0, VAR12, VAR13 = 0, VAR14 = 0, VAR15 = 0;
	char *VAR16, *VAR17, *VAR18 = NULL, *VAR19, *VAR20;
	const char *VAR21;
	int VAR22, VAR23, VAR24, VAR25 = 0, VAR26;
	VAR27 *VAR28 = NULL;
	VAR29 *VAR30 = NULL;

	if (FUN2(FUN3() VAR31, "", &VAR6, &VAR11, &VAR8, &VAR25, &VAR9, &VAR13, &VAR4, &VAR5) == VAR32) {
		return;
	}

	FUN4(VAR33);
	VAR16 = (char*)FUN5(VAR33);
	VAR22 = strlen(VAR16);

	if (FUN6(VAR6, VAR11, &error VAR31) != VAR34) {
		if (VAR7) {
			FUN7(VAR35, 0 VAR31, "", VAR7);
			FUN8(VAR7);
		}
		return;
	}

	
	if (!(FUN9(VAR36).VAR37 && FUN9(VAR36).VAR38 && (!strcmp(FUN9(VAR36).VAR37, "") || !strcmp(FUN9(VAR36).VAR37, "")))) {
		return;
	}

#ifdef VAR39
	VAR16 = FUN10(VAR16, VAR22);
	FUN11(VAR16, VAR22);
#endif
	VAR21 = FUN12(VAR16, '', VAR22);

	if (!VAR21) {
		VAR21 = VAR16;
	} else {
		++VAR21;
	}

	if ((strlen(VAR40.VAR41) == sizeof("")-1 && !FUN13(VAR40.VAR41, "", sizeof("")-1))
		|| (strlen(VAR40.VAR41) == sizeof("")-1 && !FUN13(VAR40.VAR41, "", sizeof("")-1))
		|| (strlen(VAR40.VAR41) == sizeof("")-1 && !FUN13(VAR40.VAR41, "", sizeof("")-1))) {

		if (FUN14(VAR42)[VAR43]) {
			VAR44 *VAR45 = FUN15(FUN14(VAR42)[VAR43]);
			VAR3 **VAR46, **VAR47;

			if (VAR34 != FUN16(VAR45, "", sizeof(""), (void**)&VAR46) ||
				VAR48 != FUN17(VAR46) ||
				!strstr(FUN18(VAR46), VAR21)) {
				return;
			}

			if (VAR34 == FUN16(VAR45, "", sizeof(""), (void**)&VAR47) &&
				VAR48 == FUN17(VAR47)) {
				VAR23 = FUN19(VAR47);
				VAR19 = FUN10(FUN18(VAR47), VAR23);
				VAR17 = FUN20(FUN19(VAR46) + VAR23 + 1);
				memcpy(VAR17, FUN18(VAR46), FUN19(VAR46));
				memcpy(VAR17 + FUN19(VAR46), VAR19, VAR23 + 1);
				VAR14 = 1;
			} else {
				VAR23 = 0;
				VAR19 = FUN10("", 0);
				VAR17 = FUN18(VAR46);
			}

			VAR20 = FUN10(FUN18(VAR46), FUN19(VAR46));

		} else {
			char *VAR49;

			VAR49 = FUN21("", sizeof("")-1 VAR31);
			if (!(VAR20 = strstr(VAR49, VAR21))) {
				FUN8(VAR49);
				return;
			}

			VAR17 = FUN21("", sizeof("")-1 VAR31);

			if (VAR17) {
				VAR19 = VAR17;
				VAR23 = strlen(VAR19);
				FUN22(&VAR17, 0, "", VAR49, VAR17);
				VAR14 = 1;
			} else {
				VAR17 = VAR49;
				VAR14 = 1;
				VAR19 = FUN10("", 0);
				VAR23 = 0;
			}

			VAR20 = FUN10(VAR49, (VAR20 - VAR49) + (VAR22 - (VAR21 - VAR16)));
		}
		VAR26 = 0;
	} else {
		VAR17 = FUN9(VAR36).VAR38;

		if (!(VAR20 = strstr(VAR17, VAR21))) {
			
			return;
		}

		VAR23 = strlen(VAR17);
		VAR23 -= (VAR20 - VAR17) + (VAR22 - (VAR21 - VAR16));
		VAR19 = FUN10(VAR20 + (VAR22 - (VAR21 - VAR16)), VAR23);

		VAR20 = FUN10(VAR17, (VAR20 - VAR17) + (VAR22 - (VAR21 - VAR16)));
		VAR26 = 1;
	}

	if (VAR5) {
		zend_fcall_info VAR50;
		zend_fcall_info_cache VAR51;
		VAR3 *VAR52, *VAR53, **VAR54[1];

		FUN23(VAR52);
		FUN24(VAR52, VAR19, VAR23, 1);
		VAR54[0] = &VAR52;

		if (VAR32 == FUN25(VAR5, 0, &VAR50, &VAR51, NULL, NULL VAR31)) {
			FUN7(VAR35, 0 VAR31, "");

			if (VAR14) {
				FUN8(VAR17);
			}

			return;
		}

		VAR50.VAR55 = 1;
		VAR50.VAR52 = VAR54;
		FUN26(VAR52);
		VAR50.VAR56 = &VAR53;

		if (VAR32 == FUN27(&VAR50, &fcc VAR31)) {
			if (!FUN28(VAR57)) {
				FUN7(VAR35, 0 VAR31, "");
			}

			if (VAR14) {
				FUN8(VAR17);
			}

			return;
		}

		if (!VAR50.VAR56 || !VAR53) {
			if (VAR14) {
				FUN8(VAR17);
			}
			FUN7(VAR35, 0 VAR31, "");
			return;
		}

		switch (FUN29(VAR53)) {
			case VAR48:
				FUN8(VAR19);

				if (VAR50.VAR56 != &VAR53) {
					VAR19 = FUN10(FUN18(VAR50.VAR56), FUN19(VAR50.VAR56));
					VAR23 = FUN19(VAR50.VAR56);
				} else {
					VAR19 = FUN30(VAR53);
					VAR23 = FUN31(VAR53);
				}

				break;
			case VAR58:
				FUN32(VAR19, entry_len VAR31);

				if (VAR14) {
					FUN8(VAR17);
				}

				FUN33();
				return;
			default:
				FUN8(VAR53);

				if (VAR14) {
					FUN8(VAR17);
				}

				FUN7(VAR35, 0 VAR31, "");
				return;
		}
	}

	if (VAR23) {
		FUN34(VAR16, VAR22, &VAR19, &VAR23, &VAR10, &ru_len VAR31);
	}

	if (!VAR23 || (VAR23 == 1 && VAR19[0] == '')) {
		FUN8(VAR19);
		
		if (VAR25) {
			VAR19 = VAR8;
			VAR23 = VAR25;
			if (VAR19[0] != '') {
				FUN22(&VAR19, 0, "", VAR8);
				++VAR23;
			}
		} else {
			
			VAR19 = FUN10("", sizeof(""));
			VAR23 = sizeof("")-1;
		}

		if (VAR32 == FUN35(&VAR28, VAR16, VAR22, NULL, 0, NULL VAR31) ||
			(VAR30 = FUN36(VAR28, VAR19, VAR23, NULL, 0 VAR31)) == NULL) {
			FUN37(VAR28, VAR16, VAR22, VAR9, VAR13, VAR19, entry_len VAR31);

			if (VAR14) {
				FUN8(VAR17);
			}

			FUN33();
		} else {
			char *VAR59 = NULL, VAR60 = '';
			sapi_header_line VAR61 = {0};
			VAR61.VAR62 = 301;
			VAR61.VAR63 = sizeof("")-1;
			VAR61.VAR64 = "";
			FUN38(VAR65, &ctr VAR31);

			if (VAR26) {
				VAR59 = strstr(VAR17, VAR21) + VAR22;
				VAR60 = *VAR59;
				*VAR59 = '';
			}

			VAR61.VAR62 = 0;

			if (VAR17[strlen(VAR17)-1] == '') {
				VAR61.VAR63 = FUN22(&(VAR61.VAR64), 4096, "", VAR17, VAR19 + 1);
			} else {
				VAR61.VAR63 = FUN22(&(VAR61.VAR64), 4096, "", VAR17, VAR19);
			}

			if (VAR26) {
				*VAR59 = VAR60;
			}

			if (VAR14) {
				FUN8(VAR17);
			}

			FUN38(VAR65, &ctr VAR31);
			FUN39(VAR33);
			FUN8(VAR61.VAR64);
			FUN33();
		}
	}

	if (VAR32 == FUN35(&VAR28, VAR16, VAR22, NULL, 0, NULL VAR31) ||
		(VAR30 = FUN36(VAR28, VAR19, VAR23, NULL, 0 VAR31)) == NULL) {
		FUN37(VAR28, VAR16, VAR22, VAR9, VAR13, VAR19, entry_len VAR31);
#ifdef VAR39
		FUN8(VAR16);
#endif
		FUN33();
	}

	if (VAR4 && FUN40(FUN15(VAR4))) {
		const char *VAR66 = FUN12(VAR19, '', VAR23);
		VAR3 **VAR67;

		if (VAR66) {
			++VAR66;

			if (VAR34 == FUN16(FUN15(VAR4), VAR66, strlen(VAR66)+1, (void **) &VAR67)) {
				switch (FUN17(VAR67)) {
					case VAR68:
						if (FUN41(VAR67) == VAR69 || FUN41(VAR67) == VAR70) {
							VAR18 = "";
							VAR24 = FUN41(VAR67);
						} else {
							FUN7(VAR35, 0 VAR31, "");
#ifdef VAR39
							FUN8(VAR16);
#endif
							VAR71;
						}
						break;
					case VAR48:
						VAR18 = FUN18(VAR67);
						VAR24 = VAR72;
						break;
					default:
						FUN7(VAR35, 0 VAR31, "");
#ifdef VAR39
						FUN8(VAR16);
#endif
						VAR71;
				}
			}
		}
	}

	if (!VAR18) {
		VAR24 = FUN42(&FUN43(VAR73), VAR19, &mime_type VAR31);
	}
	VAR12 = FUN44(VAR28, VAR30, VAR18, VAR24, VAR19, VAR23, VAR16, VAR20, VAR10, ru_len VAR31);
}