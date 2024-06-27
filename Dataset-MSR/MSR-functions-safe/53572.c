FUN1(struct VAR1 *VAR2, const void **VAR3, size_t VAR4,
    size_t VAR5)
{
	struct VAR6 *VAR7 = (struct VAR6 *)VAR2->VAR8->VAR9;
	uint64_t VAR10 = 0;
	ssize_t VAR11;

	if (VAR7->VAR12 == 0) {
		if (VAR7->VAR13 > 0) {
			VAR11 = FUN2(VAR2, 0);
			if (VAR11 < 0)
				return (VAR11);
			return (FUN3(VAR2, VAR3, VAR4, VAR5));
		} else if (VAR7->VAR14 > 0) {
			
			VAR11 = FUN2(VAR2, 0);
			if (VAR11 < 0)
				return (VAR11);
			return (FUN3(VAR2, VAR3, VAR4, VAR5));
		}
	} else
		return (FUN3(VAR2, VAR3, VAR4, VAR5));

	
	if (VAR7->VAR15 == 0) {
		if (VAR7->VAR16) {
			
			FUN4(&(VAR2->VAR17),
			    VAR18, "");
			return (VAR19);
		}

		
		if (VAR7->VAR20 == 0 &&
		    (VAR7->VAR21.VAR22.VAR23[VAR7->VAR24->VAR25].VAR26
		     || VAR7->VAR20 != VAR7->VAR24->VAR25)) {
			VAR7->VAR20 = VAR7->VAR24->VAR25;
			VAR10 =
			    VAR7->VAR21.VAR22.VAR23[VAR7->VAR20].VAR26;
		}

		if (VAR7->VAR20 >= VAR7->VAR21.VAR22.VAR27) {
			
			*VAR3 = NULL;
			return (0);
		}
		VAR11 = FUN5(VAR2,
			&(VAR7->VAR21.VAR22.VAR23[VAR7->VAR20]), 0);
		if (VAR11 != VAR28)
			return (VAR19);

		VAR7->VAR20++;
	}

	
	VAR11 = FUN6(VAR2);
	if (VAR11 < 0)
		return (VAR11);

	
	VAR11 = FUN2(VAR2, 0);
	if (VAR11 < 0)
		return (VAR11);

	
	while (VAR10) {
		ssize_t VAR29;

		if (VAR7->VAR12 == 0) {
			if (VAR7->VAR13 > 0) {
				VAR11 = FUN2(VAR2, 0);
				if (VAR11 < 0)
					return (VAR11);
			} else if (VAR7->VAR14 > 0) {
				
				VAR11 = FUN2(VAR2, 0);
				if (VAR11 < 0)
					return (VAR11);
			} else {
				FUN4(&VAR2->VAR17,
				    VAR30,
				    "");
				return (VAR19);
			}
		}
		VAR29 = FUN3(
			VAR2, VAR3, (VAR31)VAR10, 0);
		if (VAR29 < 0)
			return (VAR29);
		VAR10 -= VAR29;
		if (VAR7->VAR32)
			FUN7(VAR2);
	}

	return (FUN3(VAR2, VAR3, VAR4, VAR5));
}