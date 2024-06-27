FUN1(struct VAR1 *VAR2, const void **VAR3, size_t VAR4,
    size_t VAR5)
{
	struct VAR6 *VAR7 = (struct VAR6 *)VAR2->VAR8->VAR9;
	ssize_t VAR10;

 	if (VAR7->VAR11 == VAR12 && VAR7->VAR13 == (unsigned long)-1) {
 		
 

		

		*VAR3 = FUN2(VAR2, 1, &VAR10);


 		if (VAR10 <= 0) {
 			FUN3(&VAR2->VAR14,
 			    VAR15,
			    "");
			return (VAR16);
		}
		if ((VAR17)VAR10 >
		    VAR7->VAR18)
			VAR10 = (VAR19)
			    VAR7->VAR18;
		if ((VAR17)VAR10 > VAR4)
			VAR10 = (VAR19)VAR4;

		VAR7->VAR20 = VAR10;
	} else if (VAR7->VAR21 == NULL) {
		
		FUN3(&(VAR2->VAR14),
		    VAR22, "");
		return (VAR16);
	} else {
		
		if (VAR5 > VAR7->VAR18) {
			
			if (FUN4(VAR2, VAR5) < 0)
				return (VAR16);
		}
		if (VAR4 > VAR7->VAR18)
			VAR10 = (VAR19)
			    VAR7->VAR18;
		else
			VAR10 = (VAR19)VAR4;
		*VAR3 = VAR7->VAR21;
		VAR7->VAR21 += VAR10;
	}
	VAR7->VAR18 -= VAR10;
	return (VAR10);
}