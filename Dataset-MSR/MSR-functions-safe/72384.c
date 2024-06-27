static void FUN1(void *VAR1, const VAR2 *VAR3)
{
	VAR4 			*VAR5, *VAR6;
	VAR7 			*VAR8 = (VAR7 *)VAR1;
	VAR9 			*VAR10;
	VAR11 	**VAR12;
	VAR13				*VAR14;
	VAR13				*VAR15;
	FUN2();


	if (VAR8->VAR16 == 0) {
		return;
	}

	if (!strcmp(VAR3, VAR17) || !strcmp(VAR3, VAR18) ||
		!strcmp(VAR3, VAR19) || !strcmp(VAR3, VAR20) ||
	  	!strcmp(VAR3, VAR21) || !strcmp(VAR3, VAR22) ||
		!strcmp(VAR3, VAR23) || !strcmp(VAR3, VAR24) ||
		!strcmp(VAR3, VAR25)) {
		FUN3(VAR8, (void**)&VAR5);

		if (!VAR5->VAR26) {
			if (VAR8->VAR16 > 1) {
				VAR8->VAR16--;
				FUN4(VAR5);
			} else {
				VAR8->VAR27 = 1;
			}
			return;
		}

		if (!strcmp(VAR3, VAR24)) {
			int VAR28=0;
			unsigned char *VAR29;

			VAR29 = FUN5(FUN6(VAR5->VAR26), FUN7(VAR5->VAR26), &VAR28);
			FUN8(FUN6(VAR5->VAR26));
			if (VAR29) {
				FUN6(VAR5->VAR26) = VAR29;
				FUN7(VAR5->VAR26) = VAR28;
			} else {
				FUN9(VAR5->VAR26);
			}
		}

		
		if (FUN10(VAR5->VAR26) == VAR30) {
			VAR13 *VAR31, *VAR32 = NULL;

			FUN11(VAR31);
			FUN12(VAR31, "", 1);

			FUN13(NULL, &VAR5->VAR26, VAR31, &VAR32, 0, 0, 0, NULL VAR33);

			FUN14(VAR31);
			FUN15(VAR31);
			if (VAR32) {
				FUN16(&VAR32);
			}
		}

		if (VAR8->VAR16 > 1) {
			VAR8->VAR16--;
			FUN3(VAR8, (void**)&VAR6);

			
			if (VAR6->VAR26 == NULL) {
				FUN16(&VAR5->VAR26);
				FUN4(VAR5);
				return;
			}

			if (FUN10(VAR6->VAR26) == VAR34 || FUN10(VAR6->VAR26) == VAR30) {
				VAR10 = FUN17(VAR6->VAR26);

				if (VAR5->VAR35) {
					if (!strcmp(VAR5->VAR35, VAR36) &&
						FUN10(VAR5->VAR26) == VAR37 && FUN7(VAR5->VAR26) &&
						VAR6->VAR38 == VAR39 && FUN10(VAR6->VAR26) == VAR34) {
						zend_bool VAR40 = 0;

						FUN18(FUN6(VAR5->VAR26), FUN7(VAR5->VAR26));
						if (FUN19(FUN20(VAR41), FUN6(VAR5->VAR26),
										   FUN7(VAR5->VAR26)+1, (void **) &VAR12)==VAR42) {
							VAR40 = 1;
							VAR12 = &VAR43;
						}

						if (VAR12 != &VAR43 && ((*VAR12)->VAR44 || (*VAR12)->VAR45)) {
							FUN16(&VAR6->VAR26);
							VAR6->VAR26 = NULL;
							FUN21(NULL VAR33, VAR46, "", FUN6(VAR5->VAR26));
						} else {
							
							FUN11(VAR14);
							FUN22(VAR14, *VAR12);

							
							FUN23(FUN24(VAR14),
											FUN25(VAR6->VAR26),
											(void (*)(void *)) VAR47,
											(void *) &VAR15, sizeof(VAR13 *), 0);

							if (VAR40) {
								FUN26(VAR14, FUN6(VAR5->VAR26), FUN7(VAR5->VAR26));
							}

							
							FUN16(&VAR6->VAR26);

							
							VAR6->VAR26 = VAR14;
						}
						
						FUN16(&VAR5->VAR26);
					} else if (FUN10(VAR6->VAR26) == VAR30) {
						VAR11 *VAR48 = FUN20(VAR49);

						FUN20(VAR49) = FUN27(VAR6->VAR26);
						FUN28(VAR5->VAR26);
						FUN29(VAR6->VAR26, VAR5->VAR35, VAR5->VAR26);
						FUN20(VAR49) = VAR48;
					} else {
						FUN30(VAR10, VAR5->VAR35, strlen(VAR5->VAR35)+1, &VAR5->VAR26, sizeof(VAR13 *), NULL);
					}
					FUN4(VAR5->VAR35);
				} else	{
					FUN31(VAR10, &VAR5->VAR26, sizeof(VAR13 *), NULL);
				}
			}
			FUN4(VAR5);
		} else {
			VAR8->VAR27 = 1;
		}
	} else if (!strcmp(VAR3, VAR50) && VAR8->VAR35) {
		FUN4(VAR8->VAR35);
		VAR8->VAR35 = NULL;
	} else if (!strcmp(VAR3, VAR51)) {
		VAR4 *VAR52;
		FUN3(VAR8, (void **)&VAR52);
		FUN4(VAR52);
		VAR8->VAR16--;
	}
}