static bool FUN1(struct VAR1 *VAR2,
			      struct VAR3 *VAR4,
			      const struct VAR5 *VAR6)
{
	u64 VAR7;

	if (!FUN2(VAR2))
		return FUN3(VAR2, VAR4, VAR6);

	if (VAR6->VAR8 == 9 && VAR6->VAR9 == 13) {
		if (VAR6->VAR10 == 2) {
			
			if (FUN4(VAR2))
				return false;

			VAR7 = FUN5(VAR2, VAR11)
			      & VAR12;
		} else if (VAR6->VAR10 == 0) {
			
			if (FUN6(VAR2))
				return false;
 
 			VAR7 = VAR13;
 		} else {

			FUN7();


 		}












 	} else if (VAR6->VAR8 == 14 && (VAR6->VAR9 & 12) == 8) {
 		
 		if (FUN4(VAR2))
 			return false;
 
 		VAR7 = ((VAR6->VAR9 & 3) << 3) | (VAR6->VAR10 & 7);
 	} else {

		FUN7();


 	}
 
 	if (!FUN8(VAR2, VAR7))
		return false;

	if (VAR4->VAR14) {
		if (FUN9(VAR2))
			return false;

		FUN10(VAR2, VAR7, VAR4->VAR15);
	} else {
		VAR4->VAR15 = FUN11(VAR2, VAR7);
	}

	return true;
}