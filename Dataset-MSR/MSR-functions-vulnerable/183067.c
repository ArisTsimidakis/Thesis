static bool FUN1(const struct VAR1 *VAR1, 
				struct VAR2 *VAR3, int VAR4,
				struct VAR5 *VAR6)
{
	
	if ((VAR6->VAR7 == 1) && (VAR6->VAR8[0].VAR9 == 1)) {
 		u32 VAR10 = VAR6->VAR8[0].VAR11;
 		if (VAR4 == VAR12) {
 			kuid_t VAR13 = FUN2(VAR3->VAR14, VAR10);

			if (FUN3(VAR13, FUN4()))


 				return true;
 		}
 		else if (VAR4 == VAR15) {
 			kgid_t VAR16 = FUN5(VAR3->VAR14, VAR10);

			if (FUN6(VAR16, FUN7()))


 				return true;
 		}
 	}

	
	if (!FUN8(VAR4))
		return true;

	
	if (FUN9(VAR3->VAR14, VAR4) &&
	    FUN10(VAR1, VAR3->VAR14, VAR4))
		return true;

	return false;
}