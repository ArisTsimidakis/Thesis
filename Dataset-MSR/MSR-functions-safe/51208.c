FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
    struct VAR4 **VAR5)
{
	struct VAR4 *VAR6;
	struct {
		struct VAR4	*VAR7;
		struct VAR4	**VAR8;
	}	VAR9;
	int64_t VAR10;
	int VAR11;

	VAR6 = FUN2(VAR3);
	if (VAR6 != NULL) {
		*VAR5 = VAR6;
		return (VAR12);
	}

	for (;;) {
		struct VAR4 *VAR13, *VAR14;

		*VAR5 = VAR6 = FUN3(VAR3);
		if (VAR6 == NULL) {
			
			if (VAR3->VAR15.VAR7 != NULL && 
			    VAR3->VAR16 != NULL &&
			    VAR3->VAR16->VAR17)
				
				FUN4(VAR3, VAR3->VAR16);
			while ((VAR13 = FUN5(VAR3)) != NULL) {
				
				while ((VAR14 = FUN6(VAR13)) != NULL)
					FUN4(VAR3, VAR14);
			}
			if (VAR3->VAR18.VAR7 != NULL)
				return (FUN1(VAR2, VAR3, VAR5));
			return (VAR19);
		}

		if (VAR6->VAR20) {
			struct VAR4 *VAR21 = NULL;
			int VAR22 = 0;

			
			while ((VAR13 = FUN5(VAR3))
			    != VAR21) {
				if (VAR21 == NULL)
					VAR21 = VAR13;
				if (VAR13->VAR23 == VAR6->VAR20) {
					VAR13->VAR24->VAR25--;
					VAR13->VAR24 = VAR6->VAR24;
					VAR13->VAR13 = 0;
					if (VAR13->VAR24->VAR26) {
						VAR22 = 1;
						VAR13->VAR26 = 1;
						if (FUN7(VAR13) < 0)
							goto VAR27;
						
						while ((VAR14 = FUN6(
						    VAR13)) != NULL)
							if (FUN7(VAR14)
							    < 0)
								goto VAR27;
						break;
					}
					
					*VAR5 = VAR6 = VAR13;
					
					while ((VAR14 = FUN6(
					    VAR6)) != NULL)
						FUN4(
						    VAR3, VAR14);
					break;
				} else
					FUN8(VAR3, VAR13);
			}
			if (VAR22) {
				
				continue;
			}
		} else if ((VAR6->VAR28 & VAR29) == VAR30) {
			int VAR31;

			
			VAR31 = FUN9(VAR2, VAR6);
			if (VAR31 != VAR12)
				return (VAR31);

			
			if (VAR6->VAR16) {
				
				if (VAR6->VAR17)
					continue;
				
			} else if (VAR6->VAR13) {
				
				FUN8(VAR3, VAR6);
				continue;
			} else if (VAR6->VAR26) {
				
				if (FUN7(VAR6) == 0)
					continue;
				
			}
		}
		break;
	}

	if ((VAR6->VAR28 & VAR29) != VAR32 || VAR6->VAR10 == -1)
		return (VAR12);

	VAR11 = 0;
	VAR10 = VAR6->VAR10;
	VAR3->VAR18.VAR7 = NULL;
	VAR3->VAR18.VAR8 = &(VAR3->VAR18.VAR7);
	VAR9.VAR7 = NULL;
	VAR9.VAR8 = &VAR9.VAR7;
	
	while (VAR3->VAR33.VAR34 > 0 &&
	    (VAR3->VAR33.VAR35[0]->VAR10 == -1 ||
	     VAR3->VAR33.VAR35[0]->VAR10 == VAR10)) {
		if (VAR6->VAR10 == -1) {
			
			VAR6->VAR36 = NULL;
			*VAR9.VAR8 = VAR6;
			VAR9.VAR8 = &(VAR6->VAR36);
		} else {
			VAR11++;
			FUN4(VAR3, VAR6);
		}
		VAR6 = FUN3(VAR3);
	}

	if (VAR11 == 0) {
		*VAR5 = VAR6;
		return ((VAR6 == NULL)?VAR19:VAR12);
	}
	if (VAR6->VAR10 == -1) {
		VAR6->VAR36 = NULL;
		*VAR9.VAR8 = VAR6;
		VAR9.VAR8 = &(VAR6->VAR36);
	} else {
		VAR11++;
		FUN4(VAR3, VAR6);
	}

	if (VAR11 > 1) {
		
		for (VAR6 = VAR3->VAR18.VAR7;
		    VAR6 != NULL; VAR6 = VAR6->VAR36)
			VAR6->VAR37 = VAR11;
	}
	
	if (VAR9.VAR7 != NULL) {
		*VAR3->VAR18.VAR8 = VAR9.VAR7;
		VAR3->VAR18.VAR8 = VAR9.VAR8;
	}
	*VAR5 = FUN2(VAR3);
	return ((*VAR5 == NULL)?VAR19:VAR12);

VAR27:
	FUN10(&VAR2->VAR38, VAR39,
	    ""
	    "",
	    (VAR40)VAR3->VAR41, (VAR40)VAR6->VAR20);
	return (VAR42);
}