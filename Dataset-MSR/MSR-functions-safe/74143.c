FUN1(
	VAR1 *VAR2
	)
{
	int VAR3;
	VAR4 *VAR5;
	VAR6 *VAR7;
	VAR8 *VAR9;

	
	VAR9 = FUN2(VAR2->VAR10);
	if (NULL == VAR9) {
		fprintf(VAR11, ""VAR12\"");
		fprintf(VAR11, "");
		FUN3(1);
	}

	
	VAR7 = FUN2(VAR9->VAR13);
	for (; VAR7 != NULL; VAR7 = VAR7->VAR14) {
		switch(VAR7->VAR15) {

		case VAR16:
			VAR17.VAR18 = VAR7->VAR19.VAR20;
			break;

		case VAR21:
			VAR17.VAR22 = VAR7->VAR19.VAR20;
			break;

		default:
			fprintf(VAR11,
				"",
				VAR7->VAR15);
			FUN3(1);
		}
	}

	
	VAR17.VAR23 = 0;
	VAR5 = FUN2(VAR9->VAR24);
	for (; VAR5 != NULL; VAR5 = VAR5->VAR14)
		VAR17.VAR23++;
	VAR17.VAR24 = FUN4(VAR17.VAR23 *
				     sizeof(VAR17.VAR24[0]));

	VAR3 = 0;
	VAR5 = FUN2(VAR9->VAR24);
	for (; VAR5 != NULL; VAR5 = VAR5->VAR14) {
		if (NULL == VAR5) {
			fprintf(VAR11, "");
			FUN3(1);
		} else {
			VAR17.VAR24[VAR3] = *VAR5;
			VAR17.VAR24[VAR3].VAR14 = NULL;
			VAR3++;
		}
	}

	printf("");
	FUN5();
	fprintf(VAR11,"");
}