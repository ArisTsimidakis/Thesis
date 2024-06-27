FUN1(int argc, char **argv)
{
	int VAR1;
	bool VAR2 = false;
	int VAR3;
	struct utsname VAR4;
	int VAR5;
 	int VAR6;
 	bool VAR7 = false;
 	unsigned VAR8;


 
 	struct option VAR9[] = {
 		{"",		VAR10,	NULL, ''},
#if defined VAR11 && defined VAR12
		{"",		VAR13,		NULL, ''},
		{"",		VAR13,		NULL, ''},
#endif
#ifdef VAR14
		{"",		VAR13,		NULL, ''},
#endif
		{"",			VAR13,		NULL,  3 },
		{"",		VAR13,		NULL, ''},
		{"",		VAR13,		NULL, ''},
		{"",	VAR10,	NULL, ''},
 		{"",		VAR15,	NULL, ''},
 		{"",	VAR13,		NULL,  2 },
 		{"",		VAR13,		NULL, ''},


 #ifdef VAR11
 		{"",	VAR13,		NULL, ''},
 		{"",	VAR13,		NULL, ''},
#endif
#ifdef VAR12
		{"",	VAR13,		NULL, ''},
#endif
		{"",	VAR13,		NULL, ''},
		{"",		VAR13,		NULL, ''},
		{"",		VAR13,		NULL, ''},
		{"",			VAR10,	NULL, ''},
#ifdef VAR11
		{"",		VAR10,	NULL, ''},
#endif
#ifdef VAR12
		{"",	VAR10,	NULL, ''},
		{"",	VAR13,		NULL, ''},
#endif
#ifdef VAR14
		{"",		VAR10,	NULL, ''},
#endif
#ifdef VAR16
		{"",		VAR13,		NULL, ''},
		{"",	VAR10,	NULL, ''},
#endif
		{"",		VAR13,		NULL, ''},
		{"",	VAR15,	NULL, ''},
#ifdef VAR17
		{"",	VAR13,		NULL, ''},
#endif
#if VAR18
		{"",		VAR10,	NULL, ''},
#endif
		{"",		VAR10,	NULL, ''},
		{"",		VAR10,	NULL,  4 },
		{"",		VAR15,	NULL, ''},
#ifdef VAR19
		{"",		VAR15,	NULL,  5 },
#endif
#ifdef VAR20
		{"",		VAR15,	NULL,  6 },
#endif
		{"",		VAR13,		NULL, ''},
		{"",		VAR13,		NULL, ''},

		{NULL,			0,			NULL,  0 }
	};

	
 	VAR6 = VAR21;

	while (VAR5 = -1, (VAR1 = getopt_long(argc, argv, ""


 #if defined VAR11 && defined VAR12
 					    ""
 #endif
#ifdef VAR11
					    ""
#endif
#ifdef VAR12
					    ""
#endif
#ifdef VAR14
					    ""
#endif
#ifdef VAR16
					    ""
#endif
#ifdef VAR17
					    ""
#endif
#if VAR18
					    ""
#endif
				, VAR9, &VAR5)) != -1) {

		
		if (VAR5 >= 0 && VAR9[VAR5].VAR22 == VAR10 && VAR23 && !VAR23[0]) {
			VAR1 = '';
			VAR23 = NULL;
		}

		switch (VAR1) {
		case '':
			fprintf(VAR24, "", VAR25);
#ifdef VAR26
			fprintf(VAR24, "", VAR26);
#endif
			fprintf(VAR24, "", VAR27);
			fprintf(VAR24, "",
						(VAR28 >> 16) & 0xff,
						(VAR28 >>  8) & 0xff,
						(VAR28      ) & 0xff);
			FUN2(&VAR4);
			fprintf(VAR24, "", VAR4.VAR29, VAR4.VAR30, VAR4.VAR31);
			fprintf(VAR24, "", VAR32);
			fprintf(VAR24, "", VAR33);
			fprintf(VAR24, "", VAR34);
			FUN3(0);
			break;
		case '':
			FUN4(argv[0]);
			FUN3(0);
			break;
		case '':
			FUN5(VAR35, &VAR36);
			VAR2 = true;
			break;
		case '':
			FUN5(VAR37, &VAR36);
			break;
		case '':
			FUN5(VAR38, &VAR36);
			break;
#ifdef VAR11
		case '':
			FUN5(VAR39, &VAR36);
			break;
#endif
#ifdef VAR12
		case '':
			FUN5(VAR40, &VAR36);
			break;
#endif
		case '':
			if (FUN6(VAR41, &VAR36))
				FUN5(VAR42, &VAR36);
			else
				FUN5(VAR41, &VAR36);
			break;
		case '':
			FUN5(VAR43, &VAR36);
			break;
#ifdef VAR11
		case '':
			FUN5(VAR44, &VAR36);
			break;
#endif
		case '':
			if (!FUN7(VAR23, &VAR8, 0, VAR45, false))
				fprintf(VAR24, "", VAR23);
			else {
				VAR46 = VAR47[VAR8].VAR8;
				VAR2 = true;
			}
			break;
		case '':
			if (VAR23 && VAR23[0])
				VAR48 = VAR23;
			else
				VAR48 = "";
			FUN8(VAR48, NULL, NULL, NULL);
			break;
		case '':
 			FUN5(VAR49, &VAR36);
 			VAR2 = true;
 			break;










 		case '':
 			FUN5(VAR50, &VAR36);
 			FUN5(VAR43, &VAR36);
			FUN5(VAR37, &VAR36);
			FUN5(VAR49, &VAR36);
			if (VAR23 && VAR23[0]) {
				int VAR51 = open(VAR23, VAR52 | VAR53 | VAR54, VAR55 | VAR56 | VAR57 | VAR58);
				if (VAR51 == -1) {
					fprintf(VAR24, "", VAR23);
					FUN3(VAR59);
				}
				FUN9(VAR51, VAR60);
				close(VAR51);
			}
			break;
		case '':
			VAR61 = VAR23;
			break;
		case 2:		
			FUN10();
			break;
#if defined VAR11 && defined VAR12
		case '':
			FUN11(VAR62, &VAR63);
			break;
		case '':
			FUN11(VAR64, &VAR63);
			break;
#endif
#ifdef VAR14
		case '':
			FUN11(VAR65, &VAR63);
			break;
#endif
		case '':
			VAR66 = VAR23;
			break;
#ifdef VAR12
		case '':
			VAR67 = VAR23;
			break;
		case '':
			FUN5(VAR68, &VAR36);
			break;
#endif
#ifdef VAR11
		case '':
			VAR69 = VAR23;
			break;
#endif
#ifdef VAR14
		case '':
			VAR70 = VAR23;
			break;
#endif
#ifdef VAR16
		case '':
			VAR71 = 1;
			break;
		case '':
			VAR72 = VAR23;
			break;
#endif
		case '':
			VAR73 = true;
			if (VAR23 && VAR23[0])
				VAR74 = VAR23;
			
		case '':
			VAR75 = true;
			break;
#ifdef VAR17
		case '':
			FUN5(VAR76, &VAR36);
			break;
#endif
#if VAR18
		case '':
			VAR77 = FUN12(strlen(VAR23) + 1);
			strcpy(VAR77, VAR23);
			break;
#endif
		case '':
			FUN13(VAR78);
			VAR78 = FUN12(strlen(VAR23) + 1);
			strcpy(VAR78, VAR23);
			break;
		case 4:			
			VAR3 = FUN14(VAR23);
			if (VAR3 == -1) {
				fprintf(VAR24, "", VAR23);
				FUN3(1);
			}

			printf("", VAR3);
			FUN3(0);
			break;
		case 3:			
			FUN5(VAR79, &VAR63);
#ifdef VAR11
			FUN5(VAR64, &VAR63);
#endif
#ifdef VAR12
			FUN5(VAR62, &VAR63);
#endif
#ifdef VAR14
			FUN5(VAR65, &VAR63);
#endif
			break;
#ifdef VAR19
		case 5:
			if (VAR23 && VAR23[0]) {
				if (!strcmp(VAR23, ""))
					VAR80 = VAR81;
				else if (!strcmp(VAR23, ""))
					VAR80 = VAR82;
				else if (!strcmp(VAR23, ""))
					VAR80 = VAR83;
				else
					FUN15(VAR84, "", VAR23);
			}
			else
				VAR80 = VAR81;

			break;
#endif
#ifdef VAR20
		case 6:
			FUN16(VAR23 && VAR23[0] ? VAR23 : NULL);
			break;
#endif
		case '':
			if (VAR85 && argv[VAR6][1] != '')
				fprintf(VAR24, "", VAR85);
			else
				fprintf(VAR24, "", argv[VAR6]);
			VAR7 = true;
			break;
		case '':
			if (VAR85 && argv[VAR6][1] != '')
				fprintf(VAR24, "", VAR85);
			else
				fprintf(VAR24, "", VAR9[VAR5].VAR86);
			VAR7 = true;
			break;
		default:
			FUN3(1);
			break;
		}
		VAR6 = VAR21;
	}

	if (VAR21 < argc) {
		printf("");
		while (VAR21 < argc)
			printf("", argv[VAR21++]);
		printf("");
	}

	if (VAR7)
		FUN3(1);

	return VAR2;
}