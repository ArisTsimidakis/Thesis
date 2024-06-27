static VAR1 FUN1(struct VAR2 *VAR3,
			       struct VAR4 *VAR5,
			       struct VAR6 *VAR7, loff_t VAR8)
{
	struct VAR9 *VAR10 = FUN2(VAR5->VAR11);
	unsigned VAR12 = VAR8 & (VAR13 - 1);
	size_t VAR14 = 0;
	int VAR15;

	VAR3->VAR16.VAR17 = 1;
	VAR3->VAR18[0].VAR12 = VAR12;

	do {
		size_t VAR19;
		struct VAR20 *VAR20;
		pgoff_t VAR21 = VAR8 >> VAR22;
		size_t VAR23 = FUN3(VAR24, VAR13 - VAR12,
				     FUN4(VAR7));

		VAR23 = FUN3(VAR24, VAR23, VAR10->VAR25 - VAR14);

 VAR26:
		VAR15 = -VAR27;
		if (FUN5(VAR7, VAR23))
			break;

		VAR15 = -VAR28;
		VAR20 = FUN6(VAR5, VAR21, 0);
		if (!VAR20)
			break;

		if (FUN7(VAR5))
			FUN8(VAR20);

 		VAR19 = FUN9(VAR20, VAR7, VAR12, VAR23);
 		FUN8(VAR20);
 


 		if (!VAR19) {
 			FUN10(VAR20);
 			FUN11(VAR20);
			VAR23 = FUN12(VAR23, FUN13(VAR7));
			goto VAR26;
		}

		VAR15 = 0;
		VAR3->VAR29[VAR3->VAR30] = VAR20;
 		VAR3->VAR18[VAR3->VAR30].VAR31 = VAR19;
 		VAR3->VAR30++;
 

		FUN14(VAR7, VAR19);
 		VAR14 += VAR19;
 		VAR8 += VAR19;
 		VAR12 += VAR19;
		if (VAR12 == VAR13)
			VAR12 = 0;

		if (!VAR10->VAR32)
			break;
	} while (FUN4(VAR7) && VAR14 < VAR10->VAR25 &&
		 VAR3->VAR30 < VAR3->VAR33 && VAR12 == 0);

	return VAR14 > 0 ? VAR14 : VAR15;
}