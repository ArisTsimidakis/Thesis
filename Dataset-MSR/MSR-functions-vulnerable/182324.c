static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	int VAR7 = 16 - VAR8;
	int VAR9, VAR10 = 0;

	if (VAR4->VAR11.VAR12 == 8) {
		if (VAR2->VAR13 + VAR2->VAR14 > VAR4->VAR2.VAR13 +
 		    VAR4->VAR2.VAR14 || VAR2->VAR13 < VAR4->VAR2.VAR13)
 			return -VAR15;
 

		VAR6 = FUN2(sizeof(*VAR6) * VAR2->VAR14, VAR16);




 		if (!VAR6)
 			return -VAR17;
 
		for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++) {
			VAR6[VAR9].VAR18   = VAR2->VAR18[VAR9]   >> VAR7;
			VAR6[VAR9].VAR19 = VAR2->VAR19[VAR9] >> VAR7;
			VAR6[VAR9].VAR20  = VAR2->VAR20[VAR9]  >> VAR7;
			VAR6[VAR9].VAR21   = 0;
		}
		VAR10 = FUN3(VAR6, VAR2->VAR14, VAR2->VAR13, VAR4);
		FUN4(VAR6);
	} else {
		
		for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++) {
			VAR10 |= FUN5(VAR2->VAR13 + VAR9, VAR2->VAR18[VAR9],
						VAR2->VAR19[VAR9], VAR2->VAR20[VAR9],
						0, VAR4);
		}
	}
	return VAR10;
}