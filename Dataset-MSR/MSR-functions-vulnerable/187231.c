static int FUN1(int VAR1, struct VAR2 *VAR3)

{

	struct VAR4 *VAR5 = FUN2(VAR3->VAR6);

	struct VAR7 *VAR8 = FUN3(VAR3->VAR6);

	struct VAR9 *VAR10 = FUN4(VAR3);



	HIDD_ATTRIBUTES VAR11;

	PHIDP_PREPARSED_DATA VAR12 = NULL;

	HIDP_CAPS VAR13;

	VAR14 *VAR15;



	HANDLE VAR16 = VAR17;

	int VAR18, VAR19;

	

	ULONG VAR20[3];

	const char* VAR21[3] = {"", "", ""};

	int VAR22[2];	



	VAR23;

	if (VAR8->VAR24 == NULL) {

		FUN5(VAR5, "");

		return VAR25;

	}



	for (VAR18 = 0; VAR18 < VAR26; VAR18++) {

		if ( (VAR8->VAR27[VAR18].VAR28 != NULL)

		  && (VAR8->VAR27[VAR18].VAR29->VAR30 == VAR31) ) {

			VAR16 = FUN6(VAR8->VAR27[VAR18].VAR28, VAR32 | VAR33, VAR34 | VAR35,

				NULL, VAR36, VAR37 | VAR38, NULL);

			

			if (VAR16 == VAR17) {

				FUN7(VAR5, "");

				VAR16 = FUN6(VAR8->VAR27[VAR18].VAR28, 0, VAR34 | VAR35,

					NULL, VAR36, VAR37 | VAR38, NULL);

				if (VAR16 == VAR17) {

					FUN5(VAR5, "", VAR8->VAR28, VAR18, FUN8(0));

					switch(FUN9()) {

					case VAR39:	

						return VAR40;

					case VAR41:

						return VAR42;

					default:

						return VAR43;

					}

				}

				VAR8->VAR27[VAR18].VAR44 = true;

			}

			VAR10->VAR45[VAR18].VAR46 = VAR16;

		}

	}



	VAR11.VAR47 = sizeof(VAR11);

	do {

		if (!FUN10(VAR16, &VAR11)) {

			FUN5(VAR5, "");

			break;

		}



		VAR8->VAR24->VAR48 = VAR11.VAR49;

		VAR8->VAR24->VAR50 = VAR11.VAR51;



		

		for (VAR18=32; FUN11(VAR16, VAR18); VAR18*=2);

		FUN12("", VAR18/2);



		

		if (!FUN13(VAR16, &VAR12) || !VAR12) {

			FUN5(VAR5, "");

			break;

		}

		if (FUN14(VAR12, &VAR13) != VAR52) {

			FUN5(VAR5, "");

			break;

		}



		

		VAR20[0] = VAR13.VAR53;

		VAR20[1] = VAR13.VAR54;

		VAR20[2] = VAR13.VAR55;

		for (VAR19=VAR56; VAR19<=VAR57; VAR19++) {

			FUN12("", VAR20[VAR19], VAR21[VAR19]);

			VAR8->VAR24->VAR58[VAR19] = false;

			if (VAR20[VAR19] > 0) {

				VAR15 = (VAR14*) calloc(VAR20[VAR19], sizeof(VAR14));

				if ( (VAR15 != NULL)

				  && (FUN15((VAR59)VAR19, VAR15, &VAR20[VAR19], VAR12) == VAR52)

				  && (VAR20[VAR19] >= 1) ) {

					VAR22[0] = 0;

					VAR22[1] = 0;

					for (VAR18=0; VAR18<(int)VAR20[VAR19]; VAR18++) {

						FUN12("", VAR15[VAR18].VAR60);

						if (VAR15[VAR18].VAR60 != 0) {

							VAR22[1]++;

						} else {

							VAR22[0]++;

						}

					}

					if (VAR22[1] != 0) {

						if (VAR22[0] != 0) {

							FUN7(VAR5, "",

								VAR21[VAR19]);

						}

						VAR8->VAR24->VAR58[VAR19] = true;

					}

				} else {

					FUN7(VAR5, "", VAR21[VAR19]);

				}

				FUN16(VAR15);

			}

		}



		

		VAR8->VAR24->VAR61 = VAR13.VAR62;

		VAR8->VAR24->VAR63 = VAR13.VAR64;

		VAR8->VAR24->VAR65 = VAR13.VAR66;



		

		VAR8->VAR24->VAR67[0] = VAR8->VAR68.VAR69;

		if (VAR8->VAR24->VAR67[0] != 0) {

			FUN17(VAR16, VAR8->VAR24->VAR70[0],

				sizeof(VAR8->VAR24->VAR70[0]));

		} else {

			VAR8->VAR24->VAR70[0][0] = 0;

		}

		VAR8->VAR24->VAR67[1] = VAR8->VAR68.VAR71;

		if (VAR8->VAR24->VAR67[1] != 0) {

			FUN18(VAR16, VAR8->VAR24->VAR70[1],

				sizeof(VAR8->VAR24->VAR70[1]));

		} else {

			VAR8->VAR24->VAR70[1][0] = 0;

		}

		VAR8->VAR24->VAR67[2] = VAR8->VAR68.VAR72;

		if (VAR8->VAR24->VAR67[2] != 0) {

			FUN19(VAR16, VAR8->VAR24->VAR70[2],

				sizeof(VAR8->VAR24->VAR70[2]));

		} else {

			VAR8->VAR24->VAR70[2][0] = 0;

		}

	} while(0);



	if (VAR12) {

		FUN20(VAR12);

	}



	return VAR73;

}