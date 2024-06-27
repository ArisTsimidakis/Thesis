FUN1 (unsigned char VAR1)
{
	static int VAR2 = 0;
	int VAR3, VAR4, VAR5, VAR6;
	const char *VAR7;
	char *VAR8;
	int VAR9;

	switch (VAR1) {
	case VAR10:
		return 1;
	case VAR11:
		FUN2(VAR12, 0);
		FUN3(VAR12);
		FUN4(VAR12);
		FUN5(VAR12);
		return 1;
	case VAR13:
		FUN6(VAR2);
		break;
	case VAR14:
		FUN7(VAR15, "");
		if ( FUN8(VAR12) < 0 )
			FUN7(VAR15, "");
		break;
	case VAR16:
		if ( VAR2 )
			VAR9 = FUN9(VAR12);
		else
			VAR9 = FUN10(VAR12);
		if ( VAR9 >= 0 ) VAR2 = ! VAR2;
		FUN7(VAR15, "", 
				  VAR2 ? "" : "");
		break;
	case VAR17:
	case VAR18:
		if (VAR1 == VAR17)
			VAR19.VAR20 = FUN11(VAR19.VAR20);
		else 
			VAR19.VAR20 = FUN12(VAR19.VAR20);
		FUN13(VAR12, VAR19.VAR20);
		VAR21.VAR22 = 0; FUN3(VAR12);
		FUN4(VAR12);
		VAR3 = FUN14(VAR12, NULL);
		if ( VAR19.VAR20 != VAR3 ) {
			FUN7(VAR15, "", 
					  VAR19.VAR20, VAR3);
		} else {
			FUN7(VAR15, "", VAR19.VAR20);
		}
		FUN15(VAR3);
		break;
	case VAR23:
		VAR19.VAR24 = FUN16(VAR19.VAR24);
		FUN17(VAR12, VAR19.VAR24);
		VAR21.VAR22 = 0; FUN3(VAR12);
		FUN4(VAR12);
		VAR4 = FUN18(VAR12);
		if ( VAR19.VAR24 != VAR4 ) {
			FUN7(VAR15, "", 
					  VAR25[VAR19.VAR24], VAR25[VAR4]);
		} else {
			FUN7(VAR15, "", 
					  VAR25[VAR19.VAR24]);
		}
		break;
	case VAR26:
		VAR19.VAR27 = FUN19(VAR19.VAR27);
		FUN20(VAR12, VAR19.VAR27);
		VAR21.VAR22 = 0; FUN3(VAR12);
		FUN4(VAR12);
		VAR5 = FUN21(VAR12);
		if (VAR19.VAR27 != VAR5 ) {
			FUN7(VAR15, "",
					  VAR28[VAR19.VAR27], 
					  VAR28[VAR5]);
		} else {
			FUN7(VAR15, "", 
					  VAR28[VAR19.VAR27]);
		}
		break;
	case VAR29:
		VAR19.VAR30 = FUN22(VAR19.VAR30);
		FUN23(VAR12, VAR19.VAR30);
		VAR21.VAR22 = 0; FUN3(VAR12);
		FUN4(VAR12);
		VAR6 = FUN24(VAR12);
		if (VAR19.VAR30 != VAR6 ) {
			FUN7(VAR15, "",
					  VAR19.VAR30, VAR6);
		} else {
			FUN7(VAR15, "", 
					  VAR19.VAR30);
		}
		break;
	case VAR31:
		VAR19.VAR32 = ! VAR19.VAR32;
		FUN7(VAR15, "", 
				  VAR19.VAR32 ? "" : "");
		break;
	case VAR33:
	case VAR34:
		VAR7 = (VAR1 == VAR33) ? VAR19.VAR35 : VAR19.VAR36;
		if ( VAR7[0] == '' ) {
			FUN7(VAR15, "");
			break;
		}
		VAR8 = FUN25();
		if (VAR8 == NULL) {
 			FUN7(VAR15, "");
 			break;
 		}

		FUN26(VAR12, VAR7, VAR8, NULL);


 		free(VAR8);
 		break;
 	case VAR37:
		FUN27(VAR12);
		FUN7(VAR15, "");
		break;
	default:
		break;
	}

	return 0;
}