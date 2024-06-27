static bool FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3,
		    struct VAR4 *VAR5)
{
	if (!(VAR2->VAR6 & VAR7))
		
		return true;

	if (memcmp(VAR2, VAR3, FUN2(struct VAR1, VAR6)) == 0)
		return true;

	if (VAR2->VAR8 == VAR9)
		
		return true;
	if (VAR3->VAR8 == VAR9)
		return false;
	switch (VAR2->VAR8) {
	case VAR10:
		if (VAR3->VAR8 == VAR10) {
			
 			return FUN3(VAR2, VAR3) &&
 			       FUN4(VAR2->VAR11, VAR3->VAR11);
 		} else {

			

			return VAR2->VAR12 == 0 &&

			       VAR2->VAR13 == VAR14 &&

			       VAR2->VAR15 == VAR16 &&

			       VAR2->VAR17 == VAR18 &&

			       FUN5(VAR2->VAR11);


 		}
 	case VAR19:
 		
		return memcmp(VAR2, VAR3, FUN2(struct VAR1, VAR20)) == 0 &&
		       FUN3(VAR2, VAR3) &&
		       FUN4(VAR2->VAR11, VAR3->VAR11);
	case VAR21:
		
		if (VAR3->VAR8 != VAR21)
			return false;
		if (memcmp(VAR2, VAR3, FUN2(struct VAR1, VAR20)))
			return false;
		
		return FUN6(VAR2->VAR20, VAR3->VAR20, VAR5);
	case VAR22:
	case VAR23:
		if (VAR3->VAR8 != VAR2->VAR8)
			return false;
		
		if (VAR2->VAR24 > VAR3->VAR24)
			return false;
		
		if (VAR2->VAR25 != VAR3->VAR25)
			return false;
		
		if (VAR2->VAR20 && !FUN6(VAR2->VAR20, VAR3->VAR20, VAR5))
			return false;
		
		return FUN3(VAR2, VAR3) &&
		       FUN4(VAR2->VAR11, VAR3->VAR11);
	case VAR26:
	case VAR27:
	case VAR28:
	case VAR29:
		
	default:
		
		return false;
	}

	
	FUN7(1);
	return false;
}