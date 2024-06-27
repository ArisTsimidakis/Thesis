static VAR1 *FUN1(VAR2 *VAR3) {
	struct VAR4 *VAR5 = (struct VAR4*)VAR3->VAR6->VAR7;
	VAR1 *VAR8 = FUN2 ((VAR9)free);
	int VAR10, VAR11, VAR12, VAR13;
	if (!VAR8 || !VAR5) {
		FUN3 (VAR8);
		return NULL;
	}
	if (VAR5->VAR14->VAR15 & VAR16) {
		VAR12 = FUN4 (VAR5);
		if (VAR12) {
			VAR13 = VAR12 *  sizeof (VAR17);
 			if (VAR13 < VAR12 || VAR13 > VAR18) {
 				goto VAR19;
 			}

			struct VAR20 *VAR21 = calloc (1, VAR12 * sizeof (VAR17));




 			if (VAR21) {
 				ut32 VAR22 = 0;
 				for (VAR10 = 0; VAR10 < VAR12 ; VAR22 += 4, VAR10++) {
					ut32 VAR23;
					if (VAR5->VAR14->VAR24 + VAR22 + 4 > VAR5->VAR25 ||
					    VAR5->VAR14->VAR24 + VAR22 + 4 < VAR22) {
						break;
					}
					VAR11 = FUN5 (VAR5->VAR26, VAR5->VAR14->VAR24 + VAR22,
								(VAR27 *)&VAR23, sizeof (VAR17));
					if (!FUN6 (VAR23) || VAR11 != sizeof (VAR17)) {
						break;
					}
					VAR21[VAR10].VAR28 = VAR23;
					VAR21[VAR10].VAR29 = VAR23 + VAR30;
				}
				VAR5->VAR12 = VAR12;
				VAR5->VAR21 = VAR21;
			}
		}
	}

	if (VAR5->VAR14->VAR31 > 0) {
		int VAR32 = VAR5->VAR14->VAR31; 

		VAR13 = VAR32 * sizeof (struct VAR20);
		if (VAR13 < VAR32 || VAR13 > VAR18) {
			goto VAR19;	
		}
		struct VAR20 *VAR33 = calloc (1, VAR13 + 1);
		if (!VAR33) {
			goto VAR19;
		}
		VAR13 = VAR32 * sizeof (VAR17);
		if (VAR13 < VAR32 || VAR13 > VAR18) {
			free (VAR33);
			goto VAR19;
		}
		VAR17 *VAR34 = calloc (1, VAR13 + 1);
		if (!VAR34) {
			free (VAR33);
			goto VAR19;
		}
		if (VAR5->VAR14->VAR35 + VAR13 > VAR5->VAR25 ||
		    VAR5->VAR14->VAR35 + VAR13 < VAR13) {
			free (VAR33);
			free (VAR34);
			goto VAR19;
		}
		VAR11 = FUN5 (VAR5->VAR26, VAR5->VAR14->VAR35,
				     (VAR27 *)VAR34, VAR13);
		if (VAR11 != VAR13) {
			free (VAR33);
			free (VAR34);
			goto VAR19;
		}
		for (VAR10 = 0; VAR10 < VAR5->VAR14->VAR31; VAR10++) {
			
			ut32 VAR36 =
				FUN7 (VAR34[VAR10]) +
				VAR30;

			if (VAR36 < VAR5->VAR14->VAR37 && VAR36 < VAR5->VAR25) {
				ut32 VAR38, VAR39;
				if (VAR36 + sizeof (VAR17) > VAR5->VAR25 ||
				    VAR36 + sizeof (VAR17) < VAR36) {
					free (VAR33);
					free (VAR34);
					goto VAR19;
				}
				VAR11 = FUN5 (VAR5->VAR26, VAR36,
						     (VAR27 *)&VAR38,
						     sizeof (VAR17));
				if (VAR11 != sizeof (VAR17)) {
					FUN8 ("");
					free (VAR33);
					free (VAR34);
					goto VAR19;
				}
				VAR39 = FUN7 (VAR38) + VAR30;
				VAR33[VAR10].VAR28 = VAR36;
				VAR33[VAR10].VAR29 = VAR39;
	
				VAR40 *VAR41 = FUN9 (VAR40);
				if (VAR41) {
					VAR41->VAR42 = VAR43;
					VAR41->VAR44 = VAR33[VAR10].VAR28;
					VAR41->VAR45 = VAR41->VAR44;
					FUN10 (VAR8, VAR41);
				}
			}
		}
		free (VAR34);
		VAR5->VAR33 = VAR33;
	}
	return VAR8;
VAR19:
	FUN3 (VAR8);
	return NULL;	
}