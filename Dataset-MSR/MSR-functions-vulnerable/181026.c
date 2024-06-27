FUN1(VAR1 *VAR2,
           register const VAR3 *VAR4, register u_int VAR5, const VAR3 *VAR6)
 {

	register const VAR3 *VAR7;
 	register const struct VAR8 *VAR8 = (const struct VAR8 *)VAR4;
 

	VAR7 = (const VAR3 *)VAR2->VAR9;

	if (VAR4 >= VAR7)

		return;
 #ifdef VAR10			
 	FUN2(VAR8->VAR11);
 #endif
 


 	switch (FUN3(VAR8->VAR12)) {
 	case 2:
 		if (!VAR2->VAR13) {
			FUN4((VAR2, "",
			          FUN3(VAR8->VAR12),
			          FUN5(VAR14,"",FUN6(VAR8->VAR12)),
			          VAR5));
			return;
		} else {
			FUN4((VAR2, "",
			          FUN3(VAR8->VAR12),
			          VAR5,
			          FUN5(VAR14,"",FUN6(VAR8->VAR12))));
			FUN7(VAR2, VAR4, VAR5, VAR6);
		}
		break;
	default:
		FUN4((VAR2, "",
		          FUN3(VAR8->VAR12),
		          VAR5));
 		break;
 	}
 	return;








 }