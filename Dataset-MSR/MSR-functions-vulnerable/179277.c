static ssize_t VAR1
(struct VAR2 *VAR2, char VAR3 *VAR4, size_t VAR5, VAR6 *VAR7)
{
	int VAR8, VAR9;
	int VAR10 = 0;
	struct VAR11 *VAR12 = VAR2->VAR13;


	VAR8 = FUN1(&VAR12->VAR14); 
	if (VAR8 < 0)
		return -VAR15;

	VAR9 = FUN2(VAR12->VAR16);
	if (VAR9 == 0) {
		VAR12->read = 0;
VAR17:
		if (FUN3(VAR18, &VAR12->VAR19)) {
 			VAR8 = -VAR20;
 			goto VAR21;
 		}










 		VAR10++;
 		if (VAR2->VAR22 & VAR23) {
 			if (!FUN3(VAR24, &VAR12->VAR19)) {
				VAR8 = VAR9 ? VAR9 : -VAR25;
				goto VAR21;
			}
			VAR8 = 0;
		} else {
			VAR8 = FUN4(VAR12->VAR26,
				FUN3(VAR24, &VAR12->VAR19));
		}

		
		if (FUN3(VAR18, &VAR12->VAR19)) {
			VAR8 = -VAR20;
			goto VAR21;
		}
		if (FUN3(VAR27, &VAR12->VAR19)) {
			VAR8 = -VAR28;
			goto VAR21;
		}
		FUN5(FUN6(VAR12->VAR29));
		if (VAR8 < 0) {
			VAR8 = -VAR15;
			goto VAR21;
		}

		FUN7(&VAR12->VAR30);

		if (VAR12->VAR31) { 
			VAR12->VAR31 = 0;
			FUN8(&VAR12->VAR30);
			VAR8 = -VAR28;
			goto VAR21;
		}
		
		if (!FUN3(VAR24, &VAR12->VAR19)) { 
 			FUN8(&VAR12->VAR30);
 			goto VAR17;
 		}


 		if (!VAR12->VAR32) { 
 			FUN9(&VAR12->VAR29->VAR33, "", VAR34);
 			FUN10(VAR24, &VAR12->VAR19);
			FUN8(&VAR12->VAR30);
			goto VAR17;
		}
		VAR9 = VAR12->VAR16;
		FUN8(&VAR12->VAR30);
	}

	if (VAR9 > VAR5)
		VAR9 = VAR5;
	VAR8 = FUN11(VAR4, VAR12->VAR35, VAR9);
	if (VAR8 > 0) {
		VAR8 = -VAR36;
		goto VAR21;
	}

	FUN7(&VAR12->VAR30);

	for (VAR10 = 0; VAR10 < VAR12->VAR16 - VAR9; VAR10++)
		VAR12->VAR35[VAR10] = VAR12->VAR35[VAR10 + VAR9];

	VAR12->VAR16 -= VAR9;
	
	if (!VAR12->VAR16)
		FUN10(VAR24, &VAR12->VAR19);

	FUN8(&VAR12->VAR30);

	VAR8 = VAR9;

VAR21:
	FUN12(&VAR12->VAR14);
	return VAR8;
}