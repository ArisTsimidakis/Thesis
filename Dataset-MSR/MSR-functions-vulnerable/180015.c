FUN1 (VAR1 *VAR2, const char *VAR3, gboolean VAR4)
{
	const char *VAR5 = VAR3;

	while (1) {
		const char *VAR6 = VAR5;
		char *VAR7;

		
		while (1) {
			if (*VAR5 == 0) {
				if (VAR4 && VAR5 != VAR6)
					break;
				else
					return VAR2;
			}
			
			if (*VAR5 == '')
				break;
			VAR5++;
		}

		VAR7 = FUN2 (VAR6, VAR5 - VAR6);
		while (*VAR5 == '')
			VAR5++;

		if (strcmp (VAR7, "") != 0) {
			VAR8 *VAR9 =
 				FUN3 (FUN4 (VAR2),
 							  VAR7);
 			if (VAR9) {






 				
 				FUN5 (VAR9);

				VAR2 = FUN6 (VAR9);
 			} else
 				VAR2 = FUN7 (VAR2, VAR7);
 		}

		FUN8 (VAR7);
	}
}