FUN1(int VAR1, unsigned long VAR2,
			     void *VAR3, size_t VAR4,
			     struct VAR5 *VAR5,
			     unsigned long *VAR6,
			     struct VAR7 *VAR8)
{
	VAR9 *VAR10 = VAR3;
	unsigned int VAR11 = VAR4;
	enum ucode_state VAR12 = VAR13;
	unsigned int VAR14;
	struct VAR15 *VAR16;
	struct VAR17 *VAR18[VAR19];
 	unsigned int VAR20 = VAR5->VAR20;
 	int VAR21;
 

	while (VAR11) {


 		VAR16 = (struct VAR15 *)VAR10;
 
 		VAR14 = FUN2(VAR16);
		if (!VAR14 || VAR14 > VAR11 ||
			FUN3(VAR10, 0) < 0)
			break;

		VAR11 -= VAR14;

		
		if (FUN4(VAR16, VAR8->VAR22.VAR23) !=
			 VAR13) {
			VAR10 += VAR14;
			continue;
		}

		FUN5(VAR18, VAR10, &VAR20);

		VAR10 += VAR14;
	}

	if (VAR11) {
		VAR12 = VAR24;
		goto VAR25;
	}

	if (VAR20 == 0) {
		VAR12 = VAR26;
		goto VAR25;
	}

	for (VAR21 = 0; VAR21 < VAR20; VAR21++)
		VAR6[VAR21] = (unsigned long)VAR18[VAR21] - VAR2;

	VAR5->VAR20 = VAR20;
VAR25:
	return VAR12;
}