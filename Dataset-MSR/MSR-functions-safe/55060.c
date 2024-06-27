static VAR1 FUN1(
		struct VAR2 *VAR3, struct VAR2 *VAR4,
		char *VAR5, unsigned int VAR6,
		char *VAR7, unsigned int VAR8,
		unsigned char VAR9)
{
	struct VAR10 *VAR11 = VAR4->VAR12;
	struct VAR2 *VAR13, VAR14;
	unsigned int VAR15, VAR16, VAR17;
	uintmax_t VAR18 = 0;
	unsigned char VAR19[20];
	char VAR20[60];

	for (VAR15 = 0; VAR11 && VAR15 < VAR11->VAR21; VAR15++) {
		VAR13 = VAR11->VAR22[VAR15];
		VAR16 = VAR6 + VAR13->VAR23->VAR24;
		VAR17 = VAR8;

		
		if (!VAR13->VAR25[1].VAR26 ||
		    VAR16 > 40 ||
		    VAR13->VAR23->VAR24 % 2)
			continue;

		
		memcpy(VAR5 + VAR6, VAR13->VAR23->VAR27,
		       VAR13->VAR23->VAR24);
		if (VAR17)
			VAR7[VAR17++] = '';
		memcpy(VAR7 + VAR17, VAR13->VAR23->VAR27,
		       VAR13->VAR23->VAR24);
		VAR17 += VAR13->VAR23->VAR24;
		VAR7[VAR17] = '';

		if (VAR16 == 40 && !FUN2(VAR5, VAR19)) {
			
			if (VAR9 == 0xff) {
				
				VAR18++;
				continue;
			}
			FUN3(VAR5, VAR9, VAR20);
			if (!strcmp(VAR7, VAR20)) {
				
				VAR18++;
				continue;
			}

			
			if (!FUN4(VAR3, VAR7, &VAR14, 0))
				FUN5("", VAR7);
			FUN6(VAR3, VAR20,
				VAR14.VAR25[1].VAR19,
				VAR14.VAR25[1].VAR26,
				VAR14.VAR12);
		} else if (FUN7(VAR13->VAR25[1].VAR26)) {
			
			if (!VAR13->VAR12)
				FUN8(VAR13);
			VAR18 += FUN1(VAR3, VAR13,
				VAR5, VAR16,
				VAR7, VAR17, VAR9);
		}

		
		VAR11 = VAR4->VAR12;
	}
	return VAR18;
}