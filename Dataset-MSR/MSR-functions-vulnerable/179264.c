static bool FUN1(struct VAR1 *VAR2, int VAR3,




 				struct VAR4 *VAR5)
 {
 	
	if ((VAR5->VAR6 == 1) && (VAR5->VAR7[0].VAR8 == 1)) {
		u32 VAR9 = VAR5->VAR7[0].VAR10;
		if (VAR3 == VAR11) {
			kuid_t VAR12 = FUN2(VAR2->VAR13, VAR9);
			if (FUN3(VAR12, FUN4()))
				return true;
		}
		else if (VAR3 == VAR14) {
			kgid_t VAR15 = FUN5(VAR2->VAR13, VAR9);
			if (FUN6(VAR15, FUN7()))
				return true;
		}
	}

	
	if (!FUN8(VAR3))
		return true;
 
 	

	if (FUN9(VAR2->VAR13, VAR3))




 		return true;
 
 	return false;
}