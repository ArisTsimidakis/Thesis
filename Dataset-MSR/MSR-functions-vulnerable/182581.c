static long FUN1(struct VAR1 *VAR2,
			     struct VAR1 **VAR3,
			     unsigned long VAR4, unsigned long VAR5)
 {
 	struct VAR6 *VAR6 = VAR2->VAR7;
 


 #ifdef VAR8
 	if (!VAR6) {

		*VAR3 = VAR2;
 		FUN2(VAR2, VAR4, VAR5);
 		return 0;
 	}
 
 	if (FUN3(VAR6->VAR9)) {

		*VAR3 = VAR2;
 		FUN4(VAR2, VAR4, VAR5,
 					VAR6->VAR9);
 		return 0;
	}
#else
	if (!VAR6)
		return -VAR10;
#endif

	if (FUN5(FUN6(VAR6))) {
		
 		return 0;
 	}
 

	*VAR3 = VAR2;
 	VAR4 = ((VAR4 - VAR2->VAR11) >> VAR12) + VAR2->VAR13;
 	if (VAR5 > VAR2->VAR14)
 		VAR5 = VAR2->VAR14;
	VAR5 = ((VAR5 - VAR2->VAR11) >> VAR12) + VAR2->VAR13;

	FUN7(VAR6->VAR9, VAR6, VAR4, VAR5 - VAR4);
	return 0;
}