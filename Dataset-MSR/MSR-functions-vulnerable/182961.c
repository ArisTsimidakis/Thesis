VAR1 FUN1(void *VAR2, VAR3 *VAR4)
{
	if (!VAR5) return 0;

	if (VAR6==1) {
		if (VAR4->VAR7==VAR8) {
			VAR9 = 0;
		} else if (VAR4->VAR7==VAR10) {
			switch (VAR4->VAR11.VAR12) {
			case VAR13:
				if (VAR4->VAR11.VAR14 & (VAR15|VAR16)) {
					FUN2(VAR17 ? 1 : 0);
					if (VAR17) VAR6=2;
				}
				break;
			default:
				break;
			}
		}
		return 0;
	}

	switch (VAR4->VAR7) {
	case VAR18:
		VAR19 = (VAR20) ( 1000 * (VAR21) VAR4->VAR22.VAR22);
		VAR23 = VAR4->VAR22.VAR24;
		break;
	case VAR25:
	{
		const char *VAR26;
		if (!VAR4->VAR27.VAR28 || !strcmp(VAR4->VAR27.VAR28, VAR29)) {
			VAR26 = "";
		} else if (!FUN3(VAR4->VAR27.VAR28, "", 5)) {
			VAR26 = "";
		} else {
			VAR26 = VAR4->VAR27.VAR28;
		}


		if (!VAR4->VAR27.VAR27) return 0;

		if (VAR4->VAR27.VAR30) {
			if (!VAR31) VAR32 = VAR4->VAR27.VAR30;
			if (VAR4->VAR27.VAR30==VAR33) {
				FUN4(VAR34, VAR35, ("", VAR4->VAR27.VAR27));
			} else {
				FUN4(VAR36, VAR35, ("", VAR26, VAR4->VAR27.VAR27, FUN5(VAR4->VAR27.VAR30)));
			}
		} else if (!VAR37)
			FUN4(VAR34, VAR35, ("", VAR26, VAR4->VAR27.VAR27));
	}
	break;
	case VAR38:
	{
		char *VAR39 = "";
		if (VAR4->VAR40.VAR41==0) {
			VAR39 = "";
			if (VAR42 && (VAR42!=3) ) {
				if (VAR4->VAR40.VAR43 >= VAR4->VAR40.VAR44) VAR45 = 0;
				else VAR45 = 1 + 100*VAR4->VAR40.VAR43 / VAR4->VAR40.VAR44;
				break;
			}
		}
		else if (VAR4->VAR40.VAR41==1) {
			if (VAR42) break;
			VAR39 = "";
		}
		else if (VAR4->VAR40.VAR41==2) VAR39 = "";
		FUN6(VAR39, VAR4->VAR40.VAR43, VAR4->VAR40.VAR44);
	}
	break;


	case VAR46:
		FUN7(VAR5, VAR47, !FUN8(VAR5, VAR47));
		return 0;

	case VAR48:
		if (VAR4->VAR49.VAR50==VAR51) {
			VAR52 = 1;
			VAR53 = VAR4->VAR49.VAR54;
			VAR55 = VAR4->VAR49.VAR56;
		}
		return 0;
	case VAR57:
		if (VAR4->VAR49.VAR50==VAR51) {
			VAR52 = 0;
			VAR53 = VAR4->VAR49.VAR54;
			VAR55 = VAR4->VAR49.VAR56;
		}
		return 0;
	case VAR58:
		if (VAR52 && (VAR59.VAR60 & VAR61) ) {
			GF_Event move;
			move.move.VAR54 = VAR4->VAR49.VAR54 - VAR53;
			move.move.VAR56 = VAR55-VAR4->VAR49.VAR56;
			move.VAR7 = VAR62;
			move.move.VAR63 = 1;
			FUN9(VAR5, &move);
		}
		return 0;

	case VAR64:
		switch (VAR4->VAR11.VAR12) {
		case VAR65:
			if (VAR4->VAR11.VAR14 & VAR15) FUN10(!VAR42);
			break;
		}
		break;
	case VAR10:
		FUN11(VAR5, VAR4);
		switch (VAR4->VAR11.VAR12) {
		case VAR65:
			if (VAR4->VAR11.VAR14 & VAR15) {
				
				if (!VAR42) FUN10(!VAR42);
			}
			break;
		case VAR66:
		case VAR67:
			VAR68 = 1;
			break;
		case VAR69:
			break;
		case VAR70:
			FUN7(VAR5, VAR47, !FUN8(VAR5, VAR47));
			break;
		case VAR13:
			if (VAR4->VAR11.VAR14 & (VAR15|VAR16)) {
				FUN2(VAR17 ? 1 : 0);
				if (!VAR17) VAR6=1;
			}
			break;
		case VAR71:
			if (VAR4->VAR11.VAR14 & VAR15) fprintf(VAR72, "", FUN12(VAR5, 0));
			break;
		case VAR73:
			if (VAR4->VAR11.VAR14 & VAR15) fprintf(VAR72, "", FUN13(VAR5)/1000.0);
			break;
		case VAR74:
			if (VAR4->VAR11.VAR14 & VAR15) FUN7(VAR5, VAR75, (FUN8(VAR5, VAR75)==VAR76) ? VAR77 : VAR76 );
			break;
		case VAR78:
			if (VAR4->VAR11.VAR14 & VAR15)
				FUN7(VAR5, VAR79, VAR80);
			break;
		case VAR81:
			if (VAR4->VAR11.VAR14 & VAR15)
				FUN7(VAR5, VAR79, VAR82);
			break;
		case VAR83:
			if (VAR4->VAR11.VAR14 & VAR15)
				FUN7(VAR5, VAR79, VAR84);
			break;
		case VAR85:
			if (VAR4->VAR11.VAR14 & VAR15)
				FUN7(VAR5, VAR79, VAR86);
			break;
		case VAR87:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31) {
				if (FUN8(VAR5, VAR88)) {
					fprintf(VAR72, "");
					FUN7(VAR5, VAR89, VAR90);
				} else {
					fprintf(VAR72, "");
				}
			}
			break;
		case VAR91:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31) {
				u32 VAR92 = FUN8(VAR5, VAR89) ;
				fprintf(VAR72, "", VAR92 ? "" : "");
				if ((VAR92 == VAR93) && (VAR4->VAR11.VAR14 & VAR94)) {
					FUN7(VAR5, VAR89, VAR90);
				} else {
					FUN7(VAR5, VAR89, (VAR92==VAR93) ? VAR95 : VAR93);
				}
			}
			break;
		case VAR96:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31) {
				FUN7(VAR5, VAR89, VAR97);
				fprintf(VAR72, "");
				FUN14(FUN13(VAR5));
				fprintf(VAR72, "");
			}
			break;
		case VAR98:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31)
				FUN15(VAR5, 1);
			break;
		case VAR99:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31)
				FUN15(VAR5, 0);
			break;
		case VAR100:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31) {
				FUN16(VAR5, 1);
			
			}
			break;
		case VAR101:
			if ((VAR4->VAR11.VAR14 & VAR15) && VAR31) {
				FUN16(VAR5, 0);
			
			}
			break;
		case VAR102:
			if (VAR31)
				VAR103 = 1;
			break;
		case VAR104:
			VAR105 = !VAR105;
			FUN17(VAR5, VAR105);
			break;
		case VAR106:
			if ((VAR4->VAR11.VAR14 & VAR107) && VAR31) {
				FUN18(VAR108 * 2);
			}
			break;
		case VAR109:
			if ((VAR4->VAR11.VAR14 & VAR107) && VAR31) {
				FUN18(VAR108 / 2);
			}
			break;
		case VAR110:
			if ((VAR4->VAR11.VAR14 & VAR107) && VAR31) {
				FUN18(-1 * VAR108 );
			}
			break;

		}
		break;

	case VAR111:
		if (VAR4->connect.VAR31) {
			VAR31 = 1;
			fprintf(VAR72, "");
			VAR112 = VAR113;
			if (VAR108 != VAR114)
				FUN19(VAR5, VAR108);

		} else if (VAR31) {
			fprintf(VAR72, "", VAR31 ? "" : "");
			VAR31 = 0;
			VAR19 = 0;
		}
		if (VAR115 && VAR116) {
			FUN20(VAR5, VAR115, VAR116);
		}
		FUN21();
		break;
	case VAR117:
		VAR112 = VAR118;
		if (VAR119) {
			if (VAR19>1500)
				VAR68 = VAR118;
		}
		else if (VAR120) {
			VAR121 = 1;
		}
		break;
	case VAR122:
		if (VAR59.VAR60 & VAR61) {
			GF_Event move;
			move.VAR7 = VAR62;
			move.move.VAR123 = VAR124 & 0xFF;
			move.move.VAR125 = (VAR124>>8) & 0xFF;
			move.move.VAR63 = 2;
			FUN9(VAR5, &move);
		}
		break;
	case VAR126:
		if (VAR127 && VAR128) {
			GF_Event VAR129;
			VAR129.VAR7 = VAR122;
			VAR129.VAR129.VAR130 = VAR127;
			VAR129.VAR129.VAR131 = VAR128;
			FUN9(VAR5, &VAR129);
		}
		break;

	case VAR132:
		FUN21();
		break;

	case VAR133:
		if (VAR31)
			VAR103 = 1;
		break;
	case VAR134:
	{
		u32 VAR135, VAR136;
		
		if (VAR137) {
			FUN22(VAR119);
			VAR119 = NULL;
		}
		VAR137 = 0;
		if (!VAR119) {
			VAR137 = 0;
			VAR119 = FUN23(NULL);
		}
		VAR136 = FUN24(VAR119);
		VAR135=0;
		while (VAR135<VAR4->VAR138.VAR139) {
			if (VAR4->VAR138.VAR140[VAR135] != NULL) {
				fprintf(VAR119, "", VAR4->VAR138.VAR140[VAR135]);
			}
			VAR135++;
		}
		FUN25(VAR119, VAR136, VAR141);
		VAR68 = 1;
	}
	return 1;

	case VAR8:
		if (VAR4->VAR27.VAR30)  {
			fprintf(VAR72, "", VAR4->VAR27.VAR27 ? VAR4->VAR27.VAR27 : "", FUN5(VAR4->VAR27.VAR30) );
		}
		VAR9 = 0;
		break;
	case VAR142:
		FUN26(VAR5);
		break;
	case VAR143:
	{
	}
	break;
	case VAR144:
		if (VAR4->VAR145.VAR146) fprintf(VAR72, ""%VAR147\"", VAR4->VAR145.VAR146);
 		break;
 	case VAR148:
 		if (FUN27(VAR5, VAR4->VAR145.VAR146, 1, VAR149)) {

			strcpy(VAR29, VAR4->VAR145.VAR146);




 			fprintf(VAR72, "", VAR29);
 			FUN28(VAR5, VAR4->VAR145.VAR146);
 			return 1;
		} else {
			fprintf(VAR72, "", VAR4->VAR145.VAR146);
		}
		break;
	case VAR150:
		FUN9(VAR5, VAR4);
		break;
	case VAR151:
	{
		int VAR152 = 1;
		assert( VAR4->VAR7 == VAR151);
		assert( VAR4->VAR153.VAR59);
		assert( VAR4->VAR153.VAR154);
		assert( VAR4->VAR153.VAR155);
		while ((!strlen(VAR4->VAR153.VAR59) || !strlen(VAR4->VAR153.VAR154)) && (VAR152--) >= 0) {
			fprintf(VAR72, "", VAR4->VAR153.VAR155);
			fprintf(VAR72, "");
			FUN29(VAR4->VAR153.VAR59, 50, 1);
			fprintf(VAR72, "");
			FUN29(VAR4->VAR153.VAR154, 50, 0);
			fprintf(VAR72, "");
		}
		if (VAR152 < 0) {
			fprintf(VAR72, "");
			return 0;
		}
		return 1;
	}
	case VAR156:
		if (VAR157) {
			fprintf(VAR72, "", VAR4->VAR158.VAR159);
			VAR105 = 1;
		}
		return VAR157;
	}
	return 0;
}