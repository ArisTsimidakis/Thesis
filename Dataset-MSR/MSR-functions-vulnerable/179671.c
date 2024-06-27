int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, int VAR7)
{
	int VAR8, VAR9, VAR10;

	if (VAR2->VAR11) {
		if (VAR7 == VAR12) {
			void VAR13 *VAR14;
			VAR14 = (void __user VAR15 *) VAR2->VAR16;
			VAR10 = FUN2(VAR14, VAR2->VAR11,
						  VAR6);
 			if (VAR10 < 0)
 				return VAR10;
 		}

		VAR2->VAR16 = VAR6;




 	} else {
 		VAR2->VAR16 = NULL;
 	}

	VAR8 = VAR2->VAR17 * sizeof(struct VAR3);
	if (FUN3(VAR4, (void __user VAR15 *) VAR2->VAR18, VAR8))
		return -VAR19;

	VAR2->VAR18 = VAR4;
	VAR10 = 0;

	for (VAR9 = 0; VAR9 < VAR2->VAR17; VAR9++) {
		size_t VAR20 = VAR4[VAR9].VAR21;

		if (VAR20 > VAR22 - VAR10) {
			VAR20 = VAR22 - VAR10;
			VAR4[VAR9].VAR21 = VAR20;
		}
		VAR10 += VAR20;
	}

	return VAR10;
}