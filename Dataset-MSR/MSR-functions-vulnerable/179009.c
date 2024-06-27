static void FUN1(struct VAR1 *VAR2, u64 VAR3,

			       int VAR4, struct VAR5 *VAR6,


 			       struct VAR7 *VAR8)
 {
 	struct VAR9 *VAR10 = &VAR2->VAR11;

	FUN2(VAR3, &VAR2->VAR12);

	if (!VAR8)
		return;

	if (!FUN3(VAR2))
 		return;
 
 	if (VAR3 == 1 && VAR10->VAR13 == 1 && !VAR2->VAR14.VAR15)

		return FUN4(VAR2, 1, VAR4, VAR6, VAR8);


 
 	if (FUN5(VAR3, &VAR10->VAR16))
 		return;
 

	FUN4(VAR2, 0, VAR4, VAR6, VAR8);


 }