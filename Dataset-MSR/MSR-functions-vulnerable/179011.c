static void FUN1(struct VAR1 *VAR2, u64 VAR3,

				    int VAR4, struct VAR5 *VAR6,


 				    struct VAR7 *VAR8)
 {
 	struct VAR9 *VAR10 = &VAR2->VAR11;
	int VAR12 = 0;

	VAR6->VAR13 = VAR2->VAR11.VAR14;
	if (!VAR3)
		VAR3 = FUN2(VAR2);

	if (VAR10->VAR15 == VAR16)
 		return;
 
 	for (; VAR3; VAR3--) {

		if (FUN3(VAR2, VAR4, VAR12,


 					    VAR6, VAR8)) {
 			
			break;
		}
		VAR12 = 1;
	}
 }