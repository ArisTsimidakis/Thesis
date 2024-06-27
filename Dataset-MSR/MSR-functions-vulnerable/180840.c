static void FUN1(VAR1 *VAR2, const VAR3 *VAR4) {
	size_t VAR5, VAR6, VAR7;
	VAR8 *VAR9;
	VAR10 *VAR11;
	if (!VAR4 || !VAR2) {
		return;
	}

	for (VAR5 = 0; VAR5 < VAR4->VAR12; VAR5++) {
		fprintf (VAR2, ""VAR13"", VAR4->VAR14 [VAR5].VAR15);
		fprintf (VAR2, "", VAR4->VAR14 [VAR5].VAR16.VAR12);
		fprintf (VAR2, "", VAR4->VAR14 [VAR5].VAR16.VAR17);
		fprintf (VAR2, "", VAR4->VAR14 [VAR5].VAR16.VAR18);
		fprintf (VAR2, "", VAR4->VAR14 [VAR5].VAR16.VAR19);

		VAR9 = VAR4->VAR14[VAR5].VAR9;

		for (VAR6 = 0; VAR6 < VAR4->VAR14[VAR5].VAR12; VAR6++) {
			fprintf (VAR2, ""VAR20"", VAR9[VAR6].VAR21);

			if (VAR9[VAR6].VAR22 && VAR9[VAR6].VAR22 <= VAR23 &&
				       VAR24[VAR9[VAR6].VAR22]) {
				fprintf (VAR2, "", VAR24[VAR9[VAR6].VAR22]);
			} else {
				fprintf (VAR2, "");
			}

			if (!VAR9[VAR6].VAR21) {
				continue;
			}
 			VAR11 = VAR9[VAR6].VAR25;
 
 			for (VAR7 = 0; VAR7 < VAR9[VAR6].VAR12; VAR7++) {

				if (!VAR11[VAR7].VAR26)


 					continue;


 
 				if (VAR11[VAR7].VAR26 < VAR27 &&
 						VAR28[VAR11[VAR7].VAR26]) {
					fprintf (VAR2, "", VAR28[VAR11[VAR7].VAR26]);
				} else {
					fprintf (VAR2, "");
				}
				FUN2 (&VAR11[VAR7], VAR2);
				fprintf (VAR2, "");
			}
		}
	}
}