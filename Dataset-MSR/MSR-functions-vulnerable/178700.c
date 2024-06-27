int main(void)
{
	int VAR1, VAR2, VAR3;
	int VAR4;
	struct VAR5 *VAR6;
	struct pollfd VAR7;
	struct VAR8 *VAR9;
	struct VAR5	*VAR10;
	struct VAR11 *VAR12;
	char	*VAR13;
	char	*VAR14;
	char	*VAR15;
	int	VAR16;
	int	VAR17;
	char	*VAR18;
	struct VAR19 *VAR20;

	FUN1(1, 0);
	FUN2("", 0, VAR21);
	syslog(VAR22, "", FUN3());
	
	FUN4();

	if (FUN5()) {
		syslog(VAR23, "");
		FUN6(VAR24);
	}

	VAR1 = socket(VAR25, VAR26, VAR27);
	if (VAR1 < 0) {
		syslog(VAR23, "", VAR1);
		FUN6(VAR24);
	}
	VAR28.VAR29 = VAR25;
	VAR28.VAR30 = 0;
	VAR28.VAR31 = 0;
	VAR28.VAR32 = VAR33;


	VAR4 = FUN7(VAR1, (struct VAR34 *)&VAR28, sizeof(VAR28));
	if (VAR4 < 0) {
		syslog(VAR23, "", VAR4);
		close(VAR1);
		FUN6(VAR24);
	}
	VAR3 = VAR28.VAR32;
	FUN8(VAR1, 270, 1, &VAR3, sizeof(VAR3));
	
	VAR6 = (struct VAR5 *)VAR35;
	VAR6->VAR36.VAR37 = VAR33;
	VAR6->VAR36.VAR38 = VAR39;

	VAR12 = (struct VAR11 *)VAR6->VAR40;
	VAR12->VAR41.VAR42 = VAR43;
	VAR6->VAR44 = 0;
	VAR6->VAR2 = sizeof(struct VAR11);

	VAR2 = FUN9(VAR1, VAR6);
	if (VAR2 < 0) {
		syslog(VAR23, "", VAR2);
		close(VAR1);
		FUN6(VAR24);
	}

	VAR7.VAR1 = VAR1;

	while (1) {
		struct VAR34 *VAR45 = (struct VAR34 *) &VAR28;
		socklen_t VAR46 = sizeof(VAR28);
		VAR7.VAR47 = VAR48;
		VAR7.VAR49 = 0;
		FUN10(&VAR7, 1, -1);

 		VAR2 = recvfrom(VAR1, VAR50, sizeof(VAR50), 0,
 				VAR45, &VAR46);
 

		if (VAR2 < 0 || VAR28.VAR31) {


 			syslog(VAR23, "",
 					VAR28.VAR31, VAR51, strerror(VAR51));
 			close(VAR1);
 			return -1;
 		}
 












 		VAR9 = (struct VAR8 *)VAR50;
 		VAR10 = (struct VAR5 *)FUN11(VAR9);
 		VAR12 = (struct VAR11 *)VAR10->VAR40;

		
		VAR16 = VAR12->VAR41.VAR42;
		VAR17 = VAR12->VAR41.VAR17;
		VAR12->VAR4 = VAR52;

		if ((VAR53) && (VAR16 == VAR43)) {
			
			VAR53 = 0;
			VAR13 = (char *)VAR12->VAR54.VAR55.VAR56;
			VAR57 = malloc(strlen(VAR13) + 1);
			if (VAR57) {
				strcpy(VAR57, VAR13);
				syslog(VAR22, "",
					VAR57);
			} else {
				syslog(VAR23, "");
			}
			continue;
		}

		switch (VAR16) {
		case VAR58:
			VAR20 = &VAR12->VAR54.VAR20;
			VAR18 =
			FUN12((char *)VAR20->VAR59);

			if (VAR18 == NULL) {
				
				VAR12->VAR4 = VAR60;
				break;
			}
			VAR4 = FUN13(
						0, VAR18, VAR58,
						VAR20,
						(VAR61 * 2));

			if (VAR4)
				VAR12->VAR4 = VAR4;

			free(VAR18);
			break;

		case VAR62:
			VAR20 = &VAR12->VAR54.VAR20;
			VAR18 = FUN14(
					(char *)VAR20->VAR59);
			if (VAR18 == NULL) {
				
				VAR12->VAR4 = VAR63;
				break;
			}
			VAR4 = FUN15(VAR18, VAR20);
			if (VAR4)
				VAR12->VAR4 = VAR4;

			free(VAR18);
			break;

		case VAR64:
			if (FUN16(VAR17,
					VAR12->VAR54.VAR65.VAR40.VAR66,
					VAR12->VAR54.VAR65.VAR40.VAR67,
					VAR12->VAR54.VAR65.VAR40.VAR68,
					VAR12->VAR54.VAR65.VAR40.VAR69))
					VAR12->VAR4 = VAR70;
			break;

		case VAR71:
			if (FUN17(VAR17,
					VAR12->VAR54.VAR65.VAR40.VAR66,
					VAR12->VAR54.VAR65.VAR40.VAR67,
					VAR12->VAR54.VAR65.VAR40.VAR68,
					VAR12->VAR54.VAR65.VAR40.VAR69))
					VAR12->VAR4 = VAR70;
			break;

		case VAR72:
			if (FUN18(VAR17,
					VAR12->VAR54.VAR73.VAR66,
					VAR12->VAR54.VAR73.VAR67))
					VAR12->VAR4 = VAR70;
			break;

		default:
			break;
		}

		if (VAR16 != VAR74)
			goto VAR75;

		
		if (VAR17 != VAR76) {
			if (FUN19(VAR17,
					VAR12->VAR54.VAR77.VAR78,
					VAR12->VAR54.VAR77.VAR40.VAR66,
					VAR79,
					VAR12->VAR54.VAR77.VAR40.VAR68,
					VAR80))
					VAR12->VAR4 = VAR70;
			goto VAR75;
		}

		VAR12 = (struct VAR11 *)VAR10->VAR40;
		VAR15 = (char *)VAR12->VAR54.VAR77.VAR40.VAR66;
		VAR14 = (char *)VAR12->VAR54.VAR77.VAR40.VAR68;

		switch (VAR12->VAR54.VAR77.VAR78) {
		case VAR81:
			FUN20(VAR14,
					VAR80);
			strcpy(VAR15, "");
			break;
		case VAR82:
			strcpy(VAR15, "");
			strcpy(VAR14, VAR57);
			break;
		case VAR83:
			FUN13(VAR84, NULL, VAR74,
				VAR14, VAR80);
			strcpy(VAR15, "");
			break;
		case VAR85:
			FUN13(VAR86, NULL, VAR74,
				VAR14, VAR80);
			strcpy(VAR15, "");
			break;
		case VAR87:
			strcpy(VAR14, VAR88);
			strcpy(VAR15, "");
			break;
		case VAR89:
			strcpy(VAR14, VAR90);
			strcpy(VAR15, "");
			break;
		case VAR91:
			strcpy(VAR14, VAR92);
			strcpy(VAR15, "");
			break;
		case VAR93:
			strcpy(VAR14, VAR94);
			strcpy(VAR15, "");
			break;
		case VAR95:
			strcpy(VAR14, VAR96);
			strcpy(VAR15, "");
			break;
		case VAR97:
			strcpy(VAR14, VAR98);
			strcpy(VAR15, "");
			break;
		default:
			VAR12->VAR4 = VAR70;
			break;
		}
		
VAR75:

		VAR10->VAR36.VAR37 = VAR33;
		VAR10->VAR36.VAR38 = VAR39;
		VAR10->VAR44 = 0;
		VAR10->VAR2 = sizeof(struct VAR11);

		VAR2 = FUN9(VAR1, VAR10);
		if (VAR2 < 0) {
			syslog(VAR23, "", VAR2);
			FUN6(VAR24);
		}
	}

}