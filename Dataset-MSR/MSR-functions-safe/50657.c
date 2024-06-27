static int FUN1(struct VAR1 *VAR2,
			     struct VAR3 *VAR3,
			     enum VAR4 *VAR5, VAR6 *VAR7)
{
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;
	unsigned VAR12;
	int VAR13;

	
	FUN2(!FUN3(VAR3->VAR14[0], (VAR15)0)
		     && !FUN3(VAR3->VAR14[0], (VAR16)0));

	FUN4(!VAR5);
	FUN4(!VAR7);

	VAR13 = 0;
	*VAR7 = 0;

	
	*VAR5 = VAR17;
	if (VAR3->VAR18 & 0xf)
		
		*VAR5 = VAR19;
	else if (VAR3->VAR18 >> 4)
		
		*VAR5 = VAR20;

	
	VAR12 = VAR3->VAR21 & ~3;
	if (((VAR3->VAR18 & 0xf) == VAR22) ||
	    ((VAR3->VAR18 >> 4) == VAR22)) {
		VAR2->VAR23 = 1;
		VAR2->VAR24 = &VAR2->VAR25;

		VAR11 = (struct VAR10 *)(VAR3->VAR14
					       + VAR12);
		memcpy(VAR2->VAR24, VAR11, sizeof *VAR11);
		*VAR7 = FUN5(VAR11->VAR26);
	} else if (((VAR3->VAR18 & 0xf) == VAR27) ||
		   ((VAR3->VAR18 >> 4) == VAR27)) {
		VAR9 = (struct VAR8 *)(VAR3->VAR14
						  + VAR12);

		VAR2->VAR23 = FUN5(VAR9->VAR28.VAR26) / sizeof *VAR11;

		if (VAR2->VAR23 >
		    (VAR3->VAR29 + VAR3->VAR30)) {
			FUN6(""
			       "",
			       VAR3->VAR29,
			       VAR3->VAR30,
			       FUN5(VAR9->VAR28.VAR26),
			       sizeof(*VAR11));
			VAR2->VAR23 = 0;
			VAR13 = -VAR31;
			goto VAR32;
		}

		if (VAR2->VAR23 == 1)
			VAR2->VAR24 = &VAR2->VAR25;
		else {
			VAR2->VAR24 =
				FUN7(VAR2->VAR23 * sizeof *VAR11, VAR33);
			if (!VAR2->VAR24) {
				VAR2->VAR23 = 0;
				VAR13 = -VAR34;
				goto VAR32;
			}
		}

		VAR11 = VAR9->VAR35;
		memcpy(VAR2->VAR24, VAR11, VAR2->VAR23 * sizeof *VAR11);
		*VAR7 = FUN5(VAR9->VAR26);
	}
VAR32:
	return VAR13;
}