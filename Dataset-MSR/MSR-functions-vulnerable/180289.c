static void FUN1(VAR1, OnigOptionType VAR2, int VAR3)
{
	VAR4 **VAR5;

	char *VAR6;
	int VAR7;

	char *VAR8;
	int VAR9;

	zend_fcall_info VAR10;
	zend_fcall_info_cache VAR11;

	char *VAR12;
	int VAR13;

	char *VAR14;
	VAR15 *VAR16;
	VAR17 *VAR18;
	VAR19 *VAR20 = NULL;
	smart_str VAR21 = { 0 };
	smart_str VAR22 = { 0 };
	VAR23 *VAR24;
	int VAR25, VAR26, VAR27, VAR28;
	VAR29 *VAR30;
	VAR29 *VAR31;
	char *VAR32 = NULL;
	char VAR33[2];

	const VAR34 *VAR35;

	{
		const char *VAR36;
		VAR36 = FUN2(FUN3(VAR37));
		if (VAR36 == NULL ||
			(VAR35 = FUN4(VAR36)) == NULL) {
			FUN5(NULL VAR38, VAR39, "");
			VAR40;
		}
	}
	VAR27 = 0;
	{
		char *VAR41 = NULL;
		int VAR42 = 0;

		if (!VAR3) {
			if (FUN6(FUN7() VAR38, "",
						&VAR5,
						&VAR8, &VAR9,
						&VAR12, &VAR13,
						&VAR41, &VAR42) == VAR43) {
				VAR40;
			}
		} else {
			if (FUN6(FUN7() VAR38, "",
						&VAR5,
						&VAR10, &VAR11,
						&VAR12, &VAR13,
						&VAR41, &VAR42) == VAR43) {
				VAR40;
			}
		}

		if (VAR41 != NULL) {
			FUN8(VAR41, VAR42, &VAR2, &VAR18, &VAR27);
		} else {
			VAR2 |= FUN3(VAR44);
			VAR18 = FUN3(VAR45);
		}
	}
	if (FUN9(VAR5) == VAR46) {
		VAR6 = FUN10(VAR5);
		VAR7 = FUN11(VAR5);
 	} else {
 		
 		FUN12(VAR5);

		VAR33[0] = (char)FUN13(VAR5);	


 		VAR33[1] = '';
 
 		VAR6 = VAR33;

		VAR7 = 1;	


 	}
 	
 	VAR16 = FUN14(VAR6, VAR7, VAR2, FUN3(VAR37), syntax VAR38);
	if (VAR16 == NULL) {
		VAR40;
	}

	if (VAR27 || VAR3) {
		VAR24 = &VAR22;
		VAR32 = FUN15("" VAR38);
	} else {
		VAR24 = &VAR21;
		VAR32 = NULL;
	}

	if (VAR3) {
		if (VAR27) {
			FUN5(NULL VAR38, VAR39, "");
			VAR40;
		}
	}

	
	VAR26 = 0;
	VAR30 = (VAR29 *)VAR12;
	VAR31 = (VAR29*)(VAR12 + VAR13);
	VAR20 = FUN16();
	while (VAR26 >= 0) {
		VAR26 = FUN17(VAR16, (VAR29 *)VAR12, (VAR29 *)VAR31, VAR30, (VAR29 *)VAR31, VAR20, 0);
		if (VAR26 <= -2) {
			OnigUChar VAR47[VAR48];
			FUN18(VAR47, VAR26);
			FUN5(NULL VAR38, VAR39, "", VAR47);
			break;
		}
		if (VAR26 >= 0) {
#if VAR49
			if (VAR20->VAR50[0] == VAR20->VAR51[0]) {
				FUN5(NULL VAR38, VAR39, "");
				break;
			}
#endif
			
			FUN19(&VAR21, VAR30, (VAR52)((VAR29 *)(VAR12 + VAR20->VAR50[0]) - VAR30));

			if (!VAR3) {
				
				VAR25 = 0;
				VAR14 = VAR8;
				while (VAR25 < VAR9) {
					int VAR53 = (int) FUN20(VAR14, VAR35);
					VAR28 = -1;
					if ((VAR9 - VAR25) >= 2 && VAR53 == 1 &&
					VAR14[0] == '' && VAR14[1] >= '' && VAR14[1] <= '') {
						VAR28 = VAR14[1] - '';
					}
					if (VAR28 >= 0 && VAR28 < VAR20->VAR54) {
						if (VAR20->VAR50[VAR28] >= 0 && VAR20->VAR50[VAR28] < VAR20->VAR51[VAR28] && VAR20->VAR51[VAR28] <= VAR13) {
							FUN19(VAR24, VAR12 + VAR20->VAR50[VAR28], VAR20->VAR51[VAR28] - VAR20->VAR50[VAR28]);
						}
						VAR14 += 2;
						VAR25 += 2;
					} else {
						FUN19(VAR24, VAR14, VAR53);
						VAR14 += VAR53;
						VAR25 += VAR53;
 					}
 				}
 			}

				


 			if (VAR27) {
 				zval VAR55;
 				
				FUN21(&VAR22);
				
				if (FUN22(VAR22.VAR56, VAR22.VAR57, &VAR55, description VAR38) == VAR43) {
					FUN23(VAR32);
					FUN5(NULL VAR38,VAR58, "", VAR59, VAR22.VAR56);
					
				}

				
				FUN24(&VAR55);
				FUN19(&VAR21, FUN25(VAR55), FUN26(VAR55));
				
 				VAR22.VAR57 = 0;
 				FUN27(&VAR55);
 			} else if (VAR3) {

				VAR4 *VAR60;


 				VAR4 **VAR61[1];
 				VAR4 *VAR62;
 				int VAR25;

				


 				FUN28(VAR62);
 				FUN29(VAR62);

				


 				for (VAR25 = 0; VAR25 < VAR20->VAR54; VAR25++) {
 					FUN30(VAR62, VAR12 + VAR20->VAR50[VAR25], VAR20->VAR51[VAR25] - VAR20->VAR50[VAR25], 1);

				}				

				




 				VAR61[0] = &VAR62;
 				
 				FUN21(&VAR22);

				


 				VAR10.VAR63 = 1;
 				VAR10.VAR64 = VAR61;
 				VAR10.VAR65 = &VAR60;

				if (FUN31(&VAR10, &arg_replace_fci_cache VAR38) == VAR66 && VAR10.VAR65) {


 					FUN32(&VAR60);
 					FUN19(&VAR21, FUN33(VAR60), FUN34(VAR60));
 					VAR22.VAR57 = 0;
 					FUN35(&VAR60);
 				} else {

					FUN23(VAR32);
 					if (!FUN36(VAR67)) {
 						FUN5(NULL VAR38, VAR39, "");
 					}
				}
				FUN35(&VAR62);
			}

			VAR28 = VAR20->VAR51[0];
			if ((VAR30 - (VAR29 *)VAR12) < VAR28) {
 				VAR30 = (VAR29 *)VAR12 + VAR28;
 			} else {
 				if (VAR30 < VAR31) {

					FUN19(&VAR21, VAR30, 1); 


 				}
 				VAR30++;
 			}
		} else { 
			
			if (VAR31 - VAR30 > 0) {
				FUN19(&VAR21, VAR30, VAR31 - VAR30);
			}
		}
		FUN37(VAR20, 0);
	}

	if (VAR32) {
		FUN23(VAR32);
	}
	if (VAR20 != NULL) {
		FUN37(VAR20, 1);
	}
 	FUN38(&VAR22);
 
 	if (VAR26 <= -2) {

		FUN38(&VAR21);	


 		VAR68;
 	} else {
 		FUN39(&VAR21, '');
		FUN40((char *)VAR21.VAR56, VAR21.VAR57 - 1, 0);
	}
}